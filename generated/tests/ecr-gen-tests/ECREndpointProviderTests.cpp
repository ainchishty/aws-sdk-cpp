﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ecr/ECREndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSECREndpointProviderTests";
using ECREndpointProvider = Aws::ECR::Endpoint::ECREndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct ECREndpointProviderEndpointTestCase
{
    using OperationParamsFromTest = EndpointParameters;

    struct Expect
    {
        struct Endpoint
        {
            Aws::String url;
            ExpEpAuthScheme authScheme;
            ExpEpProps properties;
            ExpEpHeaders headers;
        } endpoint;
        Aws::String error;
    };
    struct OperationInput
    {
        Aws::String operationName;
        OperationParamsFromTest operationParams;
        OperationParamsFromTest builtinParams;
        OperationParamsFromTest clientParams;
    };

    Aws::String documentation;
    // Specification tells us it is Client Initialization parameters
    // At the same time, specification tells us to test EndpointProvider not the client itself
    // Hence params here will be set as a client params (just like a dedicated field above).
    Aws::Vector<Aws::Endpoint::EndpointParameter> params;
    Aws::Vector<Aws::String> tags;
    Expect expect;
    // Aws::Vector<OperationInput> operationInput;
};

class ECREndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<ECREndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<ECREndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<ECREndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<ECREndpointProviderEndpointTestCase>> ECREndpointProviderTests::TEST_CASES;
const size_t ECREndpointProviderTests::TEST_CASES_SZ = 98;

Aws::Vector<ECREndpointProviderEndpointTestCase> ECREndpointProviderTests::getTestCase() {

  Aws::Vector<ECREndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"For region af-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"For region af-south-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "af-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.af-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"For region ap-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"For region ap-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"For region ap-northeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"For region ap-northeast-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-northeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"For region ap-northeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-northeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"For region ap-northeast-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-northeast-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"For region ap-northeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-northeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"For region ap-northeast-3 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-3"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-northeast-3.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"For region ap-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"For region ap-south-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"For region ap-south-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-south-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"For region ap-south-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-south-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"For region ap-southeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"For region ap-southeast-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"For region ap-southeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"For region ap-southeast-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"For region ap-southeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"For region ap-southeast-3 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-3"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-3.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"For region ap-southeast-4 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-4"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-4.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"For region ap-southeast-4 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-4"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-4.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"For region ap-southeast-5 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-5"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-5.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"For region ap-southeast-5 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-5"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-5.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 24*/
  {"For region ap-southeast-7 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-7"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ap-southeast-7.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"For region ap-southeast-7 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-7"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ap-southeast-7.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"For region ca-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ca-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"For region ca-central-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ca-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"For region ca-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.ca-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"For region ca-west-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.ca-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"For region eu-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"For region eu-central-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 32*/
  {"For region eu-central-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-central-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"For region eu-central-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-central-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"For region eu-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-north-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"For region eu-north-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-north-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"For region eu-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"For region eu-south-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"For region eu-south-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-south-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"For region eu-south-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-south-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 40*/
  {"For region eu-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"For region eu-west-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"For region eu-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"For region eu-west-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"For region eu-west-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.eu-west-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"For region eu-west-3 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-3"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.eu-west-3.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 46*/
  {"For region il-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "il-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.il-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 47*/
  {"For region il-central-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "il-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.il-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 48*/
  {"For region me-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 49*/
  {"For region me-central-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 50*/
  {"For region me-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 51*/
  {"For region me-south-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 52*/
  {"For region sa-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "sa-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.sa-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 53*/
  {"For region sa-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "sa-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.sa-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 54*/
  {"For region us-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 55*/
  {"For region us-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 56*/
  {"For region us-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 57*/
  {"For region us-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 58*/
  {"For region us-east-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 59*/
  {"For region us-east-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"For region us-east-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"For region us-east-2 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"For region us-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 63*/
  {"For region us-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 64*/
  {"For region us-west-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"For region us-west-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"For region us-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"For region us-west-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"For region us-west-2 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"For region us-west-2 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 70*/
  {"For region cn-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 71*/
  {"For region cn-north-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 72*/
  {"For region cn-northwest-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"For region cn-northwest-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"For region cn-north-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 75*/
  {"For region cn-north-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 76*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 77*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 78*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 79*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"For region us-gov-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 81*/
  {"For region us-gov-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 82*/
  {"For region us-gov-west-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 83*/
  {"For region us-gov-west-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://ecr-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 84*/
  {"For region us-iso-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 85*/
  {"For region us-iso-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-iso-west-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"For region us-iso-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS and DualStack are enabled, but this partition does not support one or both"} // expect
  },
  /*TEST CASE 87*/
  {"For region us-iso-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 88*/
  {"For region us-iso-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"DualStack is enabled but this partition does not support DualStack"} // expect
  },
  /*TEST CASE 89*/
  {"For region us-isob-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"For region us-isob-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS and DualStack are enabled, but this partition does not support one or both"} // expect
  },
  /*TEST CASE 91*/
  {"For region us-isob-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://api.ecr-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"For region us-isob-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"DualStack is enabled but this partition does not support DualStack"} // expect
  },
  /*TEST CASE 93*/
  {"For custom endpoint with region set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 94*/
  {"For custom endpoint with region not set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 95*/
  {"For custom endpoint with fips enabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 96*/
  {"For custom endpoint with fips disabled and dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 97*/
  {"Missing region", // documentation
    {}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  }
  };
  return test_cases;
}

Aws::String RulesToSdkSignerName(const Aws::String& rulesSignerName)
{
    Aws::String sdkSigner = "NullSigner";
    if (rulesSignerName == "sigv4") {
        sdkSigner = "SignatureV4";
    } else if (rulesSignerName == "sigv4a") {
        sdkSigner = "AsymmetricSignatureV4";
    } else if (rulesSignerName == "none") {
        sdkSigner = "NullSigner";
    } else if (rulesSignerName == "bearer") {
        sdkSigner = "Bearer";
    } else if (rulesSignerName == "s3Express") {
        sdkSigner = "S3ExpressSigner";
    } else {
        sdkSigner = rulesSignerName;
    }

    return sdkSigner;
}

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const ECREndpointProviderEndpointTestCase::Expect& expect)
{
    if(!expect.error.empty())
    {
        ASSERT_FALSE(outcome.IsSuccess()) << "Expected failure with message:\n" << expect.error;
        ASSERT_EQ(outcome.GetError().GetMessage(), expect.error);
    }
    else
    {
        AWS_ASSERT_SUCCESS(outcome);
        ASSERT_EQ(outcome.GetResult().GetURL(), expect.endpoint.url);
        const auto expAuthSchemesIt = expect.endpoint.properties.find("authSchemes");
        if (expAuthSchemesIt != expect.endpoint.properties.end())
        {
            // in the list of AuthSchemes, select the one with a highest priority
            const Aws::Vector<Aws::String> priotityList = {"s3Express", "sigv4a", "sigv4", "bearer", "none", ""};
            const auto expectedAuthSchemePropsIt = std::find_first_of(expAuthSchemesIt->second.begin(), expAuthSchemesIt->second.end(),
                                                                    priotityList.begin(), priotityList.end(), [](const Aws::Vector<EpProp>& props, const Aws::String& expName)
                                                                    {
                                                                        const auto& propNameIt = std::find_if(props.begin(), props.end(), [](const EpProp& prop)
                                                                        {
                                                                            return prop.GetName() == "name";
                                                                        });
                                                                        assert(propNameIt != props.end());
                                                                        return propNameIt->GetStrValueNoCheck() == expName;
                                                                    });
            assert(expectedAuthSchemePropsIt != expAuthSchemesIt->second.end());

            const auto& endpointResultAttrs = outcome.GetResult().GetAttributes();
            ASSERT_TRUE(endpointResultAttrs) << "Expected non-empty EndpointAttributes (authSchemes)";
            for (const auto& expProperty : *expectedAuthSchemePropsIt)
            {
                if (expProperty.GetName() == "name") {
                    ASSERT_TRUE(!endpointResultAttrs->authScheme.GetName().empty());
                    ASSERT_EQ(RulesToSdkSignerName(expProperty.GetStrValueNoCheck()), endpointResultAttrs->authScheme.GetName());
                } else if (expProperty.GetName() == "signingName") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningName());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningName().value());
                } else if (expProperty.GetName() == "signingRegion") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegion());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegion().value());
                } else if (expProperty.GetName() == "signingRegionSet") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegionSet());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegionSet().value());
                } else if (expProperty.GetName() == "disableDoubleEncoding") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetDisableDoubleEncoding());
                    ASSERT_EQ(expProperty.GetBoolValueNoCheck(), endpointResultAttrs->authScheme.GetDisableDoubleEncoding().value());
                } else {
                    FAIL() << "Unsupported Auth type property " << expProperty.GetName() << ". Need to update test.";
                }
            }
        }

        EXPECT_EQ(expect.endpoint.headers.empty(), outcome.GetResult().GetHeaders().empty());
        for(const auto& expHeaderVec : expect.endpoint.headers)
        {
            const auto& retHeaderIt = outcome.GetResult().GetHeaders().find(expHeaderVec.first);
            ASSERT_TRUE(retHeaderIt != outcome.GetResult().GetHeaders().end());

            auto retHeaderVec = Aws::Utils::StringUtils::Split(retHeaderIt->second, ';');
            std::sort(retHeaderVec.begin(), retHeaderVec.end());

            auto expHeaderVecSorted = expHeaderVec.second;
            std::sort(expHeaderVecSorted.begin(), expHeaderVecSorted.end());

            ASSERT_EQ(expHeaderVecSorted, retHeaderVec);
        }
    }
}

TEST_P(ECREndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const ECREndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/ECREndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<ECREndpointProvider> endpointProvider = Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize ECREndpointProvider";

    EndpointParameters endpointParameters;
    for(const auto& param : TEST_CASE.params)
    {
        endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
    }
    auto resolvedEndpointOutcome = endpointProvider->ResolveEndpoint(endpointParameters);
    ValidateOutcome(resolvedEndpointOutcome, TEST_CASE.expect);

#if 0 // temporarily disabled
    for(const auto& operation : TEST_CASE.operationInput)
    {
        /*
         * Most specific to least specific value locations:
            staticContextParams
            contextParam
            clientContextParams
            Built-In Bindings
            Built-in binding default values
         */
        const Aws::Vector<std::reference_wrapper<const ECREndpointProviderEndpointTestCase::OperationParamsFromTest>>
                operationInputParams = {std::cref(operation.builtinParams), std::cref(operation.clientParams), std::cref(operation.operationParams)};

        for(const auto& paramSource : operationInputParams)
        {
            for(const auto& param : paramSource.get())
            {
                endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
            }
        }
        auto resolvedEndpointOutcomePerOperation = endpointProvider->ResolveEndpoint(endpointParameters);
        ValidateOutcome(resolvedEndpointOutcomePerOperation, TEST_CASE.expect);
    }
#endif
}

INSTANTIATE_TEST_SUITE_P(EndpointTestsFromModel,
                         ECREndpointProviderTests,
                         ::testing::Range((size_t) 0u, ECREndpointProviderTests::TEST_CASES_SZ));

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOrganizationConfigRuleDetailedStatusResult::GetOrganizationConfigRuleDetailedStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOrganizationConfigRuleDetailedStatusResult& GetOrganizationConfigRuleDetailedStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConfigRuleDetailedStatus"))
  {
    Aws::Utils::Array<JsonView> organizationConfigRuleDetailedStatusJsonList = jsonValue.GetArray("OrganizationConfigRuleDetailedStatus");
    for(unsigned organizationConfigRuleDetailedStatusIndex = 0; organizationConfigRuleDetailedStatusIndex < organizationConfigRuleDetailedStatusJsonList.GetLength(); ++organizationConfigRuleDetailedStatusIndex)
    {
      m_organizationConfigRuleDetailedStatus.push_back(organizationConfigRuleDetailedStatusJsonList[organizationConfigRuleDetailedStatusIndex].AsObject());
    }
    m_organizationConfigRuleDetailedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/observabilityadmin/ObservabilityAdminEndpointRules.h>


namespace Aws
{
namespace ObservabilityAdmin
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ObservabilityAdminClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ObservabilityAdminClientConfiguration = Aws::Client::GenericClientConfiguration;
using ObservabilityAdminBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ObservabilityAdmin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ObservabilityAdminEndpointProviderBase =
    EndpointProviderBase<ObservabilityAdminClientConfiguration, ObservabilityAdminBuiltInParameters, ObservabilityAdminClientContextParameters>;

using ObservabilityAdminDefaultEpProviderBase =
    DefaultEndpointProvider<ObservabilityAdminClientConfiguration, ObservabilityAdminBuiltInParameters, ObservabilityAdminClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OBSERVABILITYADMIN_API ObservabilityAdminEndpointProvider : public ObservabilityAdminDefaultEpProviderBase
{
public:
    using ObservabilityAdminResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ObservabilityAdminEndpointProvider()
      : ObservabilityAdminDefaultEpProviderBase(Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::GetRulesBlob(), Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::RulesBlobSize)
    {}

    ~ObservabilityAdminEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ObservabilityAdmin
} // namespace Aws

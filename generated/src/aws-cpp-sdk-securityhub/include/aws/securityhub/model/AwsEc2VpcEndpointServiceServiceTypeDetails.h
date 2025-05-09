﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The service type information for a VPC endpoint service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcEndpointServiceServiceTypeDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcEndpointServiceServiceTypeDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceServiceTypeDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceServiceTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceServiceTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of service.</p>
     */
    inline const Aws::String& GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    template<typename ServiceTypeT = Aws::String>
    void SetServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::forward<ServiceTypeT>(value); }
    template<typename ServiceTypeT = Aws::String>
    AwsEc2VpcEndpointServiceServiceTypeDetails& WithServiceType(ServiceTypeT&& value) { SetServiceType(std::forward<ServiceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceType;
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

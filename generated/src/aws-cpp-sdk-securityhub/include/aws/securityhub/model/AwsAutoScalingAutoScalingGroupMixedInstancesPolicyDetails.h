﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails.h>
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
   * <p>The mixed instances policy for the automatic scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instances distribution. The instances distribution specifies the
     * distribution of On-Demand Instances and Spot Instances, the maximum price to pay
     * for Spot Instances, and how the Auto Scaling group allocates instance types to
     * fulfill On-Demand and Spot capacity.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& GetInstancesDistribution() const { return m_instancesDistribution; }
    inline bool InstancesDistributionHasBeenSet() const { return m_instancesDistributionHasBeenSet; }
    template<typename InstancesDistributionT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails>
    void SetInstancesDistribution(InstancesDistributionT&& value) { m_instancesDistributionHasBeenSet = true; m_instancesDistribution = std::forward<InstancesDistributionT>(value); }
    template<typename InstancesDistributionT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails>
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& WithInstancesDistribution(InstancesDistributionT&& value) { SetInstancesDistribution(std::forward<InstancesDistributionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template to use and the instance types (overrides) to use to
     * provision EC2 instances to fulfill On-Demand and Spot capacities.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails>
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}
  private:

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails m_instancesDistribution;
    bool m_instancesDistributionHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

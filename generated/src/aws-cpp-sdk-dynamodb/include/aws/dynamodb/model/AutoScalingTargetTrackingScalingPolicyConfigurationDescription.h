﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a target tracking scaling policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingTargetTrackingScalingPolicyConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AutoScalingTargetTrackingScalingPolicyConfigurationDescription
  {
  public:
    AWS_DYNAMODB_API AutoScalingTargetTrackingScalingPolicyConfigurationDescription() = default;
    AWS_DYNAMODB_API AutoScalingTargetTrackingScalingPolicyConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API AutoScalingTargetTrackingScalingPolicyConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether scale in by the target tracking policy is disabled. If the
     * value is true, scale in is disabled and the target tracking policy won't remove
     * capacity from the scalable resource. Otherwise, scale in is enabled and the
     * target tracking policy can remove capacity from the scalable resource. The
     * default value is false.</p>
     */
    inline bool GetDisableScaleIn() const { return m_disableScaleIn; }
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, after a scale in activity completes before
     * another scale in activity can start. The cooldown period is used to block
     * subsequent scale in requests until it has expired. You should scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale out policy during the cooldown period after a scale-in,
     * application auto scaling scales out your scalable target immediately. </p>
     */
    inline int GetScaleInCooldown() const { return m_scaleInCooldown; }
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, after a scale out activity completes before
     * another scale out activity can start. While the cooldown period is in effect,
     * the capacity that has been added by the previous scale out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. You should continuously (but not excessively) scale out.</p>
     */
    inline int GetScaleOutCooldown() const { return m_scaleOutCooldown; }
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target value for the metric. The range is 8.515920e-109 to 1.174271e+108
     * (Base 10) or 2e-360 to 2e360 (Base 2).</p>
     */
    inline double GetTargetValue() const { return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithTargetValue(double value) { SetTargetValue(value); return *this;}
    ///@}
  private:

    bool m_disableScaleIn{false};
    bool m_disableScaleInHasBeenSet = false;

    int m_scaleInCooldown{0};
    bool m_scaleInCooldownHasBeenSet = false;

    int m_scaleOutCooldown{0};
    bool m_scaleOutCooldownHasBeenSet = false;

    double m_targetValue{0.0};
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

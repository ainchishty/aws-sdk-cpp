﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AutoScalingTargetTrackingScalingPolicyConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

AutoScalingTargetTrackingScalingPolicyConfigurationDescription::AutoScalingTargetTrackingScalingPolicyConfigurationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoScalingTargetTrackingScalingPolicyConfigurationDescription& AutoScalingTargetTrackingScalingPolicyConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisableScaleIn"))
  {
    m_disableScaleIn = jsonValue.GetBool("DisableScaleIn");
    m_disableScaleInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScaleInCooldown"))
  {
    m_scaleInCooldown = jsonValue.GetInteger("ScaleInCooldown");
    m_scaleInCooldownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScaleOutCooldown"))
  {
    m_scaleOutCooldown = jsonValue.GetInteger("ScaleOutCooldown");
    m_scaleOutCooldownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");
    m_targetValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingTargetTrackingScalingPolicyConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_disableScaleInHasBeenSet)
  {
   payload.WithBool("DisableScaleIn", m_disableScaleIn);

  }

  if(m_scaleInCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleInCooldown", m_scaleInCooldown);

  }

  if(m_scaleOutCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleOutCooldown", m_scaleOutCooldown);

  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

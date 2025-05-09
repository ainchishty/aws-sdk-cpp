﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/AutoScalingGroupProviderUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

AutoScalingGroupProviderUpdate::AutoScalingGroupProviderUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoScalingGroupProviderUpdate& AutoScalingGroupProviderUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("managedScaling"))
  {
    m_managedScaling = jsonValue.GetObject("managedScaling");
    m_managedScalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedTerminationProtection"))
  {
    m_managedTerminationProtection = ManagedTerminationProtectionMapper::GetManagedTerminationProtectionForName(jsonValue.GetString("managedTerminationProtection"));
    m_managedTerminationProtectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedDraining"))
  {
    m_managedDraining = ManagedDrainingMapper::GetManagedDrainingForName(jsonValue.GetString("managedDraining"));
    m_managedDrainingHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingGroupProviderUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_managedScalingHasBeenSet)
  {
   payload.WithObject("managedScaling", m_managedScaling.Jsonize());

  }

  if(m_managedTerminationProtectionHasBeenSet)
  {
   payload.WithString("managedTerminationProtection", ManagedTerminationProtectionMapper::GetNameForManagedTerminationProtection(m_managedTerminationProtection));
  }

  if(m_managedDrainingHasBeenSet)
  {
   payload.WithString("managedDraining", ManagedDrainingMapper::GetNameForManagedDraining(m_managedDraining));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws

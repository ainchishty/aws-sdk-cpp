﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CloudWatchDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

CloudWatchDestination::CloudWatchDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudWatchDestination& CloudWatchDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionConfigurations"))
  {
    Aws::Utils::Array<JsonView> dimensionConfigurationsJsonList = jsonValue.GetArray("DimensionConfigurations");
    for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
    {
      m_dimensionConfigurations.push_back(dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject());
    }
    m_dimensionConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchDestination::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionConfigurationsJsonList(m_dimensionConfigurations.size());
   for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
   {
     dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject(m_dimensionConfigurations[dimensionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DimensionConfigurations", std::move(dimensionConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws

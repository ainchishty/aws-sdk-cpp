﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Bundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Bundle::Bundle(JsonView jsonValue)
{
  *this = jsonValue;
}

Bundle& Bundle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetDouble("price");
    m_priceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");
    m_cpuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("diskSizeInGb"))
  {
    m_diskSizeInGb = jsonValue.GetInteger("diskSizeInGb");
    m_diskSizeInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");
    m_bundleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");
    m_isActiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("power"))
  {
    m_power = jsonValue.GetInteger("power");
    m_powerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");
    m_ramSizeInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transferPerMonthInGb"))
  {
    m_transferPerMonthInGb = jsonValue.GetInteger("transferPerMonthInGb");
    m_transferPerMonthInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedPlatforms"))
  {
    Aws::Utils::Array<JsonView> supportedPlatformsJsonList = jsonValue.GetArray("supportedPlatforms");
    for(unsigned supportedPlatformsIndex = 0; supportedPlatformsIndex < supportedPlatformsJsonList.GetLength(); ++supportedPlatformsIndex)
    {
      m_supportedPlatforms.push_back(InstancePlatformMapper::GetInstancePlatformForName(supportedPlatformsJsonList[supportedPlatformsIndex].AsString()));
    }
    m_supportedPlatformsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedAppCategories"))
  {
    Aws::Utils::Array<JsonView> supportedAppCategoriesJsonList = jsonValue.GetArray("supportedAppCategories");
    for(unsigned supportedAppCategoriesIndex = 0; supportedAppCategoriesIndex < supportedAppCategoriesJsonList.GetLength(); ++supportedAppCategoriesIndex)
    {
      m_supportedAppCategories.push_back(AppCategoryMapper::GetAppCategoryForName(supportedAppCategoriesJsonList[supportedAppCategoriesIndex].AsString()));
    }
    m_supportedAppCategoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicIpv4AddressCount"))
  {
    m_publicIpv4AddressCount = jsonValue.GetInteger("publicIpv4AddressCount");
    m_publicIpv4AddressCountHasBeenSet = true;
  }
  return *this;
}

JsonValue Bundle::Jsonize() const
{
  JsonValue payload;

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("price", m_price);

  }

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_diskSizeInGbHasBeenSet)
  {
   payload.WithInteger("diskSizeInGb", m_diskSizeInGb);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_powerHasBeenSet)
  {
   payload.WithInteger("power", m_power);

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  if(m_transferPerMonthInGbHasBeenSet)
  {
   payload.WithInteger("transferPerMonthInGb", m_transferPerMonthInGb);

  }

  if(m_supportedPlatformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedPlatformsJsonList(m_supportedPlatforms.size());
   for(unsigned supportedPlatformsIndex = 0; supportedPlatformsIndex < supportedPlatformsJsonList.GetLength(); ++supportedPlatformsIndex)
   {
     supportedPlatformsJsonList[supportedPlatformsIndex].AsString(InstancePlatformMapper::GetNameForInstancePlatform(m_supportedPlatforms[supportedPlatformsIndex]));
   }
   payload.WithArray("supportedPlatforms", std::move(supportedPlatformsJsonList));

  }

  if(m_supportedAppCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedAppCategoriesJsonList(m_supportedAppCategories.size());
   for(unsigned supportedAppCategoriesIndex = 0; supportedAppCategoriesIndex < supportedAppCategoriesJsonList.GetLength(); ++supportedAppCategoriesIndex)
   {
     supportedAppCategoriesJsonList[supportedAppCategoriesIndex].AsString(AppCategoryMapper::GetNameForAppCategory(m_supportedAppCategories[supportedAppCategoriesIndex]));
   }
   payload.WithArray("supportedAppCategories", std::move(supportedAppCategoriesJsonList));

  }

  if(m_publicIpv4AddressCountHasBeenSet)
  {
   payload.WithInteger("publicIpv4AddressCount", m_publicIpv4AddressCount);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

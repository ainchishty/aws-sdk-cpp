﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BucketBundle.h>
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

BucketBundle::BucketBundle(JsonView jsonValue)
{
  *this = jsonValue;
}

BucketBundle& BucketBundle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");
    m_bundleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetDouble("price");
    m_priceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storagePerMonthInGb"))
  {
    m_storagePerMonthInGb = jsonValue.GetInteger("storagePerMonthInGb");
    m_storagePerMonthInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transferPerMonthInGb"))
  {
    m_transferPerMonthInGb = jsonValue.GetInteger("transferPerMonthInGb");
    m_transferPerMonthInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");
    m_isActiveHasBeenSet = true;
  }
  return *this;
}

JsonValue BucketBundle::Jsonize() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("price", m_price);

  }

  if(m_storagePerMonthInGbHasBeenSet)
  {
   payload.WithInteger("storagePerMonthInGb", m_storagePerMonthInGb);

  }

  if(m_transferPerMonthInGbHasBeenSet)
  {
   payload.WithInteger("transferPerMonthInGb", m_transferPerMonthInGb);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiCache.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

ApiCache::ApiCache(JsonView jsonValue)
{
  *this = jsonValue;
}

ApiCache& ApiCache::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetInt64("ttl");
    m_ttlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiCachingBehavior"))
  {
    m_apiCachingBehavior = ApiCachingBehaviorMapper::GetApiCachingBehaviorForName(jsonValue.GetString("apiCachingBehavior"));
    m_apiCachingBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transitEncryptionEnabled"))
  {
    m_transitEncryptionEnabled = jsonValue.GetBool("transitEncryptionEnabled");
    m_transitEncryptionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("atRestEncryptionEnabled"))
  {
    m_atRestEncryptionEnabled = jsonValue.GetBool("atRestEncryptionEnabled");
    m_atRestEncryptionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ApiCacheTypeMapper::GetApiCacheTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ApiCacheStatusMapper::GetApiCacheStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("healthMetricsConfig"))
  {
    m_healthMetricsConfig = CacheHealthMetricsConfigMapper::GetCacheHealthMetricsConfigForName(jsonValue.GetString("healthMetricsConfig"));
    m_healthMetricsConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiCache::Jsonize() const
{
  JsonValue payload;

  if(m_ttlHasBeenSet)
  {
   payload.WithInt64("ttl", m_ttl);

  }

  if(m_apiCachingBehaviorHasBeenSet)
  {
   payload.WithString("apiCachingBehavior", ApiCachingBehaviorMapper::GetNameForApiCachingBehavior(m_apiCachingBehavior));
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("transitEncryptionEnabled", m_transitEncryptionEnabled);

  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("atRestEncryptionEnabled", m_atRestEncryptionEnabled);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ApiCacheTypeMapper::GetNameForApiCacheType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ApiCacheStatusMapper::GetNameForApiCacheStatus(m_status));
  }

  if(m_healthMetricsConfigHasBeenSet)
  {
   payload.WithString("healthMetricsConfig", CacheHealthMetricsConfigMapper::GetNameForCacheHealthMetricsConfig(m_healthMetricsConfig));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws

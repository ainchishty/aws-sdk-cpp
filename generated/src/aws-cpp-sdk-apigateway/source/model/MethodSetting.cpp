﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/MethodSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

MethodSetting::MethodSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

MethodSetting& MethodSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricsEnabled"))
  {
    m_metricsEnabled = jsonValue.GetBool("metricsEnabled");
    m_metricsEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loggingLevel"))
  {
    m_loggingLevel = jsonValue.GetString("loggingLevel");
    m_loggingLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataTraceEnabled"))
  {
    m_dataTraceEnabled = jsonValue.GetBool("dataTraceEnabled");
    m_dataTraceEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throttlingBurstLimit"))
  {
    m_throttlingBurstLimit = jsonValue.GetInteger("throttlingBurstLimit");
    m_throttlingBurstLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throttlingRateLimit"))
  {
    m_throttlingRateLimit = jsonValue.GetDouble("throttlingRateLimit");
    m_throttlingRateLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cachingEnabled"))
  {
    m_cachingEnabled = jsonValue.GetBool("cachingEnabled");
    m_cachingEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheTtlInSeconds"))
  {
    m_cacheTtlInSeconds = jsonValue.GetInteger("cacheTtlInSeconds");
    m_cacheTtlInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheDataEncrypted"))
  {
    m_cacheDataEncrypted = jsonValue.GetBool("cacheDataEncrypted");
    m_cacheDataEncryptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requireAuthorizationForCacheControl"))
  {
    m_requireAuthorizationForCacheControl = jsonValue.GetBool("requireAuthorizationForCacheControl");
    m_requireAuthorizationForCacheControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unauthorizedCacheControlHeaderStrategy"))
  {
    m_unauthorizedCacheControlHeaderStrategy = UnauthorizedCacheControlHeaderStrategyMapper::GetUnauthorizedCacheControlHeaderStrategyForName(jsonValue.GetString("unauthorizedCacheControlHeaderStrategy"));
    m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue MethodSetting::Jsonize() const
{
  JsonValue payload;

  if(m_metricsEnabledHasBeenSet)
  {
   payload.WithBool("metricsEnabled", m_metricsEnabled);

  }

  if(m_loggingLevelHasBeenSet)
  {
   payload.WithString("loggingLevel", m_loggingLevel);

  }

  if(m_dataTraceEnabledHasBeenSet)
  {
   payload.WithBool("dataTraceEnabled", m_dataTraceEnabled);

  }

  if(m_throttlingBurstLimitHasBeenSet)
  {
   payload.WithInteger("throttlingBurstLimit", m_throttlingBurstLimit);

  }

  if(m_throttlingRateLimitHasBeenSet)
  {
   payload.WithDouble("throttlingRateLimit", m_throttlingRateLimit);

  }

  if(m_cachingEnabledHasBeenSet)
  {
   payload.WithBool("cachingEnabled", m_cachingEnabled);

  }

  if(m_cacheTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("cacheTtlInSeconds", m_cacheTtlInSeconds);

  }

  if(m_cacheDataEncryptedHasBeenSet)
  {
   payload.WithBool("cacheDataEncrypted", m_cacheDataEncrypted);

  }

  if(m_requireAuthorizationForCacheControlHasBeenSet)
  {
   payload.WithBool("requireAuthorizationForCacheControl", m_requireAuthorizationForCacheControl);

  }

  if(m_unauthorizedCacheControlHeaderStrategyHasBeenSet)
  {
   payload.WithString("unauthorizedCacheControlHeaderStrategy", UnauthorizedCacheControlHeaderStrategyMapper::GetNameForUnauthorizedCacheControlHeaderStrategy(m_unauthorizedCacheControlHeaderStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

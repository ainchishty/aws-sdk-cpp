﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ApplicationSettingsResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ApplicationSettingsResource::ApplicationSettingsResource(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationSettingsResource& ApplicationSettingsResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CampaignHook"))
  {
    m_campaignHook = jsonValue.GetObject("CampaignHook");
    m_campaignHookHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Limits"))
  {
    m_limits = jsonValue.GetObject("Limits");
    m_limitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");
    m_quietTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JourneyLimits"))
  {
    m_journeyLimits = jsonValue.GetObject("JourneyLimits");
    m_journeyLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSettingsResource::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_campaignHookHasBeenSet)
  {
   payload.WithObject("CampaignHook", m_campaignHook.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("Limits", m_limits.Jsonize());

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  if(m_journeyLimitsHasBeenSet)
  {
   payload.WithObject("JourneyLimits", m_journeyLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

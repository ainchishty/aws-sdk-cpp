﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelModeratedByAppInstanceUserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelModeratedByAppInstanceUserSummary::ChannelModeratedByAppInstanceUserSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelModeratedByAppInstanceUserSummary& ChannelModeratedByAppInstanceUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelSummary"))
  {
    m_channelSummary = jsonValue.GetObject("ChannelSummary");
    m_channelSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelModeratedByAppInstanceUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelSummaryHasBeenSet)
  {
   payload.WithObject("ChannelSummary", m_channelSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

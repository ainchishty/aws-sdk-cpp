﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMembershipSummary.h>
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

ChannelMembershipSummary::ChannelMembershipSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelMembershipSummary& ChannelMembershipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");
    m_memberHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelMembershipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("Member", m_member.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

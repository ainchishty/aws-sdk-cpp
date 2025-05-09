﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SendVoiceMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendVoiceMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_messageBodyHasBeenSet)
  {
   payload.WithString("MessageBody", m_messageBody);

  }

  if(m_messageBodyTextTypeHasBeenSet)
  {
   payload.WithString("MessageBodyTextType", VoiceMessageBodyTextTypeMapper::GetNameForVoiceMessageBodyTextType(m_messageBodyTextType));
  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_maxPricePerMinuteHasBeenSet)
  {
   payload.WithString("MaxPricePerMinute", m_maxPricePerMinute);

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithInteger("TimeToLive", m_timeToLive);

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  if(m_messageFeedbackEnabledHasBeenSet)
  {
   payload.WithBool("MessageFeedbackEnabled", m_messageFeedbackEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendVoiceMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SendVoiceMessage"));
  return headers;

}





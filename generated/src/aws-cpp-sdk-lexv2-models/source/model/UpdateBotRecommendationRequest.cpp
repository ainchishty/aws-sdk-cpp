﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateBotRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBotRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionSettingHasBeenSet)
  {
   payload.WithObject("encryptionSetting", m_encryptionSetting.Jsonize());

  }

  return payload.View().WriteReadable();
}





﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  return payload.View().WriteReadable();
}





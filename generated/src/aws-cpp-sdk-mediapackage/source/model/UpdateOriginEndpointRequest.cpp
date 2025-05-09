﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/UpdateOriginEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOriginEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizationHasBeenSet)
  {
   payload.WithObject("authorization", m_authorization.Jsonize());

  }

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_originationHasBeenSet)
  {
   payload.WithString("origination", OriginationMapper::GetNameForOrigination(m_origination));
  }

  if(m_startoverWindowSecondsHasBeenSet)
  {
   payload.WithInteger("startoverWindowSeconds", m_startoverWindowSeconds);

  }

  if(m_timeDelaySecondsHasBeenSet)
  {
   payload.WithInteger("timeDelaySeconds", m_timeDelaySeconds);

  }

  if(m_whitelistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whitelistJsonList(m_whitelist.size());
   for(unsigned whitelistIndex = 0; whitelistIndex < whitelistJsonList.GetLength(); ++whitelistIndex)
   {
     whitelistJsonList[whitelistIndex].AsString(m_whitelist[whitelistIndex]);
   }
   payload.WithArray("whitelist", std::move(whitelistJsonList));

  }

  return payload.View().WriteReadable();
}





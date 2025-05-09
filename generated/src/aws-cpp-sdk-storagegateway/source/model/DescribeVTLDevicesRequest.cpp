﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeVTLDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeVTLDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_vTLDeviceARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vTLDeviceARNsJsonList(m_vTLDeviceARNs.size());
   for(unsigned vTLDeviceARNsIndex = 0; vTLDeviceARNsIndex < vTLDeviceARNsJsonList.GetLength(); ++vTLDeviceARNsIndex)
   {
     vTLDeviceARNsJsonList[vTLDeviceARNsIndex].AsString(m_vTLDeviceARNs[vTLDeviceARNsIndex]);
   }
   payload.WithArray("VTLDeviceARNs", std::move(vTLDeviceARNsJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVTLDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeVTLDevices"));
  return headers;

}





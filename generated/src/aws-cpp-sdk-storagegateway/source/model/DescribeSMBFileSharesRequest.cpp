﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeSMBFileSharesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeSMBFileSharesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileShareARNListJsonList(m_fileShareARNList.size());
   for(unsigned fileShareARNListIndex = 0; fileShareARNListIndex < fileShareARNListJsonList.GetLength(); ++fileShareARNListIndex)
   {
     fileShareARNListJsonList[fileShareARNListIndex].AsString(m_fileShareARNList[fileShareARNListIndex]);
   }
   payload.WithArray("FileShareARNList", std::move(fileShareARNListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSMBFileSharesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeSMBFileShares"));
  return headers;

}





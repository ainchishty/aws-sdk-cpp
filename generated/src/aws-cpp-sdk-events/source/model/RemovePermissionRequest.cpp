﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/RemovePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RemovePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("StatementId", m_statementId);

  }

  if(m_removeAllPermissionsHasBeenSet)
  {
   payload.WithBool("RemoveAllPermissions", m_removeAllPermissions);

  }

  if(m_eventBusNameHasBeenSet)
  {
   payload.WithString("EventBusName", m_eventBusName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemovePermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.RemovePermission"));
  return headers;

}





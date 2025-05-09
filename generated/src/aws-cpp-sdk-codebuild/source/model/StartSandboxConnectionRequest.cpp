﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartSandboxConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSandboxConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sandboxIdHasBeenSet)
  {
   payload.WithString("sandboxId", m_sandboxId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSandboxConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.StartSandboxConnection"));
  return headers;

}





﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AssociateProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileArnsJsonList(m_profileArns.size());
   for(unsigned profileArnsIndex = 0; profileArnsIndex < profileArnsJsonList.GetLength(); ++profileArnsIndex)
   {
     profileArnsJsonList[profileArnsIndex].AsString(m_profileArns[profileArnsIndex]);
   }
   payload.WithArray("ProfileArns", std::move(profileArnsJsonList));

  }

  return payload.View().WriteReadable();
}





﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CreateQuantumTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQuantumTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_associationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
   for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
   {
     associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
   }
   payload.WithArray("associations", std::move(associationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_deviceParametersHasBeenSet)
  {
   payload.WithString("deviceParameters", m_deviceParameters);

  }

  if(m_jobTokenHasBeenSet)
  {
   payload.WithString("jobToken", m_jobToken);

  }

  if(m_outputS3BucketHasBeenSet)
  {
   payload.WithString("outputS3Bucket", m_outputS3Bucket);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("outputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_shotsHasBeenSet)
  {
   payload.WithInt64("shots", m_shots);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}





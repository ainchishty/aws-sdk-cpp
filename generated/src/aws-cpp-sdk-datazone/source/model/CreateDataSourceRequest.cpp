﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetFormsInputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetFormsInputJsonList(m_assetFormsInput.size());
   for(unsigned assetFormsInputIndex = 0; assetFormsInputIndex < assetFormsInputJsonList.GetLength(); ++assetFormsInputIndex)
   {
     assetFormsInputJsonList[assetFormsInputIndex].AsObject(m_assetFormsInput[assetFormsInputIndex].Jsonize());
   }
   payload.WithArray("assetFormsInput", std::move(assetFormsInputJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_connectionIdentifierHasBeenSet)
  {
   payload.WithString("connectionIdentifier", m_connectionIdentifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enableSettingHasBeenSet)
  {
   payload.WithString("enableSetting", EnableSettingMapper::GetNameForEnableSetting(m_enableSetting));
  }

  if(m_environmentIdentifierHasBeenSet)
  {
   payload.WithString("environmentIdentifier", m_environmentIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectIdentifierHasBeenSet)
  {
   payload.WithString("projectIdentifier", m_projectIdentifier);

  }

  if(m_publishOnImportHasBeenSet)
  {
   payload.WithBool("publishOnImport", m_publishOnImport);

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload.View().WriteReadable();
}





﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutSlotTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSlotTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enumerationValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enumerationValuesJsonList(m_enumerationValues.size());
   for(unsigned enumerationValuesIndex = 0; enumerationValuesIndex < enumerationValuesJsonList.GetLength(); ++enumerationValuesIndex)
   {
     enumerationValuesJsonList[enumerationValuesIndex].AsObject(m_enumerationValues[enumerationValuesIndex].Jsonize());
   }
   payload.WithArray("enumerationValues", std::move(enumerationValuesJsonList));

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_valueSelectionStrategyHasBeenSet)
  {
   payload.WithString("valueSelectionStrategy", SlotValueSelectionStrategyMapper::GetNameForSlotValueSelectionStrategy(m_valueSelectionStrategy));
  }

  if(m_createVersionHasBeenSet)
  {
   payload.WithBool("createVersion", m_createVersion);

  }

  if(m_parentSlotTypeSignatureHasBeenSet)
  {
   payload.WithString("parentSlotTypeSignature", m_parentSlotTypeSignature);

  }

  if(m_slotTypeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotTypeConfigurationsJsonList(m_slotTypeConfigurations.size());
   for(unsigned slotTypeConfigurationsIndex = 0; slotTypeConfigurationsIndex < slotTypeConfigurationsJsonList.GetLength(); ++slotTypeConfigurationsIndex)
   {
     slotTypeConfigurationsJsonList[slotTypeConfigurationsIndex].AsObject(m_slotTypeConfigurations[slotTypeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("slotTypeConfigurations", std::move(slotTypeConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}





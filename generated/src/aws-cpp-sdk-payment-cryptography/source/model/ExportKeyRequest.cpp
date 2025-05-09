﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExportKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyMaterialHasBeenSet)
  {
   payload.WithObject("KeyMaterial", m_keyMaterial.Jsonize());

  }

  if(m_exportKeyIdentifierHasBeenSet)
  {
   payload.WithString("ExportKeyIdentifier", m_exportKeyIdentifier);

  }

  if(m_exportAttributesHasBeenSet)
  {
   payload.WithObject("ExportAttributes", m_exportAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.ExportKey"));
  return headers;

}





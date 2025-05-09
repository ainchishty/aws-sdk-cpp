﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

DukptEncryptionAttributes::DukptEncryptionAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DukptEncryptionAttributes& DukptEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");
    m_keySerialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = DukptEncryptionModeMapper::GetDukptEncryptionModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptKeyDerivationType"))
  {
    m_dukptKeyDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptKeyDerivationType"));
    m_dukptKeyDerivationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptKeyVariant"))
  {
    m_dukptKeyVariant = DukptKeyVariantMapper::GetDukptKeyVariantForName(jsonValue.GetString("DukptKeyVariant"));
    m_dukptKeyVariantHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");
    m_initializationVectorHasBeenSet = true;
  }
  return *this;
}

JsonValue DukptEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", DukptEncryptionModeMapper::GetNameForDukptEncryptionMode(m_mode));
  }

  if(m_dukptKeyDerivationTypeHasBeenSet)
  {
   payload.WithString("DukptKeyDerivationType", DukptDerivationTypeMapper::GetNameForDukptDerivationType(m_dukptKeyDerivationType));
  }

  if(m_dukptKeyVariantHasBeenSet)
  {
   payload.WithString("DukptKeyVariant", DukptKeyVariantMapper::GetNameForDukptKeyVariant(m_dukptKeyVariant));
  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws

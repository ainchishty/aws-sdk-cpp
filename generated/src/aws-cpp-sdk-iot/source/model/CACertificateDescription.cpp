﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CACertificateDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CACertificateDescription::CACertificateDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

CACertificateDescription& CACertificateDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificateId"))
  {
    m_certificateId = jsonValue.GetString("certificateId");
    m_certificateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CACertificateStatusMapper::GetCACertificateStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificatePem"))
  {
    m_certificatePem = jsonValue.GetString("certificatePem");
    m_certificatePemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownedBy"))
  {
    m_ownedBy = jsonValue.GetString("ownedBy");
    m_ownedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoRegistrationStatus"))
  {
    m_autoRegistrationStatus = AutoRegistrationStatusMapper::GetAutoRegistrationStatusForName(jsonValue.GetString("autoRegistrationStatus"));
    m_autoRegistrationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerVersion"))
  {
    m_customerVersion = jsonValue.GetInteger("customerVersion");
    m_customerVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");
    m_generationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validity"))
  {
    m_validity = jsonValue.GetObject("validity");
    m_validityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificateMode"))
  {
    m_certificateMode = CertificateModeMapper::GetCertificateModeForName(jsonValue.GetString("certificateMode"));
    m_certificateModeHasBeenSet = true;
  }
  return *this;
}

JsonValue CACertificateDescription::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("certificateId", m_certificateId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CACertificateStatusMapper::GetNameForCACertificateStatus(m_status));
  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("certificatePem", m_certificatePem);

  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_autoRegistrationStatusHasBeenSet)
  {
   payload.WithString("autoRegistrationStatus", AutoRegistrationStatusMapper::GetNameForAutoRegistrationStatus(m_autoRegistrationStatus));
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_customerVersionHasBeenSet)
  {
   payload.WithInteger("customerVersion", m_customerVersion);

  }

  if(m_generationIdHasBeenSet)
  {
   payload.WithString("generationId", m_generationId);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithObject("validity", m_validity.Jsonize());

  }

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", CertificateModeMapper::GetNameForCertificateMode(m_certificateMode));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

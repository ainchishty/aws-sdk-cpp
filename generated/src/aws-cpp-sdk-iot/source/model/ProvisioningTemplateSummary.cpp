﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ProvisioningTemplateSummary.h>
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

ProvisioningTemplateSummary::ProvisioningTemplateSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisioningTemplateSummary& ProvisioningTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");
    m_templateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisioningTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("templateArn", m_templateArn);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TemplateTypeMapper::GetNameForTemplateType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

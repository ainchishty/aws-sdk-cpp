﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AppAuthorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

AppAuthorization::AppAuthorization(JsonView jsonValue)
{
  *this = jsonValue;
}

AppAuthorization& AppAuthorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appAuthorizationArn"))
  {
    m_appAuthorizationArn = jsonValue.GetString("appAuthorizationArn");
    m_appAuthorizationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appBundleArn"))
  {
    m_appBundleArn = jsonValue.GetString("appBundleArn");
    m_appBundleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("app"))
  {
    m_app = jsonValue.GetString("app");
    m_appHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tenant"))
  {
    m_tenant = jsonValue.GetObject("tenant");
    m_tenantHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AppAuthorizationStatusMapper::GetAppAuthorizationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("persona"))
  {
    m_persona = PersonaMapper::GetPersonaForName(jsonValue.GetString("persona"));
    m_personaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authUrl"))
  {
    m_authUrl = jsonValue.GetString("authUrl");
    m_authUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue AppAuthorization::Jsonize() const
{
  JsonValue payload;

  if(m_appAuthorizationArnHasBeenSet)
  {
   payload.WithString("appAuthorizationArn", m_appAuthorizationArn);

  }

  if(m_appBundleArnHasBeenSet)
  {
   payload.WithString("appBundleArn", m_appBundleArn);

  }

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantHasBeenSet)
  {
   payload.WithObject("tenant", m_tenant.Jsonize());

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AppAuthorizationStatusMapper::GetNameForAppAuthorizationStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_personaHasBeenSet)
  {
   payload.WithString("persona", PersonaMapper::GetNameForPersona(m_persona));
  }

  if(m_authUrlHasBeenSet)
  {
   payload.WithString("authUrl", m_authUrl);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws

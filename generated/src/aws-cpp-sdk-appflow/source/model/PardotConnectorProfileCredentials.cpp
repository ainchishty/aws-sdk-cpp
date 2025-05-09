﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PardotConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

PardotConnectorProfileCredentials::PardotConnectorProfileCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

PardotConnectorProfileCredentials& PardotConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuthRequest"))
  {
    m_oAuthRequest = jsonValue.GetObject("oAuthRequest");
    m_oAuthRequestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientCredentialsArn"))
  {
    m_clientCredentialsArn = jsonValue.GetString("clientCredentialsArn");
    m_clientCredentialsArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PardotConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("refreshToken", m_refreshToken);

  }

  if(m_oAuthRequestHasBeenSet)
  {
   payload.WithObject("oAuthRequest", m_oAuthRequest.Jsonize());

  }

  if(m_clientCredentialsArnHasBeenSet)
  {
   payload.WithString("clientCredentialsArn", m_clientCredentialsArn);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

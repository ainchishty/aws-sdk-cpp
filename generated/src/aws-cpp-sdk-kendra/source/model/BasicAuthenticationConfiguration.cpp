﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BasicAuthenticationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

BasicAuthenticationConfiguration::BasicAuthenticationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BasicAuthenticationConfiguration& BasicAuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetString("Credentials");
    m_credentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicAuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithString("Credentials", m_credentials);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

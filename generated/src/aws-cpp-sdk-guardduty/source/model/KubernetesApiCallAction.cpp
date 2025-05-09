﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesApiCallAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesApiCallAction::KubernetesApiCallAction(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesApiCallAction& KubernetesApiCallAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestUri"))
  {
    m_requestUri = jsonValue.GetString("requestUri");
    m_requestUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verb"))
  {
    m_verb = jsonValue.GetString("verb");
    m_verbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceIPs"))
  {
    Aws::Utils::Array<JsonView> sourceIPsJsonList = jsonValue.GetArray("sourceIPs");
    for(unsigned sourceIPsIndex = 0; sourceIPsIndex < sourceIPsJsonList.GetLength(); ++sourceIPsIndex)
    {
      m_sourceIps.push_back(sourceIPsJsonList[sourceIPsIndex].AsString());
    }
    m_sourceIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");
    m_remoteIpDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetInteger("statusCode");
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetString("parameters");
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subresource"))
  {
    m_subresource = jsonValue.GetString("subresource");
    m_subresourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");
    m_resourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesApiCallAction::Jsonize() const
{
  JsonValue payload;

  if(m_requestUriHasBeenSet)
  {
   payload.WithString("requestUri", m_requestUri);

  }

  if(m_verbHasBeenSet)
  {
   payload.WithString("verb", m_verb);

  }

  if(m_sourceIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceIPsJsonList(m_sourceIps.size());
   for(unsigned sourceIPsIndex = 0; sourceIPsIndex < sourceIPsJsonList.GetLength(); ++sourceIPsIndex)
   {
     sourceIPsJsonList[sourceIPsIndex].AsString(m_sourceIps[sourceIPsIndex]);
   }
   payload.WithArray("sourceIPs", std::move(sourceIPsJsonList));

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("statusCode", m_statusCode);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_subresourceHasBeenSet)
  {
   payload.WithString("subresource", m_subresource);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

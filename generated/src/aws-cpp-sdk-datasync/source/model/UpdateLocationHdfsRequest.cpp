﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationHdfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLocationHdfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_nameNodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nameNodesJsonList(m_nameNodes.size());
   for(unsigned nameNodesIndex = 0; nameNodesIndex < nameNodesJsonList.GetLength(); ++nameNodesIndex)
   {
     nameNodesJsonList[nameNodesIndex].AsObject(m_nameNodes[nameNodesIndex].Jsonize());
   }
   payload.WithArray("NameNodes", std::move(nameNodesJsonList));

  }

  if(m_blockSizeHasBeenSet)
  {
   payload.WithInteger("BlockSize", m_blockSize);

  }

  if(m_replicationFactorHasBeenSet)
  {
   payload.WithInteger("ReplicationFactor", m_replicationFactor);

  }

  if(m_kmsKeyProviderUriHasBeenSet)
  {
   payload.WithString("KmsKeyProviderUri", m_kmsKeyProviderUri);

  }

  if(m_qopConfigurationHasBeenSet)
  {
   payload.WithObject("QopConfiguration", m_qopConfiguration.Jsonize());

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", HdfsAuthenticationTypeMapper::GetNameForHdfsAuthenticationType(m_authenticationType));
  }

  if(m_simpleUserHasBeenSet)
  {
   payload.WithString("SimpleUser", m_simpleUser);

  }

  if(m_kerberosPrincipalHasBeenSet)
  {
   payload.WithString("KerberosPrincipal", m_kerberosPrincipal);

  }

  if(m_kerberosKeytabHasBeenSet)
  {
   payload.WithString("KerberosKeytab", HashingUtils::Base64Encode(m_kerberosKeytab));
  }

  if(m_kerberosKrb5ConfHasBeenSet)
  {
   payload.WithString("KerberosKrb5Conf", HashingUtils::Base64Encode(m_kerberosKrb5Conf));
  }

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLocationHdfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationHdfs"));
  return headers;

}





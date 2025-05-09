﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDomainContactPrivacyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_adminPrivacyHasBeenSet)
  {
   payload.WithBool("AdminPrivacy", m_adminPrivacy);

  }

  if(m_registrantPrivacyHasBeenSet)
  {
   payload.WithBool("RegistrantPrivacy", m_registrantPrivacy);

  }

  if(m_techPrivacyHasBeenSet)
  {
   payload.WithBool("TechPrivacy", m_techPrivacy);

  }

  if(m_billingPrivacyHasBeenSet)
  {
   payload.WithBool("BillingPrivacy", m_billingPrivacy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainContactPrivacyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateDomainContactPrivacy"));
  return headers;

}





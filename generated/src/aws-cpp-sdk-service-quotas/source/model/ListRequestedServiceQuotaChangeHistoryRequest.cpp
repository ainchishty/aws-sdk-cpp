﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRequestedServiceQuotaChangeHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RequestStatusMapper::GetNameForRequestStatus(m_status));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_quotaRequestedAtLevelHasBeenSet)
  {
   payload.WithString("QuotaRequestedAtLevel", AppliedLevelEnumMapper::GetNameForAppliedLevelEnum(m_quotaRequestedAtLevel));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRequestedServiceQuotaChangeHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.ListRequestedServiceQuotaChangeHistory"));
  return headers;

}





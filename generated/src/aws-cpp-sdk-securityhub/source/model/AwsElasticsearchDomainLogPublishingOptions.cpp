﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainLogPublishingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElasticsearchDomainLogPublishingOptions::AwsElasticsearchDomainLogPublishingOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsElasticsearchDomainLogPublishingOptions& AwsElasticsearchDomainLogPublishingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexSlowLogs"))
  {
    m_indexSlowLogs = jsonValue.GetObject("IndexSlowLogs");
    m_indexSlowLogsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchSlowLogs"))
  {
    m_searchSlowLogs = jsonValue.GetObject("SearchSlowLogs");
    m_searchSlowLogsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuditLogs"))
  {
    m_auditLogs = jsonValue.GetObject("AuditLogs");
    m_auditLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsElasticsearchDomainLogPublishingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_indexSlowLogsHasBeenSet)
  {
   payload.WithObject("IndexSlowLogs", m_indexSlowLogs.Jsonize());

  }

  if(m_searchSlowLogsHasBeenSet)
  {
   payload.WithObject("SearchSlowLogs", m_searchSlowLogs.Jsonize());

  }

  if(m_auditLogsHasBeenSet)
  {
   payload.WithObject("AuditLogs", m_auditLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

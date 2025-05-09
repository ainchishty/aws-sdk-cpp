﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationInstanceTaskLogsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationInstanceTaskLogsResult::DescribeReplicationInstanceTaskLogsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationInstanceTaskLogsResult& DescribeReplicationInstanceTaskLogsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");
    m_replicationInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationInstanceTaskLogs"))
  {
    Aws::Utils::Array<JsonView> replicationInstanceTaskLogsJsonList = jsonValue.GetArray("ReplicationInstanceTaskLogs");
    for(unsigned replicationInstanceTaskLogsIndex = 0; replicationInstanceTaskLogsIndex < replicationInstanceTaskLogsJsonList.GetLength(); ++replicationInstanceTaskLogsIndex)
    {
      m_replicationInstanceTaskLogs.push_back(replicationInstanceTaskLogsJsonList[replicationInstanceTaskLogsIndex].AsObject());
    }
    m_replicationInstanceTaskLogsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

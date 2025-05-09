﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/GetResourceSyncStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceSyncStatusResult::GetResourceSyncStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceSyncStatusResult& GetResourceSyncStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = jsonValue.GetObject("DesiredState");
    m_desiredStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestSuccessfulSync"))
  {
    m_latestSuccessfulSync = jsonValue.GetObject("LatestSuccessfulSync");
    m_latestSuccessfulSyncHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestSync"))
  {
    m_latestSync = jsonValue.GetObject("LatestSync");
    m_latestSyncHasBeenSet = true;
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

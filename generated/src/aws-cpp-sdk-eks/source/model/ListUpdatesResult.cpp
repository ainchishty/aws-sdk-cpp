﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListUpdatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUpdatesResult::ListUpdatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUpdatesResult& ListUpdatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("updateIds"))
  {
    Aws::Utils::Array<JsonView> updateIdsJsonList = jsonValue.GetArray("updateIds");
    for(unsigned updateIdsIndex = 0; updateIdsIndex < updateIdsJsonList.GetLength(); ++updateIdsIndex)
    {
      m_updateIds.push_back(updateIdsJsonList[updateIdsIndex].AsString());
    }
    m_updateIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/SyncResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SyncResourceResult::SyncResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SyncResourceResult& SyncResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionTaken"))
  {
    m_actionTaken = SyncActionMapper::GetSyncActionForName(jsonValue.GetString("actionTaken"));
    m_actionTakenHasBeenSet = true;
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

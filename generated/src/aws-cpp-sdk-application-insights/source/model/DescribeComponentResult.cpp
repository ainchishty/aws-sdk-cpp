﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeComponentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComponentResult::DescribeComponentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComponentResult& DescribeComponentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationComponent"))
  {
    m_applicationComponent = jsonValue.GetObject("ApplicationComponent");
    m_applicationComponentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceList"))
  {
    Aws::Utils::Array<JsonView> resourceListJsonList = jsonValue.GetArray("ResourceList");
    for(unsigned resourceListIndex = 0; resourceListIndex < resourceListJsonList.GetLength(); ++resourceListIndex)
    {
      m_resourceList.push_back(resourceListJsonList[resourceListIndex].AsString());
    }
    m_resourceListHasBeenSet = true;
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

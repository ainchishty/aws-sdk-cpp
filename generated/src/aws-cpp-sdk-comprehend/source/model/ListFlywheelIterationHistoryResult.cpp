﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListFlywheelIterationHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFlywheelIterationHistoryResult::ListFlywheelIterationHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFlywheelIterationHistoryResult& ListFlywheelIterationHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlywheelIterationPropertiesList"))
  {
    Aws::Utils::Array<JsonView> flywheelIterationPropertiesListJsonList = jsonValue.GetArray("FlywheelIterationPropertiesList");
    for(unsigned flywheelIterationPropertiesListIndex = 0; flywheelIterationPropertiesListIndex < flywheelIterationPropertiesListJsonList.GetLength(); ++flywheelIterationPropertiesListIndex)
    {
      m_flywheelIterationPropertiesList.push_back(flywheelIterationPropertiesListJsonList[flywheelIterationPropertiesListIndex].AsObject());
    }
    m_flywheelIterationPropertiesListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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

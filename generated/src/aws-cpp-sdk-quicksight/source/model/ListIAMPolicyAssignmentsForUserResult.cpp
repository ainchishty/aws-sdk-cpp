﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIAMPolicyAssignmentsForUserResult::ListIAMPolicyAssignmentsForUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIAMPolicyAssignmentsForUserResult& ListIAMPolicyAssignmentsForUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ActiveAssignments"))
  {
    Aws::Utils::Array<JsonView> activeAssignmentsJsonList = jsonValue.GetArray("ActiveAssignments");
    for(unsigned activeAssignmentsIndex = 0; activeAssignmentsIndex < activeAssignmentsJsonList.GetLength(); ++activeAssignmentsIndex)
    {
      m_activeAssignments.push_back(activeAssignmentsJsonList[activeAssignmentsIndex].AsObject());
    }
    m_activeAssignmentsHasBeenSet = true;
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


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}

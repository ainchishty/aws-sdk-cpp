﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListDeploymentGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentGroupsResult::ListDeploymentGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeploymentGroupsResult& ListDeploymentGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentGroups"))
  {
    Aws::Utils::Array<JsonView> deploymentGroupsJsonList = jsonValue.GetArray("deploymentGroups");
    for(unsigned deploymentGroupsIndex = 0; deploymentGroupsIndex < deploymentGroupsJsonList.GetLength(); ++deploymentGroupsIndex)
    {
      m_deploymentGroups.push_back(deploymentGroupsJsonList[deploymentGroupsIndex].AsString());
    }
    m_deploymentGroupsHasBeenSet = true;
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

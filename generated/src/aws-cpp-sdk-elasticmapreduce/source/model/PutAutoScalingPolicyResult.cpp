﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PutAutoScalingPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAutoScalingPolicyResult::PutAutoScalingPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutAutoScalingPolicyResult& PutAutoScalingPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");
    m_clusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroupId"))
  {
    m_instanceGroupId = jsonValue.GetString("InstanceGroupId");
    m_instanceGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoScalingPolicy"))
  {
    m_autoScalingPolicy = jsonValue.GetObject("AutoScalingPolicy");
    m_autoScalingPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
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

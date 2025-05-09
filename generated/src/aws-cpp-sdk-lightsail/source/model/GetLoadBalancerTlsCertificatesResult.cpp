﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetLoadBalancerTlsCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLoadBalancerTlsCertificatesResult::GetLoadBalancerTlsCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLoadBalancerTlsCertificatesResult& GetLoadBalancerTlsCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tlsCertificates"))
  {
    Aws::Utils::Array<JsonView> tlsCertificatesJsonList = jsonValue.GetArray("tlsCertificates");
    for(unsigned tlsCertificatesIndex = 0; tlsCertificatesIndex < tlsCertificatesJsonList.GetLength(); ++tlsCertificatesIndex)
    {
      m_tlsCertificates.push_back(tlsCertificatesJsonList[tlsCertificatesIndex].AsObject());
    }
    m_tlsCertificatesHasBeenSet = true;
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

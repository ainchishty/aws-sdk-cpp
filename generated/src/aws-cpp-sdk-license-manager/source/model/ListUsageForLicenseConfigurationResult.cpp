﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListUsageForLicenseConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUsageForLicenseConfigurationResult::ListUsageForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUsageForLicenseConfigurationResult& ListUsageForLicenseConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConfigurationUsageList"))
  {
    Aws::Utils::Array<JsonView> licenseConfigurationUsageListJsonList = jsonValue.GetArray("LicenseConfigurationUsageList");
    for(unsigned licenseConfigurationUsageListIndex = 0; licenseConfigurationUsageListIndex < licenseConfigurationUsageListJsonList.GetLength(); ++licenseConfigurationUsageListIndex)
    {
      m_licenseConfigurationUsageList.push_back(licenseConfigurationUsageListJsonList[licenseConfigurationUsageListIndex].AsObject());
    }
    m_licenseConfigurationUsageListHasBeenSet = true;
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

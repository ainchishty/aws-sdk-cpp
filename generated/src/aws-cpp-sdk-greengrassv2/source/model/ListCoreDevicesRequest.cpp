﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListCoreDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListCoreDevicesRequest::SerializePayload() const
{
  return {};
}

void ListCoreDevicesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_thingGroupArnHasBeenSet)
    {
      ss << m_thingGroupArn;
      uri.AddQueryStringParameter("thingGroupArn", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << CoreDeviceStatusMapper::GetNameForCoreDeviceStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_runtimeHasBeenSet)
    {
      ss << m_runtime;
      uri.AddQueryStringParameter("runtime", ss.str());
      ss.str("");
    }

}




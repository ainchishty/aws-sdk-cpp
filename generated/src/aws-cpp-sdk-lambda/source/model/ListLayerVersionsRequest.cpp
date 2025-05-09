﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/ListLayerVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListLayerVersionsRequest::SerializePayload() const
{
  return {};
}

void ListLayerVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_compatibleRuntimeHasBeenSet)
    {
      ss << RuntimeMapper::GetNameForRuntime(m_compatibleRuntime);
      uri.AddQueryStringParameter("CompatibleRuntime", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("Marker", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("MaxItems", ss.str());
      ss.str("");
    }

    if(m_compatibleArchitectureHasBeenSet)
    {
      ss << ArchitectureMapper::GetNameForArchitecture(m_compatibleArchitecture);
      uri.AddQueryStringParameter("CompatibleArchitecture", ss.str());
      ss.str("");
    }

}




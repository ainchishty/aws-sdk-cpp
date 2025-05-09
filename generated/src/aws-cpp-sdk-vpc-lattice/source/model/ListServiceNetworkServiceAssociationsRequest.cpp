﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListServiceNetworkServiceAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListServiceNetworkServiceAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_serviceIdentifierHasBeenSet)
    {
      ss << m_serviceIdentifier;
      uri.AddQueryStringParameter("serviceIdentifier", ss.str());
      ss.str("");
    }

    if(m_serviceNetworkIdentifierHasBeenSet)
    {
      ss << m_serviceNetworkIdentifier;
      uri.AddQueryStringParameter("serviceNetworkIdentifier", ss.str());
      ss.str("");
    }

}




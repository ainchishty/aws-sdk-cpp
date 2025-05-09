﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/OmitsNullSerializesEmptyStringRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String OmitsNullSerializesEmptyStringRequest::SerializePayload() const
{
  return {};
}

void OmitsNullSerializesEmptyStringRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nullValueHasBeenSet)
    {
      ss << m_nullValue;
      uri.AddQueryStringParameter("Null", ss.str());
      ss.str("");
    }

    if(m_emptyStringHasBeenSet)
    {
      ss << m_emptyString;
      uri.AddQueryStringParameter("Empty", ss.str());
      ss.str("");
    }

}




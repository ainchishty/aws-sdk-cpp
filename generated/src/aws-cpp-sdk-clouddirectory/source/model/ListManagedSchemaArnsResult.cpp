﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListManagedSchemaArnsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedSchemaArnsResult::ListManagedSchemaArnsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedSchemaArnsResult& ListManagedSchemaArnsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaArns"))
  {
    Aws::Utils::Array<JsonView> schemaArnsJsonList = jsonValue.GetArray("SchemaArns");
    for(unsigned schemaArnsIndex = 0; schemaArnsIndex < schemaArnsJsonList.GetLength(); ++schemaArnsIndex)
    {
      m_schemaArns.push_back(schemaArnsJsonList[schemaArnsIndex].AsString());
    }
    m_schemaArnsHasBeenSet = true;
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

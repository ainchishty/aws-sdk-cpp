﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartTestSetGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartTestSetGenerationResult::StartTestSetGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartTestSetGenerationResult& StartTestSetGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSetGenerationId"))
  {
    m_testSetGenerationId = jsonValue.GetString("testSetGenerationId");
    m_testSetGenerationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetGenerationStatus"))
  {
    m_testSetGenerationStatus = TestSetGenerationStatusMapper::GetTestSetGenerationStatusForName(jsonValue.GetString("testSetGenerationStatus"));
    m_testSetGenerationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetName"))
  {
    m_testSetName = jsonValue.GetString("testSetName");
    m_testSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("storageLocation");
    m_storageLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generationDataSource"))
  {
    m_generationDataSource = jsonValue.GetObject("generationDataSource");
    m_generationDataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetTags"))
  {
    Aws::Map<Aws::String, JsonView> testSetTagsJsonMap = jsonValue.GetObject("testSetTags").GetAllObjects();
    for(auto& testSetTagsItem : testSetTagsJsonMap)
    {
      m_testSetTags[testSetTagsItem.first] = testSetTagsItem.second.AsString();
    }
    m_testSetTagsHasBeenSet = true;
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

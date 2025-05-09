﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CostEstimationResourceCollectionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

CostEstimationResourceCollectionFilter::CostEstimationResourceCollectionFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CostEstimationResourceCollectionFilter& CostEstimationResourceCollectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudFormation"))
  {
    m_cloudFormation = jsonValue.GetObject("CloudFormation");
    m_cloudFormationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue CostEstimationResourceCollectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_cloudFormationHasBeenSet)
  {
   payload.WithObject("CloudFormation", m_cloudFormation.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

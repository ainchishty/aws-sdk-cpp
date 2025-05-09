﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeArtifactDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypeArtifactDetails::ActionTypeArtifactDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionTypeArtifactDetails& ActionTypeArtifactDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minimumCount"))
  {
    m_minimumCount = jsonValue.GetInteger("minimumCount");
    m_minimumCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumCount"))
  {
    m_maximumCount = jsonValue.GetInteger("maximumCount");
    m_maximumCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionTypeArtifactDetails::Jsonize() const
{
  JsonValue payload;

  if(m_minimumCountHasBeenSet)
  {
   payload.WithInteger("minimumCount", m_minimumCount);

  }

  if(m_maximumCountHasBeenSet)
  {
   payload.WithInteger("maximumCount", m_maximumCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

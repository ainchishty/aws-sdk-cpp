﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InstanceLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

InstanceLimits::InstanceLimits(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceLimits& InstanceLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCountLimits"))
  {
    m_instanceCountLimits = jsonValue.GetObject("InstanceCountLimits");
    m_instanceCountLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceLimits::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountLimitsHasBeenSet)
  {
   payload.WithObject("InstanceCountLimits", m_instanceCountLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

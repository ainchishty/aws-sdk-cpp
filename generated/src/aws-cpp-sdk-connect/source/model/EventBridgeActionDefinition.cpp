﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EventBridgeActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EventBridgeActionDefinition::EventBridgeActionDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

EventBridgeActionDefinition& EventBridgeActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue EventBridgeActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

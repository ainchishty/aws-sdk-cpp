﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/ListTargetsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

ListTargetsFilter::ListTargetsFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ListTargetsFilter& ListTargetsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ListTargetsFilterNameMapper::GetListTargetsFilterNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ListTargetsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ListTargetsFilterNameMapper::GetNameForListTargetsFilterName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

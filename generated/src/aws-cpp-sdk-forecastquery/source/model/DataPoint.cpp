﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/model/DataPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastQueryService
{
namespace Model
{

DataPoint::DataPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

DataPoint& DataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws

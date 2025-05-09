﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SummarizedCounter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SummarizedCounter::SummarizedCounter(JsonView jsonValue)
{
  *this = jsonValue;
}

SummarizedCounter& SummarizedCounter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");
    m_maxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Average"))
  {
    m_average = jsonValue.GetDouble("Average");
    m_averageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sum"))
  {
    m_sum = jsonValue.GetDouble("Sum");
    m_sumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("N"))
  {
    m_n = jsonValue.GetInteger("N");
    m_nHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue SummarizedCounter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("Average", m_average);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("Sum", m_sum);

  }

  if(m_nHasBeenSet)
  {
   payload.WithInteger("N", m_n);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws

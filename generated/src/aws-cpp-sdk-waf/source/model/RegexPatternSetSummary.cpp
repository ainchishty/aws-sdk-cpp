﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/RegexPatternSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

RegexPatternSetSummary::RegexPatternSetSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RegexPatternSetSummary& RegexPatternSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegexPatternSetId"))
  {
    m_regexPatternSetId = jsonValue.GetString("RegexPatternSetId");
    m_regexPatternSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue RegexPatternSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/SampledHTTPRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

SampledHTTPRequest::SampledHTTPRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

SampledHTTPRequest& SampledHTTPRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Request"))
  {
    m_request = jsonValue.GetObject("Request");
    m_requestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInt64("Weight");
    m_weightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleWithinRuleGroup"))
  {
    m_ruleWithinRuleGroup = jsonValue.GetString("RuleWithinRuleGroup");
    m_ruleWithinRuleGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue SampledHTTPRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload.WithObject("Request", m_request.Jsonize());

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInt64("Weight", m_weight);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_ruleWithinRuleGroupHasBeenSet)
  {
   payload.WithString("RuleWithinRuleGroup", m_ruleWithinRuleGroup);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationManagedRuleMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

OrganizationManagedRuleMetadata::OrganizationManagedRuleMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

OrganizationManagedRuleMetadata& OrganizationManagedRuleMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleIdentifier"))
  {
    m_ruleIdentifier = jsonValue.GetString("RuleIdentifier");
    m_ruleIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputParameters"))
  {
    m_inputParameters = jsonValue.GetString("InputParameters");
    m_inputParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumExecutionFrequency"))
  {
    m_maximumExecutionFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("MaximumExecutionFrequency"));
    m_maximumExecutionFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceTypesScope"))
  {
    Aws::Utils::Array<JsonView> resourceTypesScopeJsonList = jsonValue.GetArray("ResourceTypesScope");
    for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
    {
      m_resourceTypesScope.push_back(resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString());
    }
    m_resourceTypesScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceIdScope"))
  {
    m_resourceIdScope = jsonValue.GetString("ResourceIdScope");
    m_resourceIdScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TagKeyScope"))
  {
    m_tagKeyScope = jsonValue.GetString("TagKeyScope");
    m_tagKeyScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TagValueScope"))
  {
    m_tagValueScope = jsonValue.GetString("TagValueScope");
    m_tagValueScopeHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationManagedRuleMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ruleIdentifierHasBeenSet)
  {
   payload.WithString("RuleIdentifier", m_ruleIdentifier);

  }

  if(m_inputParametersHasBeenSet)
  {
   payload.WithString("InputParameters", m_inputParameters);

  }

  if(m_maximumExecutionFrequencyHasBeenSet)
  {
   payload.WithString("MaximumExecutionFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_maximumExecutionFrequency));
  }

  if(m_resourceTypesScopeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesScopeJsonList(m_resourceTypesScope.size());
   for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
   {
     resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString(m_resourceTypesScope[resourceTypesScopeIndex]);
   }
   payload.WithArray("ResourceTypesScope", std::move(resourceTypesScopeJsonList));

  }

  if(m_resourceIdScopeHasBeenSet)
  {
   payload.WithString("ResourceIdScope", m_resourceIdScope);

  }

  if(m_tagKeyScopeHasBeenSet)
  {
   payload.WithString("TagKeyScope", m_tagKeyScope);

  }

  if(m_tagValueScopeHasBeenSet)
  {
   payload.WithString("TagValueScope", m_tagValueScope);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

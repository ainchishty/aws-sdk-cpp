﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateIntegrationResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIntegrationResponseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHandlingStrategyHasBeenSet)
  {
   payload.WithString("contentHandlingStrategy", ContentHandlingStrategyMapper::GetNameForContentHandlingStrategy(m_contentHandlingStrategy));
  }

  if(m_integrationResponseKeyHasBeenSet)
  {
   payload.WithString("integrationResponseKey", m_integrationResponseKey);

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithString(responseParametersItem.first, responseParametersItem.second);
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_responseTemplatesHasBeenSet)
  {
   JsonValue responseTemplatesJsonMap;
   for(auto& responseTemplatesItem : m_responseTemplates)
   {
     responseTemplatesJsonMap.WithString(responseTemplatesItem.first, responseTemplatesItem.second);
   }
   payload.WithObject("responseTemplates", std::move(responseTemplatesJsonMap));

  }

  if(m_templateSelectionExpressionHasBeenSet)
  {
   payload.WithString("templateSelectionExpression", m_templateSelectionExpression);

  }

  return payload.View().WriteReadable();
}





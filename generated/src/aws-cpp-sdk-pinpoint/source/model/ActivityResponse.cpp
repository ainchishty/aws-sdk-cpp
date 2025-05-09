﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ActivityResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ActivityResponse::ActivityResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ActivityResponse& ActivityResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");
    m_campaignIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetString("End");
    m_endHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetString("Result");
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledStart"))
  {
    m_scheduledStart = jsonValue.GetString("ScheduledStart");
    m_scheduledStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetString("Start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessfulEndpointCount"))
  {
    m_successfulEndpointCount = jsonValue.GetInteger("SuccessfulEndpointCount");
    m_successfulEndpointCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimezonesCompletedCount"))
  {
    m_timezonesCompletedCount = jsonValue.GetInteger("TimezonesCompletedCount");
    m_timezonesCompletedCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimezonesTotalCount"))
  {
    m_timezonesTotalCount = jsonValue.GetInteger("TimezonesTotalCount");
    m_timezonesTotalCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalEndpointCount"))
  {
    m_totalEndpointCount = jsonValue.GetInteger("TotalEndpointCount");
    m_totalEndpointCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TreatmentId"))
  {
    m_treatmentId = jsonValue.GetString("TreatmentId");
    m_treatmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionMetrics"))
  {
    Aws::Map<Aws::String, JsonView> executionMetricsJsonMap = jsonValue.GetObject("ExecutionMetrics").GetAllObjects();
    for(auto& executionMetricsItem : executionMetricsJsonMap)
    {
      m_executionMetrics[executionMetricsItem.first] = executionMetricsItem.second.AsString();
    }
    m_executionMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue ActivityResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_endHasBeenSet)
  {
   payload.WithString("End", m_end);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("Result", m_result);

  }

  if(m_scheduledStartHasBeenSet)
  {
   payload.WithString("ScheduledStart", m_scheduledStart);

  }

  if(m_startHasBeenSet)
  {
   payload.WithString("Start", m_start);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_successfulEndpointCountHasBeenSet)
  {
   payload.WithInteger("SuccessfulEndpointCount", m_successfulEndpointCount);

  }

  if(m_timezonesCompletedCountHasBeenSet)
  {
   payload.WithInteger("TimezonesCompletedCount", m_timezonesCompletedCount);

  }

  if(m_timezonesTotalCountHasBeenSet)
  {
   payload.WithInteger("TimezonesTotalCount", m_timezonesTotalCount);

  }

  if(m_totalEndpointCountHasBeenSet)
  {
   payload.WithInteger("TotalEndpointCount", m_totalEndpointCount);

  }

  if(m_treatmentIdHasBeenSet)
  {
   payload.WithString("TreatmentId", m_treatmentId);

  }

  if(m_executionMetricsHasBeenSet)
  {
   JsonValue executionMetricsJsonMap;
   for(auto& executionMetricsItem : m_executionMetrics)
   {
     executionMetricsJsonMap.WithString(executionMetricsItem.first, executionMetricsItem.second);
   }
   payload.WithObject("ExecutionMetrics", std::move(executionMetricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

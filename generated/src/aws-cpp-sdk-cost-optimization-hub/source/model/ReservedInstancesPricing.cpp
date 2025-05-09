﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ReservedInstancesPricing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

ReservedInstancesPricing::ReservedInstancesPricing(JsonView jsonValue)
{
  *this = jsonValue;
}

ReservedInstancesPricing& ReservedInstancesPricing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedOnDemandCost"))
  {
    m_estimatedOnDemandCost = jsonValue.GetDouble("estimatedOnDemandCost");
    m_estimatedOnDemandCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyReservationEligibleCost"))
  {
    m_monthlyReservationEligibleCost = jsonValue.GetDouble("monthlyReservationEligibleCost");
    m_monthlyReservationEligibleCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsPercentage"))
  {
    m_savingsPercentage = jsonValue.GetDouble("savingsPercentage");
    m_savingsPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedMonthlyAmortizedReservationCost"))
  {
    m_estimatedMonthlyAmortizedReservationCost = jsonValue.GetDouble("estimatedMonthlyAmortizedReservationCost");
    m_estimatedMonthlyAmortizedReservationCostHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservedInstancesPricing::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedOnDemandCostHasBeenSet)
  {
   payload.WithDouble("estimatedOnDemandCost", m_estimatedOnDemandCost);

  }

  if(m_monthlyReservationEligibleCostHasBeenSet)
  {
   payload.WithDouble("monthlyReservationEligibleCost", m_monthlyReservationEligibleCost);

  }

  if(m_savingsPercentageHasBeenSet)
  {
   payload.WithDouble("savingsPercentage", m_savingsPercentage);

  }

  if(m_estimatedMonthlyAmortizedReservationCostHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlyAmortizedReservationCost", m_estimatedMonthlyAmortizedReservationCost);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws

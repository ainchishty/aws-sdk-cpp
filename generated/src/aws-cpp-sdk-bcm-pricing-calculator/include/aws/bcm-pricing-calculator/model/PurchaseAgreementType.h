﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{
  enum class PurchaseAgreementType
  {
    NOT_SET,
    SAVINGS_PLANS,
    RESERVED_INSTANCE
  };

namespace PurchaseAgreementTypeMapper
{
AWS_BCMPRICINGCALCULATOR_API PurchaseAgreementType GetPurchaseAgreementTypeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForPurchaseAgreementType(PurchaseAgreementType value);
} // namespace PurchaseAgreementTypeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws

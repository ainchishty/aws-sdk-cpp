﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information on sensors that have shorter date range.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/SensorsWithShortDateRange">AWS
   * API Reference</a></p>
   */
  class SensorsWithShortDateRange
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API SensorsWithShortDateRange() = default;
    AWS_LOOKOUTEQUIPMENT_API SensorsWithShortDateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API SensorsWithShortDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the number of sensors that have less than 14 days of data. </p>
     */
    inline int GetAffectedSensorCount() const { return m_affectedSensorCount; }
    inline bool AffectedSensorCountHasBeenSet() const { return m_affectedSensorCountHasBeenSet; }
    inline void SetAffectedSensorCount(int value) { m_affectedSensorCountHasBeenSet = true; m_affectedSensorCount = value; }
    inline SensorsWithShortDateRange& WithAffectedSensorCount(int value) { SetAffectedSensorCount(value); return *this;}
    ///@}
  private:

    int m_affectedSensorCount{0};
    bool m_affectedSensorCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

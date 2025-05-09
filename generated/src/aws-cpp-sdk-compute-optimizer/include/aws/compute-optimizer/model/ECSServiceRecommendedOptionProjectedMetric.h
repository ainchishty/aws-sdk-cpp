﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ECSServiceProjectedMetric.h>
#include <utility>

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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the projected metrics of an Amazon ECS service recommendation
   * option. </p> <p>To determine the performance difference between your current
   * Amazon ECS service and the recommended option, compare the metric data of your
   * service against its projected metric data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceRecommendedOptionProjectedMetric">AWS
   * API Reference</a></p>
   */
  class ECSServiceRecommendedOptionProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendedOptionProjectedMetric() = default;
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendedOptionProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendedOptionProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The recommended CPU size for the Amazon ECS service. </p>
     */
    inline int GetRecommendedCpuUnits() const { return m_recommendedCpuUnits; }
    inline bool RecommendedCpuUnitsHasBeenSet() const { return m_recommendedCpuUnitsHasBeenSet; }
    inline void SetRecommendedCpuUnits(int value) { m_recommendedCpuUnitsHasBeenSet = true; m_recommendedCpuUnits = value; }
    inline ECSServiceRecommendedOptionProjectedMetric& WithRecommendedCpuUnits(int value) { SetRecommendedCpuUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended memory size for the Amazon ECS service. </p>
     */
    inline int GetRecommendedMemorySize() const { return m_recommendedMemorySize; }
    inline bool RecommendedMemorySizeHasBeenSet() const { return m_recommendedMemorySizeHasBeenSet; }
    inline void SetRecommendedMemorySize(int value) { m_recommendedMemorySizeHasBeenSet = true; m_recommendedMemorySize = value; }
    inline ECSServiceRecommendedOptionProjectedMetric& WithRecommendedMemorySize(int value) { SetRecommendedMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the projected metric. </p>
     */
    inline const Aws::Vector<ECSServiceProjectedMetric>& GetProjectedMetrics() const { return m_projectedMetrics; }
    inline bool ProjectedMetricsHasBeenSet() const { return m_projectedMetricsHasBeenSet; }
    template<typename ProjectedMetricsT = Aws::Vector<ECSServiceProjectedMetric>>
    void SetProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics = std::forward<ProjectedMetricsT>(value); }
    template<typename ProjectedMetricsT = Aws::Vector<ECSServiceProjectedMetric>>
    ECSServiceRecommendedOptionProjectedMetric& WithProjectedMetrics(ProjectedMetricsT&& value) { SetProjectedMetrics(std::forward<ProjectedMetricsT>(value)); return *this;}
    template<typename ProjectedMetricsT = ECSServiceProjectedMetric>
    ECSServiceRecommendedOptionProjectedMetric& AddProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics.emplace_back(std::forward<ProjectedMetricsT>(value)); return *this; }
    ///@}
  private:

    int m_recommendedCpuUnits{0};
    bool m_recommendedCpuUnitsHasBeenSet = false;

    int m_recommendedMemorySize{0};
    bool m_recommendedMemorySizeHasBeenSet = false;

    Aws::Vector<ECSServiceProjectedMetric> m_projectedMetrics;
    bool m_projectedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

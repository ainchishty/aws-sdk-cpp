﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/InferredWorkloadTypesPreference.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/compute-optimizer/model/InstanceSavingsEstimationMode.h>
#include <aws/compute-optimizer/model/CpuVendorArchitecture.h>
#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/compute-optimizer/model/EffectivePreferredResource.h>
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
   * <p>Describes the effective recommendation preferences for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class EffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences() = default;
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton instance type recommendations
     * only.</p> </li> <li> <p>A <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton instance types only.</p> </li> </ul>
     */
    inline const Aws::Vector<CpuVendorArchitecture>& GetCpuVendorArchitectures() const { return m_cpuVendorArchitectures; }
    inline bool CpuVendorArchitecturesHasBeenSet() const { return m_cpuVendorArchitecturesHasBeenSet; }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    void SetCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = std::forward<CpuVendorArchitecturesT>(value); }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    EffectiveRecommendationPreferences& WithCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { SetCpuVendorArchitectures(std::forward<CpuVendorArchitecturesT>(value)); return *this;}
    inline EffectiveRecommendationPreferences& AddCpuVendorArchitectures(CpuVendorArchitecture value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline EnhancedInfrastructureMetrics GetEnhancedInfrastructureMetrics() const { return m_enhancedInfrastructureMetrics; }
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }
    inline EffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { SetEnhancedInfrastructureMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline InferredWorkloadTypesPreference GetInferredWorkloadTypes() const { return m_inferredWorkloadTypes; }
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }
    inline void SetInferredWorkloadTypes(InferredWorkloadTypesPreference value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }
    inline EffectiveRecommendationPreferences& WithInferredWorkloadTypes(InferredWorkloadTypesPreference value) { SetInferredWorkloadTypes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const { return m_externalMetricsPreference; }
    inline bool ExternalMetricsPreferenceHasBeenSet() const { return m_externalMetricsPreferenceHasBeenSet; }
    template<typename ExternalMetricsPreferenceT = ExternalMetricsPreference>
    void SetExternalMetricsPreference(ExternalMetricsPreferenceT&& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = std::forward<ExternalMetricsPreferenceT>(value); }
    template<typename ExternalMetricsPreferenceT = ExternalMetricsPreference>
    EffectiveRecommendationPreferences& WithExternalMetricsPreference(ExternalMetricsPreferenceT&& value) { SetExternalMetricsPreference(std::forward<ExternalMetricsPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p>
     */
    inline LookBackPeriodPreference GetLookBackPeriod() const { return m_lookBackPeriod; }
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }
    inline void SetLookBackPeriod(LookBackPeriodPreference value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }
    inline EffectiveRecommendationPreferences& WithLookBackPeriod(LookBackPeriodPreference value) { SetLookBackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource’s CPU and memory utilization preferences, such as threshold and
     * headroom, that are used to generate rightsizing recommendations. </p> 
     * <p>This preference is only available for the Amazon EC2 instance resource
     * type.</p> 
     */
    inline const Aws::Vector<UtilizationPreference>& GetUtilizationPreferences() const { return m_utilizationPreferences; }
    inline bool UtilizationPreferencesHasBeenSet() const { return m_utilizationPreferencesHasBeenSet; }
    template<typename UtilizationPreferencesT = Aws::Vector<UtilizationPreference>>
    void SetUtilizationPreferences(UtilizationPreferencesT&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = std::forward<UtilizationPreferencesT>(value); }
    template<typename UtilizationPreferencesT = Aws::Vector<UtilizationPreference>>
    EffectiveRecommendationPreferences& WithUtilizationPreferences(UtilizationPreferencesT&& value) { SetUtilizationPreferences(std::forward<UtilizationPreferencesT>(value)); return *this;}
    template<typename UtilizationPreferencesT = UtilizationPreference>
    EffectiveRecommendationPreferences& AddUtilizationPreferences(UtilizationPreferencesT&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.emplace_back(std::forward<UtilizationPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The resource type values that are considered as candidates when generating
     * rightsizing recommendations. </p>
     */
    inline const Aws::Vector<EffectivePreferredResource>& GetPreferredResources() const { return m_preferredResources; }
    inline bool PreferredResourcesHasBeenSet() const { return m_preferredResourcesHasBeenSet; }
    template<typename PreferredResourcesT = Aws::Vector<EffectivePreferredResource>>
    void SetPreferredResources(PreferredResourcesT&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = std::forward<PreferredResourcesT>(value); }
    template<typename PreferredResourcesT = Aws::Vector<EffectivePreferredResource>>
    EffectiveRecommendationPreferences& WithPreferredResources(PreferredResourcesT&& value) { SetPreferredResources(std::forward<PreferredResourcesT>(value)); return *this;}
    template<typename PreferredResourcesT = EffectivePreferredResource>
    EffectiveRecommendationPreferences& AddPreferredResources(PreferredResourcesT&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.emplace_back(std::forward<PreferredResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for a resource. </p>
     */
    inline const InstanceSavingsEstimationMode& GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
    template<typename SavingsEstimationModeT = InstanceSavingsEstimationMode>
    void SetSavingsEstimationMode(SavingsEstimationModeT&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::forward<SavingsEstimationModeT>(value); }
    template<typename SavingsEstimationModeT = InstanceSavingsEstimationMode>
    EffectiveRecommendationPreferences& WithSavingsEstimationMode(SavingsEstimationModeT&& value) { SetSavingsEstimationMode(std::forward<SavingsEstimationModeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CpuVendorArchitecture> m_cpuVendorArchitectures;
    bool m_cpuVendorArchitecturesHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics{EnhancedInfrastructureMetrics::NOT_SET};
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    InferredWorkloadTypesPreference m_inferredWorkloadTypes{InferredWorkloadTypesPreference::NOT_SET};
    bool m_inferredWorkloadTypesHasBeenSet = false;

    ExternalMetricsPreference m_externalMetricsPreference;
    bool m_externalMetricsPreferenceHasBeenSet = false;

    LookBackPeriodPreference m_lookBackPeriod{LookBackPeriodPreference::NOT_SET};
    bool m_lookBackPeriodHasBeenSet = false;

    Aws::Vector<UtilizationPreference> m_utilizationPreferences;
    bool m_utilizationPreferencesHasBeenSet = false;

    Aws::Vector<EffectivePreferredResource> m_preferredResources;
    bool m_preferredResourcesHasBeenSet = false;

    InstanceSavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

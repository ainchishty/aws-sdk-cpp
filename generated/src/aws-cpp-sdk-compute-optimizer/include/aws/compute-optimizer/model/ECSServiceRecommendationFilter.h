﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Describes a filter that returns a more specific list of Amazon ECS service
   * recommendations. Use this filter with the <a>GetECSServiceRecommendations</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceRecommendationFilter">AWS
   * API Reference</a></p>
   */
  class ECSServiceRecommendationFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter() = default;
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p> <p>You can filter your Amazon ECS service recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * Amazon ECS service recommendations. Use the tag key in the filter name and the
     * tag value as the filter value. For example, to find all Amazon ECS service
     * recommendations that have a tag with the key of <code>Owner</code> and the value
     * of <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> <p>A <code>tag-key</code> is the
     * key of a tag assigned to your Amazon ECS service recommendations. Use this
     * filter to find all of your Amazon ECS service recommendations that have a tag
     * with a specific key. This doesn’t consider the tag value. For example, you can
     * find your Amazon ECS service recommendations with a tag key value of
     * <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline ECSServiceRecommendationFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ECSServiceRecommendationFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ECSServiceRecommendationFilter& WithName(ECSServiceRecommendationFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>,
     * <code>Underprovisioned</code>, or <code>Overprovisioned</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, specify <code>CPUUnderprovisioned</code>,
     * <code>CPUOverprovisioned</code>, <code>MemoryUnderprovisioned</code>, or
     * <code>MemoryOverprovisioned</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ECSServiceRecommendationFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ECSServiceRecommendationFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    ECSServiceRecommendationFilterName m_name{ECSServiceRecommendationFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

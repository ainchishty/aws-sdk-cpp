﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/ChangeDirectionEnum.h>
#include <aws/evidently/model/MetricDefinition.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that tells Evidently whether higher or lower values are desired
   * for a metric that is used in an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricGoal">AWS
   * API Reference</a></p>
   */
  class MetricGoal
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal() = default;
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricGoal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>INCREASE</code> means that a variation with a higher number for this
     * metric is performing better.</p> <p> <code>DECREASE</code> means that a
     * variation with a lower number for this metric is performing better.</p>
     */
    inline ChangeDirectionEnum GetDesiredChange() const { return m_desiredChange; }
    inline bool DesiredChangeHasBeenSet() const { return m_desiredChangeHasBeenSet; }
    inline void SetDesiredChange(ChangeDirectionEnum value) { m_desiredChangeHasBeenSet = true; m_desiredChange = value; }
    inline MetricGoal& WithDesiredChange(ChangeDirectionEnum value) { SetDesiredChange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains details about the metric.</p>
     */
    inline const MetricDefinition& GetMetricDefinition() const { return m_metricDefinition; }
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }
    template<typename MetricDefinitionT = MetricDefinition>
    void SetMetricDefinition(MetricDefinitionT&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::forward<MetricDefinitionT>(value); }
    template<typename MetricDefinitionT = MetricDefinition>
    MetricGoal& WithMetricDefinition(MetricDefinitionT&& value) { SetMetricDefinition(std::forward<MetricDefinitionT>(value)); return *this;}
    ///@}
  private:

    ChangeDirectionEnum m_desiredChange{ChangeDirectionEnum::NOT_SET};
    bool m_desiredChangeHasBeenSet = false;

    MetricDefinition m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

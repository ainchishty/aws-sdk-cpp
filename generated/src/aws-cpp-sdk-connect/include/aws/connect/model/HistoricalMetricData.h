﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HistoricalMetric.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the data for a historical metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetricData">AWS
   * API Reference</a></p>
   */
  class HistoricalMetricData
  {
  public:
    AWS_CONNECT_API HistoricalMetricData() = default;
    AWS_CONNECT_API HistoricalMetricData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetricData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the metric.</p>
     */
    inline const HistoricalMetric& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = HistoricalMetric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = HistoricalMetric>
    HistoricalMetricData& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline HistoricalMetricData& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    HistoricalMetric m_metric;
    bool m_metricHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object containing additional settings for your VDM configuration as
   * applicable to the Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DashboardOptions">AWS
   * API Reference</a></p>
   */
  class DashboardOptions
  {
  public:
    AWS_SESV2_API DashboardOptions() = default;
    AWS_SESV2_API DashboardOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DashboardOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the status of your VDM engagement metrics collection. Can be one of
     * the following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables
     * engagement metrics for the configuration set.</p> </li> <li> <p>
     * <code>DISABLED</code> – Amazon SES disables engagement metrics for the
     * configuration set.</p> </li> </ul>
     */
    inline FeatureStatus GetEngagementMetrics() const { return m_engagementMetrics; }
    inline bool EngagementMetricsHasBeenSet() const { return m_engagementMetricsHasBeenSet; }
    inline void SetEngagementMetrics(FeatureStatus value) { m_engagementMetricsHasBeenSet = true; m_engagementMetrics = value; }
    inline DashboardOptions& WithEngagementMetrics(FeatureStatus value) { SetEngagementMetrics(value); return *this;}
    ///@}
  private:

    FeatureStatus m_engagementMetrics{FeatureStatus::NOT_SET};
    bool m_engagementMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

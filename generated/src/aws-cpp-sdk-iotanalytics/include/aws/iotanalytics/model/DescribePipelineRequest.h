﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class DescribePipelineRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API DescribePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipeline"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipeline whose information is retrieved.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    DescribePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

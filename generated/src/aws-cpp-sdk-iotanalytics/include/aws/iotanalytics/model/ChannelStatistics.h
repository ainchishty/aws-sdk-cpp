﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/EstimatedResourceSize.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Statistics information about the channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelStatistics">AWS
   * API Reference</a></p>
   */
  class ChannelStatistics
  {
  public:
    AWS_IOTANALYTICS_API ChannelStatistics() = default;
    AWS_IOTANALYTICS_API ChannelStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated size of the channel.</p>
     */
    inline const EstimatedResourceSize& GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    template<typename SizeT = EstimatedResourceSize>
    void SetSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size = std::forward<SizeT>(value); }
    template<typename SizeT = EstimatedResourceSize>
    ChannelStatistics& WithSize(SizeT&& value) { SetSize(std::forward<SizeT>(value)); return *this;}
    ///@}
  private:

    EstimatedResourceSize m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Configuration options for sending command output to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CloudWatchOutputConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchOutputConfig
  {
  public:
    AWS_SSM_API CloudWatchOutputConfig() = default;
    AWS_SSM_API CloudWatchOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CloudWatchOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const { return m_cloudWatchLogGroupName; }
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    void SetCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::forward<CloudWatchLogGroupNameT>(value); }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    CloudWatchOutputConfig& WithCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { SetCloudWatchLogGroupName(std::forward<CloudWatchLogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline bool GetCloudWatchOutputEnabled() const { return m_cloudWatchOutputEnabled; }
    inline bool CloudWatchOutputEnabledHasBeenSet() const { return m_cloudWatchOutputEnabledHasBeenSet; }
    inline void SetCloudWatchOutputEnabled(bool value) { m_cloudWatchOutputEnabledHasBeenSet = true; m_cloudWatchOutputEnabled = value; }
    inline CloudWatchOutputConfig& WithCloudWatchOutputEnabled(bool value) { SetCloudWatchOutputEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    bool m_cloudWatchOutputEnabled{false};
    bool m_cloudWatchOutputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

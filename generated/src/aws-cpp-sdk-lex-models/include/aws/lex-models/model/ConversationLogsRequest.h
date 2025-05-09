﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/LogSettingsRequest.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides the settings needed for conversation logs.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ConversationLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConversationLogsRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest() = default;
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline const Aws::Vector<LogSettingsRequest>& GetLogSettings() const { return m_logSettings; }
    inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }
    template<typename LogSettingsT = Aws::Vector<LogSettingsRequest>>
    void SetLogSettings(LogSettingsT&& value) { m_logSettingsHasBeenSet = true; m_logSettings = std::forward<LogSettingsT>(value); }
    template<typename LogSettingsT = Aws::Vector<LogSettingsRequest>>
    ConversationLogsRequest& WithLogSettings(LogSettingsT&& value) { SetLogSettings(std::forward<LogSettingsT>(value)); return *this;}
    template<typename LogSettingsT = LogSettingsRequest>
    ConversationLogsRequest& AddLogSettings(LogSettingsT&& value) { m_logSettingsHasBeenSet = true; m_logSettings.emplace_back(std::forward<LogSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ConversationLogsRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogSettingsRequest> m_logSettings;
    bool m_logSettingsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

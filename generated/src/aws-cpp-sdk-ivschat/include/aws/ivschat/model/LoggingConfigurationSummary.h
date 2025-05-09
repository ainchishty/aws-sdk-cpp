﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/ivschat/model/LoggingConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>Summary information about a logging configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/LoggingConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationSummary
  {
  public:
    AWS_IVSCHAT_API LoggingConfigurationSummary() = default;
    AWS_IVSCHAT_API LoggingConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API LoggingConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LoggingConfigurationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LoggingConfigurationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    LoggingConfigurationSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    LoggingConfigurationSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LoggingConfigurationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    LoggingConfigurationSummary& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline LoggingConfigurationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(LoggingConfigurationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline LoggingConfigurationSummary& WithState(LoggingConfigurationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    LoggingConfigurationSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    LoggingConfigurationSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    LoggingConfigurationState m_state{LoggingConfigurationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws

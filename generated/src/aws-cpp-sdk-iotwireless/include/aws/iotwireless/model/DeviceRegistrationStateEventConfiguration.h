﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Device registration state event configuration object for enabling and
   * disabling relevant topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeviceRegistrationStateEventConfiguration">AWS
   * API Reference</a></p>
   */
  class DeviceRegistrationStateEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API DeviceRegistrationStateEventConfiguration() = default;
    AWS_IOTWIRELESS_API DeviceRegistrationStateEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API DeviceRegistrationStateEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkEventNotificationConfigurations>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkEventNotificationConfigurations>
    DeviceRegistrationStateEventConfiguration& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether the wireless device ID device registration state event topic
     * is enabled or disabled.</p>
     */
    inline EventNotificationTopicStatus GetWirelessDeviceIdEventTopic() const { return m_wirelessDeviceIdEventTopic; }
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }
    inline DeviceRegistrationStateEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { SetWirelessDeviceIdEventTopic(value); return *this;}
    ///@}
  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_wirelessDeviceIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

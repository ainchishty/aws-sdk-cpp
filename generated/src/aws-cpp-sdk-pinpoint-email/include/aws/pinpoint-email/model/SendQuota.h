﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>

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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the per-day and per-second sending
   * limits for your Amazon Pinpoint account in the current AWS Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendQuota">AWS
   * API Reference</a></p>
   */
  class SendQuota
  {
  public:
    AWS_PINPOINTEMAIL_API SendQuota() = default;
    AWS_PINPOINTEMAIL_API SendQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API SendQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of emails that you can send in the current AWS Region over
     * a 24-hour period. This value is also called your <i>sending quota</i>.</p>
     */
    inline double GetMax24HourSend() const { return m_max24HourSend; }
    inline bool Max24HourSendHasBeenSet() const { return m_max24HourSendHasBeenSet; }
    inline void SetMax24HourSend(double value) { m_max24HourSendHasBeenSet = true; m_max24HourSend = value; }
    inline SendQuota& WithMax24HourSend(double value) { SetMax24HourSend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of emails that you can send per second in the current AWS
     * Region. This value is also called your <i>maximum sending rate</i> or your
     * <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline double GetMaxSendRate() const { return m_maxSendRate; }
    inline bool MaxSendRateHasBeenSet() const { return m_maxSendRateHasBeenSet; }
    inline void SetMaxSendRate(double value) { m_maxSendRateHasBeenSet = true; m_maxSendRate = value; }
    inline SendQuota& WithMaxSendRate(double value) { SetMaxSendRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of emails sent from your Amazon Pinpoint account in the current
     * AWS Region over the past 24 hours.</p>
     */
    inline double GetSentLast24Hours() const { return m_sentLast24Hours; }
    inline bool SentLast24HoursHasBeenSet() const { return m_sentLast24HoursHasBeenSet; }
    inline void SetSentLast24Hours(double value) { m_sentLast24HoursHasBeenSet = true; m_sentLast24Hours = value; }
    inline SendQuota& WithSentLast24Hours(double value) { SetSentLast24Hours(value); return *this;}
    ///@}
  private:

    double m_max24HourSend{0.0};
    bool m_max24HourSendHasBeenSet = false;

    double m_maxSendRate{0.0};
    bool m_maxSendRateHasBeenSet = false;

    double m_sentLast24Hours{0.0};
    bool m_sentLast24HoursHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

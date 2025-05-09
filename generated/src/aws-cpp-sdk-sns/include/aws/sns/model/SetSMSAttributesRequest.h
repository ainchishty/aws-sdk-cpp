﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>The input for the SetSMSAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributesInput">AWS
   * API Reference</a></p>
   */
  class SetSMSAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SetSMSAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetSMSAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The default settings for sending SMS messages from your Amazon Web Services
     * account. You can set values for the following attribute names:</p> <p>
     * <code>MonthlySpendLimit</code> – The maximum amount in USD that you are willing
     * to spend each month to send SMS messages. When Amazon SNS determines that
     * sending an SMS message would incur a cost that exceeds this limit, it stops
     * sending SMS messages within minutes.</p>  <p>Amazon SNS stops sending
     * SMS messages within minutes of the limit being crossed. During that interval, if
     * you continue to send SMS messages, you will incur costs that exceed your
     * limit.</p>  <p>By default, the spend limit is set to the maximum
     * allowed by Amazon SNS. If you want to raise the limit, submit an <a
     * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-sns">SNS
     * Limit Increase case</a>. For <b>New limit value</b>, enter your desired monthly
     * spend limit. In the <b>Use Case Description</b> field, explain that you are
     * requesting an SMS monthly spend limit increase.</p> <p>
     * <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows Amazon
     * SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS message
     * that you send, Amazon SNS writes a log that includes the message price, the
     * success or failure status, the reason for failure (if the message failed), the
     * message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your Amazon
     * Web Services account:</p> <ul> <li> <p>Time that the message was published (in
     * UTC)</p> </li> <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p>
     * </li> <li> <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li>
     * <p>Message price (in USD)</p> </li> <li> <p>Part number (a message is split into
     * multiple parts if it is too long for a single message)</p> </li> <li> <p>Total
     * number of parts</p> </li> </ul> <p>To receive the report, the bucket must have a
     * policy that allows the Amazon SNS service principal to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    SetSMSAttributesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    SetSMSAttributesRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

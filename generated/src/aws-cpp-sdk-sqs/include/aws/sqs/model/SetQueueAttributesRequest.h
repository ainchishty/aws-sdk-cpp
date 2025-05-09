﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/QueueAttributeName.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SetQueueAttributesRequest">AWS
   * API Reference</a></p>
   */
  class SetQueueAttributesRequest : public SQSRequest
  {
  public:
    AWS_SQS_API SetQueueAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetQueueAttributes"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The URL of the Amazon SQS queue whose attributes are set.</p> <p>Queue URLs
     * and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const { return m_queueUrl; }
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }
    template<typename QueueUrlT = Aws::String>
    void SetQueueUrl(QueueUrlT&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::forward<QueueUrlT>(value); }
    template<typename QueueUrlT = Aws::String>
    SetQueueAttributesRequest& WithQueueUrl(QueueUrlT&& value) { SetQueueUrl(std::forward<QueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters that the
     * <code>SetQueueAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> – The length of time, in seconds, for which the
     * delivery of all messages in the queue is delayed. Valid values: An integer from
     * 0 to 900 (15 minutes). Default: 0. </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> – The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) up to 262,144 bytes (256 KiB). Default: 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> – The length of time, in seconds,
     * for which Amazon SQS retains a message. Valid values: An integer representing
     * seconds, from 60 (1 minute) to 1,209,600 (14 days). Default: 345,600 (4 days).
     * When you change a queue's attributes, the change can take up to 60 seconds for
     * most of the attributes to propagate throughout the Amazon SQS system. Changes
     * made to the <code>MessageRetentionPeriod</code> attribute can take up to 15
     * minutes and will impact existing messages in the queue potentially causing them
     * to be expired and deleted if the <code>MessageRetentionPeriod</code> is reduced
     * below the age of existing messages.</p> </li> <li> <p> <code>Policy</code> – The
     * queue's policy. A valid Amazon Web Services policy. For more information about
     * policy structure, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of Amazon Web Services IAM Policies</a> in the <i>Identity and Access Management
     * User Guide</i>. </p> </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> –
     * The length of time, in seconds, for which a <code> <a>ReceiveMessage</a> </code>
     * action waits for a message to arrive. Valid values: An integer from 0 to 20
     * (seconds). Default: 0. </p> </li> <li> <p> <code>VisibilityTimeout</code> – The
     * visibility timeout for the queue, in seconds. Valid values: An integer from 0 to
     * 43,200 (12 hours). Default: 30. For more information about the visibility
     * timeout, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">dead-letter
     * queues:</a> </p> <ul> <li> <p> <code>RedrivePolicy</code> – The string that
     * includes the parameters for the dead-letter queue functionality of the source
     * queue as a JSON object. The parameters are as follows:</p> <ul> <li> <p>
     * <code>deadLetterTargetArn</code> – The Amazon Resource Name (ARN) of the
     * dead-letter queue to which Amazon SQS moves messages after the value of
     * <code>maxReceiveCount</code> is exceeded.</p> </li> <li> <p>
     * <code>maxReceiveCount</code> – The number of times a message is delivered to the
     * source queue before being moved to the dead-letter queue. Default: 10. When the
     * <code>ReceiveCount</code> for a message exceeds the <code>maxReceiveCount</code>
     * for a queue, Amazon SQS moves the message to the dead-letter-queue.</p> </li>
     * </ul> </li> <li> <p> <code>RedriveAllowPolicy</code> – The string that includes
     * the parameters for the permissions for the dead-letter queue redrive permission
     * and which source queues can specify dead-letter queues as a JSON object. The
     * parameters are as follows:</p> <ul> <li> <p> <code>redrivePermission</code> –
     * The permission type that defines which source queues can specify the current
     * queue as the dead-letter queue. Valid values are:</p> <ul> <li> <p>
     * <code>allowAll</code> – (Default) Any source queues in this Amazon Web Services
     * account in the same Region can specify this queue as the dead-letter queue.</p>
     * </li> <li> <p> <code>denyAll</code> – No source queues can specify this queue as
     * the dead-letter queue.</p> </li> <li> <p> <code>byQueue</code> – Only queues
     * specified by the <code>sourceQueueArns</code> parameter can specify this queue
     * as the dead-letter queue.</p> </li> </ul> </li> <li> <p>
     * <code>sourceQueueArns</code> – The Amazon Resource Names (ARN)s of the source
     * queues that can specify this queue as the dead-letter queue and redrive
     * messages. You can specify this parameter only when the
     * <code>redrivePermission</code> parameter is set to <code>byQueue</code>. You can
     * specify up to 10 source queue ARNs. To allow more than 10 source queues to
     * specify dead-letter queues, set the <code>redrivePermission</code> parameter to
     * <code>allowAll</code>.</p> </li> </ul> </li> </ul>  <p>The dead-letter
     * queue of a FIFO queue must also be a FIFO queue. Similarly, the dead-letter
     * queue of a standard queue must also be a standard queue.</p>  <p>The
     * following attributes apply only to <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> – The ID of an Amazon Web Services
     * managed customer master key (CMK) for Amazon SQS or a custom CMK. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. While the alias of the AWS-managed CMK for Amazon SQS is always
     * <code>alias/aws/sqs</code>, the alias of a custom CMK can, for example, be
     * <code>alias/<i>MyAlias</i> </code>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>Key Management Service API Reference</i>. </p> </li> <li> <p>
     * <code>KmsDataKeyReusePeriodSeconds</code> – The length of time, in seconds, for
     * which Amazon SQS can reuse a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#data-keys">data
     * key</a> to encrypt or decrypt messages before calling KMS again. An integer
     * representing seconds, between 60 seconds (1 minute) and 86,400 seconds (24
     * hours). Default: 300 (5 minutes). A shorter time period provides better security
     * but results in more calls to KMS which might incur charges after Free Tier. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> <li> <p>
     * <code>SqsManagedSseEnabled</code> – Enables server-side queue encryption using
     * SQS owned encryption keys. Only one server-side encryption option is supported
     * per queue (for example, <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-configure-sse-existing-queue.html">SSE-KMS</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-configure-sqs-sse-queue.html">SSE-SQS</a>).</p>
     * </li> </ul> <p>The following attribute applies only to <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues-exactly-once-processing.html">Exactly-once
     * processing</a> in the <i>Amazon SQS Developer Guide</i>. Note the following:
     * </p> <ul> <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>.</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>If
     * you send one message with <code>ContentBasedDeduplication</code> enabled and
     * then another message with a <code>MessageDeduplicationId</code> that is the same
     * as the one generated for the first <code>MessageDeduplicationId</code>, the two
     * messages are treated as duplicates and only one copy of the message is
     * delivered. </p> </li> </ul> </li> </ul> <p>The following attributes apply only
     * to <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/high-throughput-fifo.html">high
     * throughput for FIFO queues</a>:</p> <ul> <li> <p>
     * <code>DeduplicationScope</code> – Specifies whether message deduplication occurs
     * at the message group or queue level. Valid values are <code>messageGroup</code>
     * and <code>queue</code>.</p> </li> <li> <p> <code>FifoThroughputLimit</code> –
     * Specifies whether the FIFO queue throughput quota applies to the entire queue or
     * per message group. Valid values are <code>perQueue</code> and
     * <code>perMessageGroupId</code>. The <code>perMessageGroupId</code> value is
     * allowed only when the value for <code>DeduplicationScope</code> is
     * <code>messageGroup</code>.</p> </li> </ul> <p>To enable high throughput for FIFO
     * queues, do the following:</p> <ul> <li> <p>Set <code>DeduplicationScope</code>
     * to <code>messageGroup</code>.</p> </li> <li> <p>Set
     * <code>FifoThroughputLimit</code> to <code>perMessageGroupId</code>.</p> </li>
     * </ul> <p>If you set these attributes to anything other than the values shown for
     * enabling high throughput, normal throughput is in effect and deduplication
     * occurs as specified.</p> <p>For information on throughput quotas, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/quotas-messages.html">Quotas
     * related to messages</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<QueueAttributeName, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<QueueAttributeName, Aws::String>>
    SetQueueAttributesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline SetQueueAttributesRequest& AddAttributes(QueueAttributeName key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::Map<QueueAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws

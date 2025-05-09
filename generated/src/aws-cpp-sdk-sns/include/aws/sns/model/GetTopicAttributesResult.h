﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for GetTopicAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetTopicAttributesResult
  {
  public:
    AWS_SNS_API GetTopicAttributesResult() = default;
    AWS_SNS_API GetTopicAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetTopicAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A map of the topic's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The JSON
     * serialization of the topic's delivery policy.</p> </li> <li> <p>
     * <code>DisplayName</code> – The human-readable name used in the <code>From</code>
     * field for notifications to <code>email</code> and <code>email-json</code>
     * endpoints.</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> – The JSON
     * serialization of the effective delivery policy, taking system defaults into
     * account.</p> </li> <li> <p> <code>Owner</code> – The Amazon Web Services account
     * ID of the topic's owner.</p> </li> <li> <p> <code>Policy</code> – The JSON
     * serialization of the topic's access control policy.</p> </li> <li> <p>
     * <code>SignatureVersion</code> – The signature version corresponds to the hashing
     * algorithm used while creating the signature of the notifications, subscription
     * confirmations, or unsubscribe confirmation messages sent by Amazon SNS.</p> <ul>
     * <li> <p>By default, <code>SignatureVersion</code> is set to <b>1</b>. The
     * signature is a Base64-encoded <b>SHA1withRSA</b> signature.</p> </li> <li>
     * <p>When you set <code>SignatureVersion</code> to <b>2</b>. Amazon SNS uses a
     * Base64-encoded <b>SHA256withRSA</b> signature. </p>  <p>If the API
     * response does not include the <code>SignatureVersion</code> attribute, it means
     * that the <code>SignatureVersion</code> for the topic has value <b>1</b>.</p>
     *  </li> </ul> </li> <li> <p> <code>SubscriptionsConfirmed</code> – The
     * number of confirmed subscriptions for the topic.</p> </li> <li> <p>
     * <code>SubscriptionsDeleted</code> – The number of deleted subscriptions for the
     * topic.</p> </li> <li> <p> <code>SubscriptionsPending</code> – The number of
     * subscriptions pending confirmation for the topic.</p> </li> <li> <p>
     * <code>TopicArn</code> – The topic's ARN.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an Amazon Web Services
     * managed customer master key (CMK) for Amazon SNS or a custom CMK. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>Key Management Service API Reference</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – The policy that sets
     * the retention period for messages stored in the message archive of an Amazon SNS
     * FIFO topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> <li> <p>
     * <code>FifoTopic</code> – When this is set to <code>true</code>, a FIFO topic is
     * created.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetTopicAttributesResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetTopicAttributesResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetTopicAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

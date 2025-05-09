﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DescribeConfigurationSetResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationSetResult::DescribeConfigurationSetResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeConfigurationSetResult& DescribeConfigurationSetResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeConfigurationSetResult"))
  {
    resultNode = rootNode.FirstChild("DescribeConfigurationSetResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode configurationSetNode = resultNode.FirstChild("ConfigurationSet");
    if(!configurationSetNode.IsNull())
    {
      m_configurationSet = configurationSetNode;
      m_configurationSetHasBeenSet = true;
    }
    XmlNode eventDestinationsNode = resultNode.FirstChild("EventDestinations");
    if(!eventDestinationsNode.IsNull())
    {
      XmlNode eventDestinationsMember = eventDestinationsNode.FirstChild("member");
      m_eventDestinationsHasBeenSet = !eventDestinationsMember.IsNull();
      while(!eventDestinationsMember.IsNull())
      {
        m_eventDestinations.push_back(eventDestinationsMember);
        eventDestinationsMember = eventDestinationsMember.NextNode("member");
      }

      m_eventDestinationsHasBeenSet = true;
    }
    XmlNode trackingOptionsNode = resultNode.FirstChild("TrackingOptions");
    if(!trackingOptionsNode.IsNull())
    {
      m_trackingOptions = trackingOptionsNode;
      m_trackingOptionsHasBeenSet = true;
    }
    XmlNode deliveryOptionsNode = resultNode.FirstChild("DeliveryOptions");
    if(!deliveryOptionsNode.IsNull())
    {
      m_deliveryOptions = deliveryOptionsNode;
      m_deliveryOptionsHasBeenSet = true;
    }
    XmlNode reputationOptionsNode = resultNode.FirstChild("ReputationOptions");
    if(!reputationOptionsNode.IsNull())
    {
      m_reputationOptions = reputationOptionsNode;
      m_reputationOptionsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::DescribeConfigurationSetResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

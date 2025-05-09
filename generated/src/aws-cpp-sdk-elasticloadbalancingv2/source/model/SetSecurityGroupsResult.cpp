﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetSecurityGroupsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SetSecurityGroupsResult::SetSecurityGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SetSecurityGroupsResult& SetSecurityGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SetSecurityGroupsResult"))
  {
    resultNode = rootNode.FirstChild("SetSecurityGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupIdsNode = resultNode.FirstChild("SecurityGroupIds");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("member");
      m_securityGroupIdsHasBeenSet = !securityGroupIdsMember.IsNull();
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("member");
      }

      m_securityGroupIdsHasBeenSet = true;
    }
    XmlNode enforceSecurityGroupInboundRulesOnPrivateLinkTrafficNode = resultNode.FirstChild("EnforceSecurityGroupInboundRulesOnPrivateLinkTraffic");
    if(!enforceSecurityGroupInboundRulesOnPrivateLinkTrafficNode.IsNull())
    {
      m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumMapper::GetEnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enforceSecurityGroupInboundRulesOnPrivateLinkTrafficNode.GetText()).c_str()));
      m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::SetSecurityGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

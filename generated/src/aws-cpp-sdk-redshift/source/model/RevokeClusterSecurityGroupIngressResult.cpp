﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RevokeClusterSecurityGroupIngressResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RevokeClusterSecurityGroupIngressResult::RevokeClusterSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RevokeClusterSecurityGroupIngressResult& RevokeClusterSecurityGroupIngressResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RevokeClusterSecurityGroupIngressResult"))
  {
    resultNode = rootNode.FirstChild("RevokeClusterSecurityGroupIngressResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clusterSecurityGroupNode = resultNode.FirstChild("ClusterSecurityGroup");
    if(!clusterSecurityGroupNode.IsNull())
    {
      m_clusterSecurityGroup = clusterSecurityGroupNode;
      m_clusterSecurityGroupHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::RevokeClusterSecurityGroupIngressResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

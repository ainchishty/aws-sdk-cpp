﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StartDeclarativePoliciesReportResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

StartDeclarativePoliciesReportResponse::StartDeclarativePoliciesReportResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StartDeclarativePoliciesReportResponse& StartDeclarativePoliciesReportResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StartDeclarativePoliciesReportResponse"))
  {
    resultNode = rootNode.FirstChild("StartDeclarativePoliciesReportResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reportIdNode = resultNode.FirstChild("reportId");
    if(!reportIdNode.IsNull())
    {
      m_reportId = Aws::Utils::Xml::DecodeEscapedXmlText(reportIdNode.GetText());
      m_reportIdHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::StartDeclarativePoliciesReportResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

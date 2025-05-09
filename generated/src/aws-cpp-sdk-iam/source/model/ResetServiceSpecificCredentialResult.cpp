﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/ResetServiceSpecificCredentialResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ResetServiceSpecificCredentialResult::ResetServiceSpecificCredentialResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ResetServiceSpecificCredentialResult& ResetServiceSpecificCredentialResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ResetServiceSpecificCredentialResult"))
  {
    resultNode = rootNode.FirstChild("ResetServiceSpecificCredentialResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode serviceSpecificCredentialNode = resultNode.FirstChild("ServiceSpecificCredential");
    if(!serviceSpecificCredentialNode.IsNull())
    {
      m_serviceSpecificCredential = serviceSpecificCredentialNode;
      m_serviceSpecificCredentialHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::ResetServiceSpecificCredentialResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

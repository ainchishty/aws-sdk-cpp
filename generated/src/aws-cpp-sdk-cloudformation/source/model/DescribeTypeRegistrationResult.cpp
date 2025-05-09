﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeTypeRegistrationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeTypeRegistrationResult::DescribeTypeRegistrationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTypeRegistrationResult& DescribeTypeRegistrationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTypeRegistrationResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTypeRegistrationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode progressStatusNode = resultNode.FirstChild("ProgressStatus");
    if(!progressStatusNode.IsNull())
    {
      m_progressStatus = RegistrationStatusMapper::GetRegistrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressStatusNode.GetText()).c_str()));
      m_progressStatusHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode typeVersionArnNode = resultNode.FirstChild("TypeVersionArn");
    if(!typeVersionArnNode.IsNull())
    {
      m_typeVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeVersionArnNode.GetText());
      m_typeVersionArnHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeTypeRegistrationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}

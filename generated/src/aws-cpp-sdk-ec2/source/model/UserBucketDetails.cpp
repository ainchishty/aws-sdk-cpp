﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UserBucketDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

UserBucketDetails::UserBucketDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

UserBucketDetails& UserBucketDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3BucketNode = resultNode.FirstChild("s3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3KeyNode = resultNode.FirstChild("s3Key");
    if(!s3KeyNode.IsNull())
    {
      m_s3Key = Aws::Utils::Xml::DecodeEscapedXmlText(s3KeyNode.GetText());
      m_s3KeyHasBeenSet = true;
    }
  }

  return *this;
}

void UserBucketDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3KeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }

}

void UserBucketDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3KeyHasBeenSet)
  {
      oStream << location << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws

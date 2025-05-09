﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBShardGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBShardGroup::DBShardGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBShardGroup& DBShardGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBShardGroupResourceIdNode = resultNode.FirstChild("DBShardGroupResourceId");
    if(!dBShardGroupResourceIdNode.IsNull())
    {
      m_dBShardGroupResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupResourceIdNode.GetText());
      m_dBShardGroupResourceIdHasBeenSet = true;
    }
    XmlNode dBShardGroupIdentifierNode = resultNode.FirstChild("DBShardGroupIdentifier");
    if(!dBShardGroupIdentifierNode.IsNull())
    {
      m_dBShardGroupIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupIdentifierNode.GetText());
      m_dBShardGroupIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode maxACUNode = resultNode.FirstChild("MaxACU");
    if(!maxACUNode.IsNull())
    {
      m_maxACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxACUNode.GetText()).c_str()).c_str());
      m_maxACUHasBeenSet = true;
    }
    XmlNode minACUNode = resultNode.FirstChild("MinACU");
    if(!minACUNode.IsNull())
    {
      m_minACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minACUNode.GetText()).c_str()).c_str());
      m_minACUHasBeenSet = true;
    }
    XmlNode computeRedundancyNode = resultNode.FirstChild("ComputeRedundancy");
    if(!computeRedundancyNode.IsNull())
    {
      m_computeRedundancy = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(computeRedundancyNode.GetText()).c_str()).c_str());
      m_computeRedundancyHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAccessibleNode.GetText()).c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode dBShardGroupArnNode = resultNode.FirstChild("DBShardGroupArn");
    if(!dBShardGroupArnNode.IsNull())
    {
      m_dBShardGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupArnNode.GetText());
      m_dBShardGroupArnHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      m_tagListHasBeenSet = !tagListMember.IsNull();
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  return *this;
}

void DBShardGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBShardGroupResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBShardGroupResourceId=" << StringUtils::URLEncode(m_dBShardGroupResourceId.c_str()) << "&";
  }

  if(m_dBShardGroupIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_maxACUHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxACU=" << StringUtils::URLEncode(m_maxACU) << "&";
  }

  if(m_minACUHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinACU=" << StringUtils::URLEncode(m_minACU) << "&";
  }

  if(m_computeRedundancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComputeRedundancy=" << m_computeRedundancy << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_dBShardGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBShardGroupArn=" << StringUtils::URLEncode(m_dBShardGroupArn.c_str()) << "&";
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".TagList.Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void DBShardGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBShardGroupResourceIdHasBeenSet)
  {
      oStream << location << ".DBShardGroupResourceId=" << StringUtils::URLEncode(m_dBShardGroupResourceId.c_str()) << "&";
  }
  if(m_dBShardGroupIdentifierHasBeenSet)
  {
      oStream << location << ".DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_maxACUHasBeenSet)
  {
      oStream << location << ".MaxACU=" << StringUtils::URLEncode(m_maxACU) << "&";
  }
  if(m_minACUHasBeenSet)
  {
      oStream << location << ".MinACU=" << StringUtils::URLEncode(m_minACU) << "&";
  }
  if(m_computeRedundancyHasBeenSet)
  {
      oStream << location << ".ComputeRedundancy=" << m_computeRedundancy << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_dBShardGroupArnHasBeenSet)
  {
      oStream << location << ".DBShardGroupArn=" << StringUtils::URLEncode(m_dBShardGroupArn.c_str()) << "&";
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << ".TagList.Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace RDS
} // namespace Aws

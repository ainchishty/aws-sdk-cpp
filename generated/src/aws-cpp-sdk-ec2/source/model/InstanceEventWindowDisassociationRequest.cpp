﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindowDisassociationRequest.h>
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

InstanceEventWindowDisassociationRequest::InstanceEventWindowDisassociationRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceEventWindowDisassociationRequest& InstanceEventWindowDisassociationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdsNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdsNode.IsNull())
    {
      XmlNode instanceIdsMember = instanceIdsNode.FirstChild("item");
      m_instanceIdsHasBeenSet = !instanceIdsMember.IsNull();
      while(!instanceIdsMember.IsNull())
      {
        m_instanceIds.push_back(instanceIdsMember.GetText());
        instanceIdsMember = instanceIdsMember.NextNode("item");
      }

      m_instanceIdsHasBeenSet = true;
    }
    XmlNode instanceTagsNode = resultNode.FirstChild("InstanceTag");
    if(!instanceTagsNode.IsNull())
    {
      XmlNode instanceTagsMember = instanceTagsNode.FirstChild("item");
      m_instanceTagsHasBeenSet = !instanceTagsMember.IsNull();
      while(!instanceTagsMember.IsNull())
      {
        m_instanceTags.push_back(instanceTagsMember);
        instanceTagsMember = instanceTagsMember.NextNode("item");
      }

      m_instanceTagsHasBeenSet = true;
    }
    XmlNode dedicatedHostIdsNode = resultNode.FirstChild("DedicatedHostId");
    if(!dedicatedHostIdsNode.IsNull())
    {
      XmlNode dedicatedHostIdsMember = dedicatedHostIdsNode.FirstChild("item");
      m_dedicatedHostIdsHasBeenSet = !dedicatedHostIdsMember.IsNull();
      while(!dedicatedHostIdsMember.IsNull())
      {
        m_dedicatedHostIds.push_back(dedicatedHostIdsMember.GetText());
        dedicatedHostIdsMember = dedicatedHostIdsMember.NextNode("item");
      }

      m_dedicatedHostIdsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceEventWindowDisassociationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << index << locationValue << ".InstanceId." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceTagsHasBeenSet)
  {
      unsigned instanceTagsIdx = 1;
      for(auto& item : m_instanceTags)
      {
        Aws::StringStream instanceTagsSs;
        instanceTagsSs << location << index << locationValue << ".InstanceTag." << instanceTagsIdx++;
        item.OutputToStream(oStream, instanceTagsSs.str().c_str());
      }
  }

  if(m_dedicatedHostIdsHasBeenSet)
  {
      unsigned dedicatedHostIdsIdx = 1;
      for(auto& item : m_dedicatedHostIds)
      {
        oStream << location << index << locationValue << ".DedicatedHostId." << dedicatedHostIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void InstanceEventWindowDisassociationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << ".InstanceId." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceTagsHasBeenSet)
  {
      unsigned instanceTagsIdx = 1;
      for(auto& item : m_instanceTags)
      {
        Aws::StringStream instanceTagsSs;
        instanceTagsSs << location << ".InstanceTag." << instanceTagsIdx++;
        item.OutputToStream(oStream, instanceTagsSs.str().c_str());
      }
  }
  if(m_dedicatedHostIdsHasBeenSet)
  {
      unsigned dedicatedHostIdsIdx = 1;
      for(auto& item : m_dedicatedHostIds)
      {
        oStream << location << ".DedicatedHostId." << dedicatedHostIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws

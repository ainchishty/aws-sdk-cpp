﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EventCategoriesMap.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

EventCategoriesMap::EventCategoriesMap(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EventCategoriesMap& EventCategoriesMap::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode eventsNode = resultNode.FirstChild("Events");
    if(!eventsNode.IsNull())
    {
      XmlNode eventsMember = eventsNode.FirstChild("EventInfoMap");
      m_eventsHasBeenSet = !eventsMember.IsNull();
      while(!eventsMember.IsNull())
      {
        m_events.push_back(eventsMember);
        eventsMember = eventsMember.NextNode("EventInfoMap");
      }

      m_eventsHasBeenSet = true;
    }
  }

  return *this;
}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_eventsHasBeenSet)
  {
      unsigned eventsIdx = 1;
      for(auto& item : m_events)
      {
        Aws::StringStream eventsSs;
        eventsSs << location << index << locationValue << ".Events.EventInfoMap." << eventsIdx++;
        item.OutputToStream(oStream, eventsSs.str().c_str());
      }
  }

}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_eventsHasBeenSet)
  {
      unsigned eventsIdx = 1;
      for(auto& item : m_events)
      {
        Aws::StringStream eventsSs;
        eventsSs << location << ".Events.EventInfoMap." << eventsIdx++;
        item.OutputToStream(oStream, eventsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws

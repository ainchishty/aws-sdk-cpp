﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateTrafficMirrorSessionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTrafficMirrorSession&";
  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_trafficMirrorTargetIdHasBeenSet)
  {
    ss << "TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }

  if(m_trafficMirrorFilterIdHasBeenSet)
  {
    ss << "TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_packetLengthHasBeenSet)
  {
    ss << "PacketLength=" << m_packetLength << "&";
  }

  if(m_sessionNumberHasBeenSet)
  {
    ss << "SessionNumber=" << m_sessionNumber << "&";
  }

  if(m_virtualNetworkIdHasBeenSet)
  {
    ss << "VirtualNetworkId=" << m_virtualNetworkId << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateTrafficMirrorSessionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

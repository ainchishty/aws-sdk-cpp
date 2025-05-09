﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionByoipCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ProvisionByoipCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ProvisionByoipCidr&";
  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_cidrAuthorizationContextHasBeenSet)
  {
    m_cidrAuthorizationContext.OutputToStream(ss, "CidrAuthorizationContext");
  }

  if(m_publiclyAdvertisableHasBeenSet)
  {
    ss << "PubliclyAdvertisable=" << std::boolalpha << m_publiclyAdvertisable << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_poolTagSpecificationsHasBeenSet)
  {
    unsigned poolTagSpecificationsCount = 1;
    for(auto& item : m_poolTagSpecifications)
    {
      item.OutputToStream(ss, "PoolTagSpecification.", poolTagSpecificationsCount, "");
      poolTagSpecificationsCount++;
    }
  }

  if(m_multiRegionHasBeenSet)
  {
    ss << "MultiRegion=" << std::boolalpha << m_multiRegion << "&";
  }

  if(m_networkBorderGroupHasBeenSet)
  {
    ss << "NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ProvisionByoipCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

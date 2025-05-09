﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

Aws::String ApplyPendingMaintenanceActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ApplyPendingMaintenanceAction&";
  if(m_resourceIdentifierHasBeenSet)
  {
    ss << "ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_applyActionHasBeenSet)
  {
    ss << "ApplyAction=" << StringUtils::URLEncode(m_applyAction.c_str()) << "&";
  }

  if(m_optInTypeHasBeenSet)
  {
    ss << "OptInType=" << StringUtils::URLEncode(m_optInType.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ApplyPendingMaintenanceActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

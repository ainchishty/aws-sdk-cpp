﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendBulkTemplatedEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

Aws::String SendBulkTemplatedEmailRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendBulkTemplatedEmail&";
  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_replyToAddressesHasBeenSet)
  {
    if (m_replyToAddresses.empty())
    {
      ss << "ReplyToAddresses=&";
    }
    else
    {
      unsigned replyToAddressesCount = 1;
      for(auto& item : m_replyToAddresses)
      {
        ss << "ReplyToAddresses.member." << replyToAddressesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        replyToAddressesCount++;
      }
    }
  }

  if(m_returnPathHasBeenSet)
  {
    ss << "ReturnPath=" << StringUtils::URLEncode(m_returnPath.c_str()) << "&";
  }

  if(m_returnPathArnHasBeenSet)
  {
    ss << "ReturnPathArn=" << StringUtils::URLEncode(m_returnPathArn.c_str()) << "&";
  }

  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_defaultTagsHasBeenSet)
  {
    if (m_defaultTags.empty())
    {
      ss << "DefaultTags=&";
    }
    else
    {
      unsigned defaultTagsCount = 1;
      for(auto& item : m_defaultTags)
      {
        item.OutputToStream(ss, "DefaultTags.member.", defaultTagsCount, "");
        defaultTagsCount++;
      }
    }
  }

  if(m_templateHasBeenSet)
  {
    ss << "Template=" << StringUtils::URLEncode(m_template.c_str()) << "&";
  }

  if(m_templateArnHasBeenSet)
  {
    ss << "TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if(m_defaultTemplateDataHasBeenSet)
  {
    ss << "DefaultTemplateData=" << StringUtils::URLEncode(m_defaultTemplateData.c_str()) << "&";
  }

  if(m_destinationsHasBeenSet)
  {
    if (m_destinations.empty())
    {
      ss << "Destinations=&";
    }
    else
    {
      unsigned destinationsCount = 1;
      for(auto& item : m_destinations)
      {
        item.OutputToStream(ss, "Destinations.member.", destinationsCount, "");
        destinationsCount++;
      }
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SendBulkTemplatedEmailRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

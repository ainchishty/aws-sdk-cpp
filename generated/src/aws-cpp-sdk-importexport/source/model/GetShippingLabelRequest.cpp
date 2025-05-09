﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/GetShippingLabelRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils;

Aws::String GetShippingLabelRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetShippingLabel&";
  if(m_jobIdsHasBeenSet)
  {
    if (m_jobIds.empty())
    {
      ss << "jobIds=&";
    }
    else
    {
      unsigned jobIdsCount = 1;
      for(auto& item : m_jobIds)
      {
        ss << "jobIds.member." << jobIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        jobIdsCount++;
      }
    }
  }

  if(m_nameHasBeenSet)
  {
    ss << "name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_companyHasBeenSet)
  {
    ss << "company=" << StringUtils::URLEncode(m_company.c_str()) << "&";
  }

  if(m_phoneNumberHasBeenSet)
  {
    ss << "phoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_countryHasBeenSet)
  {
    ss << "country=" << StringUtils::URLEncode(m_country.c_str()) << "&";
  }

  if(m_stateOrProvinceHasBeenSet)
  {
    ss << "stateOrProvince=" << StringUtils::URLEncode(m_stateOrProvince.c_str()) << "&";
  }

  if(m_cityHasBeenSet)
  {
    ss << "city=" << StringUtils::URLEncode(m_city.c_str()) << "&";
  }

  if(m_postalCodeHasBeenSet)
  {
    ss << "postalCode=" << StringUtils::URLEncode(m_postalCode.c_str()) << "&";
  }

  if(m_street1HasBeenSet)
  {
    ss << "street1=" << StringUtils::URLEncode(m_street1.c_str()) << "&";
  }

  if(m_street2HasBeenSet)
  {
    ss << "street2=" << StringUtils::URLEncode(m_street2.c_str()) << "&";
  }

  if(m_street3HasBeenSet)
  {
    ss << "street3=" << StringUtils::URLEncode(m_street3.c_str()) << "&";
  }

  if(m_aPIVersionHasBeenSet)
  {
    ss << "APIVersion=" << StringUtils::URLEncode(m_aPIVersion.c_str()) << "&";
  }

  ss << "Version=2010-06-01";
  return ss.str();
}


void  GetShippingLabelRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

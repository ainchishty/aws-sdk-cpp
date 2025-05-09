﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String UpdateAccountPasswordPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateAccountPasswordPolicy&";
  if(m_minimumPasswordLengthHasBeenSet)
  {
    ss << "MinimumPasswordLength=" << m_minimumPasswordLength << "&";
  }

  if(m_requireSymbolsHasBeenSet)
  {
    ss << "RequireSymbols=" << std::boolalpha << m_requireSymbols << "&";
  }

  if(m_requireNumbersHasBeenSet)
  {
    ss << "RequireNumbers=" << std::boolalpha << m_requireNumbers << "&";
  }

  if(m_requireUppercaseCharactersHasBeenSet)
  {
    ss << "RequireUppercaseCharacters=" << std::boolalpha << m_requireUppercaseCharacters << "&";
  }

  if(m_requireLowercaseCharactersHasBeenSet)
  {
    ss << "RequireLowercaseCharacters=" << std::boolalpha << m_requireLowercaseCharacters << "&";
  }

  if(m_allowUsersToChangePasswordHasBeenSet)
  {
    ss << "AllowUsersToChangePassword=" << std::boolalpha << m_allowUsersToChangePassword << "&";
  }

  if(m_maxPasswordAgeHasBeenSet)
  {
    ss << "MaxPasswordAge=" << m_maxPasswordAge << "&";
  }

  if(m_passwordReusePreventionHasBeenSet)
  {
    ss << "PasswordReusePrevention=" << m_passwordReusePrevention << "&";
  }

  if(m_hardExpiryHasBeenSet)
  {
    ss << "HardExpiry=" << std::boolalpha << m_hardExpiry << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  UpdateAccountPasswordPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

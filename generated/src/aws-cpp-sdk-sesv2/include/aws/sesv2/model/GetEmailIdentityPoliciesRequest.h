﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to return the policies of an email identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class GetEmailIdentityPoliciesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetEmailIdentityPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEmailIdentityPolicies"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    template<typename EmailIdentityT = Aws::String>
    void SetEmailIdentity(EmailIdentityT&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::forward<EmailIdentityT>(value); }
    template<typename EmailIdentityT = Aws::String>
    GetEmailIdentityPoliciesRequest& WithEmailIdentity(EmailIdentityT&& value) { SetEmailIdentity(std::forward<EmailIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

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
   * <p>Represents a request to display the template object (which includes the
   * subject line, HTML part and text part) for the template you
   * specify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class GetEmailTemplateRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetEmailTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEmailTemplate"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    GetEmailTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

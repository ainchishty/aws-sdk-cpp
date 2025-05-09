﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteRetentionConfigurationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteRetentionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRetentionConfiguration"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline const Aws::String& GetRetentionConfigurationName() const { return m_retentionConfigurationName; }
    inline bool RetentionConfigurationNameHasBeenSet() const { return m_retentionConfigurationNameHasBeenSet; }
    template<typename RetentionConfigurationNameT = Aws::String>
    void SetRetentionConfigurationName(RetentionConfigurationNameT&& value) { m_retentionConfigurationNameHasBeenSet = true; m_retentionConfigurationName = std::forward<RetentionConfigurationNameT>(value); }
    template<typename RetentionConfigurationNameT = Aws::String>
    DeleteRetentionConfigurationRequest& WithRetentionConfigurationName(RetentionConfigurationNameT&& value) { SetRetentionConfigurationName(std::forward<RetentionConfigurationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retentionConfigurationName;
    bool m_retentionConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

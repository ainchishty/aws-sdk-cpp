﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class UpdateServiceIntegrationRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API UpdateServiceIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceIntegration"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> An <code>IntegratedServiceConfig</code> object used to specify the
     * integrated service you want to update, and whether you want to update it to
     * enabled or disabled. </p>
     */
    inline const UpdateServiceIntegrationConfig& GetServiceIntegration() const { return m_serviceIntegration; }
    inline bool ServiceIntegrationHasBeenSet() const { return m_serviceIntegrationHasBeenSet; }
    template<typename ServiceIntegrationT = UpdateServiceIntegrationConfig>
    void SetServiceIntegration(ServiceIntegrationT&& value) { m_serviceIntegrationHasBeenSet = true; m_serviceIntegration = std::forward<ServiceIntegrationT>(value); }
    template<typename ServiceIntegrationT = UpdateServiceIntegrationConfig>
    UpdateServiceIntegrationRequest& WithServiceIntegration(ServiceIntegrationT&& value) { SetServiceIntegration(std::forward<ServiceIntegrationT>(value)); return *this;}
    ///@}
  private:

    UpdateServiceIntegrationConfig m_serviceIntegration;
    bool m_serviceIntegrationHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

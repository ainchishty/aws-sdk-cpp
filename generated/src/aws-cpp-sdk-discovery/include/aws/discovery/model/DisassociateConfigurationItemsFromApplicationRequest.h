﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class DisassociateConfigurationItemsFromApplicationRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DisassociateConfigurationItemsFromApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateConfigurationItemsFromApplication"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Configuration ID of an application from which each item is disassociated.</p>
     */
    inline const Aws::String& GetApplicationConfigurationId() const { return m_applicationConfigurationId; }
    inline bool ApplicationConfigurationIdHasBeenSet() const { return m_applicationConfigurationIdHasBeenSet; }
    template<typename ApplicationConfigurationIdT = Aws::String>
    void SetApplicationConfigurationId(ApplicationConfigurationIdT&& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = std::forward<ApplicationConfigurationIdT>(value); }
    template<typename ApplicationConfigurationIdT = Aws::String>
    DisassociateConfigurationItemsFromApplicationRequest& WithApplicationConfigurationId(ApplicationConfigurationIdT&& value) { SetApplicationConfigurationId(std::forward<ApplicationConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration ID of each item to be disassociated from an application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const { return m_configurationIds; }
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    void SetConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::forward<ConfigurationIdsT>(value); }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    DisassociateConfigurationItemsFromApplicationRequest& WithConfigurationIds(ConfigurationIdsT&& value) { SetConfigurationIds(std::forward<ConfigurationIdsT>(value)); return *this;}
    template<typename ConfigurationIdsT = Aws::String>
    DisassociateConfigurationItemsFromApplicationRequest& AddConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.emplace_back(std::forward<ConfigurationIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationConfigurationId;
    bool m_applicationConfigurationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws

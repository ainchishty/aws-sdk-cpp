﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/privatenetworks/model/Address.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class ActivateNetworkSiteRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ActivateNetworkSiteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateNetworkSite"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ActivateNetworkSiteRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the duration and renewal status of the commitment period for all
     * pending radio units.</p> <p>If you include <code>commitmentConfiguration</code>
     * in the <code>ActivateNetworkSiteRequest</code> action, you must specify the
     * following:</p> <ul> <li> <p>The commitment period for the radio unit. You can
     * choose a 60-day, 1-year, or 3-year period.</p> </li> <li> <p>Whether you want
     * your commitment period to automatically renew for one more year after your
     * current commitment period expires.</p> </li> </ul> <p>For pricing, see <a
     * href="http://aws.amazon.com/private5g/pricing">Amazon Web Services Private 5G
     * Pricing</a>.</p> <p>If you do not include <code>commitmentConfiguration</code>
     * in the <code>ActivateNetworkSiteRequest</code> action, the commitment period is
     * set to 60-days.</p>
     */
    inline const CommitmentConfiguration& GetCommitmentConfiguration() const { return m_commitmentConfiguration; }
    inline bool CommitmentConfigurationHasBeenSet() const { return m_commitmentConfigurationHasBeenSet; }
    template<typename CommitmentConfigurationT = CommitmentConfiguration>
    void SetCommitmentConfiguration(CommitmentConfigurationT&& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = std::forward<CommitmentConfigurationT>(value); }
    template<typename CommitmentConfigurationT = CommitmentConfiguration>
    ActivateNetworkSiteRequest& WithCommitmentConfiguration(CommitmentConfigurationT&& value) { SetCommitmentConfiguration(std::forward<CommitmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const { return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    template<typename NetworkSiteArnT = Aws::String>
    void SetNetworkSiteArn(NetworkSiteArnT&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::forward<NetworkSiteArnT>(value); }
    template<typename NetworkSiteArnT = Aws::String>
    ActivateNetworkSiteRequest& WithNetworkSiteArn(NetworkSiteArnT&& value) { SetNetworkSiteArn(std::forward<NetworkSiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping address of the network site.</p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    ActivateNetworkSiteRequest& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    CommitmentConfiguration m_commitmentConfiguration;
    bool m_commitmentConfigurationHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

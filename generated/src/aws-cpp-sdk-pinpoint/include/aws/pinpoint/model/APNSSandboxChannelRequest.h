﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the status and settings of the APNs (Apple Push Notification
   * service) sandbox channel for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSSandboxChannelRequest">AWS
   * API Reference</a></p>
   */
  class APNSSandboxChannelRequest
  {
  public:
    AWS_PINPOINT_API APNSSandboxChannelRequest() = default;
    AWS_PINPOINT_API APNSSandboxChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API APNSSandboxChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bundle identifier that's assigned to your iOS app. This identifier is
     * used for APNs tokens.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    APNSSandboxChannelRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The APNs client certificate that you received from Apple, if you want Amazon
     * Pinpoint to communicate with the APNs sandbox environment by using an APNs
     * certificate.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    APNSSandboxChannelRequest& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication method that you want Amazon Pinpoint to use when
     * authenticating with the APNs sandbox environment, key or certificate.</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const { return m_defaultAuthenticationMethod; }
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    void SetDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::forward<DefaultAuthenticationMethodT>(value); }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    APNSSandboxChannelRequest& WithDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { SetDefaultAuthenticationMethod(std::forward<DefaultAuthenticationMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the APNs sandbox channel for the application.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline APNSSandboxChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key for the APNs client certificate that you want Amazon Pinpoint
     * to use to communicate with the APNs sandbox environment.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    APNSSandboxChannelRequest& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that's assigned to your Apple developer account team. This
     * identifier is used for APNs tokens.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    APNSSandboxChannelRequest& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication key to use for APNs tokens.</p>
     */
    inline const Aws::String& GetTokenKey() const { return m_tokenKey; }
    inline bool TokenKeyHasBeenSet() const { return m_tokenKeyHasBeenSet; }
    template<typename TokenKeyT = Aws::String>
    void SetTokenKey(TokenKeyT&& value) { m_tokenKeyHasBeenSet = true; m_tokenKey = std::forward<TokenKeyT>(value); }
    template<typename TokenKeyT = Aws::String>
    APNSSandboxChannelRequest& WithTokenKey(TokenKeyT&& value) { SetTokenKey(std::forward<TokenKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key identifier that's assigned to your APNs signing key, if you want
     * Amazon Pinpoint to communicate with the APNs sandbox environment by using APNs
     * tokens.</p>
     */
    inline const Aws::String& GetTokenKeyId() const { return m_tokenKeyId; }
    inline bool TokenKeyIdHasBeenSet() const { return m_tokenKeyIdHasBeenSet; }
    template<typename TokenKeyIdT = Aws::String>
    void SetTokenKeyId(TokenKeyIdT&& value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId = std::forward<TokenKeyIdT>(value); }
    template<typename TokenKeyIdT = Aws::String>
    APNSSandboxChannelRequest& WithTokenKeyId(TokenKeyIdT&& value) { SetTokenKeyId(std::forward<TokenKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_tokenKey;
    bool m_tokenKeyHasBeenSet = false;

    Aws::String m_tokenKeyId;
    bool m_tokenKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

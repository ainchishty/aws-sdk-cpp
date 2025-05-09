﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/JwksRetrievalOption.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes configuration settings for a trusted token issuer
   * that supports OpenID Connect (OIDC) and JSON Web Tokens (JWTs).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/OidcJwtConfiguration">AWS
   * API Reference</a></p>
   */
  class OidcJwtConfiguration
  {
  public:
    AWS_SSOADMIN_API OidcJwtConfiguration() = default;
    AWS_SSOADMIN_API OidcJwtConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API OidcJwtConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL that IAM Identity Center uses for OpenID Discovery. OpenID Discovery
     * is used to obtain the information required to verify the tokens that the trusted
     * token issuer generates.</p>
     */
    inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    template<typename IssuerUrlT = Aws::String>
    void SetIssuerUrl(IssuerUrlT&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::forward<IssuerUrlT>(value); }
    template<typename IssuerUrlT = Aws::String>
    OidcJwtConfiguration& WithIssuerUrl(IssuerUrlT&& value) { SetIssuerUrl(std::forward<IssuerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the source attribute in the JWT from the trusted token issuer.
     * The attribute mapped by this JMESPath expression is compared against the
     * attribute mapped by <code>IdentityStoreAttributePath</code> when a trusted token
     * issuer token is exchanged for an IAM Identity Center token.</p>
     */
    inline const Aws::String& GetClaimAttributePath() const { return m_claimAttributePath; }
    inline bool ClaimAttributePathHasBeenSet() const { return m_claimAttributePathHasBeenSet; }
    template<typename ClaimAttributePathT = Aws::String>
    void SetClaimAttributePath(ClaimAttributePathT&& value) { m_claimAttributePathHasBeenSet = true; m_claimAttributePath = std::forward<ClaimAttributePathT>(value); }
    template<typename ClaimAttributePathT = Aws::String>
    OidcJwtConfiguration& WithClaimAttributePath(ClaimAttributePathT&& value) { SetClaimAttributePath(std::forward<ClaimAttributePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the destination attribute in a JWT from IAM Identity Center. The
     * attribute mapped by this JMESPath expression is compared against the attribute
     * mapped by <code>ClaimAttributePath</code> when a trusted token issuer token is
     * exchanged for an IAM Identity Center token. </p>
     */
    inline const Aws::String& GetIdentityStoreAttributePath() const { return m_identityStoreAttributePath; }
    inline bool IdentityStoreAttributePathHasBeenSet() const { return m_identityStoreAttributePathHasBeenSet; }
    template<typename IdentityStoreAttributePathT = Aws::String>
    void SetIdentityStoreAttributePath(IdentityStoreAttributePathT&& value) { m_identityStoreAttributePathHasBeenSet = true; m_identityStoreAttributePath = std::forward<IdentityStoreAttributePathT>(value); }
    template<typename IdentityStoreAttributePathT = Aws::String>
    OidcJwtConfiguration& WithIdentityStoreAttributePath(IdentityStoreAttributePathT&& value) { SetIdentityStoreAttributePath(std::forward<IdentityStoreAttributePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that the trusted token issuer can use to retrieve the JSON Web Key
     * Set used to verify a JWT.</p>
     */
    inline JwksRetrievalOption GetJwksRetrievalOption() const { return m_jwksRetrievalOption; }
    inline bool JwksRetrievalOptionHasBeenSet() const { return m_jwksRetrievalOptionHasBeenSet; }
    inline void SetJwksRetrievalOption(JwksRetrievalOption value) { m_jwksRetrievalOptionHasBeenSet = true; m_jwksRetrievalOption = value; }
    inline OidcJwtConfiguration& WithJwksRetrievalOption(JwksRetrievalOption value) { SetJwksRetrievalOption(value); return *this;}
    ///@}
  private:

    Aws::String m_issuerUrl;
    bool m_issuerUrlHasBeenSet = false;

    Aws::String m_claimAttributePath;
    bool m_claimAttributePathHasBeenSet = false;

    Aws::String m_identityStoreAttributePath;
    bool m_identityStoreAttributePathHasBeenSet = false;

    JwksRetrievalOption m_jwksRetrievalOption{JwksRetrievalOption::NOT_SET};
    bool m_jwksRetrievalOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

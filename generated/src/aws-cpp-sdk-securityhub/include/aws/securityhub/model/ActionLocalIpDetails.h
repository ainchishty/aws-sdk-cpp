﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the IP address where the scanned port is
   * located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionLocalIpDetails">AWS
   * API Reference</a></p>
   */
  class ActionLocalIpDetails
  {
  public:
    AWS_SECURITYHUB_API ActionLocalIpDetails() = default;
    AWS_SECURITYHUB_API ActionLocalIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionLocalIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddressV4() const { return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    template<typename IpAddressV4T = Aws::String>
    void SetIpAddressV4(IpAddressV4T&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::forward<IpAddressV4T>(value); }
    template<typename IpAddressV4T = Aws::String>
    ActionLocalIpDetails& WithIpAddressV4(IpAddressV4T&& value) { SetIpAddressV4(std::forward<IpAddressV4T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

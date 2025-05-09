﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/SigV4Authorization.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorization method used to send messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpAuthorization">AWS
   * API Reference</a></p>
   */
  class HttpAuthorization
  {
  public:
    AWS_IOT_API HttpAuthorization() = default;
    AWS_IOT_API HttpAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline const SigV4Authorization& GetSigv4() const { return m_sigv4; }
    inline bool Sigv4HasBeenSet() const { return m_sigv4HasBeenSet; }
    template<typename Sigv4T = SigV4Authorization>
    void SetSigv4(Sigv4T&& value) { m_sigv4HasBeenSet = true; m_sigv4 = std::forward<Sigv4T>(value); }
    template<typename Sigv4T = SigV4Authorization>
    HttpAuthorization& WithSigv4(Sigv4T&& value) { SetSigv4(std::forward<Sigv4T>(value)); return *this;}
    ///@}
  private:

    SigV4Authorization m_sigv4;
    bool m_sigv4HasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

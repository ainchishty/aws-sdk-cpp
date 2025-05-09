﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>An Key Management Service (KMS) key and an Identity and Access Management
   * (IAM) role that Amazon Forecast can assume to access the key. You can specify
   * this optional object in the <a>CreateDataset</a> and <a>CreatePredictor</a>
   * requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_FORECASTSERVICE_API EncryptionConfig() = default;
    AWS_FORECASTSERVICE_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the KMS
     * key.</p> <p>Passing a role across Amazon Web Services accounts is not allowed.
     * If you pass a role that isn't in your account, you get an
     * <code>InvalidInputException</code> error.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    EncryptionConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
    template<typename KMSKeyArnT = Aws::String>
    void SetKMSKeyArn(KMSKeyArnT&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::forward<KMSKeyArnT>(value); }
    template<typename KMSKeyArnT = Aws::String>
    EncryptionConfig& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

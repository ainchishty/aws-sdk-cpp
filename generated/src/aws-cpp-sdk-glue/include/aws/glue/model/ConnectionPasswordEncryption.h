﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The data structure used by the Data Catalog to encrypt the password as part
   * of <code>CreateConnection</code> or <code>UpdateConnection</code> and store it
   * in the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You
   * can enable catalog encryption or only password encryption.</p> <p>When a
   * <code>CreationConnection</code> request arrives containing a password, the Data
   * Catalog first encrypts the password using your KMS key. It then encrypts the
   * whole connection object again if catalog encryption is also enabled.</p> <p>This
   * encryption requires that you set KMS key permissions to enable or restrict
   * access on the password key according to your security requirements. For example,
   * you might want only administrators to have decrypt permission on the password
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionPasswordEncryption">AWS
   * API Reference</a></p>
   */
  class ConnectionPasswordEncryption
  {
  public:
    AWS_GLUE_API ConnectionPasswordEncryption() = default;
    AWS_GLUE_API ConnectionPasswordEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionPasswordEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the <code>ReturnConnectionPasswordEncrypted</code> flag is set to
     * "true", passwords remain encrypted in the responses of
     * <code>GetConnection</code> and <code>GetConnections</code>. This encryption
     * takes effect independently from catalog encryption. </p>
     */
    inline bool GetReturnConnectionPasswordEncrypted() const { return m_returnConnectionPasswordEncrypted; }
    inline bool ReturnConnectionPasswordEncryptedHasBeenSet() const { return m_returnConnectionPasswordEncryptedHasBeenSet; }
    inline void SetReturnConnectionPasswordEncrypted(bool value) { m_returnConnectionPasswordEncryptedHasBeenSet = true; m_returnConnectionPasswordEncrypted = value; }
    inline ConnectionPasswordEncryption& WithReturnConnectionPasswordEncrypted(bool value) { SetReturnConnectionPasswordEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline const Aws::String& GetAwsKmsKeyId() const { return m_awsKmsKeyId; }
    inline bool AwsKmsKeyIdHasBeenSet() const { return m_awsKmsKeyIdHasBeenSet; }
    template<typename AwsKmsKeyIdT = Aws::String>
    void SetAwsKmsKeyId(AwsKmsKeyIdT&& value) { m_awsKmsKeyIdHasBeenSet = true; m_awsKmsKeyId = std::forward<AwsKmsKeyIdT>(value); }
    template<typename AwsKmsKeyIdT = Aws::String>
    ConnectionPasswordEncryption& WithAwsKmsKeyId(AwsKmsKeyIdT&& value) { SetAwsKmsKeyId(std::forward<AwsKmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    bool m_returnConnectionPasswordEncrypted{false};
    bool m_returnConnectionPasswordEncryptedHasBeenSet = false;

    Aws::String m_awsKmsKeyId;
    bool m_awsKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

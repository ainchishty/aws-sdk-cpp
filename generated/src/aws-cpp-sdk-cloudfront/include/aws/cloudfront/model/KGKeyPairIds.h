﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/KeyPairIds.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A list of identifiers for the public keys that CloudFront can use to verify
   * the signatures of signed URLs and signed cookies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KGKeyPairIds">AWS
   * API Reference</a></p>
   */
  class KGKeyPairIds
  {
  public:
    AWS_CLOUDFRONT_API KGKeyPairIds() = default;
    AWS_CLOUDFRONT_API KGKeyPairIds(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KGKeyPairIds& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier of the key group that contains the public keys.</p>
     */
    inline const Aws::String& GetKeyGroupId() const { return m_keyGroupId; }
    inline bool KeyGroupIdHasBeenSet() const { return m_keyGroupIdHasBeenSet; }
    template<typename KeyGroupIdT = Aws::String>
    void SetKeyGroupId(KeyGroupIdT&& value) { m_keyGroupIdHasBeenSet = true; m_keyGroupId = std::forward<KeyGroupIdT>(value); }
    template<typename KeyGroupIdT = Aws::String>
    KGKeyPairIds& WithKeyGroupId(KeyGroupIdT&& value) { SetKeyGroupId(std::forward<KeyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KeyPairIds& GetKeyPairIds() const { return m_keyPairIds; }
    inline bool KeyPairIdsHasBeenSet() const { return m_keyPairIdsHasBeenSet; }
    template<typename KeyPairIdsT = KeyPairIds>
    void SetKeyPairIds(KeyPairIdsT&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = std::forward<KeyPairIdsT>(value); }
    template<typename KeyPairIdsT = KeyPairIds>
    KGKeyPairIds& WithKeyPairIds(KeyPairIdsT&& value) { SetKeyPairIds(std::forward<KeyPairIdsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyGroupId;
    bool m_keyGroupIdHasBeenSet = false;

    KeyPairIds m_keyPairIds;
    bool m_keyPairIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for HLS content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HlsConfiguration">AWS
   * API Reference</a></p>
   */
  class HlsConfiguration
  {
  public:
    AWS_MEDIATAILOR_API HlsConfiguration() = default;
    AWS_MEDIATAILOR_API HlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API HlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline const Aws::String& GetManifestEndpointPrefix() const { return m_manifestEndpointPrefix; }
    inline bool ManifestEndpointPrefixHasBeenSet() const { return m_manifestEndpointPrefixHasBeenSet; }
    template<typename ManifestEndpointPrefixT = Aws::String>
    void SetManifestEndpointPrefix(ManifestEndpointPrefixT&& value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix = std::forward<ManifestEndpointPrefixT>(value); }
    template<typename ManifestEndpointPrefixT = Aws::String>
    HlsConfiguration& WithManifestEndpointPrefix(ManifestEndpointPrefixT&& value) { SetManifestEndpointPrefix(std::forward<ManifestEndpointPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestEndpointPrefix;
    bool m_manifestEndpointPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws

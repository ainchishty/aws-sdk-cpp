﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains the authorization parameters for the connection if API Key is
   * specified as the authorization type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionApiKeyAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionApiKeyAuthResponseParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionApiKeyAuthResponseParameters() = default;
    AWS_CLOUDWATCHEVENTS_API ConnectionApiKeyAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionApiKeyAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline const Aws::String& GetApiKeyName() const { return m_apiKeyName; }
    inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }
    template<typename ApiKeyNameT = Aws::String>
    void SetApiKeyName(ApiKeyNameT&& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = std::forward<ApiKeyNameT>(value); }
    template<typename ApiKeyNameT = Aws::String>
    ConnectionApiKeyAuthResponseParameters& WithApiKeyName(ApiKeyNameT&& value) { SetApiKeyName(std::forward<ApiKeyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKeyName;
    bool m_apiKeyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

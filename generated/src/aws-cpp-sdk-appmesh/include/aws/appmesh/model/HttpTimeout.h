﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents types of timeouts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpTimeout">AWS
   * API Reference</a></p>
   */
  class HttpTimeout
  {
  public:
    AWS_APPMESH_API HttpTimeout() = default;
    AWS_APPMESH_API HttpTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline const Duration& GetIdle() const { return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    template<typename IdleT = Duration>
    void SetIdle(IdleT&& value) { m_idleHasBeenSet = true; m_idle = std::forward<IdleT>(value); }
    template<typename IdleT = Duration>
    HttpTimeout& WithIdle(IdleT&& value) { SetIdle(std::forward<IdleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline const Duration& GetPerRequest() const { return m_perRequest; }
    inline bool PerRequestHasBeenSet() const { return m_perRequestHasBeenSet; }
    template<typename PerRequestT = Duration>
    void SetPerRequest(PerRequestT&& value) { m_perRequestHasBeenSet = true; m_perRequest = std::forward<PerRequestT>(value); }
    template<typename PerRequestT = Duration>
    HttpTimeout& WithPerRequest(PerRequestT&& value) { SetPerRequest(std::forward<PerRequestT>(value)); return *this;}
    ///@}
  private:

    Duration m_idle;
    bool m_idleHasBeenSet = false;

    Duration m_perRequest;
    bool m_perRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

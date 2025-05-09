﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeMatchmakingRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeMatchmakingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMatchmaking"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTicketIds() const { return m_ticketIds; }
    inline bool TicketIdsHasBeenSet() const { return m_ticketIdsHasBeenSet; }
    template<typename TicketIdsT = Aws::Vector<Aws::String>>
    void SetTicketIds(TicketIdsT&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds = std::forward<TicketIdsT>(value); }
    template<typename TicketIdsT = Aws::Vector<Aws::String>>
    DescribeMatchmakingRequest& WithTicketIds(TicketIdsT&& value) { SetTicketIds(std::forward<TicketIdsT>(value)); return *this;}
    template<typename TicketIdsT = Aws::String>
    DescribeMatchmakingRequest& AddTicketIds(TicketIdsT&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds.emplace_back(std::forward<TicketIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ticketIds;
    bool m_ticketIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

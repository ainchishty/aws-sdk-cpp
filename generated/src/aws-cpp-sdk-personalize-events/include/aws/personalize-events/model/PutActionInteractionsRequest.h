﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/PersonalizeEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/model/ActionInteraction.h>
#include <utility>

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

  /**
   */
  class PutActionInteractionsRequest : public PersonalizeEventsRequest
  {
  public:
    AWS_PERSONALIZEEVENTS_API PutActionInteractionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutActionInteractions"; }

    AWS_PERSONALIZEEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline const Aws::String& GetTrackingId() const { return m_trackingId; }
    inline bool TrackingIdHasBeenSet() const { return m_trackingIdHasBeenSet; }
    template<typename TrackingIdT = Aws::String>
    void SetTrackingId(TrackingIdT&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::forward<TrackingIdT>(value); }
    template<typename TrackingIdT = Aws::String>
    PutActionInteractionsRequest& WithTrackingId(TrackingIdT&& value) { SetTrackingId(std::forward<TrackingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline const Aws::Vector<ActionInteraction>& GetActionInteractions() const { return m_actionInteractions; }
    inline bool ActionInteractionsHasBeenSet() const { return m_actionInteractionsHasBeenSet; }
    template<typename ActionInteractionsT = Aws::Vector<ActionInteraction>>
    void SetActionInteractions(ActionInteractionsT&& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions = std::forward<ActionInteractionsT>(value); }
    template<typename ActionInteractionsT = Aws::Vector<ActionInteraction>>
    PutActionInteractionsRequest& WithActionInteractions(ActionInteractionsT&& value) { SetActionInteractions(std::forward<ActionInteractionsT>(value)); return *this;}
    template<typename ActionInteractionsT = ActionInteraction>
    PutActionInteractionsRequest& AddActionInteractions(ActionInteractionsT&& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions.emplace_back(std::forward<ActionInteractionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet = false;

    Aws::Vector<ActionInteraction> m_actionInteractions;
    bool m_actionInteractionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws

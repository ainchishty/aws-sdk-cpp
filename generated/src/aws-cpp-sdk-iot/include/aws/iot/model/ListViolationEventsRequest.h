﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BehaviorCriteriaType.h>
#include <aws/iot/model/VerificationState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListViolationEventsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListViolationEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListViolationEvents"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ListViolationEventsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ListViolationEventsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    ListViolationEventsRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    ListViolationEventsRequest& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The criteria for a behavior. </p>
     */
    inline BehaviorCriteriaType GetBehaviorCriteriaType() const { return m_behaviorCriteriaType; }
    inline bool BehaviorCriteriaTypeHasBeenSet() const { return m_behaviorCriteriaTypeHasBeenSet; }
    inline void SetBehaviorCriteriaType(BehaviorCriteriaType value) { m_behaviorCriteriaTypeHasBeenSet = true; m_behaviorCriteriaType = value; }
    inline ListViolationEventsRequest& WithBehaviorCriteriaType(BehaviorCriteriaType value) { SetBehaviorCriteriaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of all suppressed alerts. </p>
     */
    inline bool GetListSuppressedAlerts() const { return m_listSuppressedAlerts; }
    inline bool ListSuppressedAlertsHasBeenSet() const { return m_listSuppressedAlertsHasBeenSet; }
    inline void SetListSuppressedAlerts(bool value) { m_listSuppressedAlertsHasBeenSet = true; m_listSuppressedAlerts = value; }
    inline ListViolationEventsRequest& WithListSuppressedAlerts(bool value) { SetListSuppressedAlerts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline ListViolationEventsRequest& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListViolationEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListViolationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    BehaviorCriteriaType m_behaviorCriteriaType{BehaviorCriteriaType::NOT_SET};
    bool m_behaviorCriteriaTypeHasBeenSet = false;

    bool m_listSuppressedAlerts{false};
    bool m_listSuppressedAlertsHasBeenSet = false;

    VerificationState m_verificationState{VerificationState::NOT_SET};
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatchingOptions.h>
#include <aws/geo-routes/model/RouteSideOfStreetOptions.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Origin related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteOriginOptions">AWS
   * API Reference</a></p>
   */
  class RouteOriginOptions
  {
  public:
    AWS_GEOROUTES_API RouteOriginOptions() = default;
    AWS_GEOROUTES_API RouteOriginOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteOriginOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Avoids actions for the provided distance. This is typically to consider for
     * users in moving vehicles who may not have sufficient time to make an action at
     * an origin or a destination.</p>
     */
    inline long long GetAvoidActionsForDistance() const { return m_avoidActionsForDistance; }
    inline bool AvoidActionsForDistanceHasBeenSet() const { return m_avoidActionsForDistanceHasBeenSet; }
    inline void SetAvoidActionsForDistance(long long value) { m_avoidActionsForDistanceHasBeenSet = true; m_avoidActionsForDistance = value; }
    inline RouteOriginOptions& WithAvoidActionsForDistance(long long value) { SetAvoidActionsForDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid U-turns for calculation on highways and motorways.</p>
     */
    inline bool GetAvoidUTurns() const { return m_avoidUTurns; }
    inline bool AvoidUTurnsHasBeenSet() const { return m_avoidUTurnsHasBeenSet; }
    inline void SetAvoidUTurns(bool value) { m_avoidUTurnsHasBeenSet = true; m_avoidUTurns = value; }
    inline RouteOriginOptions& WithAvoidUTurns(bool value) { SetAvoidUTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GPS Heading at the position.</p>
     */
    inline double GetHeading() const { return m_heading; }
    inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
    inline void SetHeading(double value) { m_headingHasBeenSet = true; m_heading = value; }
    inline RouteOriginOptions& WithHeading(double value) { SetHeading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to the road network.</p>
     */
    inline const RouteMatchingOptions& GetMatching() const { return m_matching; }
    inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
    template<typename MatchingT = RouteMatchingOptions>
    void SetMatching(MatchingT&& value) { m_matchingHasBeenSet = true; m_matching = std::forward<MatchingT>(value); }
    template<typename MatchingT = RouteMatchingOptions>
    RouteOriginOptions& WithMatching(MatchingT&& value) { SetMatching(std::forward<MatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to a side of the
     * street.</p>
     */
    inline const RouteSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
    inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
    template<typename SideOfStreetT = RouteSideOfStreetOptions>
    void SetSideOfStreet(SideOfStreetT&& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = std::forward<SideOfStreetT>(value); }
    template<typename SideOfStreetT = RouteSideOfStreetOptions>
    RouteOriginOptions& WithSideOfStreet(SideOfStreetT&& value) { SetSideOfStreet(std::forward<SideOfStreetT>(value)); return *this;}
    ///@}
  private:

    long long m_avoidActionsForDistance{0};
    bool m_avoidActionsForDistanceHasBeenSet = false;

    bool m_avoidUTurns{false};
    bool m_avoidUTurnsHasBeenSet = false;

    double m_heading{0.0};
    bool m_headingHasBeenSet = false;

    RouteMatchingOptions m_matching;
    bool m_matchingHasBeenSet = false;

    RouteSideOfStreetOptions m_sideOfStreet;
    bool m_sideOfStreetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws

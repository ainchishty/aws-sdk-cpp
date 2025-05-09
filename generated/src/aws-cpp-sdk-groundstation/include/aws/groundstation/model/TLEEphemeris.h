﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/S3Object.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/TLEData.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Two-line element set (TLE) ephemeris.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TLEEphemeris">AWS
   * API Reference</a></p>
   */
  class TLEEphemeris
  {
  public:
    AWS_GROUNDSTATION_API TLEEphemeris() = default;
    AWS_GROUNDSTATION_API TLEEphemeris(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API TLEEphemeris& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    TLEEphemeris& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data for a TLE ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline const Aws::Vector<TLEData>& GetTleData() const { return m_tleData; }
    inline bool TleDataHasBeenSet() const { return m_tleDataHasBeenSet; }
    template<typename TleDataT = Aws::Vector<TLEData>>
    void SetTleData(TleDataT&& value) { m_tleDataHasBeenSet = true; m_tleData = std::forward<TleDataT>(value); }
    template<typename TleDataT = Aws::Vector<TLEData>>
    TLEEphemeris& WithTleData(TleDataT&& value) { SetTleData(std::forward<TleDataT>(value)); return *this;}
    template<typename TleDataT = TLEData>
    TLEEphemeris& AddTleData(TleDataT&& value) { m_tleDataHasBeenSet = true; m_tleData.emplace_back(std::forward<TleDataT>(value)); return *this; }
    ///@}
  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    Aws::Vector<TLEData> m_tleData;
    bool m_tleDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws

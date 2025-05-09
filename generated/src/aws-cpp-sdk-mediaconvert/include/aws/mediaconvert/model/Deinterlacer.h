﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DeinterlaceAlgorithm.h>
#include <aws/mediaconvert/model/DeinterlacerControl.h>
#include <aws/mediaconvert/model/DeinterlacerMode.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for deinterlacer<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Deinterlacer">AWS
   * API Reference</a></p>
   */
  class Deinterlacer
  {
  public:
    AWS_MEDIACONVERT_API Deinterlacer() = default;
    AWS_MEDIACONVERT_API Deinterlacer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Deinterlacer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Only applies when you set Deinterlace mode to Deinterlace or Adaptive.
     * Interpolate produces sharper pictures, while blend produces smoother motion. If
     * your source file includes a ticker, such as a scrolling headline at the bottom
     * of the frame: Choose Interpolate ticker or Blend ticker. To apply field
     * doubling: Choose Linear interpolation. Note that Linear interpolation may
     * introduce video artifacts into your output.
     */
    inline DeinterlaceAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(DeinterlaceAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline Deinterlacer& WithAlgorithm(DeinterlaceAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is a good chance that the metadata
     * has tagged frames as progressive when they are not progressive. Do not turn on
     * otherwise; processing frames that are already progressive into progressive will
     * probably result in lower quality video.
     */
    inline DeinterlacerControl GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(DeinterlacerControl value) { m_controlHasBeenSet = true; m_control = value; }
    inline Deinterlacer& WithControl(DeinterlacerControl value) { SetControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Deinterlacer to choose how the service will do deinterlacing. Default is
     * Deinterlace.
- Deinterlace converts interlaced to progressive.
- Inverse
     * telecine converts Hard Telecine 29.97i to progressive 23.976p.
- Adaptive
     * auto-detects and converts to progressive.
     */
    inline DeinterlacerMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(DeinterlacerMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline Deinterlacer& WithMode(DeinterlacerMode value) { SetMode(value); return *this;}
    ///@}
  private:

    DeinterlaceAlgorithm m_algorithm{DeinterlaceAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    DeinterlacerControl m_control{DeinterlacerControl::NOT_SET};
    bool m_controlHasBeenSet = false;

    DeinterlacerMode m_mode{DeinterlacerMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Default policies only]</b> Specifies a destination Region for
   * cross-Region copy actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyTarget">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyTarget
  {
  public:
    AWS_DLM_API CrossRegionCopyTarget() = default;
    AWS_DLM_API CrossRegionCopyTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target Region, for example <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetTargetRegion() const { return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    template<typename TargetRegionT = Aws::String>
    void SetTargetRegion(TargetRegionT&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::forward<TargetRegionT>(value); }
    template<typename TargetRegionT = Aws::String>
    CrossRegionCopyTarget& WithTargetRegion(TargetRegionT&& value) { SetTargetRegion(std::forward<TargetRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws

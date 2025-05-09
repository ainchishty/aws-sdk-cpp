﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>

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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>The section of the contact audio where that category rule was
   * detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/PointOfInterest">AWS
   * API Reference</a></p>
   */
  class PointOfInterest
  {
  public:
    AWS_CONNECTCONTACTLENS_API PointOfInterest() = default;
    AWS_CONNECTCONTACTLENS_API PointOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API PointOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning offset in milliseconds where the category rule was
     * detected.</p>
     */
    inline int GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(int value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline PointOfInterest& WithBeginOffsetMillis(int value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending offset in milliseconds where the category rule was detected.</p>
     */
    inline int GetEndOffsetMillis() const { return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(int value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline PointOfInterest& WithEndOffsetMillis(int value) { SetEndOffsetMillis(value); return *this;}
    ///@}
  private:

    int m_beginOffsetMillis{0};
    bool m_beginOffsetMillisHasBeenSet = false;

    int m_endOffsetMillis{0};
    bool m_endOffsetMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws

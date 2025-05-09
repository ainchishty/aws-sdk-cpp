﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The value to set in a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValue">AWS
   * API Reference</a></p>
   */
  class SlotValue
  {
  public:
    AWS_LEXMODELSV2_API SlotValue() = default;
    AWS_LEXMODELSV2_API SlotValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline const Aws::String& GetInterpretedValue() const { return m_interpretedValue; }
    inline bool InterpretedValueHasBeenSet() const { return m_interpretedValueHasBeenSet; }
    template<typename InterpretedValueT = Aws::String>
    void SetInterpretedValue(InterpretedValueT&& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = std::forward<InterpretedValueT>(value); }
    template<typename InterpretedValueT = Aws::String>
    SlotValue& WithInterpretedValue(InterpretedValueT&& value) { SetInterpretedValue(std::forward<InterpretedValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_interpretedValue;
    bool m_interpretedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

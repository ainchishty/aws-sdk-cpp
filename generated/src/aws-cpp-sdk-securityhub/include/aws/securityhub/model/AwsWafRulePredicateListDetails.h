﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about the <code>ByteMatchSet</code>, <code>IPSet</code>,
   * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
   * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
   * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
   * each object, indicates whether you want to negate the settings. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRulePredicateListDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRulePredicateListDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRulePredicateListDetails() = default;
    AWS_SECURITYHUB_API AwsWafRulePredicateListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRulePredicateListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline const Aws::String& GetDataId() const { return m_dataId; }
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }
    template<typename DataIdT = Aws::String>
    void SetDataId(DataIdT&& value) { m_dataIdHasBeenSet = true; m_dataId = std::forward<DataIdT>(value); }
    template<typename DataIdT = Aws::String>
    AwsWafRulePredicateListDetails& WithDataId(DataIdT&& value) { SetDataId(std::forward<DataIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if you want WAF to allow, block, or count requests based on the
     * settings in the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, or
     * <code>SizeConstraintSet</code>. </p>
     */
    inline bool GetNegated() const { return m_negated; }
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }
    inline AwsWafRulePredicateListDetails& WithNegated(bool value) { SetNegated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsWafRulePredicateListDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet = false;

    bool m_negated{false};
    bool m_negatedHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

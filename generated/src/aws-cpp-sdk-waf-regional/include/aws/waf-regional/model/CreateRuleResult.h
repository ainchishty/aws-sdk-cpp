﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/Rule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{
  class CreateRuleResult
  {
  public:
    AWS_WAFREGIONAL_API CreateRuleResult() = default;
    AWS_WAFREGIONAL_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline const Rule& GetRule() const { return m_rule; }
    template<typename RuleT = Rule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = Rule>
    CreateRuleResult& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    CreateRuleResult& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws

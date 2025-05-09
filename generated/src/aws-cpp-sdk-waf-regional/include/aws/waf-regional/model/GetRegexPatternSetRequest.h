﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class GetRegexPatternSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetRegexPatternSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRegexPatternSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to get. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const { return m_regexPatternSetId; }
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }
    template<typename RegexPatternSetIdT = Aws::String>
    void SetRegexPatternSetId(RegexPatternSetIdT&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::forward<RegexPatternSetIdT>(value); }
    template<typename RegexPatternSetIdT = Aws::String>
    GetRegexPatternSetRequest& WithRegexPatternSetId(RegexPatternSetIdT&& value) { SetRegexPatternSetId(std::forward<RegexPatternSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws

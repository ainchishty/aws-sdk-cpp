﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class BatchDetectDominantLanguageRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API BatchDetectDominantLanguageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDetectDominantLanguage"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. Each document should contain at least 20
     * characters. The maximum size of each document is 5 KB.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTextList() const { return m_textList; }
    inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }
    template<typename TextListT = Aws::Vector<Aws::String>>
    void SetTextList(TextListT&& value) { m_textListHasBeenSet = true; m_textList = std::forward<TextListT>(value); }
    template<typename TextListT = Aws::Vector<Aws::String>>
    BatchDetectDominantLanguageRequest& WithTextList(TextListT&& value) { SetTextList(std::forward<TextListT>(value)); return *this;}
    template<typename TextListT = Aws::String>
    BatchDetectDominantLanguageRequest& AddTextList(TextListT&& value) { m_textListHasBeenSet = true; m_textList.emplace_back(std::forward<TextListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_textList;
    bool m_textListHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

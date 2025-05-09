﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/FilterCondition.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class ListResourcesRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API ListResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResources"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline const Aws::Vector<FilterCondition>& GetFilterConditionList() const { return m_filterConditionList; }
    inline bool FilterConditionListHasBeenSet() const { return m_filterConditionListHasBeenSet; }
    template<typename FilterConditionListT = Aws::Vector<FilterCondition>>
    void SetFilterConditionList(FilterConditionListT&& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList = std::forward<FilterConditionListT>(value); }
    template<typename FilterConditionListT = Aws::Vector<FilterCondition>>
    ListResourcesRequest& WithFilterConditionList(FilterConditionListT&& value) { SetFilterConditionList(std::forward<FilterConditionListT>(value)); return *this;}
    template<typename FilterConditionListT = FilterCondition>
    ListResourcesRequest& AddFilterConditionList(FilterConditionListT&& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList.emplace_back(std::forward<FilterConditionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FilterCondition> m_filterConditionList;
    bool m_filterConditionListHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

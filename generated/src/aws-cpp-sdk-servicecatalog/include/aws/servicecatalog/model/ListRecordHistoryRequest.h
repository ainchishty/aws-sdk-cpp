﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/AccessLevelFilter.h>
#include <aws/servicecatalog/model/ListRecordHistorySearchFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ListRecordHistoryRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ListRecordHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecordHistory"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    ListRecordHistoryRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline const AccessLevelFilter& GetAccessLevelFilter() const { return m_accessLevelFilter; }
    inline bool AccessLevelFilterHasBeenSet() const { return m_accessLevelFilterHasBeenSet; }
    template<typename AccessLevelFilterT = AccessLevelFilter>
    void SetAccessLevelFilter(AccessLevelFilterT&& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = std::forward<AccessLevelFilterT>(value); }
    template<typename AccessLevelFilterT = AccessLevelFilter>
    ListRecordHistoryRequest& WithAccessLevelFilter(AccessLevelFilterT&& value) { SetAccessLevelFilter(std::forward<AccessLevelFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search filter to scope the results.</p>
     */
    inline const ListRecordHistorySearchFilter& GetSearchFilter() const { return m_searchFilter; }
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }
    template<typename SearchFilterT = ListRecordHistorySearchFilter>
    void SetSearchFilter(SearchFilterT&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::forward<SearchFilterT>(value); }
    template<typename SearchFilterT = ListRecordHistorySearchFilter>
    ListRecordHistoryRequest& WithSearchFilter(SearchFilterT&& value) { SetSearchFilter(std::forward<SearchFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListRecordHistoryRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListRecordHistoryRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    AccessLevelFilter m_accessLevelFilter;
    bool m_accessLevelFilterHasBeenSet = false;

    ListRecordHistorySearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

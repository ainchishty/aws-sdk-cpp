﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/Filters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/SortBy.h>
#include <aws/acm/model/SortOrder.h>
#include <aws/acm/model/CertificateStatus.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class ListCertificatesRequest : public ACMRequest
  {
  public:
    AWS_ACM_API ListCertificatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificates"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filter the certificate list by status value.</p>
     */
    inline const Aws::Vector<CertificateStatus>& GetCertificateStatuses() const { return m_certificateStatuses; }
    inline bool CertificateStatusesHasBeenSet() const { return m_certificateStatusesHasBeenSet; }
    template<typename CertificateStatusesT = Aws::Vector<CertificateStatus>>
    void SetCertificateStatuses(CertificateStatusesT&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = std::forward<CertificateStatusesT>(value); }
    template<typename CertificateStatusesT = Aws::Vector<CertificateStatus>>
    ListCertificatesRequest& WithCertificateStatuses(CertificateStatusesT&& value) { SetCertificateStatuses(std::forward<CertificateStatusesT>(value)); return *this;}
    inline ListCertificatesRequest& AddCertificateStatuses(CertificateStatus value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter the certificate list. For more information, see the <a>Filters</a>
     * structure.</p>
     */
    inline const Filters& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = Filters>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Filters>
    ListCertificatesRequest& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> element is sent in the response. Use this
     * <code>NextToken</code> value in a subsequent request to retrieve additional
     * items.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListCertificatesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the field to sort results by. If you specify <code>SortBy</code>,
     * you must also specify <code>SortOrder</code>.</p>
     */
    inline SortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListCertificatesRequest& WithSortBy(SortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the order of sorted results. If you specify <code>SortOrder</code>,
     * you must also specify <code>SortBy</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCertificatesRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Vector<CertificateStatus> m_certificateStatuses;
    bool m_certificateStatusesHasBeenSet = false;

    Filters m_includes;
    bool m_includesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    SortBy m_sortBy{SortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws

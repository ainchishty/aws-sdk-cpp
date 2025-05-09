﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Tag.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The collection of tagging definitions for an Amazon Web Services resource.
   * Tags are key:value pairs that you can use to categorize and manage your
   * resources, for purposes like billing or other management. Typically, the tag key
   * represents a category, such as "environment", and the tag value represents a
   * specific value within that category, such as "test," "development," or
   * "production". Or you might set the tag key to "customer" and the value to the
   * customer name or ID. You can specify one or more tags to add to each Amazon Web
   * Services resource, up to 50 tags for a resource.</p> <p>You can tag the Amazon
   * Web Services resources that you manage through WAF: web ACLs, rule groups, IP
   * sets, and regex pattern sets. You can't manage or view tags through the WAF
   * console. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagInfoForResource">AWS
   * API Reference</a></p>
   */
  class TagInfoForResource
  {
  public:
    AWS_WAFV2_API TagInfoForResource() = default;
    AWS_WAFV2_API TagInfoForResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API TagInfoForResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    TagInfoForResource& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    TagInfoForResource& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    TagInfoForResource& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

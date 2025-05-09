﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteBucketRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteBucketRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBucket"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bucket to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBuckets.html">GetBuckets</a>
     * action to get a list of bucket names that you can specify.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    DeleteBucketRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to force delete the bucket.</p> <p>You
     * must force delete the bucket if it has one of the following conditions:</p> <ul>
     * <li> <p>The bucket is the origin of a distribution.</p> </li> <li> <p>The bucket
     * has instances that were granted access to it using the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action.</p> </li> <li> <p>The bucket has objects.</p> </li> <li> <p>The bucket
     * has access keys.</p> </li> </ul>  <p>Force deleting a bucket might
     * impact other resources that rely on the bucket, such as instances,
     * distributions, or software that use the issued access keys.</p> 
     */
    inline bool GetForceDelete() const { return m_forceDelete; }
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }
    inline DeleteBucketRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    bool m_forceDelete{false};
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

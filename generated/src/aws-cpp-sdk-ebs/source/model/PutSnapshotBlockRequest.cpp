﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/PutSnapshotBlockRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;



Aws::Http::HeaderValueCollection PutSnapshotBlockRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_dataLengthHasBeenSet)
  {
    ss << m_dataLength;
    headers.emplace("x-amz-data-length",  ss.str());
    ss.str("");
  }

  if(m_progressHasBeenSet)
  {
    ss << m_progress;
    headers.emplace("x-amz-progress",  ss.str());
    ss.str("");
  }

  if(m_checksumHasBeenSet)
  {
    ss << m_checksum;
    headers.emplace("x-amz-checksum",  ss.str());
    ss.str("");
  }

  if(m_checksumAlgorithmHasBeenSet && m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET)
  {
    headers.emplace("x-amz-checksum-algorithm", ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm));
  }

  return headers;

}

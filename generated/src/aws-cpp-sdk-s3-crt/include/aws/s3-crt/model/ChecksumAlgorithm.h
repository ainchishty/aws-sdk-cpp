﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class ChecksumAlgorithm
  {
    NOT_SET,
    CRC32,
    CRC32C,
    SHA1,
    SHA256,
    CRC64NVME
  };

namespace ChecksumAlgorithmMapper
{
AWS_S3CRT_API ChecksumAlgorithm GetChecksumAlgorithmForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForChecksumAlgorithm(ChecksumAlgorithm value);
} // namespace ChecksumAlgorithmMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ReportDestinationS3.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies where DataSync uploads your <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ReportDestination">AWS
   * API Reference</a></p>
   */
  class ReportDestination
  {
  public:
    AWS_DATASYNC_API ReportDestination() = default;
    AWS_DATASYNC_API ReportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon S3 bucket where DataSync uploads your task report.</p>
     */
    inline const ReportDestinationS3& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ReportDestinationS3>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ReportDestinationS3>
    ReportDestination& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    ReportDestinationS3 m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

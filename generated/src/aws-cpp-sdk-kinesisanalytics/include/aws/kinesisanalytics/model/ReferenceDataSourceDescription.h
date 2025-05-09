﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceDescription.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the reference data source configured for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ReferenceDataSourceDescription">AWS
   * API Reference</a></p>
   */
  class ReferenceDataSourceDescription
  {
  public:
    AWS_KINESISANALYTICS_API ReferenceDataSourceDescription() = default;
    AWS_KINESISANALYTICS_API ReferenceDataSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ReferenceDataSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    ReferenceDataSourceDescription& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ReferenceDataSourceDescription& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline const S3ReferenceDataSourceDescription& GetS3ReferenceDataSourceDescription() const { return m_s3ReferenceDataSourceDescription; }
    inline bool S3ReferenceDataSourceDescriptionHasBeenSet() const { return m_s3ReferenceDataSourceDescriptionHasBeenSet; }
    template<typename S3ReferenceDataSourceDescriptionT = S3ReferenceDataSourceDescription>
    void SetS3ReferenceDataSourceDescription(S3ReferenceDataSourceDescriptionT&& value) { m_s3ReferenceDataSourceDescriptionHasBeenSet = true; m_s3ReferenceDataSourceDescription = std::forward<S3ReferenceDataSourceDescriptionT>(value); }
    template<typename S3ReferenceDataSourceDescriptionT = S3ReferenceDataSourceDescription>
    ReferenceDataSourceDescription& WithS3ReferenceDataSourceDescription(S3ReferenceDataSourceDescriptionT&& value) { SetS3ReferenceDataSourceDescription(std::forward<S3ReferenceDataSourceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline const SourceSchema& GetReferenceSchema() const { return m_referenceSchema; }
    inline bool ReferenceSchemaHasBeenSet() const { return m_referenceSchemaHasBeenSet; }
    template<typename ReferenceSchemaT = SourceSchema>
    void SetReferenceSchema(ReferenceSchemaT&& value) { m_referenceSchemaHasBeenSet = true; m_referenceSchema = std::forward<ReferenceSchemaT>(value); }
    template<typename ReferenceSchemaT = SourceSchema>
    ReferenceDataSourceDescription& WithReferenceSchema(ReferenceSchemaT&& value) { SetReferenceSchema(std::forward<ReferenceSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    S3ReferenceDataSourceDescription m_s3ReferenceDataSourceDescription;
    bool m_s3ReferenceDataSourceDescriptionHasBeenSet = false;

    SourceSchema m_referenceSchema;
    bool m_referenceSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

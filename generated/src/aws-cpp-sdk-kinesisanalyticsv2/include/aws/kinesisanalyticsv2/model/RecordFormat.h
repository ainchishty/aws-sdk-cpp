﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/RecordFormatType.h>
#include <aws/kinesisanalyticsv2/model/MappingParameters.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p> For a SQL-based Kinesis Data Analytics application, describes the record
   * format and relevant mapping information that should be applied to schematize the
   * records on the stream. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RecordFormat">AWS
   * API Reference</a></p>
   */
  class RecordFormat
  {
  public:
    AWS_KINESISANALYTICSV2_API RecordFormat() = default;
    AWS_KINESISANALYTICSV2_API RecordFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RecordFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of record format.</p>
     */
    inline RecordFormatType GetRecordFormatType() const { return m_recordFormatType; }
    inline bool RecordFormatTypeHasBeenSet() const { return m_recordFormatTypeHasBeenSet; }
    inline void SetRecordFormatType(RecordFormatType value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }
    inline RecordFormat& WithRecordFormatType(RecordFormatType value) { SetRecordFormatType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline const MappingParameters& GetMappingParameters() const { return m_mappingParameters; }
    inline bool MappingParametersHasBeenSet() const { return m_mappingParametersHasBeenSet; }
    template<typename MappingParametersT = MappingParameters>
    void SetMappingParameters(MappingParametersT&& value) { m_mappingParametersHasBeenSet = true; m_mappingParameters = std::forward<MappingParametersT>(value); }
    template<typename MappingParametersT = MappingParameters>
    RecordFormat& WithMappingParameters(MappingParametersT&& value) { SetMappingParameters(std::forward<MappingParametersT>(value)); return *this;}
    ///@}
  private:

    RecordFormatType m_recordFormatType{RecordFormatType::NOT_SET};
    bool m_recordFormatTypeHasBeenSet = false;

    MappingParameters m_mappingParameters;
    bool m_mappingParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

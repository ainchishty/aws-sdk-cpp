﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobManifestFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobManifestFieldName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Describes the format of a manifest. If the manifest is in CSV format, also
   * describes the columns contained within the manifest.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestSpec">AWS
   * API Reference</a></p>
   */
  class JobManifestSpec
  {
  public:
    AWS_S3CONTROL_API JobManifestSpec() = default;
    AWS_S3CONTROL_API JobManifestSpec(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifestSpec& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline JobManifestFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(JobManifestFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline JobManifestSpec& WithFormat(JobManifestFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline const Aws::Vector<JobManifestFieldName>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<JobManifestFieldName>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<JobManifestFieldName>>
    JobManifestSpec& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    inline JobManifestSpec& AddFields(JobManifestFieldName value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    ///@}
  private:

    JobManifestFormat m_format{JobManifestFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Vector<JobManifestFieldName> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

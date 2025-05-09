﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/translate/model/TerminologyDataFormat.h>
#include <aws/translate/model/Directionality.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The data associated with the custom terminology. For information about the
   * custom terminology file, see <a
   * href="https://docs.aws.amazon.com/translate/latest/dg/creating-custom-terminology.html">
   * Creating a Custom Terminology</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TerminologyData">AWS
   * API Reference</a></p>
   */
  class TerminologyData
  {
  public:
    AWS_TRANSLATE_API TerminologyData() = default;
    AWS_TRANSLATE_API TerminologyData(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TerminologyData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = Aws::Utils::CryptoBuffer>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = Aws::Utils::CryptoBuffer>
    TerminologyData& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the custom terminology.</p>
     */
    inline TerminologyDataFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TerminologyDataFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline TerminologyData& WithFormat(TerminologyDataFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional).</p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (for
     * example, the first column in a CSV file), and all of its other languages are
     * target languages. </p> </dd> <dt>MULTI</dt> <dd> <p>Any language in the
     * terminology resource can be the source language or a target language. A single
     * multi-directional terminology resource can be used for jobs that translate
     * different language pairs. For example, if the terminology contains English and
     * Spanish terms, it can be used for jobs that translate English to Spanish and
     * Spanish to English.</p> </dd> </dl> <p>When you create a custom terminology
     * resource without specifying the directionality, it behaves as uni-directional
     * terminology, although this parameter will have a null value.</p>
     */
    inline Directionality GetDirectionality() const { return m_directionality; }
    inline bool DirectionalityHasBeenSet() const { return m_directionalityHasBeenSet; }
    inline void SetDirectionality(Directionality value) { m_directionalityHasBeenSet = true; m_directionality = value; }
    inline TerminologyData& WithDirectionality(Directionality value) { SetDirectionality(value); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_file{};
    bool m_fileHasBeenSet = false;

    TerminologyDataFormat m_format{TerminologyDataFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Directionality m_directionality{Directionality::NOT_SET};
    bool m_directionalityHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/DecimalReturnType.h>
#include <aws/rds-data/model/LongReturnType.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Options that control how the result set is returned.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultSetOptions">AWS
   * API Reference</a></p>
   */
  class ResultSetOptions
  {
  public:
    AWS_RDSDATASERVICE_API ResultSetOptions() = default;
    AWS_RDSDATASERVICE_API ResultSetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ResultSetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p>  <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p> 
     */
    inline DecimalReturnType GetDecimalReturnType() const { return m_decimalReturnType; }
    inline bool DecimalReturnTypeHasBeenSet() const { return m_decimalReturnTypeHasBeenSet; }
    inline void SetDecimalReturnType(DecimalReturnType value) { m_decimalReturnTypeHasBeenSet = true; m_decimalReturnType = value; }
    inline ResultSetOptions& WithDecimalReturnType(DecimalReturnType value) { SetDecimalReturnType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates how a field of <code>LONG</code> type is represented.
     * Allowed values are <code>LONG</code> and <code>STRING</code>. The default is
     * <code>LONG</code>. Specify <code>STRING</code> if the length or precision of
     * numeric values might cause truncation or rounding errors. </p>
     */
    inline LongReturnType GetLongReturnType() const { return m_longReturnType; }
    inline bool LongReturnTypeHasBeenSet() const { return m_longReturnTypeHasBeenSet; }
    inline void SetLongReturnType(LongReturnType value) { m_longReturnTypeHasBeenSet = true; m_longReturnType = value; }
    inline ResultSetOptions& WithLongReturnType(LongReturnType value) { SetLongReturnType(value); return *this;}
    ///@}
  private:

    DecimalReturnType m_decimalReturnType{DecimalReturnType::NOT_SET};
    bool m_decimalReturnTypeHasBeenSet = false;

    LongReturnType m_longReturnType{LongReturnType::NOT_SET};
    bool m_longReturnTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws

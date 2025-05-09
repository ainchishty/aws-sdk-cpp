﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/FmtpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

FmtpRequest::FmtpRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

FmtpRequest& FmtpRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelOrder"))
  {
    m_channelOrder = jsonValue.GetString("channelOrder");
    m_channelOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorimetry"))
  {
    m_colorimetry = ColorimetryMapper::GetColorimetryForName(jsonValue.GetString("colorimetry"));
    m_colorimetryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exactFramerate"))
  {
    m_exactFramerate = jsonValue.GetString("exactFramerate");
    m_exactFramerateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("par"))
  {
    m_par = jsonValue.GetString("par");
    m_parHasBeenSet = true;
  }
  if(jsonValue.ValueExists("range"))
  {
    m_range = RangeMapper::GetRangeForName(jsonValue.GetString("range"));
    m_rangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanMode"))
  {
    m_scanMode = ScanModeMapper::GetScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tcs"))
  {
    m_tcs = TcsMapper::GetTcsForName(jsonValue.GetString("tcs"));
    m_tcsHasBeenSet = true;
  }
  return *this;
}

JsonValue FmtpRequest::Jsonize() const
{
  JsonValue payload;

  if(m_channelOrderHasBeenSet)
  {
   payload.WithString("channelOrder", m_channelOrder);

  }

  if(m_colorimetryHasBeenSet)
  {
   payload.WithString("colorimetry", ColorimetryMapper::GetNameForColorimetry(m_colorimetry));
  }

  if(m_exactFramerateHasBeenSet)
  {
   payload.WithString("exactFramerate", m_exactFramerate);

  }

  if(m_parHasBeenSet)
  {
   payload.WithString("par", m_par);

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithString("range", RangeMapper::GetNameForRange(m_range));
  }

  if(m_scanModeHasBeenSet)
  {
   payload.WithString("scanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  if(m_tcsHasBeenSet)
  {
   payload.WithString("tcs", TcsMapper::GetNameForTcs(m_tcs));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

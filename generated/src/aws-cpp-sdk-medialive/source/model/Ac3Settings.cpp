﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Ac3Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Ac3Settings::Ac3Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

Ac3Settings& Ac3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetDouble("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitstreamMode"))
  {
    m_bitstreamMode = Ac3BitstreamModeMapper::GetAc3BitstreamModeForName(jsonValue.GetString("bitstreamMode"));
    m_bitstreamModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Ac3CodingModeMapper::GetAc3CodingModeForName(jsonValue.GetString("codingMode"));
    m_codingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialnorm"))
  {
    m_dialnorm = jsonValue.GetInteger("dialnorm");
    m_dialnormHasBeenSet = true;
  }
  if(jsonValue.ValueExists("drcProfile"))
  {
    m_drcProfile = Ac3DrcProfileMapper::GetAc3DrcProfileForName(jsonValue.GetString("drcProfile"));
    m_drcProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lfeFilter"))
  {
    m_lfeFilter = Ac3LfeFilterMapper::GetAc3LfeFilterForName(jsonValue.GetString("lfeFilter"));
    m_lfeFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataControl"))
  {
    m_metadataControl = Ac3MetadataControlMapper::GetAc3MetadataControlForName(jsonValue.GetString("metadataControl"));
    m_metadataControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attenuationControl"))
  {
    m_attenuationControl = Ac3AttenuationControlMapper::GetAc3AttenuationControlForName(jsonValue.GetString("attenuationControl"));
    m_attenuationControlHasBeenSet = true;
  }
  return *this;
}

JsonValue Ac3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithDouble("bitrate", m_bitrate);

  }

  if(m_bitstreamModeHasBeenSet)
  {
   payload.WithString("bitstreamMode", Ac3BitstreamModeMapper::GetNameForAc3BitstreamMode(m_bitstreamMode));
  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Ac3CodingModeMapper::GetNameForAc3CodingMode(m_codingMode));
  }

  if(m_dialnormHasBeenSet)
  {
   payload.WithInteger("dialnorm", m_dialnorm);

  }

  if(m_drcProfileHasBeenSet)
  {
   payload.WithString("drcProfile", Ac3DrcProfileMapper::GetNameForAc3DrcProfile(m_drcProfile));
  }

  if(m_lfeFilterHasBeenSet)
  {
   payload.WithString("lfeFilter", Ac3LfeFilterMapper::GetNameForAc3LfeFilter(m_lfeFilter));
  }

  if(m_metadataControlHasBeenSet)
  {
   payload.WithString("metadataControl", Ac3MetadataControlMapper::GetNameForAc3MetadataControl(m_metadataControl));
  }

  if(m_attenuationControlHasBeenSet)
  {
   payload.WithString("attenuationControl", Ac3AttenuationControlMapper::GetNameForAc3AttenuationControl(m_attenuationControl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

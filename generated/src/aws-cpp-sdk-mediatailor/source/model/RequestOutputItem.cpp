﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/RequestOutputItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

RequestOutputItem::RequestOutputItem(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestOutputItem& RequestOutputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashPlaylistSettings"))
  {
    m_dashPlaylistSettings = jsonValue.GetObject("DashPlaylistSettings");
    m_dashPlaylistSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HlsPlaylistSettings"))
  {
    m_hlsPlaylistSettings = jsonValue.GetObject("HlsPlaylistSettings");
    m_hlsPlaylistSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");
    m_manifestNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceGroup"))
  {
    m_sourceGroup = jsonValue.GetString("SourceGroup");
    m_sourceGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestOutputItem::Jsonize() const
{
  JsonValue payload;

  if(m_dashPlaylistSettingsHasBeenSet)
  {
   payload.WithObject("DashPlaylistSettings", m_dashPlaylistSettings.Jsonize());

  }

  if(m_hlsPlaylistSettingsHasBeenSet)
  {
   payload.WithObject("HlsPlaylistSettings", m_hlsPlaylistSettings.Jsonize());

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_sourceGroupHasBeenSet)
  {
   payload.WithString("SourceGroup", m_sourceGroup);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws

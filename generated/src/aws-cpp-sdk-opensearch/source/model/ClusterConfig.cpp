﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

ClusterConfig::ClusterConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterConfig& ClusterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = OpenSearchPartitionInstanceTypeMapper::GetOpenSearchPartitionInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedMasterEnabled"))
  {
    m_dedicatedMasterEnabled = jsonValue.GetBool("DedicatedMasterEnabled");
    m_dedicatedMasterEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ZoneAwarenessEnabled"))
  {
    m_zoneAwarenessEnabled = jsonValue.GetBool("ZoneAwarenessEnabled");
    m_zoneAwarenessEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ZoneAwarenessConfig"))
  {
    m_zoneAwarenessConfig = jsonValue.GetObject("ZoneAwarenessConfig");
    m_zoneAwarenessConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedMasterType"))
  {
    m_dedicatedMasterType = OpenSearchPartitionInstanceTypeMapper::GetOpenSearchPartitionInstanceTypeForName(jsonValue.GetString("DedicatedMasterType"));
    m_dedicatedMasterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedMasterCount"))
  {
    m_dedicatedMasterCount = jsonValue.GetInteger("DedicatedMasterCount");
    m_dedicatedMasterCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmEnabled"))
  {
    m_warmEnabled = jsonValue.GetBool("WarmEnabled");
    m_warmEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmType"))
  {
    m_warmType = OpenSearchWarmPartitionInstanceTypeMapper::GetOpenSearchWarmPartitionInstanceTypeForName(jsonValue.GetString("WarmType"));
    m_warmTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmCount"))
  {
    m_warmCount = jsonValue.GetInteger("WarmCount");
    m_warmCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColdStorageOptions"))
  {
    m_coldStorageOptions = jsonValue.GetObject("ColdStorageOptions");
    m_coldStorageOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiAZWithStandbyEnabled"))
  {
    m_multiAZWithStandbyEnabled = jsonValue.GetBool("MultiAZWithStandbyEnabled");
    m_multiAZWithStandbyEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeOptions"))
  {
    Aws::Utils::Array<JsonView> nodeOptionsJsonList = jsonValue.GetArray("NodeOptions");
    for(unsigned nodeOptionsIndex = 0; nodeOptionsIndex < nodeOptionsJsonList.GetLength(); ++nodeOptionsIndex)
    {
      m_nodeOptions.push_back(nodeOptionsJsonList[nodeOptionsIndex].AsObject());
    }
    m_nodeOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_dedicatedMasterEnabledHasBeenSet)
  {
   payload.WithBool("DedicatedMasterEnabled", m_dedicatedMasterEnabled);

  }

  if(m_zoneAwarenessEnabledHasBeenSet)
  {
   payload.WithBool("ZoneAwarenessEnabled", m_zoneAwarenessEnabled);

  }

  if(m_zoneAwarenessConfigHasBeenSet)
  {
   payload.WithObject("ZoneAwarenessConfig", m_zoneAwarenessConfig.Jsonize());

  }

  if(m_dedicatedMasterTypeHasBeenSet)
  {
   payload.WithString("DedicatedMasterType", OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(m_dedicatedMasterType));
  }

  if(m_dedicatedMasterCountHasBeenSet)
  {
   payload.WithInteger("DedicatedMasterCount", m_dedicatedMasterCount);

  }

  if(m_warmEnabledHasBeenSet)
  {
   payload.WithBool("WarmEnabled", m_warmEnabled);

  }

  if(m_warmTypeHasBeenSet)
  {
   payload.WithString("WarmType", OpenSearchWarmPartitionInstanceTypeMapper::GetNameForOpenSearchWarmPartitionInstanceType(m_warmType));
  }

  if(m_warmCountHasBeenSet)
  {
   payload.WithInteger("WarmCount", m_warmCount);

  }

  if(m_coldStorageOptionsHasBeenSet)
  {
   payload.WithObject("ColdStorageOptions", m_coldStorageOptions.Jsonize());

  }

  if(m_multiAZWithStandbyEnabledHasBeenSet)
  {
   payload.WithBool("MultiAZWithStandbyEnabled", m_multiAZWithStandbyEnabled);

  }

  if(m_nodeOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeOptionsJsonList(m_nodeOptions.size());
   for(unsigned nodeOptionsIndex = 0; nodeOptionsIndex < nodeOptionsJsonList.GetLength(); ++nodeOptionsIndex)
   {
     nodeOptionsJsonList[nodeOptionsIndex].AsObject(m_nodeOptions[nodeOptionsIndex].Jsonize());
   }
   payload.WithArray("NodeOptions", std::move(nodeOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

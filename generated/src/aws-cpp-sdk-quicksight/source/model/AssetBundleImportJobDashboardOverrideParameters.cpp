﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDashboardOverrideParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleImportJobDashboardOverrideParameters::AssetBundleImportJobDashboardOverrideParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetBundleImportJobDashboardOverrideParameters& AssetBundleImportJobDashboardOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");
    m_dashboardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobDashboardOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

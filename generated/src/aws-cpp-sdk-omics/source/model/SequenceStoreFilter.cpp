﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceStoreFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SequenceStoreFilter::SequenceStoreFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

SequenceStoreFilter& SequenceStoreFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAfter"))
  {
    m_createdAfter = jsonValue.GetString("createdAfter");
    m_createdAfterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBefore"))
  {
    m_createdBefore = jsonValue.GetString("createdBefore");
    m_createdBeforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SequenceStoreStatusMapper::GetSequenceStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAfter"))
  {
    m_updatedAfter = jsonValue.GetString("updatedAfter");
    m_updatedAfterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBefore"))
  {
    m_updatedBefore = jsonValue.GetString("updatedBefore");
    m_updatedBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue SequenceStoreFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SequenceStoreStatusMapper::GetNameForSequenceStoreStatus(m_status));
  }

  if(m_updatedAfterHasBeenSet)
  {
   payload.WithString("updatedAfter", m_updatedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedBeforeHasBeenSet)
  {
   payload.WithString("updatedBefore", m_updatedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProductViewSummary::ProductViewSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductViewSummary& ProductViewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");
    m_productIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShortDescription"))
  {
    m_shortDescription = jsonValue.GetString("ShortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProductTypeMapper::GetProductTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distributor"))
  {
    m_distributor = jsonValue.GetString("Distributor");
    m_distributorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasDefaultPath"))
  {
    m_hasDefaultPath = jsonValue.GetBool("HasDefaultPath");
    m_hasDefaultPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportEmail"))
  {
    m_supportEmail = jsonValue.GetString("SupportEmail");
    m_supportEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportDescription"))
  {
    m_supportDescription = jsonValue.GetString("SupportDescription");
    m_supportDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportUrl"))
  {
    m_supportUrl = jsonValue.GetString("SupportUrl");
    m_supportUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductViewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("ShortDescription", m_shortDescription);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProductTypeMapper::GetNameForProductType(m_type));
  }

  if(m_distributorHasBeenSet)
  {
   payload.WithString("Distributor", m_distributor);

  }

  if(m_hasDefaultPathHasBeenSet)
  {
   payload.WithBool("HasDefaultPath", m_hasDefaultPath);

  }

  if(m_supportEmailHasBeenSet)
  {
   payload.WithString("SupportEmail", m_supportEmail);

  }

  if(m_supportDescriptionHasBeenSet)
  {
   payload.WithString("SupportDescription", m_supportDescription);

  }

  if(m_supportUrlHasBeenSet)
  {
   payload.WithString("SupportUrl", m_supportUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

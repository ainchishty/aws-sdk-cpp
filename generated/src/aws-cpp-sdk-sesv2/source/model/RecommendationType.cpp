﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/RecommendationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace RecommendationTypeMapper
      {

        static const int DKIM_HASH = HashingUtils::HashString("DKIM");
        static const int DMARC_HASH = HashingUtils::HashString("DMARC");
        static const int SPF_HASH = HashingUtils::HashString("SPF");
        static const int BIMI_HASH = HashingUtils::HashString("BIMI");
        static const int COMPLAINT_HASH = HashingUtils::HashString("COMPLAINT");


        RecommendationType GetRecommendationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DKIM_HASH)
          {
            return RecommendationType::DKIM;
          }
          else if (hashCode == DMARC_HASH)
          {
            return RecommendationType::DMARC;
          }
          else if (hashCode == SPF_HASH)
          {
            return RecommendationType::SPF;
          }
          else if (hashCode == BIMI_HASH)
          {
            return RecommendationType::BIMI;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return RecommendationType::COMPLAINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationType>(hashCode);
          }

          return RecommendationType::NOT_SET;
        }

        Aws::String GetNameForRecommendationType(RecommendationType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationType::NOT_SET:
            return {};
          case RecommendationType::DKIM:
            return "DKIM";
          case RecommendationType::DMARC:
            return "DMARC";
          case RecommendationType::SPF:
            return "SPF";
          case RecommendationType::BIMI:
            return "BIMI";
          case RecommendationType::COMPLAINT:
            return "COMPLAINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

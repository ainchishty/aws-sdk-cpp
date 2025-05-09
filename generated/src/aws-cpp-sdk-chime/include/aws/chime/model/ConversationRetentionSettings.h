﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>

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
namespace Chime
{
namespace Model
{

  /**
   * <p>The retention settings that determine how long to retain conversation
   * messages for an Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ConversationRetentionSettings">AWS
   * API Reference</a></p>
   */
  class ConversationRetentionSettings
  {
  public:
    AWS_CHIME_API ConversationRetentionSettings() = default;
    AWS_CHIME_API ConversationRetentionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ConversationRetentionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days for which to retain conversation messages.</p>
     */
    inline int GetRetentionDays() const { return m_retentionDays; }
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }
    inline ConversationRetentionSettings& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}
  private:

    int m_retentionDays{0};
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

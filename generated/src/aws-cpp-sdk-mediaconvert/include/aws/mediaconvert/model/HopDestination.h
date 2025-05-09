﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Optional. Configuration for a destination queue to which the job can hop once a
   * customer-defined minimum wait time has passed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HopDestination">AWS
   * API Reference</a></p>
   */
  class HopDestination
  {
  public:
    AWS_MEDIACONVERT_API HopDestination() = default;
    AWS_MEDIACONVERT_API HopDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HopDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. When you set up a job to use queue hopping, you can specify a
     * different relative priority for the job in the destination queue. If you don't
     * specify, the relative priority will remain the same as in the previous queue.
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline HopDestination& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional unless the job is submitted on the default queue. When you set up a job
     * to use queue hopping, you can specify a destination queue. This queue cannot be
     * the original queue to which the job is submitted. If the original queue isn't
     * the default queue and you don't specify the destination queue, the job will move
     * to the default queue.
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    HopDestination& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required for setting up a job to use queue hopping. Minimum wait time in minutes
     * until the job can hop to the destination queue. Valid range is 1 to 4320
     * minutes, inclusive.
     */
    inline int GetWaitMinutes() const { return m_waitMinutes; }
    inline bool WaitMinutesHasBeenSet() const { return m_waitMinutesHasBeenSet; }
    inline void SetWaitMinutes(int value) { m_waitMinutesHasBeenSet = true; m_waitMinutes = value; }
    inline HopDestination& WithWaitMinutes(int value) { SetWaitMinutes(value); return *this;}
    ///@}
  private:

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    int m_waitMinutes{0};
    bool m_waitMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

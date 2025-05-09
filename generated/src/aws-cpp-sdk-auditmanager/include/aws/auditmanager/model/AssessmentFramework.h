﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/FrameworkMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/AssessmentControlSet.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The file used to structure and automate Audit Manager assessments for a
   * given compliance standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentFramework">AWS
   * API Reference</a></p>
   */
  class AssessmentFramework
  {
  public:
    AWS_AUDITMANAGER_API AssessmentFramework() = default;
    AWS_AUDITMANAGER_API AssessmentFramework(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentFramework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssessmentFramework& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssessmentFramework& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FrameworkMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = FrameworkMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = FrameworkMetadata>
    AssessmentFramework& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline const Aws::Vector<AssessmentControlSet>& GetControlSets() const { return m_controlSets; }
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }
    template<typename ControlSetsT = Aws::Vector<AssessmentControlSet>>
    void SetControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::forward<ControlSetsT>(value); }
    template<typename ControlSetsT = Aws::Vector<AssessmentControlSet>>
    AssessmentFramework& WithControlSets(ControlSetsT&& value) { SetControlSets(std::forward<ControlSetsT>(value)); return *this;}
    template<typename ControlSetsT = AssessmentControlSet>
    AssessmentFramework& AddControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets.emplace_back(std::forward<ControlSetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    FrameworkMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<AssessmentControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

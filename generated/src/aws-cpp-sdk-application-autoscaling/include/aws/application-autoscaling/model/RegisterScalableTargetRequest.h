﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/SuspendedState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class RegisterScalableTargetRequest : public ApplicationAutoScalingRequest
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterScalableTarget"; }

    AWS_APPLICATIONAUTOSCALING_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONAUTOSCALING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline RegisterScalableTargetRequest& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/my-cluster/my-service</code>.</p> </li> <li> <p>Spot Fleet - The
     * resource type is <code>spot-fleet-request</code> and the unique identifier is
     * the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the table name. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the index name. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>SageMaker endpoint variant - The resource type is <code>variant</code> and
     * the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> <li> <p>Amazon Comprehend document classification
     * endpoint - The resource type and unique identifier are specified using the
     * endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:document-classifier-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Amazon Comprehend entity recognizer endpoint - The resource type
     * and unique identifier are specified using the endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:entity-recognizer-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Lambda provisioned concurrency - The resource type is
     * <code>function</code> and the unique identifier is the function name with a
     * function version or alias name suffix that is not <code>$LATEST</code>. Example:
     * <code>function:my-function:prod</code> or
     * <code>function:my-function:1</code>.</p> </li> <li> <p>Amazon Keyspaces table -
     * The resource type is <code>table</code> and the unique identifier is the table
     * name. Example: <code>keyspace/mykeyspace/table/mytable</code>.</p> </li> <li>
     * <p>Amazon MSK cluster - The resource type and unique identifier are specified
     * using the cluster ARN. Example:
     * <code>arn:aws:kafka:us-east-1:123456789012:cluster/demo-cluster-1/6357e0b2-0e6a-4b86-a0b4-70df934c2e31-5</code>.</p>
     * </li> <li> <p>Amazon ElastiCache replication group - The resource type is
     * <code>replication-group</code> and the unique identifier is the replication
     * group name. Example: <code>replication-group/mycluster</code>.</p> </li> <li>
     * <p>Amazon ElastiCache cache cluster - The resource type is
     * <code>cache-cluster</code> and the unique identifier is the cache cluster name.
     * Example: <code>cache-cluster/mycluster</code>.</p> </li> <li> <p>Neptune cluster
     * - The resource type is <code>cluster</code> and the unique identifier is the
     * cluster name. Example: <code>cluster:mycluster</code>.</p> </li> <li>
     * <p>SageMaker serverless endpoint - The resource type is <code>variant</code> and
     * the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>SageMaker inference component - The resource type is
     * <code>inference-component</code> and the unique identifier is the resource ID.
     * Example: <code>inference-component/my-inference-component</code>.</p> </li> <li>
     * <p>Pool of WorkSpaces - The resource type is <code>workspacespool</code> and the
     * unique identifier is the pool ID. Example:
     * <code>workspacespool/wspool-123456</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    RegisterScalableTargetRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The task count of an ECS
     * service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for a SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> <li>
     * <p> <code>comprehend:document-classifier-endpoint:DesiredInferenceUnits</code> -
     * The number of inference units for an Amazon Comprehend document classification
     * endpoint.</p> </li> <li> <p>
     * <code>comprehend:entity-recognizer-endpoint:DesiredInferenceUnits</code> - The
     * number of inference units for an Amazon Comprehend entity recognizer
     * endpoint.</p> </li> <li> <p> <code>lambda:function:ProvisionedConcurrency</code>
     * - The provisioned concurrency for a Lambda function.</p> </li> <li> <p>
     * <code>cassandra:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>cassandra:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>kafka:broker-storage:VolumeSize</code> - The provisioned volume size (in
     * GiB) for brokers in an Amazon MSK cluster.</p> </li> <li> <p>
     * <code>elasticache:cache-cluster:Nodes</code> - The number of nodes for an Amazon
     * ElastiCache cache cluster.</p> </li> <li> <p>
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredProvisionedConcurrency</code> - The provisioned
     * concurrency for a SageMaker serverless endpoint.</p> </li> <li> <p>
     * <code>sagemaker:inference-component:DesiredCopyCount</code> - The number of
     * copies across an endpoint for a SageMaker inference component.</p> </li> <li>
     * <p> <code>workspaces:workspacespool:DesiredUserSessions</code> - The number of
     * user sessions for the WorkSpaces in the pool.</p> </li> </ul>
     */
    inline ScalableDimension GetScalableDimension() const { return m_scalableDimension; }
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }
    inline void SetScalableDimension(ScalableDimension value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }
    inline RegisterScalableTargetRequest& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value that you plan to scale in to. When a scaling policy is in
     * effect, Application Auto Scaling can scale in (contract) as needed to the
     * minimum capacity limit in response to changing demand. This property is required
     * when registering a new scalable target.</p> <p>For the following resources, the
     * minimum value allowed is 0.</p> <ul> <li> <p>AppStream 2.0 fleets</p> </li> <li>
     * <p> Aurora DB clusters</p> </li> <li> <p>ECS services</p> </li> <li> <p>EMR
     * clusters</p> </li> <li> <p>Lambda provisioned concurrency</p> </li> <li>
     * <p>SageMaker endpoint variants</p> </li> <li> <p>SageMaker inference
     * components</p> </li> <li> <p>SageMaker serverless endpoint provisioned
     * concurrency</p> </li> <li> <p>Spot Fleets</p> </li> <li> <p>custom resources</p>
     * </li> </ul> <p>It's strongly recommended that you specify a value greater than
     * 0. A value greater than 0 means that data points are continuously reported to
     * CloudWatch that scaling policies can use to scale on a metric like average CPU
     * utilization.</p> <p>For all other resources, the minimum allowed value depends
     * on the type of resource that you are using. If you provide a value that is lower
     * than what a resource can accept, an error occurs. In which case, the error
     * message will provide the minimum value that the resource can accept.</p>
     */
    inline int GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline RegisterScalableTargetRequest& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value that you plan to scale out to. When a scaling policy is in
     * effect, Application Auto Scaling can scale out (expand) as needed to the maximum
     * capacity limit in response to changing demand. This property is required when
     * registering a new scalable target.</p> <p>Although you can specify a large
     * maximum capacity, note that service quotas might impose lower limits. Each
     * service has its own default quotas for the maximum capacity of the resource. If
     * you want to specify a higher limit, you can request an increase. For more
     * information, consult the documentation for that service. For information about
     * the default quotas for each service, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-service-information.html">Service
     * endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline RegisterScalableTargetRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is required for services that do not support service-linked
     * roles (such as Amazon EMR), and it must specify the ARN of an IAM role that
     * allows Application Auto Scaling to modify the scalable target on your behalf.
     * </p> <p>If the service supports service-linked roles, Application Auto Scaling
     * uses a service-linked role, which it creates if it does not yet exist. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/security_iam_service-with-iam.html">How
     * Application Auto Scaling works with IAM</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    RegisterScalableTargetRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and resume scaling</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline const SuspendedState& GetSuspendedState() const { return m_suspendedState; }
    inline bool SuspendedStateHasBeenSet() const { return m_suspendedStateHasBeenSet; }
    template<typename SuspendedStateT = SuspendedState>
    void SetSuspendedState(SuspendedStateT&& value) { m_suspendedStateHasBeenSet = true; m_suspendedState = std::forward<SuspendedStateT>(value); }
    template<typename SuspendedStateT = SuspendedState>
    RegisterScalableTargetRequest& WithSuspendedState(SuspendedStateT&& value) { SetSuspendedState(std::forward<SuspendedStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to the scalable target. Use this parameter to tag
     * the scalable target when it is created. To tag an existing scalable target, use
     * the <a>TagResource</a> operation.</p> <p>Each tag consists of a tag key and a
     * tag value. Both the tag key and the tag value are required. You cannot have more
     * than one tag on a scalable target with the same tag key.</p> <p>Use tags to
     * control access to a scalable target. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/resource-tagging-support.html">Tagging
     * support for Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RegisterScalableTargetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RegisterScalableTargetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    int m_minCapacity{0};
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SuspendedState m_suspendedState;
    bool m_suspendedStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws

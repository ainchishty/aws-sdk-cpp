﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a domain recordset entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DomainEntry">AWS
   * API Reference</a></p>
   */
  class DomainEntry
  {
  public:
    AWS_LIGHTSAIL_API DomainEntry() = default;
    AWS_LIGHTSAIL_API DomainEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DomainEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DomainEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DomainEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target IP address (<code>192.0.2.0</code>), or AWS name server
     * (<code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers, the
     * value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    DomainEntry& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, specifies whether the domain entry is an alias used
     * by the Lightsail load balancer, Lightsail container service, Lightsail content
     * delivery network (CDN) distribution, or another Amazon Web Services resource.
     * You can include an alias (A type) record in your request, which points to the
     * DNS name of a load balancer, container service, CDN distribution, or other
     * Amazon Web Services resource and routes traffic to that resource.</p>
     */
    inline bool GetIsAlias() const { return m_isAlias; }
    inline bool IsAliasHasBeenSet() const { return m_isAliasHasBeenSet; }
    inline void SetIsAlias(bool value) { m_isAliasHasBeenSet = true; m_isAlias = value; }
    inline DomainEntry& WithIsAlias(bool value) { SetIsAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DomainEntry& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_isAlias{false};
    bool m_isAliasHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

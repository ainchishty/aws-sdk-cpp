﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class RejectInvitationRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API RejectInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectInvitation"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the invitation to reject.</p>
     */
    inline const Aws::String& GetInvitationId() const { return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    template<typename InvitationIdT = Aws::String>
    void SetInvitationId(InvitationIdT&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::forward<InvitationIdT>(value); }
    template<typename InvitationIdT = Aws::String>
    RejectInvitationRequest& WithInvitationId(InvitationIdT&& value) { SetInvitationId(std::forward<InvitationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

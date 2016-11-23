//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************
#pragma once
#include "xsapi\multiplayer.h"
#include "xsapi\matchmaking.h"

NAMESPACE_MICROSOFT_XBOX_SERVICES_MATCHMAKING_BEGIN

/// <summary>
/// Represents a server response to a create match ticket request.
/// </summary>
public ref class CreateMatchTicketResponse sealed
{
public:
    /// <summary>
    /// Ticket ID of a match request.
    /// </summary>
    DEFINE_PROP_GET_STR_OBJ(MatchTicketId, match_ticket_id)

    /// <summary>
    /// Estimated wait time for a match request to be matched with other players.
    /// </summary>
    DEFINE_PROP_GET_TIMESPAN_OBJ(EstimatedWaitTime, estimated_wait_time)

internal:
    CreateMatchTicketResponse(
        _In_ xbox::services::matchmaking::create_match_ticket_response cppObj
        ):
        m_cppObj(std::move(cppObj))
    {
    }

private:
    xbox::services::matchmaking::create_match_ticket_response m_cppObj;
};

NAMESPACE_MICROSOFT_XBOX_SERVICES_MATCHMAKING_END

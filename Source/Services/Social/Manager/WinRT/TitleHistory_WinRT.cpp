///*********************************************************
///
/// Copyright (c) Microsoft. All rights reserved.
/// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
/// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
/// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
/// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
///
///*********************************************************
#include "pch.h"
#include "TitleHistory_WinRT.h"

NAMESPACE_MICROSOFT_XBOX_SERVICES_SOCIAL_MANAGER_BEGIN

TitleHistory::TitleHistory(
    _In_ xbox::services::social::manager::title_history cppObj
    ) :
    m_cppObj(std::move(cppObj))
{
}

NAMESPACE_MICROSOFT_XBOX_SERVICES_SOCIAL_MANAGER_END
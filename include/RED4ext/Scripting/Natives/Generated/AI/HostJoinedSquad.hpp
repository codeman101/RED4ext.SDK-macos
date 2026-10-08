#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct HostJoinedSquad : AI::AIEvent
{
    static constexpr const char* NAME = "AIHostJoinedSquad";
    static constexpr const char* ALIAS = "HostJoinedSquad";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    CName squad; // 50
#else
    CName squad; // 50
#endif
};
RED4EXT_ASSERT_SIZE(HostJoinedSquad, 0x58);
} // namespace AI
using AIHostJoinedSquad = AI::HostJoinedSquad;
using HostJoinedSquad = AI::HostJoinedSquad;
} // namespace RED4ext

// clang-format on

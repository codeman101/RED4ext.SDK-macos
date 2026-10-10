#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct SquadIsTracked : AI::AIEvent
{
    static constexpr const char* NAME = "AISquadIsTracked";
    static constexpr const char* ALIAS = "SquadIsTracked";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    bool isSquadTracked; // 4C
#else
    bool isSquadTracked; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(SquadIsTracked, 0x58);
} // namespace AI
using AISquadIsTracked = AI::SquadIsTracked;
using SquadIsTracked = AI::SquadIsTracked;
} // namespace RED4ext

// clang-format on

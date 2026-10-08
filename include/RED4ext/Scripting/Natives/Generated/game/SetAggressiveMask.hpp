#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct SetAggressiveMask : red::Event
{
    static constexpr const char* NAME = "gameSetAggressiveMask";
    static constexpr const char* ALIAS = "SetAggressiveMask";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool isAggressive; // 40
#else
    bool isAggressive; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(SetAggressiveMask, 0x48);
} // namespace game
using gameSetAggressiveMask = game::SetAggressiveMask;
using SetAggressiveMask = game::SetAggressiveMask;
} // namespace RED4ext

// clang-format on

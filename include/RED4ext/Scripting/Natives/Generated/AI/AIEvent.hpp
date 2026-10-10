#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace AI
{
struct AIEvent : red::Event
{
    static constexpr const char* NAME = "AIAIEvent";
    static constexpr const char* ALIAS = "AIEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName name; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(name))];
    float timeToLive; // 48
#else
    CName name; // 40
    float timeToLive; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(AIEvent, 0x50);
} // namespace AI
using AIAIEvent = AI::AIEvent;
using AIEvent = AI::AIEvent;
} // namespace RED4ext

// clang-format on

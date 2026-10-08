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
struct SetAsQuestImportantEvent : red::Event
{
    static constexpr const char* NAME = "gameSetAsQuestImportantEvent";
    static constexpr const char* ALIAS = "SetAsQuestImportantEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool isImportant; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(isImportant))];
    bool propagateToSlaves; // 41
#else
    bool isImportant; // 40
    bool propagateToSlaves; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
#endif
};
RED4EXT_ASSERT_SIZE(SetAsQuestImportantEvent, 0x48);
} // namespace game
using gameSetAsQuestImportantEvent = game::SetAsQuestImportantEvent;
using SetAsQuestImportantEvent = game::SetAsQuestImportantEvent;
} // namespace RED4ext

// clang-format on

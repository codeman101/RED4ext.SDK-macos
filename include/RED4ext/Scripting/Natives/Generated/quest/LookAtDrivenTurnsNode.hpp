#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LookAtDrivenTurnsMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct LookAtDrivenTurnsNode : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questLookAtDrivenTurnsNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    quest::LookAtDrivenTurnsMode mode; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(mode))];
    game::EntityReference puppetRef; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(puppetRef))];
    game::EntityReference targetRef; // 80
    uint8_t unk_B8[0xB8 - (0x80 + sizeof(targetRef))];
    bool canLookAtDrivenTurnsInterruptGesture; // B8
#else
    quest::LookAtDrivenTurnsMode mode; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    game::EntityReference puppetRef; // 50
    game::EntityReference targetRef; // 88
    bool canLookAtDrivenTurnsInterruptGesture; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
#endif
};
RED4EXT_ASSERT_SIZE(LookAtDrivenTurnsNode, 0xC8);
} // namespace quest
using questLookAtDrivenTurnsNode = quest::LookAtDrivenTurnsNode;
} // namespace RED4ext

// clang-format on

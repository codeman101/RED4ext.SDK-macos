#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ProximityProgressBar_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questProximityProgressBar_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    bool show; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(show))];
    float duration; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(duration))];
    bool reset; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(reset))];
    float distance; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(distance))];
    EComparisonType distanceComparisonType; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(distanceComparisonType))];
    game::EntityReference target; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(target))];
    bool isPlayerActivator; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(isPlayerActivator))];
    game::EntityReference activator; // 88
    uint8_t unk_C0[0xC0 - (0x88 + sizeof(activator))];
    CName appearance; // C0
#else
    bool show; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float duration; // 3C
    bool reset; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float distance; // 44
    EComparisonType distanceComparisonType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    game::EntityReference target; // 50
    bool isPlayerActivator; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
    game::EntityReference activator; // 90
    CName appearance; // C8
#endif
};
RED4EXT_ASSERT_SIZE(ProximityProgressBar_NodeType, 0xD0);
} // namespace quest
using questProximityProgressBar_NodeType = quest::ProximityProgressBar_NodeType;
} // namespace RED4ext

// clang-format on

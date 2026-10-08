#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Inventory_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questInventory_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    bool isPlayer; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(isPlayer))];
    TweakDBID itemID; // 74
    uint8_t unk_80[0x80 - (0x74 + sizeof(itemID))];
    CName itemTag; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(itemTag))];
    uint32_t quantity; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(quantity))];
    EComparisonType comparisonType; // 8C
#else
    game::EntityReference objectRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    TweakDBID itemID; // 74
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CName itemTag; // 80
    uint32_t quantity; // 88
    EComparisonType comparisonType; // 8C
#endif
};
RED4EXT_ASSERT_SIZE(Inventory_ConditionType, 0x90);
} // namespace quest
using questInventory_ConditionType = quest::Inventory_ConditionType;
} // namespace RED4ext

// clang-format on

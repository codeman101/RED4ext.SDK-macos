#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterEquippedItem_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterEquippedItem_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_71[0x71 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    bool isPlayer; // 71
    uint8_t unk_78[0x78 - (0x71 + sizeof(isPlayer))];
    game::EntityReference puppetRef; // 78
    uint8_t unk_B0[0xB0 - (0x78 + sizeof(puppetRef))];
    TweakDBID itemID; // B0
    uint8_t unk_B8[0xB8 - (0xB0 + sizeof(itemID))];
    CName itemTag; // B8
    uint8_t unk_C0[0xC0 - (0xB8 + sizeof(itemTag))];
    DynArray<TweakDBID> excludedTweakDBIDs; // C0
    uint8_t unk_D0[0xD0 - (0xC0 + sizeof(excludedTweakDBIDs))];
    DynArray<CName> excludedTags; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(excludedTags))];
    bool inverted; // E0
#else
    bool isPlayer; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    game::EntityReference puppetRef; // 80
    TweakDBID itemID; // B8
    CName itemTag; // C0
    DynArray<TweakDBID> excludedTweakDBIDs; // C8
    DynArray<CName> excludedTags; // D8
    bool inverted; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
#endif
};
RED4EXT_ASSERT_SIZE(CharacterEquippedItem_ConditionType, 0xF0);
} // namespace quest
using questCharacterEquippedItem_ConditionType = quest::CharacterEquippedItem_ConditionType;
} // namespace RED4ext

// clang-format on

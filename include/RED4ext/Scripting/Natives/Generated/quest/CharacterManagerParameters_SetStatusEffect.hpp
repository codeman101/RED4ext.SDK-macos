#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { struct RecordSelector; }

namespace quest
{
struct CharacterManagerParameters_SetStatusEffect : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetStatusEffect";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    bool isPlayerStatusEffectSource; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(isPlayerStatusEffectSource))];
    bool set; // 6A
    uint8_t unk_70[0x70 - (0x6A + sizeof(set))];
    Handle<quest::RecordSelector> recordSelector; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(recordSelector))];
    game::EntityReference statusEffectSourceObject; // 80
    uint8_t unk_B8[0xB8 - (0x80 + sizeof(statusEffectSourceObject))];
    TweakDBID statusEffectID; // B8
#else
    bool isPlayerStatusEffectSource; // 70
    bool set; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    Handle<quest::RecordSelector> recordSelector; // 78
    game::EntityReference statusEffectSourceObject; // 88
    TweakDBID statusEffectID; // C0
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetStatusEffect, 0xC8);
} // namespace quest
using questCharacterManagerParameters_SetStatusEffect = quest::CharacterManagerParameters_SetStatusEffect;
} // namespace RED4ext

// clang-format on

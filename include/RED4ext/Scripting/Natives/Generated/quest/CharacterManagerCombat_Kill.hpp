#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_Kill : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_Kill";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerCombat_NodeSubType>];
    bool noAnimation; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(noAnimation))];
    bool noRagdoll; // 6A
    uint8_t unk_6B[0x6B - (0x6A + sizeof(noRagdoll))];
    bool skipDefeatedState; // 6B
    uint8_t unk_6C[0x6C - (0x6B + sizeof(skipDefeatedState))];
    bool doDismemberment; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(doDismemberment))];
    float dismembermentStrenght; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(dismembermentStrenght))];
    physics::RagdollBodyPartE bodyPart; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(bodyPart))];
    ent::dismemberment::WoundTypeE woundType; // 78
#else
    bool noAnimation; // 70
    bool noRagdoll; // 71
    bool skipDefeatedState; // 72
    bool doDismemberment; // 73
    float dismembermentStrenght; // 74
    physics::RagdollBodyPartE bodyPart; // 78
    ent::dismemberment::WoundTypeE woundType; // 7C
    uint8_t unk7E[0x80 - 0x7E]; // 7E
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_Kill, 0x80);
} // namespace quest
using questCharacterManagerCombat_Kill = quest::CharacterManagerCombat_Kill;
} // namespace RED4ext

// clang-format on

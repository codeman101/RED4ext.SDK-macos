#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_ManageRagdoll : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_ManageRagdoll";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerCombat_NodeSubType>];
    bool enableRagdoll; // 69
#else
    bool enableRagdoll; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_ManageRagdoll, 0x78);
} // namespace quest
using questCharacterManagerCombat_ManageRagdoll = quest::CharacterManagerCombat_ManageRagdoll;
} // namespace RED4ext

// clang-format on

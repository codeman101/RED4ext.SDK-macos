#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/GameplayRestrictionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct GameplayRestrictions_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questGameplayRestrictions_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IGameManagerNonSignalStoppingNodeType>];
    quest::GameplayRestrictionAction action; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(action))];
    CName source; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(source))];
    DynArray<TweakDBID> restrictionIDs; // 40
#else
    quest::GameplayRestrictionAction action; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName source; // 40
    DynArray<TweakDBID> restrictionIDs; // 48
#endif
};
RED4EXT_ASSERT_SIZE(GameplayRestrictions_NodeType, 0x58);
} // namespace quest
using questGameplayRestrictions_NodeType = quest::GameplayRestrictions_NodeType;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISpawnerConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct SpawnerNotReady_ConditionType : quest::ISpawnerConditionType
{
    static constexpr const char* NAME = "questSpawnerNotReady_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISpawnerConditionType>];
    NodeRef spawnerReference; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(spawnerReference))];
    DynArray<CName> communityEntryNames; // 40
#else
    NodeRef spawnerReference; // 38
    DynArray<CName> communityEntryNames; // 40
#endif
};
RED4EXT_ASSERT_SIZE(SpawnerNotReady_ConditionType, 0x50);
} // namespace quest
using questSpawnerNotReady_ConditionType = quest::SpawnerNotReady_ConditionType;
} // namespace RED4ext

// clang-format on

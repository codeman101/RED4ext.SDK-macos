#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntryScanned_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questEntryScanned_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    TweakDBID entryID; // 70
#else
    game::EntityReference objectRef; // 38
    TweakDBID entryID; // 70
#endif
};
RED4EXT_ASSERT_SIZE(EntryScanned_ConditionType, 0x78);
} // namespace quest
using questEntryScanned_ConditionType = quest::EntryScanned_ConditionType;
} // namespace RED4ext

// clang-format on

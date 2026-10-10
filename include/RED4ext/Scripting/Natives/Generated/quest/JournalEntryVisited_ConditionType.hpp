#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournalConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct JournalEntryVisited_ConditionType : quest::IJournalConditionType
{
    static constexpr const char* NAME = "questJournalEntryVisited_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IJournalConditionType>];
    Handle<game::JournalPath> path; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(path))];
    bool visited; // 48
#else
    Handle<game::JournalPath> path; // 38
    bool visited; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(JournalEntryVisited_ConditionType, 0x50);
} // namespace quest
using questJournalEntryVisited_ConditionType = quest::JournalEntryVisited_ConditionType;
} // namespace RED4ext

// clang-format on

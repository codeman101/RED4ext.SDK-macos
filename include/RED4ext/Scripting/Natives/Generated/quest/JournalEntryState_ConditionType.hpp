#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournalConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct JournalEntryState_ConditionType : quest::IJournalConditionType
{
    static constexpr const char* NAME = "questJournalEntryState_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IJournalConditionType>];
    Handle<game::JournalPath> path; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(path))];
    game::JournalEntryState state; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(state))];
    bool inverted; // 4C
#else
    Handle<game::JournalPath> path; // 38
    game::JournalEntryState state; // 48
    bool inverted; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
#endif
};
RED4EXT_ASSERT_SIZE(JournalEntryState_ConditionType, 0x50);
} // namespace quest
using questJournalEntryState_ConditionType = quest::JournalEntryState_ConditionType;
} // namespace RED4ext

// clang-format on

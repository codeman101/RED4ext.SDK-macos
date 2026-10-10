#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct JournalNotification_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questJournalNotification_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIConditionType>];
    Handle<game::JournalPath> journalPath; // 38
#else
    Handle<game::JournalPath> journalPath; // 38
#endif
};
RED4EXT_ASSERT_SIZE(JournalNotification_ConditionType, 0x48);
} // namespace quest
using questJournalNotification_ConditionType = quest::JournalNotification_ConditionType;
} // namespace RED4ext

// clang-format on

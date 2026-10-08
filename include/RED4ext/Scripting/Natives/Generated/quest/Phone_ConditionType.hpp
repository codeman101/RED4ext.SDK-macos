#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct Phone_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questPhone_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    Handle<game::JournalPath> caller; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(caller))];
    Handle<game::JournalPath> addressee; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(addressee))];
    quest::PhoneCallPhase callPhase; // 58
#else
    Handle<game::JournalPath> caller; // 38
    Handle<game::JournalPath> addressee; // 48
    quest::PhoneCallPhase callPhase; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(Phone_ConditionType, 0x60);
} // namespace quest
using questPhone_ConditionType = quest::Phone_ConditionType;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TimeSkipMode.hpp>

namespace RED4ext
{
namespace quest
{
struct TimeSkipped_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questTimeSkipped_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIConditionType>];
    quest::TimeSkipMode mode; // 34
#else
    quest::TimeSkipMode mode; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(TimeSkipped_ConditionType, 0x40);
} // namespace quest
using questTimeSkipped_ConditionType = quest::TimeSkipped_ConditionType;
} // namespace RED4ext

// clang-format on

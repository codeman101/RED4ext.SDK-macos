#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct TimeOfDayCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workTimeOfDayCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<work::IWorkspotCondition>];
    GameTime activeAfter; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(activeAfter))];
    GameTime activeUntil; // 3C
#else
    GameTime activeAfter; // 38
    GameTime activeUntil; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(TimeOfDayCondition, 0x40);
} // namespace work
using workTimeOfDayCondition = work::TimeOfDayCondition;
} // namespace RED4ext

// clang-format on

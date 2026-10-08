#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
struct IScriptable;

namespace quest
{
struct IStatsScriptConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questIStatsScriptConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::IStatsConditionType>];
    Handle<IScriptable> scriptCondition; // 48
#else
    Handle<IScriptable> scriptCondition; // 48
    uint8_t unk58[0x60 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(IStatsScriptConditionType, 0x60);
} // namespace quest
using questIStatsScriptConditionType = quest::IStatsScriptConditionType;
} // namespace RED4ext

// clang-format on

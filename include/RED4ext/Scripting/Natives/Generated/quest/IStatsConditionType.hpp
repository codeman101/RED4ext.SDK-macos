#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct IStatsConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questIStatsConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IConditionType>];
    Handle<quest::UniversalRef> entityRef; // 38
#else
    Handle<quest::UniversalRef> entityRef; // 38
#endif
};
RED4EXT_ASSERT_SIZE(IStatsConditionType, 0x48);
} // namespace quest
using questIStatsConditionType = quest::IStatsConditionType;
} // namespace RED4ext

// clang-format on

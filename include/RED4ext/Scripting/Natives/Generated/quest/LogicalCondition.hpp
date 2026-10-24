#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Condition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LogicalOperation.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace quest
{
struct LogicalCondition : quest::Condition
{
    static constexpr const char* NAME = "questLogicalCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::Condition>];
    quest::LogicalOperation operation; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(operation))];
    DynArray<Handle<quest::IBaseCondition>> conditions; // 38
#else
    quest::LogicalOperation operation; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    DynArray<Handle<quest::IBaseCondition>> conditions; // 40
#endif
};
RED4EXT_ASSERT_SIZE(LogicalCondition, 0x50);
} // namespace quest
using questLogicalCondition = quest::LogicalCondition;
} // namespace RED4ext

// clang-format on

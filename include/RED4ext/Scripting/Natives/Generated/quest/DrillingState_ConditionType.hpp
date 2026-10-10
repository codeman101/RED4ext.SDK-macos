#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DrillingState.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct DrillingState_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questDrillingState_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    NodeRef objectRef; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(objectRef))];
    quest::DrillingState state; // 40
#else
    NodeRef objectRef; // 38
    quest::DrillingState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(DrillingState_ConditionType, 0x48);
} // namespace quest
using questDrillingState_ConditionType = quest::DrillingState_ConditionType;
} // namespace RED4ext

// clang-format on

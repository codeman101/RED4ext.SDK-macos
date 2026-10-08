#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Condition.hpp>

namespace RED4ext
{
namespace quest
{
struct NodeLoadingCondition : quest::Condition
{
    static constexpr const char* NAME = "questNodeLoadingCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::Condition>];
    NodeRef objectRef; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(objectRef))];
    bool inverted; // 40
#else
    NodeRef objectRef; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(NodeLoadingCondition, 0x48);
} // namespace quest
using questNodeLoadingCondition = quest::NodeLoadingCondition;
} // namespace RED4ext

// clang-format on

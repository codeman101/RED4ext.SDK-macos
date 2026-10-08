#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IContentConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct ContentLock_ConditionType : quest::IContentConditionType
{
    static constexpr const char* NAME = "questContentLock_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IContentConditionType>];
    bool isContentBlocked; // 34
#else
    bool isContentBlocked; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(ContentLock_ConditionType, 0x40);
} // namespace quest
using questContentLock_ConditionType = quest::ContentLock_ConditionType;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct SaveLock_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questSaveLock_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    bool inverted; // 34
#else
    bool inverted; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(SaveLock_ConditionType, 0x40);
} // namespace quest
using questSaveLock_ConditionType = quest::SaveLock_ConditionType;
} // namespace RED4ext

// clang-format on

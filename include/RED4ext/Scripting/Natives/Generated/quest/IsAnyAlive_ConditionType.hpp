#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDynamicSpawnSystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct IsAnyAlive_ConditionType : quest::IDynamicSpawnSystemConditionType
{
    static constexpr const char* NAME = "questIsAnyAlive_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IDynamicSpawnSystemConditionType>];
    CName waveTag; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(waveTag))];
    bool inverted; // 40
#else
    CName waveTag; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(IsAnyAlive_ConditionType, 0x48);
} // namespace quest
using questIsAnyAlive_ConditionType = quest::IsAnyAlive_ConditionType;
} // namespace RED4ext

// clang-format on

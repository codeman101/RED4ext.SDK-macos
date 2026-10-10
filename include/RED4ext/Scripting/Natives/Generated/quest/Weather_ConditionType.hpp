#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Weather_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questWeather_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    CName weather; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(weather))];
    bool inverted; // 40
#else
    CName weather; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(Weather_ConditionType, 0x48);
} // namespace quest
using questWeather_ConditionType = quest::Weather_ConditionType;
} // namespace RED4ext

// clang-format on

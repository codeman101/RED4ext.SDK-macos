#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VisionModeType.hpp>

namespace RED4ext
{
namespace quest
{
struct VisionMode_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questVisionMode_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    float timeInterval; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(timeInterval))];
    quest::VisionModeType visionModeType; // 38
#else
    float timeInterval; // 38
    quest::VisionModeType visionModeType; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(VisionMode_ConditionType, 0x40);
} // namespace quest
using questVisionMode_ConditionType = quest::VisionMode_ConditionType;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct SceneTier_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneTier_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    GameplayTier tier; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(tier))];
    bool isInverted; // 38
#else
    GameplayTier tier; // 38
    bool isInverted; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
#endif
};
RED4EXT_ASSERT_SIZE(SceneTier_ConditionType, 0x40);
} // namespace quest
using questSceneTier_ConditionType = quest::SceneTier_ConditionType;
} // namespace RED4ext

// clang-format on

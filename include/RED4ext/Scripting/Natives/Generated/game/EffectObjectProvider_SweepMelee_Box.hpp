#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_SweepMelee_Box : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepMelee_Box";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<game::EffectObjectProvider_SweepOverTime>];
    float playerStaticDetectionConeDistance; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(playerStaticDetectionConeDistance))];
    float playerStaticDetectionConeStartAngle; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(playerStaticDetectionConeStartAngle))];
    float playerStaticDetectionConeEndAngle; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(playerStaticDetectionConeEndAngle))];
    bool playerUseCameraForObstructionChecks; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(playerUseCameraForObstructionChecks))];
    bool checkMeleeInvulnerability; // 75
#else
    float playerStaticDetectionConeDistance; // 68
    float playerStaticDetectionConeStartAngle; // 6C
    float playerStaticDetectionConeEndAngle; // 70
    bool playerUseCameraForObstructionChecks; // 74
    bool checkMeleeInvulnerability; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepMelee_Box, 0x78);
} // namespace game
using gameEffectObjectProvider_SweepMelee_Box = game::EffectObjectProvider_SweepMelee_Box;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_GroundSlamEffects : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_GroundSlamEffects";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    RaRef<world::Effect> groundEffect; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(groundEffect))];
    RaRef<world::Effect> waterEffect; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(waterEffect))];
    RaRef<world::Effect> earthquakeLevel1; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(earthquakeLevel1))];
    RaRef<world::Effect> earthquakeLevel2; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(earthquakeLevel2))];
    float earthquakeLevel1ChargeThreshold; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(earthquakeLevel1ChargeThreshold))];
    float earthquakeLevel2ChargeThreshold; // 6C
#else
    RaRef<world::Effect> groundEffect; // 48
    RaRef<world::Effect> waterEffect; // 50
    RaRef<world::Effect> earthquakeLevel1; // 58
    RaRef<world::Effect> earthquakeLevel2; // 60
    float earthquakeLevel1ChargeThreshold; // 68
    float earthquakeLevel2ChargeThreshold; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_GroundSlamEffects, 0x70);
} // namespace game
using gameEffectExecutor_GroundSlamEffects = game::EffectExecutor_GroundSlamEffects;
} // namespace RED4ext

// clang-format on

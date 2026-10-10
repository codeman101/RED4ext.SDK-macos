#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CParticleSystem;

namespace world
{
struct StaticParticleNode : world::Node
{
    static constexpr const char* NAME = "worldStaticParticleNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    float emissionRate; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(emissionRate))];
    RaRef<CParticleSystem> particleSystem; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(particleSystem))];
    float forcedAutoHideDistance; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(forcedAutoHideDistance))];
    float forcedAutoHideRange; // 44
#else
    float emissionRate; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    RaRef<CParticleSystem> particleSystem; // 40
    float forcedAutoHideDistance; // 48
    float forcedAutoHideRange; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(StaticParticleNode, 0x50);
} // namespace world
using worldStaticParticleNode = world::StaticParticleNode;
} // namespace RED4ext

// clang-format on

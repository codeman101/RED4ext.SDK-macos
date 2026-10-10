#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct StaticFogVolumeNode : world::Node
{
    static constexpr const char* NAME = "worldStaticFogVolumeNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    float blendFalloff; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(blendFalloff))];
    float densityFalloff; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(densityFalloff))];
    float densityFactor; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(densityFactor))];
    float streamingDistance; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(streamingDistance))];
    float ambientScale; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(ambientScale))];
    float absorption; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(absorption))];
    Color color; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(color))];
    uint8_t priority; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(priority))];
    bool absolute; // 51
    uint8_t unk_52[0x52 - (0x51 + sizeof(absolute))];
    bool applyHeightFalloff; // 52
    uint8_t unk_53[0x53 - (0x52 + sizeof(applyHeightFalloff))];
    EEnvColorGroup envColorGroup; // 53
    uint8_t unk_54[0x54 - (0x53 + sizeof(envColorGroup))];
    rend::LightChannel lightChannels; // 54
#else
    float blendFalloff; // 38
    float densityFalloff; // 3C
    float densityFactor; // 40
    float streamingDistance; // 44
    float ambientScale; // 48
    float absorption; // 4C
    Color color; // 50
    uint8_t priority; // 54
    bool absolute; // 55
    bool applyHeightFalloff; // 56
    EEnvColorGroup envColorGroup; // 57
    rend::LightChannel lightChannels; // 58
    uint8_t unk5A[0x60 - 0x5A]; // 5A
#endif
};
RED4EXT_ASSERT_SIZE(StaticFogVolumeNode, 0x60);
} // namespace world
using worldStaticFogVolumeNode = world::StaticFogVolumeNode;
} // namespace RED4ext

// clang-format on

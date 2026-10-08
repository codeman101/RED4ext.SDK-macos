#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct LightChannelVolumeNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldLightChannelVolumeNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    rend::LightChannel channels; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(channels))];
    float streamingDistanceFactor; // 64
#else
    rend::LightChannel channels; // 60
    uint8_t unk62[0x64 - 0x62]; // 62
    float streamingDistanceFactor; // 64
#endif
};
RED4EXT_ASSERT_SIZE(LightChannelVolumeNode, 0x68);
} // namespace world
using worldLightChannelVolumeNode = world::LightChannelVolumeNode;
} // namespace RED4ext

// clang-format on

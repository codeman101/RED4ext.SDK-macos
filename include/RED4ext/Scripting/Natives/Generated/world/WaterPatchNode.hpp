#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WaterPatchNodeType.hpp>

namespace RED4ext
{
namespace world
{
struct WaterPatchNode : world::MeshNode
{
    static constexpr const char* NAME = "worldWaterPatchNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::MeshNode>];
    world::WaterPatchNodeType type; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(type))];
    float depth; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(depth))];
    bool generateNavmesh; // 74
#else
    world::WaterPatchNodeType type; // 60
    float depth; // 70
    bool generateNavmesh; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
#endif
};
RED4EXT_ASSERT_SIZE(WaterPatchNode, 0x78);
} // namespace world
using worldWaterPatchNode = world::WaterPatchNode;
} // namespace RED4ext

// clang-format on

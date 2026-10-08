#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct StaticOccluderMeshNode : world::Node
{
    static constexpr const char* NAME = "worldStaticOccluderMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CMesh> mesh; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(mesh))];
    Color color; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(color))];
    uint8_t autohideDistanceScale; // 44
    uint8_t unk_45[0x45 - (0x44 + sizeof(autohideDistanceScale))];
    vis::WorldOccluderType occluderType; // 45
#else
    RaRef<CMesh> mesh; // 38
    Color color; // 40
    uint8_t autohideDistanceScale; // 44
    vis::WorldOccluderType occluderType; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
#endif
};
RED4EXT_ASSERT_SIZE(StaticOccluderMeshNode, 0x48);
} // namespace world
using worldStaticOccluderMeshNode = world::StaticOccluderMeshNode;
} // namespace RED4ext

// clang-format on

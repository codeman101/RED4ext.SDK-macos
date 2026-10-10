#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace world
{
struct DecorationMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldDecorationMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::MeshNode>];
    Handle<physics::FilterData> filterData; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(filterData))];
    physics::FilterDataSource filterDataSource; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(filterDataSource))];
    bool startAsleep; // 71
#else
    Handle<physics::FilterData> filterData; // 60
    physics::FilterDataSource filterDataSource; // 70
    bool startAsleep; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
#endif
};
RED4EXT_ASSERT_SIZE(DecorationMeshNode, 0x78);
} // namespace world
using worldDecorationMeshNode = world::DecorationMeshNode;
} // namespace RED4ext

// clang-format on

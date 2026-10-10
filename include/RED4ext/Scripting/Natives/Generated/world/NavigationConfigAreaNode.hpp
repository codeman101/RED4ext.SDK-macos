#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenSamplingDensity.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct NavigationConfigAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldNavigationConfigAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    bool generateVariantsNavmesh; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(generateVariantsNavmesh))];
    bool smoothWalkableAreas; // 61
    uint8_t unk_62[0x62 - (0x61 + sizeof(smoothWalkableAreas))];
    bool generateCrouchableAreas; // 62
    uint8_t unk_63[0x63 - (0x62 + sizeof(generateCrouchableAreas))];
    NavGenSamplingDensity detailSamplingDensity; // 63
#else
    bool generateVariantsNavmesh; // 60
    bool smoothWalkableAreas; // 61
    bool generateCrouchableAreas; // 62
    NavGenSamplingDensity detailSamplingDensity; // 63
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(NavigationConfigAreaNode, 0x68);
} // namespace world
using worldNavigationConfigAreaNode = world::NavigationConfigAreaNode;
} // namespace RED4ext

// clang-format on

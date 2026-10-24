#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeOrientationChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeRoadAdjustmentFactorChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeSpeedChangeSection.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeSpeedRestriction.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct SpeedSplineNode : world::SplineNode
{
    static constexpr const char* NAME = "worldSpeedSplineNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::SplineNode>];
    DynArray<world::SpeedSplineNodeSpeedChangeSection> speedChangeSections; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(speedChangeSections))];
    DynArray<world::SpeedSplineNodeOrientationChangeSection> orientationChangeSections; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(orientationChangeSections))];
    DynArray<world::SpeedSplineNodeRoadAdjustmentFactorChangeSection> roadAdjustmentFactorChangeSections; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(roadAdjustmentFactorChangeSections))];
    bool ignoreTerrain; // A0
    uint8_t unk_A1[0xA1 - (0xA0 + sizeof(ignoreTerrain))];
    bool useDeprecated; // A1
    uint8_t unk_A8[0xA8 - (0xA1 + sizeof(useDeprecated))];
    DynArray<world::SpeedSplineNodeSpeedRestriction> deprecatedSpeedRestrictions; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(deprecatedSpeedRestrictions))];
    float deprecatedDefaultSpeed; // B8
    uint8_t unk_BC[0xBC - (0xB8 + sizeof(deprecatedDefaultSpeed))];
    float deprecatedDefaultAdjustTime; // BC
#else
    DynArray<world::SpeedSplineNodeSpeedChangeSection> speedChangeSections; // 70
    DynArray<world::SpeedSplineNodeOrientationChangeSection> orientationChangeSections; // 80
    DynArray<world::SpeedSplineNodeRoadAdjustmentFactorChangeSection> roadAdjustmentFactorChangeSections; // 90
    bool ignoreTerrain; // A0
    bool useDeprecated; // A1
    uint8_t unkA2[0xA8 - 0xA2]; // A2
    DynArray<world::SpeedSplineNodeSpeedRestriction> deprecatedSpeedRestrictions; // A8
    float deprecatedDefaultSpeed; // B8
    float deprecatedDefaultAdjustTime; // BC
    uint8_t unkC0[0xC8 - 0xC0]; // C0
#endif
};
RED4EXT_ASSERT_SIZE(SpeedSplineNode, 0xC8);
} // namespace world
using worldSpeedSplineNode = world::SpeedSplineNode;
} // namespace RED4ext

// clang-format on

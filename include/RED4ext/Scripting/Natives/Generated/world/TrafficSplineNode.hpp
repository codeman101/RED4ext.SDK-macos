#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneExitDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSourceNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSplineNodeUsage.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSplineNode : world::TrafficSourceNode
{
    static constexpr const char* NAME = "worldTrafficSplineNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TrafficSourceNode>];
    DynArray<world::TrafficLaneExitDefinition> outLanes; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(outLanes))];
    DynArray<world::TrafficLightDefinition> lights; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(lights))];
    DynArray<CName> markings; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(markings))];
    float pathSamplingDistance; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(pathSamplingDistance))];
    world::TrafficSplineNodeUsage usage; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(usage))];
    float maxSlotMaxSpeed; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(maxSlotMaxSpeed))];
    float width; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(width))];
    float autoConnectionRange; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(autoConnectionRange))];
    float laneSamplingAngle; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(laneSamplingAngle))];
    bool bidirectional; // B8
    uint8_t unk_B9[0xB9 - (0xB8 + sizeof(bidirectional))];
    bool neverDeadEnd; // B9
    uint8_t unk_BA[0xBA - (0xB9 + sizeof(neverDeadEnd))];
    bool trafficDisabled; // BA
    uint8_t unk_BB[0xBB - (0xBA + sizeof(trafficDisabled))];
    bool noAIDriving; // BB
    uint8_t unk_BC[0xBC - (0xBB + sizeof(noAIDriving))];
    bool noAutodrive; // BC
#else
    DynArray<world::TrafficLaneExitDefinition> outLanes; // 70
    DynArray<world::TrafficLightDefinition> lights; // 80
    DynArray<CName> markings; // 90
    float pathSamplingDistance; // A0
    world::TrafficSplineNodeUsage usage; // A4
    float maxSlotMaxSpeed; // A8
    float width; // AC
    float autoConnectionRange; // B0
    float laneSamplingAngle; // B4
    bool bidirectional; // B8
    bool neverDeadEnd; // B9
    bool trafficDisabled; // BA
    bool noAIDriving; // BB
    bool noAutodrive; // BC
    uint8_t unkBD[0xC0 - 0xBD]; // BD
#endif
};
RED4EXT_ASSERT_SIZE(TrafficSplineNode, 0xC0);
} // namespace world
using worldTrafficSplineNode = world::TrafficSplineNode;
} // namespace RED4ext

// clang-format on

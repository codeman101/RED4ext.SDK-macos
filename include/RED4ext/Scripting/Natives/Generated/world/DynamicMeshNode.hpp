#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicTrafficSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct DynamicMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldDynamicMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_5A[0x5A - ::RED4ext::Detail::DataSize<world::MeshNode>];
    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 5A
    uint8_t unk_5C[0x5C - (0x5A + sizeof(dynamicTrafficSetting))];
    NavGenNavigationSetting navigationSetting; // 5C
    uint8_t unk_5E[0x5E - (0x5C + sizeof(navigationSetting))];
    bool startAsleep; // 5E
    uint8_t unk_5F[0x5F - (0x5E + sizeof(startAsleep))];
    bool isDebris; // 5F
    uint8_t unk_60[0x60 - (0x5F + sizeof(isDebris))];
    bool initialGuess; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(initialGuess))];
    bool useMeshNavmeshSettings; // 61
#else
    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 60
    NavGenNavigationSetting navigationSetting; // 62
    bool startAsleep; // 64
    bool isDebris; // 65
    bool initialGuess; // 66
    bool useMeshNavmeshSettings; // 67
#endif
};
RED4EXT_ASSERT_SIZE(DynamicMeshNode, 0x68);
} // namespace world
using worldDynamicMeshNode = world::DynamicMeshNode;
} // namespace RED4ext

// clang-format on

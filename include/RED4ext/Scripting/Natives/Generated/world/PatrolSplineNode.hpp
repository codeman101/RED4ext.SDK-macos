#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world { struct PatrolSplinePointDefinition; }
namespace world { struct TrafficSpotDefinition; }

namespace world
{
struct PatrolSplineNode : world::SplineNode
{
    static constexpr const char* NAME = "worldPatrolSplineNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::SplineNode>];
    DynArray<Handle<world::TrafficSpotDefinition>> spots; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(spots))];
    DynArray<NodeRef> patrolPoints; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(patrolPoints))];
    DynArray<Handle<world::PatrolSplinePointDefinition>> patrolPointDefs; // 90
#else
    DynArray<Handle<world::TrafficSpotDefinition>> spots; // 70
    DynArray<NodeRef> patrolPoints; // 80
    DynArray<Handle<world::PatrolSplinePointDefinition>> patrolPointDefs; // 90
#endif
};
RED4EXT_ASSERT_SIZE(PatrolSplineNode, 0xA0);
} // namespace world
using worldPatrolSplineNode = world::PatrolSplineNode;
} // namespace RED4ext

// clang-format on

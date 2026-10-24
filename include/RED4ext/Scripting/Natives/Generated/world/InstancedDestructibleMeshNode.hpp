#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TransformBuffer.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world
{
struct InstancedDestructibleMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldInstancedDestructibleMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_5A[0x5A - ::RED4ext::Detail::DataSize<world::MeshNode>];
    NavGenNavigationSetting navigationSetting; // 5A
    uint8_t unk_5C[0x5C - (0x5A + sizeof(navigationSetting))];
    physics::SimulationType simulationType; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(simulationType))];
    Handle<physics::FilterData> filterData; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(filterData))];
    physics::FilterDataSource filterDataSource; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(filterDataSource))];
    RaRef<world::Effect> fracturingEffect; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(fracturingEffect))];
    RaRef<world::Effect> idleEffect; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(idleEffect))];
    RaRef<CMesh> staticMesh; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(staticMesh))];
    CName staticMeshAppearance; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(staticMeshAppearance))];
    float impulseToDamage; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(impulseToDamage))];
    float damageThreshold; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(damageThreshold))];
    float damageEndurance; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(damageEndurance))];
    bool useAggregate; // A4
    uint8_t unk_A5[0xA5 - (0xA4 + sizeof(useAggregate))];
    bool enableSelfCollisionInAggregate; // A5
    uint8_t unk_A6[0xA6 - (0xA5 + sizeof(enableSelfCollisionInAggregate))];
    bool startInactive; // A6
    uint8_t unk_A7[0xA7 - (0xA6 + sizeof(startInactive))];
    bool turnDynamicOnImpulse; // A7
    uint8_t unk_A8[0xA8 - (0xA7 + sizeof(turnDynamicOnImpulse))];
    bool isDestructible; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(isDestructible))];
    bool accumulateDamage; // A9
    uint8_t unk_AA[0xAA - (0xA9 + sizeof(accumulateDamage))];
    bool isPierceable; // AA
    uint8_t unk_AB[0xAB - (0xAA + sizeof(isPierceable))];
    bool isWorkspot; // AB
    uint8_t unk_AC[0xAC - (0xAB + sizeof(isWorkspot))];
    bool useMeshNavmeshSettings; // AC
    uint8_t unk_AE[0xAE - (0xAC + sizeof(useMeshNavmeshSettings))];
    uint16_t systemsToNotifyFlags; // AE
    uint8_t unk_B0[0xB0 - (0xAE + sizeof(systemsToNotifyFlags))];
    DynArray<Transform> instanceTransforms; // B0
#else
    NavGenNavigationSetting navigationSetting; // 60
    physics::SimulationType simulationType; // 62
    uint8_t unk63[0x68 - 0x63]; // 63
    Handle<physics::FilterData> filterData; // 68
    physics::FilterDataSource filterDataSource; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    RaRef<world::Effect> fracturingEffect; // 80
    RaRef<world::Effect> idleEffect; // 88
    RaRef<CMesh> staticMesh; // 90
    CName staticMeshAppearance; // 98
    float impulseToDamage; // A0
    float damageThreshold; // A4
    float damageEndurance; // A8
    bool useAggregate; // AC
    bool enableSelfCollisionInAggregate; // AD
    bool startInactive; // AE
    bool turnDynamicOnImpulse; // AF
    bool isDestructible; // B0
    bool accumulateDamage; // B1
    bool isPierceable; // B2
    bool isWorkspot; // B3
    bool useMeshNavmeshSettings; // B4
    uint8_t unkB5[0xB6 - 0xB5]; // B5
    uint16_t systemsToNotifyFlags; // B6
    DynArray<Transform> instanceTransforms; // B8
#endif
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNode, 0xC8);
} // namespace world
using worldInstancedDestructibleMeshNode = world::InstancedDestructibleMeshNode;
} // namespace RED4ext

// clang-format on

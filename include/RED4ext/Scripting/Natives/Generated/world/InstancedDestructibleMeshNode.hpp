#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
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
    uint8_t unk_60[0x60 - (0x5A + sizeof(navigationSetting))];
    world::TransformBuffer cookedInstanceTransforms; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(cookedInstanceTransforms))];
    physics::SimulationType simulationType; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(simulationType))];
    Handle<physics::FilterData> filterData; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(filterData))];
    physics::FilterDataSource filterDataSource; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(filterDataSource))];
    RaRef<world::Effect> fracturingEffect; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(fracturingEffect))];
    RaRef<world::Effect> idleEffect; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(idleEffect))];
    RaRef<CMesh> staticMesh; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(staticMesh))];
    CName staticMeshAppearance; // B0
    uint8_t unk_B8[0xB8 - (0xB0 + sizeof(staticMeshAppearance))];
    float impulseToDamage; // B8
    uint8_t unk_BC[0xBC - (0xB8 + sizeof(impulseToDamage))];
    float damageThreshold; // BC
    uint8_t unk_C0[0xC0 - (0xBC + sizeof(damageThreshold))];
    float damageEndurance; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(damageEndurance))];
    bool useAggregate; // C4
    uint8_t unk_C5[0xC5 - (0xC4 + sizeof(useAggregate))];
    bool enableSelfCollisionInAggregate; // C5
    uint8_t unk_C6[0xC6 - (0xC5 + sizeof(enableSelfCollisionInAggregate))];
    bool startInactive; // C6
    uint8_t unk_C7[0xC7 - (0xC6 + sizeof(startInactive))];
    bool turnDynamicOnImpulse; // C7
    uint8_t unk_C8[0xC8 - (0xC7 + sizeof(turnDynamicOnImpulse))];
    bool isDestructible; // C8
    uint8_t unk_C9[0xC9 - (0xC8 + sizeof(isDestructible))];
    bool accumulateDamage; // C9
    uint8_t unk_CA[0xCA - (0xC9 + sizeof(accumulateDamage))];
    bool isPierceable; // CA
    uint8_t unk_CB[0xCB - (0xCA + sizeof(isPierceable))];
    bool isWorkspot; // CB
    uint8_t unk_CC[0xCC - (0xCB + sizeof(isWorkspot))];
    bool useMeshNavmeshSettings; // CC
    uint8_t unk_CE[0xCE - (0xCC + sizeof(useMeshNavmeshSettings))];
    uint16_t systemsToNotifyFlags; // CE
    uint8_t unk_D0[0xD0 - (0xCE + sizeof(systemsToNotifyFlags))];
    DynArray<Transform> instanceTransforms; // D0
#else
    NavGenNavigationSetting navigationSetting; // 60
    uint8_t unk62[0x68 - 0x62]; // 62
    world::TransformBuffer cookedInstanceTransforms; // 68
    physics::SimulationType simulationType; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    Handle<physics::FilterData> filterData; // 88
    physics::FilterDataSource filterDataSource; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
    RaRef<world::Effect> fracturingEffect; // A0
    RaRef<world::Effect> idleEffect; // A8
    RaRef<CMesh> staticMesh; // B0
    CName staticMeshAppearance; // B8
    float impulseToDamage; // C0
    float damageThreshold; // C4
    float damageEndurance; // C8
    bool useAggregate; // CC
    bool enableSelfCollisionInAggregate; // CD
    bool startInactive; // CE
    bool turnDynamicOnImpulse; // CF
    bool isDestructible; // D0
    bool accumulateDamage; // D1
    bool isPierceable; // D2
    bool isWorkspot; // D3
    bool useMeshNavmeshSettings; // D4
    uint8_t unkD5[0xD6 - 0xD5]; // D5
    uint16_t systemsToNotifyFlags; // D6
    DynArray<Transform> instanceTransforms; // D8
#endif
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNode, 0xE8);
} // namespace world
using worldInstancedDestructibleMeshNode = world::InstancedDestructibleMeshNode;
} // namespace RED4ext

// clang-format on

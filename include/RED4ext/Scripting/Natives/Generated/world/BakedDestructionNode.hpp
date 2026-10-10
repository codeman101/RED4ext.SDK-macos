#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world
{
struct BakedDestructionNode : world::MeshNode
{
    static constexpr const char* NAME = "worldBakedDestructionNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::MeshNode>];
    Handle<physics::FilterData> filterData; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(filterData))];
    RaRef<world::Effect> destructionEffect; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(destructionEffect))];
    RaRef<CMesh> meshFractured; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(meshFractured))];
    CName audioMetadata; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(audioMetadata))];
    CName meshFracturedAppearance; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(meshFracturedAppearance))];
    physics::FilterDataSource filterDataSource; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(filterDataSource))];
    float damageThreshold; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(damageThreshold))];
    float damageEndurance; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(damageEndurance))];
    float impulseToDamage; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(impulseToDamage))];
    float contactToDamage; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(contactToDamage))];
    float numFrames; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(numFrames))];
    float frameRate; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(frameRate))];
    physics::FractureFieldType fractureFieldMask; // AC
    uint8_t unk_AE[0xAE - (0xAC + sizeof(fractureFieldMask))];
    bool playOnlyOnce; // AE
    uint8_t unk_AF[0xAF - (0xAE + sizeof(playOnlyOnce))];
    bool restartOnTrigger; // AF
    uint8_t unk_B0[0xB0 - (0xAF + sizeof(restartOnTrigger))];
    bool disableCollidersOnTrigger; // B0
    uint8_t unk_B1[0xB1 - (0xB0 + sizeof(disableCollidersOnTrigger))];
    bool useMeshNavmeshSettings; // B1
    uint8_t unk_B2[0xB2 - (0xB1 + sizeof(useMeshNavmeshSettings))];
    bool accumulateDamage; // B2
    uint8_t unk_B4[0xB4 - (0xB2 + sizeof(accumulateDamage))];
    NavGenNavigationSetting navigationSetting; // B4
#else
    Handle<physics::FilterData> filterData; // 60
    RaRef<world::Effect> destructionEffect; // 70
    RaRef<CMesh> meshFractured; // 78
    CName audioMetadata; // 80
    CName meshFracturedAppearance; // 88
    physics::FilterDataSource filterDataSource; // 90
    uint8_t unk91[0x94 - 0x91]; // 91
    float damageThreshold; // 94
    float damageEndurance; // 98
    float impulseToDamage; // 9C
    float contactToDamage; // A0
    float numFrames; // A4
    float frameRate; // A8
    physics::FractureFieldType fractureFieldMask; // AC
    bool playOnlyOnce; // AE
    bool restartOnTrigger; // AF
    bool disableCollidersOnTrigger; // B0
    bool useMeshNavmeshSettings; // B1
    bool accumulateDamage; // B2
    uint8_t unkB3[0xB4 - 0xB3]; // B3
    NavGenNavigationSetting navigationSetting; // B4
    uint8_t unkB6[0xB8 - 0xB6]; // B6
#endif
};
RED4EXT_ASSERT_SIZE(BakedDestructionNode, 0xB8);
} // namespace world
using worldBakedDestructionNode = world::BakedDestructionNode;
} // namespace RED4ext

// clang-format on

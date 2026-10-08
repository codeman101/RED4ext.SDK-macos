#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct PhysicalDestructionNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalDestructionNode";
    static constexpr const char* ALIAS = "PhysicalDestructionNode";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    physics::DestructionParams destructionParams; // 34
    uint8_t unk_88[0x88 - (0x34 + sizeof(destructionParams))];
    DynArray<physics::DestructionLevelData> destructionLevelData; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(destructionLevelData))];
    RaRef<CMesh> mesh; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(mesh))];
    CName meshAppearance; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(meshAppearance))];
    CName audioMetadata; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(audioMetadata))];
    float forceAutoHideDistance; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(forceAutoHideDistance))];
    int32_t forceLODLevel; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(forceLODLevel))];
    NavGenNavigationSetting navigationSetting; // B8
    uint8_t unk_BA[0xBA - (0xB8 + sizeof(navigationSetting))];
    uint16_t systemsToNotifyFlags; // BA
    uint8_t unk_BC[0xBC - (0xBA + sizeof(systemsToNotifyFlags))];
    bool useMeshNavmeshSettings; // BC
#else
    physics::DestructionParams destructionParams; // 38
    DynArray<physics::DestructionLevelData> destructionLevelData; // 88
    RaRef<CMesh> mesh; // 98
    CName meshAppearance; // A0
    CName audioMetadata; // A8
    float forceAutoHideDistance; // B0
    int32_t forceLODLevel; // B4
    NavGenNavigationSetting navigationSetting; // B8
    uint16_t systemsToNotifyFlags; // BA
    bool useMeshNavmeshSettings; // BC
    uint8_t unkBD[0xC0 - 0xBD]; // BD
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNode, 0xC0);
} // namespace world
using worldPhysicalDestructionNode = world::PhysicalDestructionNode;
using PhysicalDestructionNode = world::PhysicalDestructionNode;
} // namespace RED4ext

// clang-format on

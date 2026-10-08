#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RenderProxyTransformBuffer.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct InstancedMeshNode : world::Node
{
    static constexpr const char* NAME = "worldInstancedMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    world::RenderProxyTransformBuffer worldTransformsBuffer; // 38
    uint8_t unk_80[0x80 - (0x38 + sizeof(worldTransformsBuffer))];
    RaRef<CMesh> mesh; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(mesh))];
    CName meshAppearance; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(meshAppearance))];
    uint32_t meshLODScales; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(meshLODScales))];
    vis::WorldOccluderType occluderType; // 94
    uint8_t unk_95[0x95 - (0x94 + sizeof(occluderType))];
    uint8_t occluderAutohideDistanceScale; // 95
    uint8_t unk_97[0x97 - (0x95 + sizeof(occluderAutohideDistanceScale))];
    shadows::ShadowCastingMode castShadows; // 97
    uint8_t unk_98[0x98 - (0x97 + sizeof(castShadows))];
    shadows::ShadowCastingMode castLocalShadows; // 98
    uint8_t unk_99[0x99 - (0x98 + sizeof(castLocalShadows))];
    uint8_t version; // 99
#else
    world::RenderProxyTransformBuffer worldTransformsBuffer; // 38
    uint8_t unk50[0x80 - 0x50]; // 50
    RaRef<CMesh> mesh; // 80
    CName meshAppearance; // 88
    uint32_t meshLODScales; // 90
    vis::WorldOccluderType occluderType; // 94
    uint8_t occluderAutohideDistanceScale; // 95
    uint8_t unk96[0x97 - 0x96]; // 96
    shadows::ShadowCastingMode castShadows; // 97
    shadows::ShadowCastingMode castLocalShadows; // 98
    uint8_t version; // 99
    uint8_t unk9A[0xA0 - 0x9A]; // 9A
#endif
};
RED4EXT_ASSERT_SIZE(InstancedMeshNode, 0xA0);
} // namespace world
using worldInstancedMeshNode = world::InstancedMeshNode;
} // namespace RED4ext

// clang-format on

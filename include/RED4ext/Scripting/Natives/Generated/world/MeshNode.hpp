#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct MeshNode : world::Node
{
    static constexpr const char* NAME = "worldMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CMesh> mesh; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(mesh))];
    CName meshAppearance; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(meshAppearance))];
    float forceAutoHideDistance; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(forceAutoHideDistance))];
    uint32_t lodLevelScales; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(lodLevelScales))];
    vis::WorldOccluderType occluderType; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(occluderType))];
    uint8_t occluderAutohideDistanceScale; // 51
    uint8_t unk_52[0x52 - (0x51 + sizeof(occluderAutohideDistanceScale))];
    RenderSceneLayerMask renderSceneLayerMask; // 52
    uint8_t unk_53[0x53 - (0x52 + sizeof(renderSceneLayerMask))];
    shadows::ShadowCastingMode castShadows; // 53
    uint8_t unk_54[0x54 - (0x53 + sizeof(castShadows))];
    shadows::ShadowCastingMode castLocalShadows; // 54
    uint8_t unk_55[0x55 - (0x54 + sizeof(castLocalShadows))];
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 55
    uint8_t unk_56[0x56 - (0x55 + sizeof(castRayTracedGlobalShadows))];
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 56
    uint8_t unk_57[0x57 - (0x56 + sizeof(castRayTracedLocalShadows))];
    bool windImpulseEnabled; // 57
    uint8_t unk_58[0x58 - (0x57 + sizeof(windImpulseEnabled))];
    bool removeFromRainMap; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(removeFromRainMap))];
    uint8_t version; // 59
#else
    RaRef<CMesh> mesh; // 38
    CName meshAppearance; // 40
    float forceAutoHideDistance; // 48
    uint32_t lodLevelScales; // 4C
    vis::WorldOccluderType occluderType; // 50
    uint8_t occluderAutohideDistanceScale; // 51
    RenderSceneLayerMask renderSceneLayerMask; // 52
    shadows::ShadowCastingMode castShadows; // 53
    shadows::ShadowCastingMode castLocalShadows; // 54
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 55
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 56
    bool windImpulseEnabled; // 57
    bool removeFromRainMap; // 58
    uint8_t version; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
#endif
};
RED4EXT_ASSERT_SIZE(MeshNode, 0x60);
} // namespace world
using worldMeshNode = world::MeshNode;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabInteriorMapContribution.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabMinimapContribution.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabOwnership.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingImportance.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingOcclusion.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshBuildParams.hpp>

namespace RED4ext
{
struct CMesh;
struct Multilayer_Setup;
namespace world { struct AutoFoliageMapping; }
namespace world { struct EnvironmentDefinition; }
namespace world { struct NodesGroup; }
namespace world { struct PrefabMetadata; }
namespace world { struct PrefabVariantsList; }

namespace world
{
struct __declspec(align(0x10)) Prefab : res::StreamedResource
{
    static constexpr const char* NAME = "worldPrefab";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<res::StreamedResource>];
    RaRef<world::EnvironmentDefinition> environmentDefinition; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(environmentDefinition))];
    RaRef<Multilayer_Setup> terrainMultilayerSetup; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(terrainMultilayerSetup))];
    RaRef<world::AutoFoliageMapping> foliageBrushToTerrainLayerMapping; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(foliageBrushToTerrainLayerMapping))];
    RaRef<CMesh> proxyMesh; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(proxyMesh))];
    Vector3 proxyScale; // 60
    uint8_t unk_6C[0x6C - (0x60 + sizeof(proxyScale))];
    float maxProxyStreamingDistance; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(maxProxyStreamingDistance))];
    float proxyDistanceFactor; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(proxyDistanceFactor))];
    float averageNodeDiagonal; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(averageNodeDiagonal))];
    RaRef<world::Prefab> booleanProxyHelper; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(booleanProxyHelper))];
    RaRef<world::Prefab> proxyLimiterHelper; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(proxyLimiterHelper))];
    RaRef<CMesh> customProxyMeshHelper; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(customProxyMeshHelper))];
    Handle<world::PrefabVariantsList> defaultVariants; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(defaultVariants))];
    Handle<world::NodesGroup> mainGroup; // A0
    uint8_t unk_E0[0xE0 - (0xA0 + sizeof(mainGroup))];
    world::ProxyMeshBuildParams proxyMeshBuildParams; // E0
    uint8_t unk_1C8[0x1C8 - (0xE0 + sizeof(proxyMeshBuildParams))];
    world::PrefabOwnership teamOwnership; // 1C8
    uint8_t unk_1C9[0x1C9 - (0x1C8 + sizeof(teamOwnership))];
    world::PrefabStreamingOcclusion streamingOcclusion; // 1C9
    uint8_t unk_1CA[0x1CA - (0x1C9 + sizeof(streamingOcclusion))];
    world::PrefabStreamingImportance streamingImportance; // 1CA
    uint8_t unk_1CB[0x1CB - (0x1CA + sizeof(streamingImportance))];
    world::PrefabType type; // 1CB
    uint8_t unk_1CC[0x1CC - (0x1CB + sizeof(type))];
    bool isLocked; // 1CC
    uint8_t unk_1D0[0x1D0 - (0x1CC + sizeof(isLocked))];
    Box maxBounds; // 1D0
    uint8_t unk_1F0[0x1F0 - (0x1D0 + sizeof(maxBounds))];
    bool isMerged; // 1F0
    uint8_t unk_1F1[0x1F1 - (0x1F0 + sizeof(isMerged))];
    bool isProxyMeshOnly; // 1F1
    uint8_t unk_1F2[0x1F2 - (0x1F1 + sizeof(isProxyMeshOnly))];
    bool boostInnerNodesToProxyDistance; // 1F2
    uint8_t unk_1F3[0x1F3 - (0x1F2 + sizeof(boostInnerNodesToProxyDistance))];
    bool overrideStreamingPosWithBBoxCenter; // 1F3
    uint8_t unk_1F5[0x1F5 - (0x1F3 + sizeof(overrideStreamingPosWithBBoxCenter))];
    bool ignoreMeshEmbeddedOccluders; // 1F5
    uint8_t unk_1F6[0x1F6 - (0x1F5 + sizeof(ignoreMeshEmbeddedOccluders))];
    bool ignoreAllOccluders; // 1F6
    uint8_t unk_1F7[0x1F7 - (0x1F6 + sizeof(ignoreAllOccluders))];
    bool isTerrainPrefab; // 1F7
    uint8_t unk_1F8[0x1F8 - (0x1F7 + sizeof(isTerrainPrefab))];
    bool excludeOnConsole; // 1F8
    uint8_t unk_1F9[0x1F9 - (0x1F8 + sizeof(excludeOnConsole))];
    bool excludeOnNextGenConsoles; // 1F9
    uint8_t unk_1FA[0x1FA - (0x1F9 + sizeof(excludeOnNextGenConsoles))];
    world::PrefabMinimapContribution minimapContribution; // 1FA
    uint8_t unk_1FB[0x1FB - (0x1FA + sizeof(minimapContribution))];
    world::PrefabInteriorMapContribution interiorMapContribution; // 1FB
    uint8_t unk_210[0x210 - (0x1FB + sizeof(interiorMapContribution))];
    CRUID prefabUniqueId; // 210
    uint8_t unk_370[0x370 - (0x210 + sizeof(prefabUniqueId))];
    DynArray<Handle<world::PrefabMetadata>> metadataArray; // 370
#else
    RaRef<world::EnvironmentDefinition> environmentDefinition; // 40
    RaRef<Multilayer_Setup> terrainMultilayerSetup; // 48
    RaRef<world::AutoFoliageMapping> foliageBrushToTerrainLayerMapping; // 50
    RaRef<CMesh> proxyMesh; // 58
    Vector3 proxyScale; // 60
    float maxProxyStreamingDistance; // 6C
    float proxyDistanceFactor; // 70
    float averageNodeDiagonal; // 74
    RaRef<world::Prefab> booleanProxyHelper; // 78
    RaRef<world::Prefab> proxyLimiterHelper; // 80
    RaRef<CMesh> customProxyMeshHelper; // 88
    Handle<world::PrefabVariantsList> defaultVariants; // 90
    Handle<world::NodesGroup> mainGroup; // A0
    uint8_t unkB0[0xE0 - 0xB0]; // B0
    world::ProxyMeshBuildParams proxyMeshBuildParams; // E0
    world::PrefabOwnership teamOwnership; // 1C8
    world::PrefabStreamingOcclusion streamingOcclusion; // 1C9
    world::PrefabStreamingImportance streamingImportance; // 1CA
    world::PrefabType type; // 1CB
    bool isLocked; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    Box maxBounds; // 1D0
    bool isMerged; // 1F0
    bool isProxyMeshOnly; // 1F1
    bool boostInnerNodesToProxyDistance; // 1F2
    bool overrideStreamingPosWithBBoxCenter; // 1F3
    uint8_t unk1F4[0x1F5 - 0x1F4]; // 1F4
    bool ignoreMeshEmbeddedOccluders; // 1F5
    bool ignoreAllOccluders; // 1F6
    bool isTerrainPrefab; // 1F7
    bool excludeOnConsole; // 1F8
    bool excludeOnNextGenConsoles; // 1F9
    world::PrefabMinimapContribution minimapContribution; // 1FA
    world::PrefabInteriorMapContribution interiorMapContribution; // 1FB
    uint8_t unk1FC[0x210 - 0x1FC]; // 1FC
    CRUID prefabUniqueId; // 210
    uint8_t unk218[0x2B0 - 0x218]; // 218
    DynArray<Handle<world::PrefabMetadata>> metadataArray; // 2B0
#endif
};
RED4EXT_ASSERT_SIZE(Prefab, 0x2C0);
} // namespace world
using worldPrefab = world::Prefab;
} // namespace RED4ext

// clang-format on

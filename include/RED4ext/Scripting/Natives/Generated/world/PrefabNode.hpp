#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabInteriorMapContribution.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshOnly.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingImportance.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingOcclusion.hpp>

namespace RED4ext
{
namespace world { struct Prefab; }
namespace world { struct PrefabInstanceData; }
namespace world { struct PrefabVariantsList; }

namespace world
{
struct PrefabNode : world::Node
{
    static constexpr const char* NAME = "worldPrefabNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<world::Prefab> prefab; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(prefab))];
    Handle<world::PrefabInstanceData> instanceData; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(instanceData))];
    Handle<world::PrefabVariantsList> enabledVariants; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(enabledVariants))];
    world::PrefabProxyMeshOnly proxyMeshOnly; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(proxyMeshOnly))];
    bool proxyScaleOverride; // 69
    uint8_t unk_6C[0x6C - (0x69 + sizeof(proxyScaleOverride))];
    Vector3 proxyScale; // 6C
    uint8_t unk_78[0x78 - (0x6C + sizeof(proxyScale))];
    bool canBeToggledInGame; // 78
    uint8_t unk_7A[0x7A - (0x78 + sizeof(canBeToggledInGame))];
    bool noCollisions; // 7A
    uint8_t unk_7B[0x7B - (0x7A + sizeof(noCollisions))];
    bool applyMaxStreamingDistance; // 7B
    uint8_t unk_7C[0x7C - (0x7B + sizeof(applyMaxStreamingDistance))];
    bool ignoreMeshEmbeddedOccluders; // 7C
    uint8_t unk_7D[0x7D - (0x7C + sizeof(ignoreMeshEmbeddedOccluders))];
    bool ignoreAllOccluders; // 7D
    uint8_t unk_7E[0x7E - (0x7D + sizeof(ignoreAllOccluders))];
    uint8_t occluderAutoHideDistanceScale; // 7E
    uint8_t unk_7F[0x7F - (0x7E + sizeof(occluderAutoHideDistanceScale))];
    bool enableRenderSceneLayerOverride; // 7F
    uint8_t unk_80[0x80 - (0x7F + sizeof(enableRenderSceneLayerOverride))];
    RenderSceneLayerMask renderSceneLayerMask; // 80
    uint8_t unk_81[0x81 - (0x80 + sizeof(renderSceneLayerMask))];
    world::PrefabStreamingImportance streamingImportance; // 81
    uint8_t unk_82[0x82 - (0x81 + sizeof(streamingImportance))];
    world::PrefabStreamingOcclusion streamingOcclusionOverride; // 82
    uint8_t unk_83[0x83 - (0x82 + sizeof(streamingOcclusionOverride))];
    world::PrefabInteriorMapContribution interiorMapContribution; // 83
#else
    uint8_t unk38[0x40 - 0x38]; // 38
    RaRef<world::Prefab> prefab; // 40
    Handle<world::PrefabInstanceData> instanceData; // 48
    Handle<world::PrefabVariantsList> enabledVariants; // 58
    world::PrefabProxyMeshOnly proxyMeshOnly; // 68
    bool proxyScaleOverride; // 69
    uint8_t unk6A[0x6C - 0x6A]; // 6A
    Vector3 proxyScale; // 6C
    bool canBeToggledInGame; // 78
    uint8_t unk79[0x7A - 0x79]; // 79
    bool noCollisions; // 7A
    bool applyMaxStreamingDistance; // 7B
    bool ignoreMeshEmbeddedOccluders; // 7C
    bool ignoreAllOccluders; // 7D
    uint8_t occluderAutoHideDistanceScale; // 7E
    bool enableRenderSceneLayerOverride; // 7F
    RenderSceneLayerMask renderSceneLayerMask; // 80
    world::PrefabStreamingImportance streamingImportance; // 81
    world::PrefabStreamingOcclusion streamingOcclusionOverride; // 82
    world::PrefabInteriorMapContribution interiorMapContribution; // 83
    uint8_t unk84[0x88 - 0x84]; // 84
#endif
};
RED4EXT_ASSERT_SIZE(PrefabNode, 0x88);
} // namespace world
using worldPrefabNode = world::PrefabNode;
} // namespace RED4ext

// clang-format on

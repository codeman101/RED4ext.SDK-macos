#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) MeshComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entMeshComponent";
    static constexpr const char* ALIAS = "MeshComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    RaRef<CMesh> mesh; // 150
    uint8_t unk_178[0x178 - (0x150 + sizeof(mesh))];
    Vector3 visualScale; // 178
    uint8_t unk_184[0x184 - (0x178 + sizeof(visualScale))];
    ERenderingPlane renderingPlane; // 184
    uint8_t unk_188[0x188 - (0x184 + sizeof(renderingPlane))];
    ERenderObjectType objectTypeID; // 188
    uint8_t unk_190[0x190 - (0x188 + sizeof(objectTypeID))];
    CName meshAppearance; // 190
    uint8_t unk_198[0x198 - (0x190 + sizeof(meshAppearance))];
    uint64_t chunkMask; // 198
    uint8_t unk_1A0[0x1A0 - (0x198 + sizeof(chunkMask))];
    uint32_t numInstances; // 1A0
    uint8_t unk_1A4[0x1A4 - (0x1A0 + sizeof(numInstances))];
    float motionBlurScale; // 1A4
    uint8_t unk_1A8[0x1A8 - (0x1A4 + sizeof(motionBlurScale))];
    ent::MeshComponentLODMode LODMode; // 1A8
    uint8_t unk_1AB[0x1AB - (0x1A8 + sizeof(LODMode))];
    uint8_t order; // 1AB
    uint8_t unk_1AC[0x1AC - (0x1AB + sizeof(order))];
    shadows::ShadowCastingMode castShadows; // 1AC
    uint8_t unk_1AD[0x1AD - (0x1AC + sizeof(castShadows))];
    shadows::ShadowCastingMode castLocalShadows; // 1AD
    uint8_t unk_1AE[0x1AE - (0x1AD + sizeof(castLocalShadows))];
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 1AE
    uint8_t unk_1AF[0x1AF - (0x1AE + sizeof(castRayTracedGlobalShadows))];
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 1AF
    uint8_t unk_1B2[0x1B2 - (0x1AF + sizeof(castRayTracedLocalShadows))];
    ent::ForcedLodDistance forcedLodDistance; // 1B2
    uint8_t unk_1D1[0x1D1 - (0x1B2 + sizeof(forcedLodDistance))];
    bool overrideMeshNavigationImpact; // 1D1
    uint8_t unk_1D2[0x1D2 - (0x1D1 + sizeof(overrideMeshNavigationImpact))];
    NavGenNavigationSetting navigationImpact; // 1D2
    uint8_t unk_1D4[0x1D4 - (0x1D2 + sizeof(navigationImpact))];
    uint8_t version; // 1D4
#else
    uint8_t unk140[0x150 - 0x140]; // 140
    RaRef<CMesh> mesh; // 150
    uint8_t unk158[0x178 - 0x158]; // 158
    Vector3 visualScale; // 178
    ERenderingPlane renderingPlane; // 184
    ERenderObjectType objectTypeID; // 188
    uint8_t unk189[0x190 - 0x189]; // 189
    CName meshAppearance; // 190
    uint64_t chunkMask; // 198
    uint32_t numInstances; // 1A0
    float motionBlurScale; // 1A4
    ent::MeshComponentLODMode LODMode; // 1A8
    uint8_t unk1A9[0x1AB - 0x1A9]; // 1A9
    uint8_t order; // 1AB
    shadows::ShadowCastingMode castShadows; // 1AC
    shadows::ShadowCastingMode castLocalShadows; // 1AD
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 1AE
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 1AF
    uint8_t unk1B0[0x1B2 - 0x1B0]; // 1B0
    ent::ForcedLodDistance forcedLodDistance; // 1B2
    uint8_t unk1B3[0x1D1 - 0x1B3]; // 1B3
    bool overrideMeshNavigationImpact; // 1D1
    NavGenNavigationSetting navigationImpact; // 1D2
    uint8_t version; // 1D4
    uint8_t unk1D5[0x1E0 - 0x1D5]; // 1D5
#endif
};
RED4EXT_ASSERT_SIZE(MeshComponent, 0x1E0);
} // namespace ent
using entMeshComponent = ent::MeshComponent;
using MeshComponent = ent::MeshComponent;
} // namespace RED4ext

// clang-format on

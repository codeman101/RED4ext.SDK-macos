#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct __declspec(align(0x10)) BendedMeshNode : world::Node
{
    static constexpr const char* NAME = "worldBendedMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CMesh> mesh; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(mesh))];
    DynArray<Matrix> deformationData; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(deformationData))];
    Box deformedBox; // 50
    uint8_t unk_70[0x70 - (0x50 + sizeof(deformedBox))];
    bool isBendedRoad; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(isBendedRoad))];
    shadows::ShadowCastingMode castShadows; // 71
    uint8_t unk_72[0x72 - (0x71 + sizeof(castShadows))];
    shadows::ShadowCastingMode castLocalShadows; // 72
    uint8_t unk_78[0x78 - (0x72 + sizeof(castLocalShadows))];
    CName meshAppearance; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(meshAppearance))];
    NavGenNavigationSetting navigationSetting; // 98
    uint8_t unk_9A[0x9A - (0x98 + sizeof(navigationSetting))];
    bool removeFromRainMap; // 9A
    uint8_t unk_9B[0x9B - (0x9A + sizeof(removeFromRainMap))];
    uint8_t version; // 9B
#else
    RaRef<CMesh> mesh; // 38
    DynArray<Matrix> deformationData; // 40
    Box deformedBox; // 50
    bool isBendedRoad; // 70
    shadows::ShadowCastingMode castShadows; // 71
    shadows::ShadowCastingMode castLocalShadows; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
    CName meshAppearance; // 78
    uint8_t unk80[0x98 - 0x80]; // 80
    NavGenNavigationSetting navigationSetting; // 98
    bool removeFromRainMap; // 9A
    uint8_t version; // 9B
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
#endif
};
RED4EXT_ASSERT_SIZE(BendedMeshNode, 0xA0);
} // namespace world
using worldBendedMeshNode = world::BendedMeshNode;
} // namespace RED4ext

// clang-format on

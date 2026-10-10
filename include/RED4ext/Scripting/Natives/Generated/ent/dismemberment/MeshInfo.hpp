#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/AppearanceMatch.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/PhysicsInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent::dismemberment
{
struct __declspec(align(0x10)) MeshInfo
{
    static constexpr const char* NAME = "entdismembermentMeshInfo";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8[0x8];
    RaRef<CMesh> Mesh; // 8
    uint8_t unk_10[0x10 - (0x8 + sizeof(Mesh))];
    CName MeshAppearance; // 10
    uint8_t unk_18[0x18 - (0x10 + sizeof(MeshAppearance))];
    DynArray<ent::dismemberment::AppearanceMatch> AppearanceMap; // 18
    uint8_t unk_28[0x28 - (0x18 + sizeof(AppearanceMap))];
    bool ShouldReceiveDecal; // 28
    uint8_t unk_30[0x30 - (0x28 + sizeof(ShouldReceiveDecal))];
    Transform Offset; // 30
    uint8_t unk_50[0x50 - (0x30 + sizeof(Offset))];
    Vector3 Scale; // 50
    uint8_t unk_5C[0x5C - (0x50 + sizeof(Scale))];
    physics::RagdollBodyPartE BodyPartMask; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(BodyPartMask))];
    ent::dismemberment::WoundTypeE WoundType; // 60
    uint8_t unk_62[0x62 - (0x60 + sizeof(WoundType))];
    ent::dismemberment::WoundTypeE CullMesh; // 62
    uint8_t unk_64[0x64 - (0x62 + sizeof(CullMesh))];
    ent::dismemberment::PhysicsInfo Physics; // 64
#else
    uint8_t unk00[0x10 - 0x0]; // 0
    RaRef<CMesh> Mesh; // 10
    CName MeshAppearance; // 18
    DynArray<ent::dismemberment::AppearanceMatch> AppearanceMap; // 20
    bool ShouldReceiveDecal; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
    Transform Offset; // 40
    Vector3 Scale; // 60
    physics::RagdollBodyPartE BodyPartMask; // 6C
    ent::dismemberment::WoundTypeE WoundType; // 70
    ent::dismemberment::WoundTypeE CullMesh; // 72
    ent::dismemberment::PhysicsInfo Physics; // 74
    uint8_t unk78[0x80 - 0x78]; // 78
#endif
};
RED4EXT_ASSERT_SIZE(MeshInfo, 0x80);
} // namespace ent::dismemberment
using entdismembermentMeshInfo = ent::dismemberment::MeshInfo;
} // namespace RED4ext

// clang-format on

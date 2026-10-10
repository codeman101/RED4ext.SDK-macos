#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderConvex : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderConvex";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_88[0x88 - ::RED4ext::Detail::DataSize<physics::ICollider>];
    DynArray<Vector3> vertices; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(vertices))];
    DynArray<uint8_t> indexBuffer; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(indexBuffer))];
    DynArray<uint16_t> polygonVertices; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(polygonVertices))];
    DataBuffer compiledGeometryBuffer; // B8
#else
    DynArray<Vector3> vertices; // 90
    DynArray<uint8_t> indexBuffer; // A0
    DynArray<uint16_t> polygonVertices; // B0
    DataBuffer compiledGeometryBuffer; // C0
    uint8_t unkE8[0x100 - 0xE8]; // E8
#endif
};
RED4EXT_ASSERT_SIZE(ColliderConvex, 0x100);
} // namespace physics
using physicsColliderConvex = physics::ColliderConvex;
} // namespace RED4ext

// clang-format on

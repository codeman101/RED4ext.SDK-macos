#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderMesh : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderMesh";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<physics::ICollider>];
    DynArray<CName> faceMaterials; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(faceMaterials))];
    DataBuffer compiledGeometryBuffer; // C8
#else
    uint8_t unk90[0xC0 - 0x90]; // 90
    DynArray<CName> faceMaterials; // C0
    DataBuffer compiledGeometryBuffer; // D0
    uint8_t unkF8[0x110 - 0xF8]; // F8
#endif
};
RED4EXT_ASSERT_SIZE(ColliderMesh, 0x110);
} // namespace physics
using physicsColliderMesh = physics::ColliderMesh;
} // namespace RED4ext

// clang-format on

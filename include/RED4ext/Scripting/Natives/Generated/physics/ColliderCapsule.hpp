#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderCapsule : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderCapsule";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_88[0x88 - ::RED4ext::Detail::DataSize<physics::ICollider>];
    float radius; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(radius))];
    float height; // 8C
#else
    float radius; // 90
    float height; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
#endif
};
RED4EXT_ASSERT_SIZE(ColliderCapsule, 0xA0);
} // namespace physics
using physicsColliderCapsule = physics::ColliderCapsule;
} // namespace RED4ext

// clang-format on

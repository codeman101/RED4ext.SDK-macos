#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderBox : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderBox";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_88[0x88 - ::RED4ext::Detail::DataSize<physics::ICollider>];
    Vector3 halfExtents; // 88
    uint8_t unk_94[0x94 - (0x88 + sizeof(halfExtents))];
    bool isObstacle; // 94
#else
    Vector3 halfExtents; // 90
    bool isObstacle; // 9C
    uint8_t unk9D[0xA0 - 0x9D]; // 9D
#endif
};
RED4EXT_ASSERT_SIZE(ColliderBox, 0xA0);
} // namespace physics
using physicsColliderBox = physics::ColliderBox;
} // namespace RED4ext

// clang-format on

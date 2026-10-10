#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/EClothCollisionMaskEnum.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct ClothMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldClothMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_5A[0x5A - ::RED4ext::Detail::DataSize<world::MeshNode>];
    bool affectedByWind; // 5A
    uint8_t unk_5C[0x5C - (0x5A + sizeof(affectedByWind))];
    physics::EClothCollisionMaskEnum collisionMask; // 5C
#else
    bool affectedByWind; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    physics::EClothCollisionMaskEnum collisionMask; // 64
#endif
};
RED4EXT_ASSERT_SIZE(ClothMeshNode, 0x68);
} // namespace world
using worldClothMeshNode = world::ClothMeshNode;
} // namespace RED4ext

// clang-format on

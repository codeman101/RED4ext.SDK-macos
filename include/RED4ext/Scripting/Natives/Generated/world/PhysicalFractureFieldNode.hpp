#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TriggerShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) PhysicalFractureFieldNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalFractureFieldNode";
    static constexpr const char* ALIAS = "PhysicalFractureFieldNode";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<world::Node>];
    physics::TriggerShape shape; // 40
    uint8_t unk_70[0x70 - (0x40 + sizeof(shape))];
    physics::FractureFieldParams fractureFieldParams; // 70
#else
    uint8_t unk38[0x40 - 0x38]; // 38
    physics::TriggerShape shape; // 40
    physics::FractureFieldParams fractureFieldParams; // 70
    uint8_t unk88[0x90 - 0x88]; // 88
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalFractureFieldNode, 0x90);
} // namespace world
using worldPhysicalFractureFieldNode = world::PhysicalFractureFieldNode;
using PhysicalFractureFieldNode = world::PhysicalFractureFieldNode;
} // namespace RED4ext

// clang-format on

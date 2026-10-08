#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct StaticVectorFieldNode : world::Node
{
    static constexpr const char* NAME = "worldStaticVectorFieldNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    Vector3 direction; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(direction))];
    float autoHideDistance; // 40
#else
    Vector3 direction; // 38
    float autoHideDistance; // 44
#endif
};
RED4EXT_ASSERT_SIZE(StaticVectorFieldNode, 0x48);
} // namespace world
using worldStaticVectorFieldNode = world::StaticVectorFieldNode;
} // namespace RED4ext

// clang-format on

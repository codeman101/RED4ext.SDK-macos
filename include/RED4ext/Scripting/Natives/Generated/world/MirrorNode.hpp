#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct MirrorNode : world::MeshNode
{
    static constexpr const char* NAME = "worldMirrorNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_5C[0x5C - ::RED4ext::Detail::DataSize<world::MeshNode>];
    Vector3 cullingBoxExtents; // 5C
    uint8_t unk_68[0x68 - (0x5C + sizeof(cullingBoxExtents))];
    Vector3 cullingBoxOffset; // 68
#else
    Vector3 cullingBoxExtents; // 60
    Vector3 cullingBoxOffset; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(MirrorNode, 0x78);
} // namespace world
using worldMirrorNode = world::MirrorNode;
} // namespace RED4ext

// clang-format on

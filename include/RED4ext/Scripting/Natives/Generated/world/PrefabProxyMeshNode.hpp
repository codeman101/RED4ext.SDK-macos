#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct PrefabProxyMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldPrefabProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_5C[0x5C - ::RED4ext::Detail::DataSize<world::MeshNode>];
    uint32_t nbNodesUnderProxy; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(nbNodesUnderProxy))];
    float nearAutoHideDistance; // 60
#else
    uint32_t nbNodesUnderProxy; // 60
    float nearAutoHideDistance; // 64
#endif
};
RED4EXT_ASSERT_SIZE(PrefabProxyMeshNode, 0x68);
} // namespace world
using worldPrefabProxyMeshNode = world::PrefabProxyMeshNode;
} // namespace RED4ext

// clang-format on

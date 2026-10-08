#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct DestructibleProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldDestructibleProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<world::PrefabProxyMeshNode>];
    uint64_t ownerHash; // 68
#else
    uint64_t ownerHash; // 68
#endif
};
RED4EXT_ASSERT_SIZE(DestructibleProxyMeshNode, 0x70);
} // namespace world
using worldDestructibleProxyMeshNode = world::DestructibleProxyMeshNode;
} // namespace RED4ext

// clang-format on

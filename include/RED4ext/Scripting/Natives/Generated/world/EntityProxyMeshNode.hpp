#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct EntityProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldEntityProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<world::PrefabProxyMeshNode>];
    world::GlobalNodeID ownerGlobalId; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(ownerGlobalId))];
    float entityAttachDistance; // 70
#else
    world::GlobalNodeID ownerGlobalId; // 68
    float entityAttachDistance; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
#endif
};
RED4EXT_ASSERT_SIZE(EntityProxyMeshNode, 0x78);
} // namespace world
using worldEntityProxyMeshNode = world::EntityProxyMeshNode;
} // namespace RED4ext

// clang-format on

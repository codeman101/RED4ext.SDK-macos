#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntitySpawnPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace ent { struct EntityInstanceData; }
namespace ent { struct EntityTemplate; }

namespace world
{
struct EntityNode : world::Node
{
    static constexpr const char* NAME = "worldEntityNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<ent::EntityTemplate> entityTemplate; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(entityTemplate))];
    Handle<ent::EntityInstanceData> instanceData; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(instanceData))];
    CName appearanceName; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(appearanceName))];
    ent::EntitySpawnPriority ioPriority; // 58
    uint8_t unk_5A[0x5A - (0x58 + sizeof(ioPriority))];
    uint16_t entityLod; // 5A
#else
    RaRef<ent::EntityTemplate> entityTemplate; // 38
    Handle<ent::EntityInstanceData> instanceData; // 40
    CName appearanceName; // 50
    ent::EntitySpawnPriority ioPriority; // 58
    uint8_t unk59[0x5A - 0x59]; // 59
    uint16_t entityLod; // 5A
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(EntityNode, 0x60);
} // namespace world
using worldEntityNode = world::EntityNode;
} // namespace RED4ext

// clang-format on

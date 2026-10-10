#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace community { struct Area; }

namespace world
{
struct CompiledCommunityAreaNode : world::Node
{
    static constexpr const char* NAME = "worldCompiledCommunityAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    Handle<community::Area> area; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(area))];
    ent::EntityID sourceObjectId; // 48
#else
    Handle<community::Area> area; // 38
    ent::EntityID sourceObjectId; // 48
#endif
};
RED4EXT_ASSERT_SIZE(CompiledCommunityAreaNode, 0x50);
} // namespace world
using worldCompiledCommunityAreaNode = world::CompiledCommunityAreaNode;
} // namespace RED4ext

// clang-format on

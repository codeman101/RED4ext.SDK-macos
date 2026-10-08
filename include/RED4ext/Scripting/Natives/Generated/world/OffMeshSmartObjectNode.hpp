#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionNode.hpp>

namespace RED4ext
{
namespace game { struct SmartObjectDefinition; }

namespace world
{
struct OffMeshSmartObjectNode : world::OffMeshConnectionNode
{
    static constexpr const char* NAME = "worldOffMeshSmartObjectNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<world::OffMeshConnectionNode>];
    Handle<game::SmartObjectDefinition> object; // 90
#else
    Handle<game::SmartObjectDefinition> object; // 90
#endif
};
RED4EXT_ASSERT_SIZE(OffMeshSmartObjectNode, 0xA0);
} // namespace world
using worldOffMeshSmartObjectNode = world::OffMeshSmartObjectNode;
} // namespace RED4ext

// clang-format on

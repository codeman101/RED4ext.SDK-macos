#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace game { struct SmartObjectDefinition; }

namespace world
{
struct SmartObjectNode : world::Node
{
    static constexpr const char* NAME = "worldSmartObjectNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    Handle<game::SmartObjectDefinition> object; // 38
#else
    Handle<game::SmartObjectDefinition> object; // 38
#endif
};
RED4EXT_ASSERT_SIZE(SmartObjectNode, 0x48);
} // namespace world
using worldSmartObjectNode = world::SmartObjectNode;
} // namespace RED4ext

// clang-format on

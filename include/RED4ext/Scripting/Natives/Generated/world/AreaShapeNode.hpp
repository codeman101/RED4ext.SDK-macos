#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct AreaShapeOutline;

namespace world
{
struct AreaShapeNode : world::Node
{
    static constexpr const char* NAME = "worldAreaShapeNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<world::Node>];
    Handle<AreaShapeOutline> outline; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(outline))];
    Color color; // 50
#else
    uint8_t unk38[0x40 - 0x38]; // 38
    Handle<AreaShapeOutline> outline; // 40
    Color color; // 50
    uint8_t unk54[0x60 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(AreaShapeNode, 0x60);
} // namespace world
using worldAreaShapeNode = world::AreaShapeNode;
} // namespace RED4ext

// clang-format on

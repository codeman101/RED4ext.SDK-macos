#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct NavigationDeniedAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldNavigationDeniedAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    bool human; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(human))];
    bool vehicle; // 61
#else
    bool human; // 60
    bool vehicle; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
#endif
};
RED4EXT_ASSERT_SIZE(NavigationDeniedAreaNode, 0x68);
} // namespace world
using worldNavigationDeniedAreaNode = world::NavigationDeniedAreaNode;
} // namespace RED4ext

// clang-format on

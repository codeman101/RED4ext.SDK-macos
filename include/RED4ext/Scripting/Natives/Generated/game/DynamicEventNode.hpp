#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace game
{
struct DynamicEventNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "gameDynamicEventNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    NodeRef mappinRef; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(mappinRef))];
    Handle<quest::IBaseCondition> condition; // 68
#else
    NodeRef mappinRef; // 60
    Handle<quest::IBaseCondition> condition; // 68
#endif
};
RED4EXT_ASSERT_SIZE(DynamicEventNode, 0x78);
} // namespace game
using gameDynamicEventNode = game::DynamicEventNode;
} // namespace RED4ext

// clang-format on

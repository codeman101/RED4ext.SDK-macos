#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct TransformAnimatorNode_ActionType; }

namespace quest
{
struct TransformAnimatorNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questTransformAnimatorNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    game::EntityReference objectRef; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(objectRef))];
    CName animationName; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(animationName))];
    Handle<quest::TransformAnimatorNode_ActionType> action; // 88
#else
    game::EntityReference objectRef; // 48
    CName animationName; // 80
    Handle<quest::TransformAnimatorNode_ActionType> action; // 88
#endif
};
RED4EXT_ASSERT_SIZE(TransformAnimatorNodeDefinition, 0x98);
} // namespace quest
using questTransformAnimatorNodeDefinition = quest::TransformAnimatorNodeDefinition;
} // namespace RED4ext

// clang-format on

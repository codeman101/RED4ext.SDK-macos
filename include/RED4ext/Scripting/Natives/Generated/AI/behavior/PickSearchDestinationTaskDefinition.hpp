#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct PickSearchDestinationTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorPickSearchDestinationTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> destinationPosition; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(destinationPosition))];
    Handle<AI::ArgumentMapping> desiredDistance; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(desiredDistance))];
    Handle<AI::ArgumentMapping> maxDistance; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(maxDistance))];
    Handle<AI::ArgumentMapping> clearedAreaRadius; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(clearedAreaRadius))];
    Handle<AI::ArgumentMapping> clearedAreaDistance; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(clearedAreaDistance))];
    Handle<AI::ArgumentMapping> clearedAreaAngle; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(clearedAreaAngle))];
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // 98
#else
    Handle<AI::ArgumentMapping> destinationPosition; // 38
    Handle<AI::ArgumentMapping> desiredDistance; // 48
    Handle<AI::ArgumentMapping> maxDistance; // 58
    Handle<AI::ArgumentMapping> clearedAreaRadius; // 68
    Handle<AI::ArgumentMapping> clearedAreaDistance; // 78
    Handle<AI::ArgumentMapping> clearedAreaAngle; // 88
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // 98
#endif
};
RED4EXT_ASSERT_SIZE(PickSearchDestinationTaskDefinition, 0xA8);
} // namespace AI::behavior
using AIbehaviorPickSearchDestinationTaskDefinition = AI::behavior::PickSearchDestinationTaskDefinition;
} // namespace RED4ext

// clang-format on

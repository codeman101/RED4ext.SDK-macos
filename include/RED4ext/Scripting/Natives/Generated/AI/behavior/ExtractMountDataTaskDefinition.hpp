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
struct ExtractMountDataTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorExtractMountDataTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> mountEventData; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(mountEventData))];
    Handle<AI::ArgumentMapping> outWorkspotData; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(outWorkspotData))];
    Handle<AI::ArgumentMapping> outIsInstant; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(outIsInstant))];
    Handle<AI::ArgumentMapping> outAllowFailsafeTeleport; // 68
#else
    Handle<AI::ArgumentMapping> mountEventData; // 38
    Handle<AI::ArgumentMapping> outWorkspotData; // 48
    Handle<AI::ArgumentMapping> outIsInstant; // 58
    Handle<AI::ArgumentMapping> outAllowFailsafeTeleport; // 68
#endif
};
RED4EXT_ASSERT_SIZE(ExtractMountDataTaskDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorExtractMountDataTaskDefinition = AI::behavior::ExtractMountDataTaskDefinition;
} // namespace RED4ext

// clang-format on

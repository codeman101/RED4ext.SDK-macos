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
struct ConvertToDynamicWorkspotTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorConvertToDynamicWorkspotTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> workspotData; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(workspotData))];
    Handle<AI::ArgumentMapping> spotInstance; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(spotInstance))];
    Handle<AI::ArgumentMapping> jumpToEntry; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(jumpToEntry))];
    Handle<AI::ArgumentMapping> entryId; // 68
#else
    Handle<AI::ArgumentMapping> workspotData; // 38
    Handle<AI::ArgumentMapping> spotInstance; // 48
    Handle<AI::ArgumentMapping> jumpToEntry; // 58
    Handle<AI::ArgumentMapping> entryId; // 68
#endif
};
RED4EXT_ASSERT_SIZE(ConvertToDynamicWorkspotTaskDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorConvertToDynamicWorkspotTaskDefinition = AI::behavior::ConvertToDynamicWorkspotTaskDefinition;
} // namespace RED4ext

// clang-format on

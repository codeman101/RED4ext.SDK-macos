#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IVoicesetManager_NodeType; }

namespace quest
{
struct VoicesetManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questVoicesetManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    Handle<quest::IVoicesetManager_NodeType> type; // 48
#else
    Handle<quest::IVoicesetManager_NodeType> type; // 48
#endif
};
RED4EXT_ASSERT_SIZE(VoicesetManagerNodeDefinition, 0x58);
} // namespace quest
using questVoicesetManagerNodeDefinition = quest::VoicesetManagerNodeDefinition;
} // namespace RED4ext

// clang-format on

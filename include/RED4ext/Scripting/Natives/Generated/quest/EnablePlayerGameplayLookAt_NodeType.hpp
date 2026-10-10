#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EnablePlayerGameplayLookAt_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questEnablePlayerGameplayLookAt_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    bool enable; // 34
#else
    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(EnablePlayerGameplayLookAt_NodeType, 0x40);
} // namespace quest
using questEnablePlayerGameplayLookAt_NodeType = quest::EnablePlayerGameplayLookAt_NodeType;
} // namespace RED4ext

// clang-format on

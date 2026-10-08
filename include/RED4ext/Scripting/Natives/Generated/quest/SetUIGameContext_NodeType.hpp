#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UIGameContextRequestType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetUIGameContext_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetUIGameContext_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    quest::UIGameContextRequestType requestType; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(requestType))];
    UIGameContext context; // 38
#else
    quest::UIGameContextRequestType requestType; // 38
    UIGameContext context; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(SetUIGameContext_NodeType, 0x40);
} // namespace quest
using questSetUIGameContext_NodeType = quest::SetUIGameContext_NodeType;
} // namespace RED4ext

// clang-format on

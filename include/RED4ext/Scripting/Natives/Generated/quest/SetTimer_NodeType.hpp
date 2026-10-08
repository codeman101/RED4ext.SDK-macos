#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTimer_NodeType : quest::IGameManagerNodeType
{
    static constexpr const char* NAME = "questSetTimer_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IGameManagerNodeType>];
    bool enable; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(enable))];
    float duration; // 38
#else
    bool enable; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float duration; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(SetTimer_NodeType, 0x40);
} // namespace quest
using questSetTimer_NodeType = quest::SetTimer_NodeType;
} // namespace RED4ext

// clang-format on

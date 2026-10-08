#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct InputHintGroup_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questInputHintGroup_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    TweakDBID iconID; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(iconID))];
    CName groupId; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(groupId))];
    CString localizedTitle; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(localizedTitle))];
    CString localizedDescription; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(localizedDescription))];
    bool show; // 88
#else
    TweakDBID iconID; // 38
    CName groupId; // 40
    CString localizedTitle; // 48
    CString localizedDescription; // 68
    bool show; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
#endif
};
RED4EXT_ASSERT_SIZE(InputHintGroup_NodeType, 0x90);
} // namespace quest
using questInputHintGroup_NodeType = quest::InputHintGroup_NodeType;
} // namespace RED4ext

// clang-format on

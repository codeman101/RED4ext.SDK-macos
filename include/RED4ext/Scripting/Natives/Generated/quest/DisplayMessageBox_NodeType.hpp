#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct DisplayMessageBox_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questDisplayMessageBox_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CString title; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(title))];
    LocalizationString localizedTitle; // 58
    uint8_t unk_80[0x80 - (0x58 + sizeof(localizedTitle))];
    CString message; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(message))];
    LocalizationString localizedMessage; // A0
#else
    CString title; // 38
    LocalizationString localizedTitle; // 58
    CString message; // 80
    LocalizationString localizedMessage; // A0
#endif
};
RED4EXT_ASSERT_SIZE(DisplayMessageBox_NodeType, 0xC8);
} // namespace quest
using questDisplayMessageBox_NodeType = quest::DisplayMessageBox_NodeType;
} // namespace RED4ext

// clang-format on

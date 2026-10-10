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
struct ShowOnscreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowOnscreen_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CString message; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(message))];
    LocalizationString localizedMessage; // 58
    uint8_t unk_80[0x80 - (0x58 + sizeof(localizedMessage))];
    float duration; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(duration))];
    bool show; // 84
#else
    CString message; // 38
    LocalizationString localizedMessage; // 58
    float duration; // 80
    bool show; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
#endif
};
RED4EXT_ASSERT_SIZE(ShowOnscreen_NodeType, 0x88);
} // namespace quest
using questShowOnscreen_NodeType = quest::ShowOnscreen_NodeType;
} // namespace RED4ext

// clang-format on

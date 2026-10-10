#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SimpleMessageType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct WarningMessage_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questWarningMessage_NodeType";
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
    uint8_t unk_85[0x85 - (0x84 + sizeof(show))];
    bool instant; // 85
    uint8_t unk_88[0x88 - (0x85 + sizeof(instant))];
    game::SimpleMessageType type; // 88
#else
    CString message; // 38
    LocalizationString localizedMessage; // 58
    float duration; // 80
    bool show; // 84
    bool instant; // 85
    uint8_t unk86[0x88 - 0x86]; // 86
    game::SimpleMessageType type; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
#endif
};
RED4EXT_ASSERT_SIZE(WarningMessage_NodeType, 0x90);
} // namespace quest
using questWarningMessage_NodeType = quest::WarningMessage_NodeType;
} // namespace RED4ext

// clang-format on

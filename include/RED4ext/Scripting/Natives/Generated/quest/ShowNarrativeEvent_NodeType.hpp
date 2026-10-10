#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowNarrativeEvent_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowNarrativeEvent_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CString eventText; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(eventText))];
    Color textColor; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(textColor))];
    float durationSec; // 5C
#else
    CString eventText; // 38
    Color textColor; // 58
    float durationSec; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(ShowNarrativeEvent_NodeType, 0x60);
} // namespace quest
using questShowNarrativeEvent_NodeType = quest::ShowNarrativeEvent_NodeType;
} // namespace RED4ext

// clang-format on

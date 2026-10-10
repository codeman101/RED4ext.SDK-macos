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
struct AddCombatLogMessage_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questAddCombatLogMessage_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CString message; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(message))];
    LocalizationString localizedMessage; // 58
#else
    CString message; // 38
    LocalizationString localizedMessage; // 58
#endif
};
RED4EXT_ASSERT_SIZE(AddCombatLogMessage_NodeType, 0x80);
} // namespace quest
using questAddCombatLogMessage_NodeType = quest::AddCombatLogMessage_NodeType;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LanguageMode.hpp>

namespace RED4ext
{
namespace quest
{
struct Language_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questLanguage_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    quest::LanguageMode mode; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(mode))];
    CString languageCode; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(languageCode))];
    bool inverted; // 58
#else
    quest::LanguageMode mode; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CString languageCode; // 40
    bool inverted; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(Language_ConditionType, 0x68);
} // namespace quest
using questLanguage_ConditionType = quest::Language_ConditionType;
} // namespace RED4ext

// clang-format on

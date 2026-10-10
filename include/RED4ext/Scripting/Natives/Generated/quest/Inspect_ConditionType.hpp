#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Inspect_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questInspect_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    CString objectID; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(objectID))];
    bool inverted; // 58
#else
    CString objectID; // 38
    bool inverted; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
#endif
};
RED4EXT_ASSERT_SIZE(Inspect_ConditionType, 0x60);
} // namespace quest
using questInspect_ConditionType = quest::Inspect_ConditionType;
} // namespace RED4ext

// clang-format on

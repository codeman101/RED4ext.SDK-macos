#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFactsDBConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VarComparison_ConditionType : quest::IFactsDBConditionType
{
    static constexpr const char* NAME = "questVarComparison_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IFactsDBConditionType>];
    CString factName; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(factName))];
    int32_t value; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(value))];
    EComparisonType comparisonType; // 5C
#else
    CString factName; // 38
    int32_t value; // 58
    EComparisonType comparisonType; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(VarComparison_ConditionType, 0x60);
} // namespace quest
using questVarComparison_ConditionType = quest::VarComparison_ConditionType;
} // namespace RED4ext

// clang-format on

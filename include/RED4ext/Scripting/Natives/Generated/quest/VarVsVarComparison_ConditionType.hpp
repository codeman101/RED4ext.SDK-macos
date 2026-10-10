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
struct VarVsVarComparison_ConditionType : quest::IFactsDBConditionType
{
    static constexpr const char* NAME = "questVarVsVarComparison_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IFactsDBConditionType>];
    CString factName1; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(factName1))];
    CString factName2; // 58
    uint8_t unk_78[0x78 - (0x58 + sizeof(factName2))];
    EComparisonType comparisonType; // 78
#else
    CString factName1; // 38
    CString factName2; // 58
    EComparisonType comparisonType; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(VarVsVarComparison_ConditionType, 0x80);
} // namespace quest
using questVarVsVarComparison_ConditionType = quest::VarVsVarComparison_ConditionType;
} // namespace RED4ext

// clang-format on

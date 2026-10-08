#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariableBoolBase.hpp>

namespace RED4ext
{
namespace AI
{
struct DefTreeVariableComparison : LibTreeDefTreeVariableBoolBase
{
    static constexpr const char* NAME = "AIDefTreeVariableComparison";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_42[0x42 - ::RED4ext::Detail::DataSize<LibTreeDefTreeVariableBoolBase>];
    uint16_t referenceVariableId; // 42
    uint8_t unk_48[0x48 - (0x42 + sizeof(referenceVariableId))];
    CName referenceVariableName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(referenceVariableName))];
    CName referenceVariableShortName; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(referenceVariableShortName))];
    CName referenceType; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(referenceType))];
    Variant referenceValue; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(referenceValue))];
    EComparisonType operator; // 78
#else
    uint16_t referenceVariableId; // 48
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    CName referenceVariableName; // 50
    CName referenceVariableShortName; // 58
    CName referenceType; // 60
    Variant referenceValue; // 68
    EComparisonType operator; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
#endif
};
RED4EXT_ASSERT_SIZE(DefTreeVariableComparison, 0x88);
} // namespace AI
using AIDefTreeVariableComparison = AI::DefTreeVariableComparison;
} // namespace RED4ext

// clang-format on

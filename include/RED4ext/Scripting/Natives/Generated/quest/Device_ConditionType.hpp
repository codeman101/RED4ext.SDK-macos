#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Device_ConditionFunctionParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Device_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questDevice_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    NodeRef objectRef; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(objectRef))];
    CName deviceControllerClass; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(deviceControllerClass))];
    CName deviceConditionFunction; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(deviceConditionFunction))];
    DynArray<quest::Device_ConditionFunctionParameter> functionParameters; // 50
#else
    NodeRef objectRef; // 38
    CName deviceControllerClass; // 40
    CName deviceConditionFunction; // 48
    DynArray<quest::Device_ConditionFunctionParameter> functionParameters; // 50
#endif
};
RED4EXT_ASSERT_SIZE(Device_ConditionType, 0x60);
} // namespace quest
using questDevice_ConditionType = quest::Device_ConditionType;
} // namespace RED4ext

// clang-format on

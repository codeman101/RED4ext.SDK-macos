#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InitializedWidgetUserData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink
{
struct HUDScalingMarginAdjustment : ink::InitializedWidgetUserData
{
    static constexpr const char* NAME = "inkHUDScalingMarginAdjustment";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_54[0x54 - ::RED4ext::Detail::DataSize<ink::InitializedWidgetUserData>];
    ink::Margin adjustmentMargin; // 54
#else
    uint8_t unk48[0x58 - 0x48]; // 48
    ink::Margin adjustmentMargin; // 58
#endif
};
RED4EXT_ASSERT_SIZE(HUDScalingMarginAdjustment, 0x68);
} // namespace ink
using inkHUDScalingMarginAdjustment = ink::HUDScalingMarginAdjustment;
} // namespace RED4ext

// clang-format on

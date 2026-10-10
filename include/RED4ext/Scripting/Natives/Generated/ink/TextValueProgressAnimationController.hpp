#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>

namespace RED4ext
{
namespace ink
{
struct TextValueProgressAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextValueProgressAnimationController";
    static constexpr const char* ALIAS = "inkTextValueProgressController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_EC[0xEC - ::RED4ext::Detail::DataSize<ink::TextAnimationController>];
    float baseValue; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(baseValue))];
    float targetValue; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(targetValue))];
    int32_t numbersAfterDot; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(numbersAfterDot))];
    float stepValue; // F8
    uint8_t unk_120[0x120 - (0xF8 + sizeof(stepValue))];
    CString suffix; // 120
#else
    float baseValue; // F0
    float targetValue; // F4
    int32_t numbersAfterDot; // F8
    float stepValue; // FC
    uint8_t unk100[0x128 - 0x100]; // 100
    CString suffix; // 128
#endif
};
RED4EXT_ASSERT_SIZE(TextValueProgressAnimationController, 0x148);
} // namespace ink
using inkTextValueProgressAnimationController = ink::TextValueProgressAnimationController;
using inkTextValueProgressController = ink::TextValueProgressAnimationController;
} // namespace RED4ext

// clang-format on

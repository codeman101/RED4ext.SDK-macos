#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) BorderWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBorderWidget";
    static constexpr const char* ALIAS = "inkBorder";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_200[0x200 - ::RED4ext::Detail::DataSize<ink::LeafWidget>];
    float thickness; // 200
#else
    float thickness; // 210
    uint8_t unk214[0x220 - 0x214]; // 214
#endif
};
RED4EXT_ASSERT_SIZE(BorderWidget, 0x220);
} // namespace ink
using inkBorderWidget = ink::BorderWidget;
using inkBorder = ink::BorderWidget;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) BorderWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBorderWidget";
    static constexpr const char* ALIAS = "inkBorder";

    float thickness; // 200
    uint8_t unk204[0x210 - 0x204]; // 204
};
RED4EXT_ASSERT_SIZE(BorderWidget, 0x210);
} // namespace ink
using inkBorderWidget = ink::BorderWidget;
using inkBorder = ink::BorderWidget;
} // namespace RED4ext

// clang-format on

#endif

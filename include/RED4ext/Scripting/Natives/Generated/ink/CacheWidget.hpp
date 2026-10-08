#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) CacheWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkCacheWidget";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_228[0x228 - ::RED4ext::Detail::DataSize<ink::CompoundWidget>];
    CName externalDynamicTexture; // 228
    uint8_t unk_230[0x230 - (0x228 + sizeof(externalDynamicTexture))];
    Vector2 innerScale; // 230
    uint8_t unk_238[0x238 - (0x230 + sizeof(innerScale))];
    ink::CacheMode mode; // 238
#else
    CName externalDynamicTexture; // 230
    Vector2 innerScale; // 238
    ink::CacheMode mode; // 240
    uint8_t unk241[0x2F0 - 0x241]; // 241
#endif
};
RED4EXT_ASSERT_SIZE(CacheWidget, 0x2F0);
} // namespace ink
using inkCacheWidget = ink::CacheWidget;
} // namespace RED4ext

// clang-format on

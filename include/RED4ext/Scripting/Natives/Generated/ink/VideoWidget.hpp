#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct __declspec(align(0x10)) VideoWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkVideoWidget";
    static constexpr const char* ALIAS = "inkVideo";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_230[0x230 - ::RED4ext::Detail::DataSize<ink::LeafWidget>];
    RaRef<Bink> videoResource; // 230
    uint8_t unk_258[0x258 - (0x230 + sizeof(videoResource))];
    CName overriddenPlayerName; // 258
    uint8_t unk_268[0x268 - (0x258 + sizeof(overriddenPlayerName))];
    bool isParallaxEnabled; // 268
    uint8_t unk_26A[0x26A - (0x268 + sizeof(isParallaxEnabled))];
    bool loop; // 26A
    uint8_t unk_272[0x272 - (0x26A + sizeof(loop))];
    bool prefetchVideo; // 272
#else
    uint8_t unk210[0x248 - 0x210]; // 210
    RaRef<Bink> videoResource; // 248
    uint8_t unk250[0x270 - 0x250]; // 250
    CName overriddenPlayerName; // 270
    uint8_t unk278[0x280 - 0x278]; // 278
    bool isParallaxEnabled; // 280
    uint8_t unk281[0x282 - 0x281]; // 281
    bool loop; // 282
    uint8_t unk283[0x28A - 0x283]; // 283
    bool prefetchVideo; // 28A
    uint8_t unk28B[0x2E0 - 0x28B]; // 28B

#endif
};
RED4EXT_ASSERT_SIZE(VideoWidget, 0x2E0);
} // namespace ink
using inkVideoWidget = ink::VideoWidget;
using inkVideo = ink::VideoWidget;
} // namespace RED4ext

// clang-format on

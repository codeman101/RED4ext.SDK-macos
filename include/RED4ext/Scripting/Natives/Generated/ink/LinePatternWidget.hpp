#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EChildOrder.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LineVertex.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) LinePatternWidget : ink::ImageWidget
{
    static constexpr const char* NAME = "inkLinePatternWidget";
    static constexpr const char* ALIAS = "inkLinePattern";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_338[0x338 - ::RED4ext::Detail::DataSize<ink::ImageWidget>];
    DynArray<ink::LineVertex> vertexList; // 338
    uint8_t unk_34C[0x34C - (0x338 + sizeof(vertexList))];
    float spacing; // 34C
    uint8_t unk_350[0x350 - (0x34C + sizeof(spacing))];
    float looseSpacing; // 350
    uint8_t unk_354[0x354 - (0x350 + sizeof(looseSpacing))];
    float startOffset; // 354
    uint8_t unk_358[0x358 - (0x354 + sizeof(startOffset))];
    float endOffset; // 358
    uint8_t unk_35C[0x35C - (0x358 + sizeof(endOffset))];
    float fadeInLength; // 35C
    uint8_t unk_360[0x360 - (0x35C + sizeof(fadeInLength))];
    bool rotateWithSegment; // 360
    uint8_t unk_361[0x361 - (0x360 + sizeof(rotateWithSegment))];
    ink::EChildOrder patternDirection; // 361
#else
    DynArray<ink::LineVertex> vertexList; // 350
    uint8_t unk360[0x364 - 0x360]; // 360
    float spacing; // 364
    float looseSpacing; // 368
    float startOffset; // 36C
    float endOffset; // 370
    float fadeInLength; // 374
    bool rotateWithSegment; // 378
    ink::EChildOrder patternDirection; // 379
    uint8_t unk37A[0x380 - 0x37A]; // 37A

#endif
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x380);
} // namespace ink
using inkLinePatternWidget = ink::LinePatternWidget;
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EChildOrder.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LineVertex.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) LinePatternWidget : ink::ImageWidget
{
    static constexpr const char* NAME = "inkLinePatternWidget";
    static constexpr const char* ALIAS = "inkLinePattern";

    DynArray<ink::LineVertex> vertexList; // 340
    uint8_t unk350[0x354 - 0x350]; // 350
    float spacing; // 354
    float looseSpacing; // 358
    float startOffset; // 35C
    float endOffset; // 360
    float fadeInLength; // 364
    bool rotateWithSegment; // 368
    ink::EChildOrder patternDirection; // 369
    uint8_t unk36A[0x370 - 0x36A]; // 36A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x370);
} // namespace ink
using inkLinePatternWidget = ink::LinePatternWidget;
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext

// clang-format on

#endif

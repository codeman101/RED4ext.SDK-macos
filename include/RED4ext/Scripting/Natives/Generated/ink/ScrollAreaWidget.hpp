#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FitToContentDirection.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) ScrollAreaWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkScrollAreaWidget";
    static constexpr const char* ALIAS = "inkScrollArea";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_238[0x238 - ::RED4ext::Detail::DataSize<ink::CompoundWidget>];
    float horizontalScrolling; // 238
    uint8_t unk_23C[0x23C - (0x238 + sizeof(horizontalScrolling))];
    float verticalScrolling; // 23C
    uint8_t unk_240[0x240 - (0x23C + sizeof(verticalScrolling))];
    bool constrainContentPosition; // 240
    uint8_t unk_241[0x241 - (0x240 + sizeof(constrainContentPosition))];
    bool useInternalMask; // 241
    uint8_t unk_24C[0x24C - (0x241 + sizeof(useInternalMask))];
    ink::FitToContentDirection fitToContentDirection; // 24C
#else
    uint8_t unk240[0x250 - 0x240]; // 240
    float horizontalScrolling; // 250
    float verticalScrolling; // 254
    bool constrainContentPosition; // 258
    bool useInternalMask; // 259
    uint8_t unk25A[0x264 - 0x25A]; // 25A
    ink::FitToContentDirection fitToContentDirection; // 264
    uint8_t unk268[0x270 - 0x268]; // 268

#endif
};
RED4EXT_ASSERT_SIZE(ScrollAreaWidget, 0x270);
} // namespace ink
using inkScrollAreaWidget = ink::ScrollAreaWidget;
using inkScrollArea = ink::ScrollAreaWidget;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FitToContentDirection.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) ScrollAreaWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkScrollAreaWidget";
    static constexpr const char* ALIAS = "inkScrollArea";

    uint8_t unk230[0x240 - 0x230]; // 230
    float horizontalScrolling; // 240
    float verticalScrolling; // 244
    bool constrainContentPosition; // 248
    bool useInternalMask; // 249
    uint8_t unk24A[0x254 - 0x24A]; // 24A
    ink::FitToContentDirection fitToContentDirection; // 254
    uint8_t unk258[0x260 - 0x258]; // 258
};
RED4EXT_ASSERT_SIZE(ScrollAreaWidget, 0x260);
} // namespace ink
using inkScrollAreaWidget = ink::ScrollAreaWidget;
using inkScrollArea = ink::ScrollAreaWidget;
} // namespace RED4ext

// clang-format on

#endif

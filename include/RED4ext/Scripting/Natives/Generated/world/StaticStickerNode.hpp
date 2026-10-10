#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CBitmapTexture;

namespace world
{
struct StaticStickerNode : world::Node
{
    static constexpr const char* NAME = "worldStaticStickerNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    DynArray<CString> labels; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(labels))];
    DynArray<RaRef<CBitmapTexture>> sprites; // 48
    uint8_t unk_78[0x78 - (0x48 + sizeof(sprites))];
    Color textColor; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(textColor))];
    Color backgroundColor; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(backgroundColor))];
    int32_t spriteSize; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(spriteSize))];
    float scale; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(scale))];
    float visibilityDistance; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(visibilityDistance))];
    bool showBackground; // 8C
    uint8_t unk_8D[0x8D - (0x8C + sizeof(showBackground))];
    bool alignSpritesHorizontally; // 8D
#else
    DynArray<CString> labels; // 38
    DynArray<RaRef<CBitmapTexture>> sprites; // 48
    uint8_t unk58[0x78 - 0x58]; // 58
    Color textColor; // 78
    Color backgroundColor; // 7C
    int32_t spriteSize; // 80
    float scale; // 84
    float visibilityDistance; // 88
    bool showBackground; // 8C
    bool alignSpritesHorizontally; // 8D
    uint8_t unk8E[0x90 - 0x8E]; // 8E
#endif
};
RED4EXT_ASSERT_SIZE(StaticStickerNode, 0x90);
} // namespace world
using worldStaticStickerNode = world::StaticStickerNode;
} // namespace RED4ext

// clang-format on

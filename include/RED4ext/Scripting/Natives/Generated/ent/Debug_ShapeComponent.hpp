#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Debug_ShapeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) Debug_ShapeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entDebug_ShapeComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_13C[0x13C - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    ent::Debug_ShapeType shape; // 13C
    uint8_t unk_13E[0x13E - (0x13C + sizeof(shape))];
    Color color; // 13E
    uint8_t unk_144[0x144 - (0x13E + sizeof(color))];
    float radius; // 144
    uint8_t unk_148[0x148 - (0x144 + sizeof(radius))];
    float halfHeight; // 148
#else
    ent::Debug_ShapeType shape; // 140
    uint8_t unk141[0x142 - 0x141]; // 141
    Color color; // 142
    uint8_t unk146[0x148 - 0x146]; // 146
    float radius; // 148
    float halfHeight; // 14C
#endif
};
RED4EXT_ASSERT_SIZE(Debug_ShapeComponent, 0x150);
} // namespace ent
using entDebug_ShapeComponent = ent::Debug_ShapeComponent;
} // namespace RED4ext

// clang-format on

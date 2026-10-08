#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
struct AreaShapeOutline;

namespace game
{
struct __declspec(align(0x10)) StaticAreaShapeComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameStaticAreaShapeComponent";
    static constexpr const char* ALIAS = "AreaShapeComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_128[0x128 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    Handle<AreaShapeOutline> outline; // 128
    uint8_t unk_138[0x138 - (0x128 + sizeof(outline))];
    Color color; // 138
#else
    uint8_t unk120[0x128 - 0x120]; // 120
    Handle<AreaShapeOutline> outline; // 128
    Color color; // 138
    uint8_t unk13C[0x150 - 0x13C]; // 13C
#endif
};
RED4EXT_ASSERT_SIZE(StaticAreaShapeComponent, 0x150);
} // namespace game
using gameStaticAreaShapeComponent = game::StaticAreaShapeComponent;
using AreaShapeComponent = game::StaticAreaShapeComponent;
} // namespace RED4ext

// clang-format on

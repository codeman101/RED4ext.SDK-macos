#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetupColorBarForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupColorBarForAttributeEvent";
    static constexpr const char* ALIAS = "SetupColorBarForAttributeEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint32_t attribute; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(attribute))];
    float startValue; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(startValue))];
    float minValue; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(minValue))];
    float maxValue; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(maxValue))];
    float step; // 50
#else
    uint32_t attribute; // 40
    float startValue; // 44
    float minValue; // 48
    float maxValue; // 4C
    float step; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(SetupColorBarForAttributeEvent, 0x58);
} // namespace game::ui
using gameuiSetupColorBarForAttributeEvent = game::ui::SetupColorBarForAttributeEvent;
using SetupColorBarForAttributeEvent = game::ui::SetupColorBarForAttributeEvent;
} // namespace RED4ext

// clang-format on

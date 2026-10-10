#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetupOptionButtonForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupOptionButtonForAttributeEvent";
    static constexpr const char* ALIAS = "SetupOptionButtonForAttributeEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint32_t attribute; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(attribute))];
    CString value; // 48
#else
    uint32_t attribute; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CString value; // 48
#endif
};
RED4EXT_ASSERT_SIZE(SetupOptionButtonForAttributeEvent, 0x68);
} // namespace game::ui
using gameuiSetupOptionButtonForAttributeEvent = game::ui::SetupOptionButtonForAttributeEvent;
using SetupOptionButtonForAttributeEvent = game::ui::SetupOptionButtonForAttributeEvent;
} // namespace RED4ext

// clang-format on

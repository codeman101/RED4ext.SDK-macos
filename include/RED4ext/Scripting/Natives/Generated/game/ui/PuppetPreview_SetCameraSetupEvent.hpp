#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreview_SetCameraSetupEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPuppetPreview_SetCameraSetupEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint32_t setupIndex; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(setupIndex))];
    CName slotName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(slotName))];
    bool delayed; // 50
#else
    uint32_t setupIndex; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName slotName; // 48
    bool delayed; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(PuppetPreview_SetCameraSetupEvent, 0x58);
} // namespace game::ui
using gameuiPuppetPreview_SetCameraSetupEvent = game::ui::PuppetPreview_SetCameraSetupEvent;
} // namespace RED4ext

// clang-format on

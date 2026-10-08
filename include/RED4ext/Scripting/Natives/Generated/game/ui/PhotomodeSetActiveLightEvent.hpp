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
struct PhotomodeSetActiveLightEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeSetActiveLightEvent";
    static constexpr const char* ALIAS = "PhotomodeSetActiveLightEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool isLightTabActive; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(isLightTabActive))];
    bool isCurrentLightEnabled; // 41
    uint8_t unk_44[0x44 - (0x41 + sizeof(isCurrentLightEnabled))];
    int32_t lightIndex; // 44
#else
    bool isLightTabActive; // 40
    bool isCurrentLightEnabled; // 41
    uint8_t unk42[0x44 - 0x42]; // 42
    int32_t lightIndex; // 44
#endif
};
RED4EXT_ASSERT_SIZE(PhotomodeSetActiveLightEvent, 0x48);
} // namespace game::ui
using gameuiPhotomodeSetActiveLightEvent = game::ui::PhotomodeSetActiveLightEvent;
using PhotomodeSetActiveLightEvent = game::ui::PhotomodeSetActiveLightEvent;
} // namespace RED4ext

// clang-format on

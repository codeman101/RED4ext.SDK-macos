#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct NotifyFootstepMaterialContextChanged : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyFootstepMaterialContextChanged";
    static constexpr const char* ALIAS = "NotifyFootstepMaterialContextChangedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName footwareType; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(footwareType))];
    CName surfaceFlavourName; // 48
#else
    CName footwareType; // 40
    CName surfaceFlavourName; // 48
#endif
};
RED4EXT_ASSERT_SIZE(NotifyFootstepMaterialContextChanged, 0x50);
} // namespace game::audio::events
using gameaudioeventsNotifyFootstepMaterialContextChanged = game::audio::events::NotifyFootstepMaterialContextChanged;
using NotifyFootstepMaterialContextChangedEvent = game::audio::events::NotifyFootstepMaterialContextChanged;
} // namespace RED4ext

// clang-format on

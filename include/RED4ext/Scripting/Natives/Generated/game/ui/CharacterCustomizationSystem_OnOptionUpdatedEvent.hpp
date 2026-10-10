#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationOption; }

namespace game::ui
{
struct CharacterCustomizationSystem_OnOptionUpdatedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationSystem_OnOptionUpdatedEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::ui::CharacterCustomizationOption> option; // 40
#else
    WeakHandle<game::ui::CharacterCustomizationOption> option; // 40
#endif
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem_OnOptionUpdatedEvent, 0x50);
} // namespace game::ui
using gameuiCharacterCustomizationSystem_OnOptionUpdatedEvent = game::ui::CharacterCustomizationSystem_OnOptionUpdatedEvent;
} // namespace RED4ext

// clang-format on

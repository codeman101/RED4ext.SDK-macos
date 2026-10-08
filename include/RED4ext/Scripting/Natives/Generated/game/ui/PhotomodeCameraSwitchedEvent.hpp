#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::ui
{
struct PhotomodeCameraSwitchedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeCameraSwitchedEvent";
    static constexpr const char* ALIAS = "PhotomodeCameraSwitchedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<ent::Entity> camera; // 40
#else
    WeakHandle<ent::Entity> camera; // 40
#endif
};
RED4EXT_ASSERT_SIZE(PhotomodeCameraSwitchedEvent, 0x50);
} // namespace game::ui
using gameuiPhotomodeCameraSwitchedEvent = game::ui::PhotomodeCameraSwitchedEvent;
using PhotomodeCameraSwitchedEvent = game::ui::PhotomodeCameraSwitchedEvent;
} // namespace RED4ext

// clang-format on

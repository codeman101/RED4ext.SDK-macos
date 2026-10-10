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
struct PhotomodeLightInitializedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeLightInitializedEvent";
    static constexpr const char* ALIAS = "PhotomodeLightInitializedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<ent::Entity> light; // 40
#else
    WeakHandle<ent::Entity> light; // 40
#endif
};
RED4EXT_ASSERT_SIZE(PhotomodeLightInitializedEvent, 0x50);
} // namespace game::ui
using gameuiPhotomodeLightInitializedEvent = game::ui::PhotomodeLightInitializedEvent;
using PhotomodeLightInitializedEvent = game::ui::PhotomodeLightInitializedEvent;
} // namespace RED4ext

// clang-format on

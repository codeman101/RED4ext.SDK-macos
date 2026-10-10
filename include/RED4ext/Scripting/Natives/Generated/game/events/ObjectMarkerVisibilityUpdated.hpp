#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct ObjectMarkerVisibilityUpdated : red::Event
{
    static constexpr const char* NAME = "gameeventsObjectMarkerVisibilityUpdated";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool canHaveObjectMarker; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(canHaveObjectMarker))];
    bool isVisible; // 41
#else
    bool canHaveObjectMarker; // 40
    bool isVisible; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
#endif
};
RED4EXT_ASSERT_SIZE(ObjectMarkerVisibilityUpdated, 0x48);
} // namespace game::events
using gameeventsObjectMarkerVisibilityUpdated = game::events::ObjectMarkerVisibilityUpdated;
} // namespace RED4ext

// clang-format on

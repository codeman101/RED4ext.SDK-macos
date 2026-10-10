#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingRelationship.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::mounting { struct MountingRequest; }

namespace game::mounting
{
struct MountingEvent : red::Event
{
    static constexpr const char* NAME = "gamemountingMountingEvent";
    static constexpr const char* ALIAS = "MountingEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Handle<game::mounting::MountingRequest> request; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(request))];
    game::mounting::MountingRelationship relationship; // 50
#else
    Handle<game::mounting::MountingRequest> request; // 40
    game::mounting::MountingRelationship relationship; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MountingEvent, 0x78);
} // namespace game::mounting
using gamemountingMountingEvent = game::mounting::MountingEvent;
using MountingEvent = game::mounting::MountingEvent;
} // namespace RED4ext

// clang-format on

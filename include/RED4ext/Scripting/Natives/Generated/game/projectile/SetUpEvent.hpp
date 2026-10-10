#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::projectile { struct TrajectoryParams; }

namespace game::projectile
{
struct __declspec(align(0x10)) SetUpEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSetUpEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> owner; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(owner))];
    WeakHandle<game::Object> weapon; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(weapon))];
    Handle<game::projectile::TrajectoryParams> trajectoryParams; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(trajectoryParams))];
    float lerpMultiplier; // 70
#else
    WeakHandle<game::Object> owner; // 40
    WeakHandle<game::Object> weapon; // 50
    Handle<game::projectile::TrajectoryParams> trajectoryParams; // 60
    float lerpMultiplier; // 70
    uint8_t unk74[0xB0 - 0x74]; // 74
#endif
};
RED4EXT_ASSERT_SIZE(SetUpEvent, 0xB0);
} // namespace game::projectile
using gameprojectileSetUpEvent = game::projectile::SetUpEvent;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TraceResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace ent { struct IComponent; }

namespace game::projectile
{
struct __declspec(align(0x10)) BroadPhaseHitEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileBroadPhaseHitEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    physics::TraceResult traceResult; // 40
    uint8_t unk_A0[0xA0 - (0x40 + sizeof(traceResult))];
    Vector4 position; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(position))];
    WeakHandle<ent::Entity> hitObject; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(hitObject))];
    WeakHandle<ent::IComponent> hitComponent; // C0
#else
    physics::TraceResult traceResult; // 40
    Vector4 position; // A0
    WeakHandle<ent::Entity> hitObject; // B0
    WeakHandle<ent::IComponent> hitComponent; // C0
#endif
};
RED4EXT_ASSERT_SIZE(BroadPhaseHitEvent, 0xD0);
} // namespace game::projectile
using gameprojectileBroadPhaseHitEvent = game::projectile::BroadPhaseHitEvent;
} // namespace RED4ext

// clang-format on

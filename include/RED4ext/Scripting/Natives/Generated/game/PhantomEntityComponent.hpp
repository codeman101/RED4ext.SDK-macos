#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PhantomEntityParameters.hpp>

namespace RED4ext
{
namespace game { struct EffectComponentBinding; }

namespace game
{
struct PhantomEntityComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhantomEntityComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    game::PhantomEntityParameters params; // 90
    uint8_t unk_D0[0xD0 - (0x90 + sizeof(params))];
    Handle<game::EffectComponentBinding> effectBinding; // D0
#else
    game::PhantomEntityParameters params; // 90
    Handle<game::EffectComponentBinding> effectBinding; // D0
#endif
};
RED4EXT_ASSERT_SIZE(PhantomEntityComponent, 0xE0);
} // namespace game
using gamePhantomEntityComponent = game::PhantomEntityComponent;
} // namespace RED4ext

// clang-format on

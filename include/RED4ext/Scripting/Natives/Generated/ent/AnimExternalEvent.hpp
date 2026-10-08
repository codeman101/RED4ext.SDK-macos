#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimExternalEvent : red::Event
{
    static constexpr const char* NAME = "entAnimExternalEvent";
    static constexpr const char* ALIAS = "AnimExternalEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName name; // 40
#else
    CName name; // 40
#endif
};
RED4EXT_ASSERT_SIZE(AnimExternalEvent, 0x48);
} // namespace ent
using entAnimExternalEvent = ent::AnimExternalEvent;
using AnimExternalEvent = ent::AnimExternalEvent;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LookAtAddEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct ContextualLookAtAddEvent : ent::LookAtAddEvent
{
    static constexpr const char* NAME = "entContextualLookAtAddEvent";
    static constexpr const char* ALIAS = "ContextualLookAtAddEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D8[0xD8 - ::RED4ext::Detail::DataSize<ent::LookAtAddEvent>];
    CName contextName; // D8
#else
    CName contextName; // D8
#endif
};
RED4EXT_ASSERT_SIZE(ContextualLookAtAddEvent, 0xE0);
} // namespace ent
using entContextualLookAtAddEvent = ent::ContextualLookAtAddEvent;
using ContextualLookAtAddEvent = ent::ContextualLookAtAddEvent;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct ChangeStateEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimChangeStateEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<ink::anim::Event>];
    CName state; // 48
#else
    CName state; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ChangeStateEvent, 0x50);
} // namespace ink::anim
using inkanimChangeStateEvent = ink::anim::ChangeStateEvent;
} // namespace RED4ext

// clang-format on

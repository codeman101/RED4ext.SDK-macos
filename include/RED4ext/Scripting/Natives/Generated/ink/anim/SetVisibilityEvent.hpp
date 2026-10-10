#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct SetVisibilityEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimSetVisibilityEvent";
    static constexpr const char* ALIAS = "inkAnimSetVisibilityEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<ink::anim::Event>];
    bool isVisible; // 44
#else
    bool isVisible; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(SetVisibilityEvent, 0x50);
} // namespace ink::anim
using inkanimSetVisibilityEvent = ink::anim::SetVisibilityEvent;
using inkAnimSetVisibilityEvent = ink::anim::SetVisibilityEvent;
} // namespace RED4ext

// clang-format on

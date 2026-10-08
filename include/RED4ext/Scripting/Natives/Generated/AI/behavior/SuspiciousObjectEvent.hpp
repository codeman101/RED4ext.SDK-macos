#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI::behavior
{
struct SuspiciousObjectEvent : red::Event
{
    static constexpr const char* NAME = "AIbehaviorSuspiciousObjectEvent";
    static constexpr const char* ALIAS = "SuspiciousObjectEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> target; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(target))];
    CName description; // 50
#else
    WeakHandle<game::Object> target; // 40
    CName description; // 50
#endif
};
RED4EXT_ASSERT_SIZE(SuspiciousObjectEvent, 0x58);
} // namespace AI::behavior
using AIbehaviorSuspiciousObjectEvent = AI::behavior::SuspiciousObjectEvent;
using SuspiciousObjectEvent = AI::behavior::SuspiciousObjectEvent;
} // namespace RED4ext

// clang-format on

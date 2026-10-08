#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace game { struct MountEventData; }

namespace game
{
struct MountAIEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameMountAIEvent";
    static constexpr const char* ALIAS = "MountAIEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    Handle<game::MountEventData> data; // 50
#else
    Handle<game::MountEventData> data; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MountAIEvent, 0x60);
} // namespace game
using gameMountAIEvent = game::MountAIEvent;
using MountAIEvent = game::MountAIEvent;
} // namespace RED4ext

// clang-format on

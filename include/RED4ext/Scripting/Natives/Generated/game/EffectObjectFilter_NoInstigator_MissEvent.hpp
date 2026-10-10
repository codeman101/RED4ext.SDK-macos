#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_NoInstigator_MissEvent : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NoInstigator_MissEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectGroupFilter>];
    bool npcMissEvents; // 40
#else
    bool npcMissEvents; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NoInstigator_MissEvent, 0x48);
} // namespace game
using gameEffectObjectFilter_NoInstigator_MissEvent = game::EffectObjectFilter_NoInstigator_MissEvent;
} // namespace RED4ext

// clang-format on

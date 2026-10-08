#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeakSpotReplicatedInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameWeakspotComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_20[0x20 - ::RED4ext::Detail::DataSize<net::IComponentState>];
    DynArray<game::WeakSpotReplicatedInfo> WeakspotRepInfos; // 20
#else
    DynArray<game::WeakSpotReplicatedInfo> WeakspotRepInfos; // 20
#endif
};
RED4EXT_ASSERT_SIZE(WeakspotComponentReplicatedState, 0x30);
} // namespace game
using gameWeakspotComponentReplicatedState = game::WeakspotComponentReplicatedState;
} // namespace RED4ext

// clang-format on

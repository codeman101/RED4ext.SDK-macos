#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionRotateBaseState.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ActionRotateToObjectState : game::ActionRotateBaseState
{
    static constexpr const char* NAME = "gameActionRotateToObjectState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<game::ActionRotateBaseState>];
    WeakHandle<game::Object> targetObject; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(targetObject))];
    bool completeWhenRotated; // 48
#else
    WeakHandle<game::Object> targetObject; // 40
    bool completeWhenRotated; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(ActionRotateToObjectState, 0x58);
} // namespace game
using gameActionRotateToObjectState = game::ActionRotateToObjectState;
} // namespace RED4ext

// clang-format on

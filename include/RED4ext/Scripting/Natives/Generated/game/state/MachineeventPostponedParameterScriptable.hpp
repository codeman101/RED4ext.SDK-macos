#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventPostponedParameterBase.hpp>

namespace RED4ext
{
struct IScriptable;

namespace game::state
{
struct MachineeventPostponedParameterScriptable : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterScriptable";
    static constexpr const char* ALIAS = "PSMPostponedParameterScriptable";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<game::state::MachineeventPostponedParameterBase>];
    Handle<IScriptable> value; // 50
#else
    Handle<IScriptable> value; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterScriptable, 0x60);
} // namespace game::state
using gamestateMachineeventPostponedParameterScriptable = game::state::MachineeventPostponedParameterScriptable;
using PSMPostponedParameterScriptable = game::state::MachineeventPostponedParameterScriptable;
} // namespace RED4ext

// clang-format on

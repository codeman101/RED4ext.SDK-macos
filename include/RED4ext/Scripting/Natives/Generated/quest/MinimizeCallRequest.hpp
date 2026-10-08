#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace quest
{
struct MinimizeCallRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "questMinimizeCallRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_45[0x45 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    bool minimized; // 45
#else
    bool minimized; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(MinimizeCallRequest, 0x50);
} // namespace quest
using questMinimizeCallRequest = quest::MinimizeCallRequest;
} // namespace RED4ext

// clang-format on

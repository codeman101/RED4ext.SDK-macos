#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct SDOClickedRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSDOClickedRequest";
    static constexpr const char* ALIAS = "SDOClickedRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    CName fullPath; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(fullPath))];
    CName key; // 50
#else
    CName fullPath; // 48
    CName key; // 50
#endif
};
RED4EXT_ASSERT_SIZE(SDOClickedRequest, 0x58);
} // namespace game
using gameSDOClickedRequest = game::SDOClickedRequest;
using SDOClickedRequest = game::SDOClickedRequest;
} // namespace RED4ext

// clang-format on

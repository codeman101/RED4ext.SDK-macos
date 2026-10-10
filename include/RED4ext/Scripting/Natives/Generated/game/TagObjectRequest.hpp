#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct TagObjectRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameTagObjectRequest";
    static constexpr const char* ALIAS = "TagObjectRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    WeakHandle<game::Object> object; // 48
#else
    WeakHandle<game::Object> object; // 48
#endif
};
RED4EXT_ASSERT_SIZE(TagObjectRequest, 0x58);
} // namespace game
using gameTagObjectRequest = game::TagObjectRequest;
using TagObjectRequest = game::TagObjectRequest;
} // namespace RED4ext

// clang-format on

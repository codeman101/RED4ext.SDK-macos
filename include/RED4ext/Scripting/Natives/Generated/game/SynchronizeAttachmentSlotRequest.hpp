#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct SynchronizeAttachmentSlotRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSynchronizeAttachmentSlotRequest";
    static constexpr const char* ALIAS = "SynchronizeAttachmentSlotRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    TweakDBID slotID; // 58
#else
    TweakDBID slotID; // 58
#endif
};
RED4EXT_ASSERT_SIZE(SynchronizeAttachmentSlotRequest, 0x60);
} // namespace game
using gameSynchronizeAttachmentSlotRequest = game::SynchronizeAttachmentSlotRequest;
using SynchronizeAttachmentSlotRequest = game::SynchronizeAttachmentSlotRequest;
} // namespace RED4ext

// clang-format on

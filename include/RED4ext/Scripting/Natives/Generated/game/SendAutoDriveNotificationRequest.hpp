#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct SendAutoDriveNotificationRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSendAutoDriveNotificationRequest";
    static constexpr const char* ALIAS = "SendAutoDriveNotificationRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    CString locKey; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(locKey))];
    bool isDelamain; // 68
#else
    CString locKey; // 48
    bool isDelamain; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
#endif
};
RED4EXT_ASSERT_SIZE(SendAutoDriveNotificationRequest, 0x70);
} // namespace game
using gameSendAutoDriveNotificationRequest = game::SendAutoDriveNotificationRequest;
using SendAutoDriveNotificationRequest = game::SendAutoDriveNotificationRequest;
} // namespace RED4ext

// clang-format on

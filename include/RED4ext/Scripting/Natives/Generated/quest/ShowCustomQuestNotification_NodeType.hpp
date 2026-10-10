#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CustomQuestNotificationData.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowCustomQuestNotification_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowCustomQuestNotification_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    quest::CustomQuestNotificationData customQuestNotificationData; // 38
#else
    quest::CustomQuestNotificationData customQuestNotificationData; // 38
#endif
};
RED4EXT_ASSERT_SIZE(ShowCustomQuestNotification_NodeType, 0xA0);
} // namespace quest
using questShowCustomQuestNotification_NodeType = quest::ShowCustomQuestNotification_NodeType;
} // namespace RED4ext

// clang-format on

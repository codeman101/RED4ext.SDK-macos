#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
struct Bink;
namespace ink { struct WidgetLibraryResource; }
namespace scn { struct SceneResource; }

namespace quest
{
struct GlobalTvScheduler_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questGlobalTvScheduler_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    TweakDBID channelId; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(channelId))];
    RaRef<Bink> videoResource; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(videoResource))];
    RaRef<ink::WidgetLibraryResource> overlayResource; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(overlayResource))];
    RaRef<scn::SceneResource> VOScene; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(VOScene))];
    CName audioEvent; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(audioEvent))];
    TweakDBID newsTitleTweak; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(newsTitleTweak))];
    TweakDBID randomNewsFeedPack; // 70
#else
    TweakDBID channelId; // 38
    RaRef<Bink> videoResource; // 40
    RaRef<ink::WidgetLibraryResource> overlayResource; // 48
    uint8_t unk50[0x58 - 0x50]; // 50
    RaRef<scn::SceneResource> VOScene; // 58
    CName audioEvent; // 60
    TweakDBID newsTitleTweak; // 68
    TweakDBID randomNewsFeedPack; // 70
#endif
};
RED4EXT_ASSERT_SIZE(GlobalTvScheduler_NodeType, 0x78);
} // namespace quest
using questGlobalTvScheduler_NodeType = quest::GlobalTvScheduler_NodeType;
} // namespace RED4ext

// clang-format on

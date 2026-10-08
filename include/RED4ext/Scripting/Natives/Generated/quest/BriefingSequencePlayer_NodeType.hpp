#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/LoopType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingPlayerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingSequencePlayerFunction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace ink { struct UserData; }
namespace ink { struct WidgetLibraryResource; }

namespace quest
{
struct BriefingSequencePlayer_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questBriefingSequencePlayer_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    quest::BriefingSequencePlayerFunction function; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(function))];
    RaRef<ink::WidgetLibraryResource> briefingResource; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(briefingResource))];
    Handle<ink::UserData> userData; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(userData))];
    CName audioEvent; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(audioEvent))];
    CName animationName; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(animationName))];
    CName startMarkerName; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(startMarkerName))];
    CName endMarkerName; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(endMarkerName))];
    ink::anim::LoopType loopType; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(loopType))];
    quest::BriefingPlayerType briefingPlayerType; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(briefingPlayerType))];
    quest::BriefingType briefingType; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(briefingType))];
    bool enableScanner; // 7C
#else
    quest::BriefingSequencePlayerFunction function; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    RaRef<ink::WidgetLibraryResource> briefingResource; // 40
    Handle<ink::UserData> userData; // 48
    CName audioEvent; // 58
    CName animationName; // 60
    CName startMarkerName; // 68
    CName endMarkerName; // 70
    ink::anim::LoopType loopType; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    quest::BriefingPlayerType briefingPlayerType; // 7C
    quest::BriefingType briefingType; // 80
    bool enableScanner; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
#endif
};
RED4EXT_ASSERT_SIZE(BriefingSequencePlayer_NodeType, 0x88);
} // namespace quest
using questBriefingSequencePlayer_NodeType = quest::BriefingSequencePlayer_NodeType;
} // namespace RED4ext

// clang-format on

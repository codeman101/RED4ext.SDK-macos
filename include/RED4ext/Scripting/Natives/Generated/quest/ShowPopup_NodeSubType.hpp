#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PopupPosition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VideoType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITutorial_NodeSubType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TutorialScreenMode.hpp>

namespace RED4ext
{
struct Bink;
namespace game { struct JournalPath; }

namespace quest
{
struct ShowPopup_NodeSubType : quest::ITutorial_NodeSubType
{
    static constexpr const char* NAME = "questShowPopup_NodeSubType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ITutorial_NodeSubType>];
    Handle<game::JournalPath> path; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(path))];
    bool open; // 48
    uint8_t unk_49[0x49 - (0x48 + sizeof(open))];
    bool closeAtInput; // 49
    uint8_t unk_4A[0x4A - (0x49 + sizeof(closeAtInput))];
    bool pauseGame; // 4A
    uint8_t unk_4B[0x4B - (0x4A + sizeof(pauseGame))];
    bool hideInMenu; // 4B
    uint8_t unk_4C[0x4C - (0x4B + sizeof(hideInMenu))];
    ink::Margin margin; // 4C
    uint8_t unk_5C[0x5C - (0x4C + sizeof(margin))];
    quest::TutorialScreenMode screenMode; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(screenMode))];
    game::PopupPosition position; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(position))];
    bool lockPlayerMovement; // 64
    uint8_t unk_65[0x65 - (0x64 + sizeof(lockPlayerMovement))];
    bool closeCurrentPopup; // 65
    uint8_t unk_66[0x66 - (0x65 + sizeof(closeCurrentPopup))];
    game::VideoType videoType; // 66
    uint8_t unk_68[0x68 - (0x66 + sizeof(videoType))];
    RaRef<Bink> video; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(video))];
    bool ignoreDisabledTutorials; // 70
#else
    Handle<game::JournalPath> path; // 38
    bool open; // 48
    bool closeAtInput; // 49
    bool pauseGame; // 4A
    bool hideInMenu; // 4B
    ink::Margin margin; // 4C
    quest::TutorialScreenMode screenMode; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    game::PopupPosition position; // 60
    bool lockPlayerMovement; // 64
    bool closeCurrentPopup; // 65
    game::VideoType videoType; // 66
    uint8_t unk67[0x68 - 0x67]; // 67
    RaRef<Bink> video; // 68
    bool ignoreDisabledTutorials; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(ShowPopup_NodeSubType, 0x78);
} // namespace quest
using questShowPopup_NodeSubType = quest::ShowPopup_NodeSubType;
} // namespace RED4ext

// clang-format on

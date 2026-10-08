#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct SceneTalking_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneTalking_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    game::EntityReference GlobalEntityRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(GlobalEntityRef))];
    RaRef<scn::SceneResource> sceneFile; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(sceneFile))];
    scn::SceneVersionCheck SceneVersion; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(SceneVersion))];
    CName SectionName; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(SectionName))];
    CString ActorName; // 88
    uint8_t unk_A8[0xA8 - (0x88 + sizeof(ActorName))];
    bool isInverted; // A8
#else
    game::EntityReference GlobalEntityRef; // 38
    RaRef<scn::SceneResource> sceneFile; // 70
    scn::SceneVersionCheck SceneVersion; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CName SectionName; // 80
    CString ActorName; // 88
    bool isInverted; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
#endif
};
RED4EXT_ASSERT_SIZE(SceneTalking_ConditionType, 0xB0);
} // namespace quest
using questSceneTalking_ConditionType = quest::SceneTalking_ConditionType;
} // namespace RED4ext

// clang-format on

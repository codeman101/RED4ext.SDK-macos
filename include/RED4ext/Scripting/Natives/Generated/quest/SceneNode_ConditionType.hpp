#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct SceneNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sceneFile))];
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(SceneVersion))];
    quest::SceneConditionType type; // 41
    uint8_t unk_48[0x48 - (0x41 + sizeof(type))];
    CName ActorName; // 48
#else
    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    quest::SceneConditionType type; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    CName ActorName; // 48
#endif
};
RED4EXT_ASSERT_SIZE(SceneNode_ConditionType, 0x50);
} // namespace quest
using questSceneNode_ConditionType = quest::SceneNode_ConditionType;
} // namespace RED4ext

// clang-format on

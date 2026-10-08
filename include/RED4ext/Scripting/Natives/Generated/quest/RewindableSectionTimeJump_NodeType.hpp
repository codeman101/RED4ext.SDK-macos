#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlaySpeed.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct RewindableSectionTimeJump_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questRewindableSectionTimeJump_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sceneFile))];
    uint32_t jumpTargetTime; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(jumpTargetTime))];
    float jumpSpeed; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(jumpSpeed))];
    scn::PlayDirection postJumpPlayDirection; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(postJumpPlayDirection))];
    scn::PlaySpeed postJumpPlaySpeed; // 4C
#else
    RaRef<scn::SceneResource> sceneFile; // 38
    uint32_t jumpTargetTime; // 40
    float jumpSpeed; // 44
    scn::PlayDirection postJumpPlayDirection; // 48
    scn::PlaySpeed postJumpPlaySpeed; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(RewindableSectionTimeJump_NodeType, 0x50);
} // namespace quest
using questRewindableSectionTimeJump_NodeType = quest::RewindableSectionTimeJump_NodeType;
} // namespace RED4ext

// clang-format on

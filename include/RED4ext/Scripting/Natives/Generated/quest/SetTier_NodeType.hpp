#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MotionConstrainedTierDataParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    GameplayTier tier; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(tier))];
    bool usePlayerWorkspot; // 38
    uint8_t unk_39[0x39 - (0x38 + sizeof(usePlayerWorkspot))];
    bool useEnterAnim; // 39
    uint8_t unk_3A[0x3A - (0x39 + sizeof(useEnterAnim))];
    bool useExitAnim; // 3A
    uint8_t unk_3B[0x3B - (0x3A + sizeof(useExitAnim))];
    bool forceEmptyHands; // 3B
    uint8_t unk_40[0x40 - (0x3B + sizeof(forceEmptyHands))];
    game::MotionConstrainedTierDataParams motionConstrainedTierDataParams; // 40
#else
    GameplayTier tier; // 38
    bool usePlayerWorkspot; // 3C
    bool useEnterAnim; // 3D
    bool useExitAnim; // 3E
    bool forceEmptyHands; // 3F
    game::MotionConstrainedTierDataParams motionConstrainedTierDataParams; // 40
#endif
};
RED4EXT_ASSERT_SIZE(SetTier_NodeType, 0x60);
} // namespace quest
using questSetTier_NodeType = quest::SetTier_NodeType;
} // namespace RED4ext

// clang-format on

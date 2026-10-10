#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionAnimationSlideParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature_AIAction; }
namespace game { struct Object; }

namespace game
{
struct ActionAnimationState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionAnimationState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_28[0x28 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    CName animFeatureName; // 28
    uint8_t unk_30[0x30 - (0x28 + sizeof(animFeatureName))];
    Handle<anim::AnimFeature_AIAction> animFeature; // 30
    uint8_t unk_40[0x40 - (0x30 + sizeof(animFeature))];
    bool useRootMotion; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(useRootMotion))];
    bool usePoseMatching; // 41
    uint8_t unk_42[0x42 - (0x41 + sizeof(usePoseMatching))];
    bool motionDynamicObjectsCheck; // 42
    uint8_t unk_44[0x44 - (0x42 + sizeof(motionDynamicObjectsCheck))];
    game::ActionAnimationSlideParams slideParams; // 44
    uint8_t unk_80[0x80 - (0x44 + sizeof(slideParams))];
    WeakHandle<game::Object> targetObject; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(targetObject))];
    bool sendLoopEvent; // 90
#else
    CName animFeatureName; // 28
    Handle<anim::AnimFeature_AIAction> animFeature; // 30
    bool useRootMotion; // 40
    bool usePoseMatching; // 41
    bool motionDynamicObjectsCheck; // 42
    uint8_t unk43[0x44 - 0x43]; // 43
    game::ActionAnimationSlideParams slideParams; // 44
    WeakHandle<game::Object> targetObject; // 80
    bool sendLoopEvent; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
#endif
};
RED4EXT_ASSERT_SIZE(ActionAnimationState, 0x98);
} // namespace game
using gameActionAnimationState = game::ActionAnimationState;
} // namespace RED4ext

// clang-format on

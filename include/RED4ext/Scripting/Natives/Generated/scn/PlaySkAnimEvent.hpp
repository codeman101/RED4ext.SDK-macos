#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayFPPControlAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlaySkAnimRootMotionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayerAnimData.hpp>

namespace RED4ext
{
namespace scn { struct AnimName; }
namespace scn { struct EventBlendWorkspotSetupParameters; }

namespace scn
{
struct __declspec(align(0x10)) PlaySkAnimEvent : scn::PlayFPPControlAnimEvent
{
    static constexpr const char* NAME = "scnPlaySkAnimEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<scn::PlayFPPControlAnimEvent>];
    Handle<scn::AnimName> animName; // F8
    uint8_t unk_108[0x108 - (0xF8 + sizeof(animName))];
    Handle<scn::EventBlendWorkspotSetupParameters> poseBlendOutWorkspot; // 108
    uint8_t unk_120[0x120 - (0x108 + sizeof(poseBlendOutWorkspot))];
    scn::PlaySkAnimRootMotionData rootMotionData; // 120
    uint8_t unk_1E0[0x1E0 - (0x120 + sizeof(rootMotionData))];
    scn::PlayerAnimData playerData; // 1E0
#else
    Handle<scn::AnimName> animName; // F8
    Handle<scn::EventBlendWorkspotSetupParameters> poseBlendOutWorkspot; // 108
    uint8_t unk118[0x120 - 0x118]; // 118
    scn::PlaySkAnimRootMotionData rootMotionData; // 120
    scn::PlayerAnimData playerData; // 1E0
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
#endif
};
RED4EXT_ASSERT_SIZE(PlaySkAnimEvent, 0x200);
} // namespace scn
using scnPlaySkAnimEvent = scn::PlaySkAnimEvent;
} // namespace RED4ext

// clang-format on

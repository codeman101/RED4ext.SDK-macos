#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/BlendOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/GenderSpecificParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/ParallaxSpace.hpp>

namespace RED4ext
{
namespace scn { struct AnimName; }

namespace scn
{
struct PlayFPPControlAnimEvent : scn::PlayAnimEvent
{
    static constexpr const char* NAME = "scnPlayFPPControlAnimEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A0[0xA0 - ::RED4ext::Detail::DataSize<scn::PlayAnimEvent>];
    DynArray<scn::fpp::GenderSpecificParams> genderSpecificParams; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(genderSpecificParams))];
    Handle<scn::AnimName> gameplayAnimName; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(gameplayAnimName))];
    bool FPPControlActive; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(FPPControlActive))];
    scn::fpp::BlendOverride blendOverride; // C4
    uint8_t unk_C8[0xC8 - (0xC4 + sizeof(blendOverride))];
    bool cameraUseTrajectorySpace; // C8
    uint8_t unk_C9[0xC9 - (0xC8 + sizeof(cameraUseTrajectorySpace))];
    bool idleIsMountedWorkspot; // C9
    uint8_t unk_CA[0xCA - (0xC9 + sizeof(idleIsMountedWorkspot))];
    bool enableWorldSpaceSmoothing; // CA
    uint8_t unk_CB[0xCB - (0xCA + sizeof(enableWorldSpaceSmoothing))];
    bool isSceneCarrying; // CB
    uint8_t unk_CC[0xCC - (0xCB + sizeof(isSceneCarrying))];
    float cameraBlendInDuration; // CC
    uint8_t unk_D0[0xD0 - (0xCC + sizeof(cameraBlendInDuration))];
    float cameraBlendOutDuration; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(cameraBlendOutDuration))];
    bool stayInScene; // D4
    uint8_t unk_D8[0xD8 - (0xD4 + sizeof(stayInScene))];
    float vehicleProceduralCameraWeight; // D8
    uint8_t unk_DC[0xDC - (0xD8 + sizeof(vehicleProceduralCameraWeight))];
    float cameraParallaxWeight; // DC
    uint8_t unk_E0[0xE0 - (0xDC + sizeof(cameraParallaxWeight))];
    scn::fpp::ParallaxSpace cameraParallaxSpace; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(cameraParallaxSpace))];
    float yawLimitLeft; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(yawLimitLeft))];
    float yawLimitRight; // E8
    uint8_t unk_EC[0xEC - (0xE8 + sizeof(yawLimitRight))];
    float pitchLimitTop; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(pitchLimitTop))];
    float pitchLimitBottom; // F0
#else
    DynArray<scn::fpp::GenderSpecificParams> genderSpecificParams; // A0
    Handle<scn::AnimName> gameplayAnimName; // B0
    bool FPPControlActive; // C0
    uint8_t unkC1[0xC4 - 0xC1]; // C1
    scn::fpp::BlendOverride blendOverride; // C4
    bool cameraUseTrajectorySpace; // C8
    bool idleIsMountedWorkspot; // C9
    bool enableWorldSpaceSmoothing; // CA
    bool isSceneCarrying; // CB
    float cameraBlendInDuration; // CC
    float cameraBlendOutDuration; // D0
    bool stayInScene; // D4
    uint8_t unkD5[0xD8 - 0xD5]; // D5
    float vehicleProceduralCameraWeight; // D8
    float cameraParallaxWeight; // DC
    scn::fpp::ParallaxSpace cameraParallaxSpace; // E0
    float yawLimitLeft; // E4
    float yawLimitRight; // E8
    float pitchLimitTop; // EC
    float pitchLimitBottom; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
#endif
};
RED4EXT_ASSERT_SIZE(PlayFPPControlAnimEvent, 0xF8);
} // namespace scn
using scnPlayFPPControlAnimEvent = scn::PlayFPPControlAnimEvent;
} // namespace RED4ext

// clang-format on

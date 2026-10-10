#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayFPPControlAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidActorPlacement.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationSRRefId.hpp>

namespace RED4ext
{
namespace scn
{
struct PlayRidAnimEvent : scn::PlayFPPControlAnimEvent
{
    static constexpr const char* NAME = "scnPlayRidAnimEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F4[0xF4 - ::RED4ext::Detail::DataSize<scn::PlayFPPControlAnimEvent>];
    uint32_t ridVersinon; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(ridVersinon))];
    scn::RidAnimationSRRefId animResRefId; // F8
    uint8_t unk_100[0x100 - (0xF8 + sizeof(animResRefId))];
    scn::Marker animOriginMarker; // 100
    uint8_t unk_160[0x160 - (0x100 + sizeof(animOriginMarker))];
    scn::RidActorPlacement actorPlacement; // 160
    uint8_t unk_164[0x164 - (0x160 + sizeof(actorPlacement))];
    bool actorHasCollision; // 164
    uint8_t unk_168[0x168 - (0x164 + sizeof(actorHasCollision))];
    float blendInTrajectoryBone; // 168
#else
    uint32_t ridVersinon; // F8
    scn::RidAnimationSRRefId animResRefId; // FC
    scn::Marker animOriginMarker; // 100
    scn::RidActorPlacement actorPlacement; // 160
    bool actorHasCollision; // 164
    uint8_t unk165[0x168 - 0x165]; // 165
    float blendInTrajectoryBone; // 168
    uint8_t unk16C[0x170 - 0x16C]; // 16C
#endif
};
RED4EXT_ASSERT_SIZE(PlayRidAnimEvent, 0x170);
} // namespace scn
using scnPlayRidAnimEvent = scn::PlayRidAnimEvent;
} // namespace RED4ext

// clang-format on

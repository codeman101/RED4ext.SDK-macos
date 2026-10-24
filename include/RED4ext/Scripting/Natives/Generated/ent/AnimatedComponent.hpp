#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTrackParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinableComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim { struct AnimGraph; }
namespace anim { struct FacialSetup; }
namespace anim { struct Rig; }
namespace ent { struct AnimationControlBinding; }

namespace ent
{
struct __declspec(align(0x10)) AnimatedComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entAnimatedComponent";
    static constexpr const char* ALIAS = "AnimatedComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_130[0x130 - ::RED4ext::Detail::DataSize<ent::ISkinableComponent>];
    CName audioAltName; // 130
    uint8_t unk_138[0x138 - (0x130 + sizeof(audioAltName))];
    Ref<anim::Rig> rig; // 138
    uint8_t unk_150[0x150 - (0x138 + sizeof(rig))];
    Ref<anim::AnimGraph> graph; // 150
    uint8_t unk_180[0x180 - (0x150 + sizeof(graph))];
    red::TagList animTags; // 180
    uint8_t unk_190[0x190 - (0x180 + sizeof(animTags))];
    anim::AnimSetup animations; // 190
    uint8_t unk_1F8[0x1F8 - (0x190 + sizeof(animations))];
    RaRef<anim::FacialSetup> facialSetup; // 1F8
    uint8_t unk_260[0x260 - (0x1F8 + sizeof(facialSetup))];
    int32_t serverForcedLod; // 260
    uint8_t unk_264[0x264 - (0x260 + sizeof(serverForcedLod))];
    int32_t clientForcedLod; // 264
    uint8_t unk_268[0x268 - (0x264 + sizeof(clientForcedLod))];
    bool serverForcedVisibility; // 268
    uint8_t unk_269[0x269 - (0x268 + sizeof(serverForcedVisibility))];
    bool clientForcedVisibility; // 269
    uint8_t unk_26A[0x26A - (0x269 + sizeof(clientForcedVisibility))];
    bool useLongRangeVisibility; // 26A
    uint8_t unk_26B[0x26B - (0x26A + sizeof(useLongRangeVisibility))];
    bool calculateAccelerationWs; // 26B
    uint8_t unk_278[0x278 - (0x26B + sizeof(calculateAccelerationWs))];
    DynArray<ent::AnimTrackParameter> animParameters; // 278
    uint8_t unk_288[0x288 - (0x278 + sizeof(animParameters))];
    Handle<ent::AnimationControlBinding> controlBinding; // 288
#else
    CName audioAltName; // 130
    Ref<anim::Rig> rig; // 138
    Ref<anim::AnimGraph> graph; // 150
    uint8_t unk168[0x180 - 0x168]; // 168
    red::TagList animTags; // 180
    anim::AnimSetup animations; // 190
    uint8_t unk1B8[0x1F8 - 0x1B8]; // 1B8
    RaRef<anim::FacialSetup> facialSetup; // 1F8
    uint8_t unk200[0x260 - 0x200]; // 200
    int32_t serverForcedLod; // 260
    int32_t clientForcedLod; // 264
    bool serverForcedVisibility; // 268
    bool clientForcedVisibility; // 269
    bool useLongRangeVisibility; // 26A
    bool calculateAccelerationWs; // 26B
    uint8_t unk26C[0x278 - 0x26C]; // 26C
    DynArray<ent::AnimTrackParameter> animParameters; // 278
    Handle<ent::AnimationControlBinding> controlBinding; // 288
    uint8_t unk298[0x2B0 - 0x298]; // 298
#endif
};
RED4EXT_ASSERT_SIZE(AnimatedComponent, 0x2B0);
} // namespace ent
using entAnimatedComponent = ent::AnimatedComponent;
using AnimatedComponent = ent::AnimatedComponent;
} // namespace RED4ext

// clang-format on

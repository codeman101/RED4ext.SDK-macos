#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/OnCollisionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/VelocityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace game::projectile
{
struct __declspec(align(0x10)) Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameprojectileComponent";
    static constexpr const char* ALIAS = "ProjectileComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_799[0x799 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    bool deriveOwnerVelocity; // 799
    uint8_t unk_79C[0x79C - (0x799 + sizeof(deriveOwnerVelocity))];
    game::projectile::OnCollisionAction onCollisionAction; // 79C
    uint8_t unk_7A0[0x7A0 - (0x79C + sizeof(onCollisionAction))];
    bool useSweepCollision; // 7A0
    uint8_t unk_7A4[0x7A4 - (0x7A0 + sizeof(useSweepCollision))];
    float sweepCollisionRadius; // 7A4
    uint8_t unk_7AC[0x7AC - (0x7A4 + sizeof(sweepCollisionRadius))];
    bool collisionsFilterClosest; // 7AC
    uint8_t unk_7C0[0x7C0 - (0x7AC + sizeof(collisionsFilterClosest))];
    game::projectile::VelocityParams derivedVelocityParams; // 7C0
    uint8_t unk_7F0[0x7F0 - (0x7C0 + sizeof(derivedVelocityParams))];
    Handle<physics::FilterData> filterData; // 7F0
    uint8_t unk_800[0x800 - (0x7F0 + sizeof(filterData))];
    physics::QueryPreset queryPreset; // 800
    uint8_t unk_810[0x810 - (0x800 + sizeof(queryPreset))];
    game::EffectRef gameEffectRef; // 810
    uint8_t unk_868[0x868 - (0x810 + sizeof(gameEffectRef))];
    RaRef<world::Effect> previewEffect; // 868
    uint8_t unk_870[0x870 - (0x868 + sizeof(previewEffect))];
    RaRef<world::Effect> bouncePreviewEffect; // 870
    uint8_t unk_878[0x878 - (0x870 + sizeof(bouncePreviewEffect))];
    RaRef<world::Effect> explosionPreviewEffect; // 878
    uint8_t unk_880[0x880 - (0x878 + sizeof(explosionPreviewEffect))];
    float explosionPreviewTime; // 880
    uint8_t unk_890[0x890 - (0x880 + sizeof(explosionPreviewTime))];
    Quaternion rotationOffset; // 890
#else
    uint8_t unk120[0x7A9 - 0x120]; // 120
    bool deriveOwnerVelocity; // 7A9
    uint8_t unk7AA[0x7AC - 0x7AA]; // 7AA
    game::projectile::OnCollisionAction onCollisionAction; // 7AC
    bool useSweepCollision; // 7B0
    uint8_t unk7B1[0x7B4 - 0x7B1]; // 7B1
    float sweepCollisionRadius; // 7B4
    uint8_t unk7B8[0x7BC - 0x7B8]; // 7B8
    bool collisionsFilterClosest; // 7BC
    uint8_t unk7BD[0x7D0 - 0x7BD]; // 7BD
    game::projectile::VelocityParams derivedVelocityParams; // 7D0
    uint8_t unk7DC[0x800 - 0x7DC]; // 7DC
    Handle<physics::FilterData> filterData; // 800
    physics::QueryPreset queryPreset; // 810
    uint8_t unk818[0x820 - 0x818]; // 818
    game::EffectRef gameEffectRef; // 820
    uint8_t unk848[0x878 - 0x848]; // 848
    RaRef<world::Effect> previewEffect; // 878
    RaRef<world::Effect> bouncePreviewEffect; // 880
    RaRef<world::Effect> explosionPreviewEffect; // 888
    float explosionPreviewTime; // 890
    uint8_t unk894[0x8A0 - 0x894]; // 894
    Quaternion rotationOffset; // 8A0
    uint8_t unk8B0[0x920 - 0x8B0]; // 8B0
#endif
};
RED4EXT_ASSERT_SIZE(Component, 0x920);
} // namespace game::projectile
using gameprojectileComponent = game::projectile::Component;
using ProjectileComponent = game::projectile::Component;
} // namespace RED4ext

// clang-format on

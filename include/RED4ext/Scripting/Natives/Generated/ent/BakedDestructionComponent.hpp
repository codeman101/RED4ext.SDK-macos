#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct Effect; }

namespace ent
{
struct __declspec(align(0x10)) BakedDestructionComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entBakedDestructionComponent";
    static constexpr const char* ALIAS = "BakedDestructionComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_248[0x248 - ::RED4ext::Detail::DataSize<ent::PhysicalMeshComponent>];
    RaRef<world::Effect> destructionEffect; // 248
    uint8_t unk_250[0x250 - (0x248 + sizeof(destructionEffect))];
    RaRef<CMesh> meshFractured; // 250
    uint8_t unk_288[0x288 - (0x250 + sizeof(meshFractured))];
    CName audioMetadata; // 288
    uint8_t unk_290[0x290 - (0x288 + sizeof(audioMetadata))];
    CName meshFracturedAppearance; // 290
    uint8_t unk_308[0x308 - (0x290 + sizeof(meshFracturedAppearance))];
    float damageThreshold; // 308
    uint8_t unk_30C[0x30C - (0x308 + sizeof(damageThreshold))];
    float damageEndurance; // 30C
    uint8_t unk_310[0x310 - (0x30C + sizeof(damageEndurance))];
    float impulseToDamage; // 310
    uint8_t unk_314[0x314 - (0x310 + sizeof(impulseToDamage))];
    float contactToDamage; // 314
    uint8_t unk_320[0x320 - (0x314 + sizeof(contactToDamage))];
    float numFrames; // 320
    uint8_t unk_324[0x324 - (0x320 + sizeof(numFrames))];
    float frameRate; // 324
    uint8_t unk_328[0x328 - (0x324 + sizeof(frameRate))];
    physics::FractureFieldType fractureFieldMask; // 328
    uint8_t unk_32A[0x32A - (0x328 + sizeof(fractureFieldMask))];
    bool playOnlyOnce; // 32A
    uint8_t unk_32B[0x32B - (0x32A + sizeof(playOnlyOnce))];
    bool restartOnTrigger; // 32B
    uint8_t unk_32C[0x32C - (0x32B + sizeof(restartOnTrigger))];
    bool disableCollidersOnTrigger; // 32C
    uint8_t unk_32D[0x32D - (0x32C + sizeof(disableCollidersOnTrigger))];
    bool accumulateDamage; // 32D
#else
    uint8_t unk240[0x260 - 0x240]; // 240
    RaRef<world::Effect> destructionEffect; // 260
    RaRef<CMesh> meshFractured; // 268
    uint8_t unk270[0x2A0 - 0x270]; // 270
    CName audioMetadata; // 2A0
    CName meshFracturedAppearance; // 2A8
    uint8_t unk2B0[0x320 - 0x2B0]; // 2B0
    float damageThreshold; // 320
    float damageEndurance; // 324
    float impulseToDamage; // 328
    float contactToDamage; // 32C
    uint8_t unk330[0x338 - 0x330]; // 330
    float numFrames; // 338
    float frameRate; // 33C
    physics::FractureFieldType fractureFieldMask; // 340
    bool playOnlyOnce; // 342
    bool restartOnTrigger; // 343
    bool disableCollidersOnTrigger; // 344
    bool accumulateDamage; // 345
    uint8_t unk346[0x350 - 0x346]; // 346
#endif
};
RED4EXT_ASSERT_SIZE(BakedDestructionComponent, 0x350);
} // namespace ent
using entBakedDestructionComponent = ent::BakedDestructionComponent;
using BakedDestructionComponent = ent::BakedDestructionComponent;
} // namespace RED4ext

// clang-format on

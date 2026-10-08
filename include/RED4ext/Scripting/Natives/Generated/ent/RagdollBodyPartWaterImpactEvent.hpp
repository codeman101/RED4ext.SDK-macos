#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) RagdollBodyPartWaterImpactEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollBodyPartWaterImpactEvent";
    static constexpr const char* ALIAS = "RagdollBodyPartWaterImpactEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector4 worldPosition; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(worldPosition))];
    Vector4 linearVelocity; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(linearVelocity))];
    float depthBelowSurface; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(depthBelowSurface))];
    bool isTorso; // 64
#else
    Vector4 worldPosition; // 40
    Vector4 linearVelocity; // 50
    float depthBelowSurface; // 60
    bool isTorso; // 64
    uint8_t unk65[0x70 - 0x65]; // 65
#endif
};
RED4EXT_ASSERT_SIZE(RagdollBodyPartWaterImpactEvent, 0x70);
} // namespace ent
using entRagdollBodyPartWaterImpactEvent = ent::RagdollBodyPartWaterImpactEvent;
using RagdollBodyPartWaterImpactEvent = ent::RagdollBodyPartWaterImpactEvent;
} // namespace RED4ext

// clang-format on

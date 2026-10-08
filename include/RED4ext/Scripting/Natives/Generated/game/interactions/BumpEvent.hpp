#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/BumpLocation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/BumpSide.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) BumpEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsBumpEvent";
    static constexpr const char* ALIAS = "BumpEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    game::interactions::BumpSide side; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(side))];
    game::interactions::BumpLocation sourceLocation; // 44
    uint8_t unk_50[0x50 - (0x44 + sizeof(sourceLocation))];
    Vector4 direction; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(direction))];
    Vector4 sourcePosition; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(sourcePosition))];
    float sourceSquaredDistance; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(sourceSquaredDistance))];
    float sourceSpeed; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(sourceSpeed))];
    float sourceRadius; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(sourceRadius))];
    bool isMounted; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(isMounted))];
    ent::EntityID vehicleEntityID; // 80
#else
    game::interactions::BumpSide side; // 40
    game::interactions::BumpLocation sourceLocation; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 direction; // 50
    Vector4 sourcePosition; // 60
    float sourceSquaredDistance; // 70
    float sourceSpeed; // 74
    float sourceRadius; // 78
    bool isMounted; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    ent::EntityID vehicleEntityID; // 80
    uint8_t unk88[0x90 - 0x88]; // 88
#endif
};
RED4EXT_ASSERT_SIZE(BumpEvent, 0x90);
} // namespace game::interactions
using gameinteractionsBumpEvent = game::interactions::BumpEvent;
using BumpEvent = game::interactions::BumpEvent;
} // namespace RED4ext

// clang-format on

#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
struct AreaShapeOutline;

namespace world
{
struct VehicleForbiddenAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNotifier";
    static constexpr const char* ALIAS = NAME;

// mac-layout (generated from the reflection dump)
    uint8_t unk_C8[0xC8 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    bool innerAreaBoundToOuterArea; // C8
    uint8_t unk_D0[0xD0 - (0xC8 + sizeof(innerAreaBoundToOuterArea))];
    Handle<AreaShapeOutline> innerAreaOutline; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(innerAreaOutline))];
    DynArray<NodeRef> parkingSpots; // E0
    uint8_t unk_F0[0xF0 - (0xE0 + sizeof(parkingSpots))];
    float innerAreaSpeedLimit; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(innerAreaSpeedLimit))];
    float areaSpeedLimit; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(areaSpeedLimit))];
    bool speedLimitAppliedWhenEntityIsPassenger; // F8
    uint8_t unk_F9[0xF9 - (0xF8 + sizeof(speedLimitAppliedWhenEntityIsPassenger))];
    bool enableNullArea; // F9
    uint8_t unk_FA[0xFA - (0xF9 + sizeof(enableNullArea))];
    bool dismount; // FA
    uint8_t unk_FB[0xFB - (0xFA + sizeof(dismount))];
    bool enableSummoning; // FB
};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNotifier, 0x100);
} // namespace world
using worldVehicleForbiddenAreaNotifier = world::VehicleForbiddenAreaNotifier;
} // namespace RED4ext

// clang-format on
#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
struct AreaShapeOutline;

namespace world
{
struct VehicleForbiddenAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xC8 - 0xB8]; // B8
    bool innerAreaBoundToOuterArea; // C8
    uint8_t unkC9[0xD0 - 0xC9]; // C9
    Handle<AreaShapeOutline> innerAreaOutline; // D0
    DynArray<NodeRef> parkingSpots; // E0
    float innerAreaSpeedLimit; // F0
    float areaSpeedLimit; // F4
    bool speedLimitAppliedWhenEntityIsPassenger; // F8
    bool enableNullArea; // F9
    bool dismount; // FA
    bool enableSummoning; // FB
    uint8_t unkFC[0x100 - 0xFC]; // FC
};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNotifier, 0x100);
} // namespace world
using worldVehicleForbiddenAreaNotifier = world::VehicleForbiddenAreaNotifier;
} // namespace RED4ext

// clang-format on
#endif

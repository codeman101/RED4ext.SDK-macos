#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class WorldMapFilter : int32_t
{
    ApartmentToPurchaseFilter = 0,
    AutofixerFilter = 1,
    CommonFilter = 2,
    Courier = 3,
    CustomFilter = 4,
    DogtownGateFilter = 5,
    DropPoint = 6,
    ExplorationFilter = 7,
    FastTravel = 8,
    Gigs = 9,
    GlamdocFilter = 10,
    NoFilter = 11,
    Outpost = 12,
    PsychoFilter = 13,
    Quest = 14,
    RelicDeviceFilter = 15,
    RipperdocFilter = 16,
    ServicePoint = 17,
    Story = 18,
    TarotFilter = 19,
    VehicleForSaleFilter = 20,
    VendorFilter = 21,
    Count = 22,
    Invalid = 23,
};
} // namespace game::data
using gamedataWorldMapFilter = game::data::WorldMapFilter;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class WorldMapFilter : int32_t
{
    ApartmentToPurchaseFilter = 0,
    AutofixerFilter = 1,
    CommonFilter = 2,
    Courier = 3,
    CustomFilter = 4,
    DogtownGateFilter = 5,
    DropPoint = 6,
    ExplorationFilter = 7,
    FastTravel = 8,
    Gigs = 9,
    NoFilter = 10,
    Outpost = 11,
    PsychoFilter = 12,
    Quest = 13,
    RelicDeviceFilter = 14,
    RipperdocFilter = 15,
    ServicePoint = 16,
    Story = 17,
    TarotFilter = 18,
    VehicleForSaleFilter = 19,
    VendorFilter = 20,
    Count = 21,
    Invalid = 22,
};
} // namespace game::data
using gamedataWorldMapFilter = game::data::WorldMapFilter;
} // namespace RED4ext

// clang-format on

#endif

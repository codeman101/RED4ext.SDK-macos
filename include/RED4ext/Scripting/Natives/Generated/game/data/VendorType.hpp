#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class VendorType : int32_t
{
    Armorsmith = 0,
    Clothes = 1,
    Clothing = 2,
    Cyberware = 3,
    Drinks = 4,
    DropPoint = 5,
    Food = 6,
    Glamdoc = 7,
    GrilledFood = 8,
    Gunsmith = 9,
    Junk = 10,
    Kiosk = 11,
    Market = 12,
    Medical = 13,
    PackedFood = 14,
    RipperDoc = 15,
    SkillTrainer = 16,
    Tech = 17,
    TechJunk = 18,
    VendingMachine = 19,
    Count = 20,
    Invalid = 21,
};
} // namespace game::data
using gamedataVendorType = game::data::VendorType;
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
enum class VendorType : int32_t
{
    Armorsmith = 0,
    Clothes = 1,
    Clothing = 2,
    Cyberware = 3,
    Drinks = 4,
    DropPoint = 5,
    Food = 6,
    GrilledFood = 7,
    Gunsmith = 8,
    Junk = 9,
    Kiosk = 10,
    Market = 11,
    Medical = 12,
    PackedFood = 13,
    RipperDoc = 14,
    SkillTrainer = 15,
    Tech = 16,
    TechJunk = 17,
    VendingMachine = 18,
    Count = 19,
    Invalid = 20,
};
} // namespace game::data
using gamedataVendorType = game::data::VendorType;
} // namespace RED4ext

// clang-format on

#endif

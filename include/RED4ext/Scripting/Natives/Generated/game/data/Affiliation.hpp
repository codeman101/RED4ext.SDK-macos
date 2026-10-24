#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class Affiliation : int32_t
{
    AfterlifeMercs = 0,
    Aldecaldos = 1,
    Animals = 2,
    Arasaka = 3,
    Barghest = 4,
    Biotechnica = 5,
    CityCouncil = 6,
    Civilian = 7,
    Classified = 8,
    KangTao = 9,
    Maelstrom = 10,
    MaelstromAndroid = 11,
    Militech = 12,
    NCPD = 13,
    NCPrison = 14,
    NUSA = 15,
    NetWatch = 16,
    News54 = 17,
    OA = 18,
    REDACTED = 19,
    RecordingAgency = 20,
    SSI = 21,
    Scavengers = 22,
    ScavengersAndroid = 23,
    SixthStreet = 24,
    SixthStreetAndroid = 25,
    SouthCalifornia = 26,
    TheMox = 27,
    TraumaTeam = 28,
    TygerClaws = 29,
    Unaffiliated = 30,
    UnaffiliatedCorpo = 31,
    Unknown = 32,
    Valentinos = 33,
    VoodooBoys = 34,
    Wraiths = 35,
    WraithsAndroid = 36,
    Wraiths_Former = 37,
    Zetatech = 38,
    corpbud = 39,
    crimson_harvest = 40,
    growl = 41,
    highriders = 42,
    private_press = 43,
    Count = 44,
    Invalid = 45,
};
} // namespace game::data
using gamedataAffiliation = game::data::Affiliation;
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
enum class Affiliation : int32_t
{
    AfterlifeMercs = 0,
    Aldecaldos = 1,
    Animals = 2,
    Arasaka = 3,
    Barghest = 4,
    Biotechnica = 5,
    CityCouncil = 6,
    Civilian = 7,
    Classified = 8,
    KangTao = 9,
    Maelstrom = 10,
    MaelstromAndroid = 11,
    Militech = 12,
    NCPD = 13,
    NUSA = 14,
    NetWatch = 15,
    News54 = 16,
    OA = 17,
    RecordingAgency = 18,
    SSI = 19,
    Scavengers = 20,
    ScavengersAndroid = 21,
    SixthStreet = 22,
    SixthStreetAndroid = 23,
    SouthCalifornia = 24,
    TheMox = 25,
    TraumaTeam = 26,
    TygerClaws = 27,
    Unaffiliated = 28,
    UnaffiliatedCorpo = 29,
    Unknown = 30,
    Valentinos = 31,
    VoodooBoys = 32,
    Wraiths = 33,
    WraithsAndroid = 34,
    Zetatech = 35,
    corpbud = 36,
    crimson_harvest = 37,
    growl = 38,
    highriders = 39,
    private_press = 40,
    Count = 41,
    Invalid = 42,
};
} // namespace game::data
using gamedataAffiliation = game::data::Affiliation;
} // namespace RED4ext

// clang-format on

#endif

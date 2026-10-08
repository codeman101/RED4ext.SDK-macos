#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DevelopmentPointType.hpp>

namespace RED4ext
{
namespace quest
{
struct AddDevelopmentPointsRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questAddDevelopmentPointsRequest";
    static constexpr const char* ALIAS = "AddDevelopmentPoints";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    int32_t amountOfPoints; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(amountOfPoints))];
    game::data::DevelopmentPointType developmentPointType; // 5C
#else
    int32_t amountOfPoints; // 58
    game::data::DevelopmentPointType developmentPointType; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(AddDevelopmentPointsRequest, 0x60);
} // namespace quest
using questAddDevelopmentPointsRequest = quest::AddDevelopmentPointsRequest;
using AddDevelopmentPoints = quest::AddDevelopmentPointsRequest;
} // namespace RED4ext

// clang-format on

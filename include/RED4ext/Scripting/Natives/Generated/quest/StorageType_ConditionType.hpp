#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Storage.hpp>

namespace RED4ext
{
namespace quest
{
struct StorageType_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questStorageType_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    quest::Storage storage; // 34
#else
    quest::Storage storage; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(StorageType_ConditionType, 0x40);
} // namespace quest
using questStorageType_ConditionType = quest::StorageType_ConditionType;
} // namespace RED4ext

// clang-format on

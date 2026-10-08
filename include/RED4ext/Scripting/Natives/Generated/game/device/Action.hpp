#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::device
{
struct Action : red::Event
{
    static constexpr const char* NAME = "gamedeviceAction";
    static constexpr const char* ALIAS = "DeviceAction";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<red::Event>];
    CName actionName; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(actionName))];
    int32_t clearanceLevel; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(clearanceLevel))];
    CString localizedObjectName; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(localizedObjectName))];
    int32_t paymentQuantity; // 88
#else
    uint8_t unk40[0x58 - 0x40]; // 40
    CName actionName; // 58
    int32_t clearanceLevel; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    CString localizedObjectName; // 68
    int32_t paymentQuantity; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
#endif
};
RED4EXT_ASSERT_SIZE(Action, 0x90);
} // namespace game::device
using gamedeviceAction = game::device::Action;
using DeviceAction = game::device::Action;
} // namespace RED4ext

// clang-format on

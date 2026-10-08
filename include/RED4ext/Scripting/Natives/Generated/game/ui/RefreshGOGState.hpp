#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OnlineSystemErrors.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OnlineSystemStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RefreshGOGState : red::Event
{
    static constexpr const char* NAME = "gameuiRefreshGOGState";
    static constexpr const char* ALIAS = "RefreshGOGState";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    game::OnlineSystemStatus status; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(status))];
    game::OnlineSystemErrors error; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(error))];
    CString registerURL; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(registerURL))];
    DynArray<uint8_t> qrCodePNGBlob; // 68
#else
    game::OnlineSystemStatus status; // 40
    game::OnlineSystemErrors error; // 44
    CString registerURL; // 48
    DynArray<uint8_t> qrCodePNGBlob; // 68
#endif
};
RED4EXT_ASSERT_SIZE(RefreshGOGState, 0x78);
} // namespace game::ui
using gameuiRefreshGOGState = game::ui::RefreshGOGState;
using RefreshGOGState = game::ui::RefreshGOGState;
} // namespace RED4ext

// clang-format on

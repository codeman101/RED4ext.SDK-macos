#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint32_t replicationId; // 08
    uint16_t type; // 0C
    uint8_t unk0E[0x10 - 0xE]; // E
    net::Time startTimeStamp; // 10
    net::Time stopTimeStamp; // 18
    uint8_t updateBucket; // 20
#if defined(__APPLE__)
    // R25. A class without a base class is plain data to clang, which never reuses the tail of such a class; the game's class has a vptr
    // (the opaque head unk00) and is not. A user-provided destructor makes this one non-POD, so that the derived classes (ActionEquipItemState and
    // others) can start at 0x24 as they do in the game. Idea found in jackmaxwil/RED4ext.SDK-macos scripts/gen_macos_layouts.py, MIT.
    ~ActionReplicatedState() {} // non-POD, so clang reuses the tail padding like the game
#else
    uint8_t unk21[0x28 - 0x21]; // 21
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(ActionReplicatedState, 0x28);
} // namespace game
using gameActionReplicatedState = game::ActionReplicatedState;
} // namespace RED4ext

// clang-format on

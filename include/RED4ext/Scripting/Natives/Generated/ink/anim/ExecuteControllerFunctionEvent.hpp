#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct ExecuteControllerFunctionEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimExecuteControllerFunctionEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<ink::anim::Event>];
    CName controllerType; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(controllerType))];
    CName eventName; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(eventName))];
    CString params; // 58
#else
    CName controllerType; // 48
    CName eventName; // 50
    CString params; // 58
#endif
};
RED4EXT_ASSERT_SIZE(ExecuteControllerFunctionEvent, 0x78);
} // namespace ink::anim
using inkanimExecuteControllerFunctionEvent = ink::anim::ExecuteControllerFunctionEvent;
} // namespace RED4ext

// clang-format on

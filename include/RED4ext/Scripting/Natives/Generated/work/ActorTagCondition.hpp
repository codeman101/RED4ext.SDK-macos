#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct ActorTagCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workActorTagCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<work::IWorkspotCondition>];
    CName tag; // 38
#else
    CName tag; // 38
#endif
};
RED4EXT_ASSERT_SIZE(ActorTagCondition, 0x40);
} // namespace work
using workActorTagCondition = work::ActorTagCondition;
} // namespace RED4ext

// clang-format on

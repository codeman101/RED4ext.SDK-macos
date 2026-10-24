#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_State; }
namespace anim { struct AnimNode_StateFrozen; }
namespace anim { struct AnimStateMachineConditionalEntry; }
namespace anim { struct AnimStateTransitionDescription; }
namespace anim { struct IAnimStateTransitionInterpolator; }

namespace anim
{
struct AnimNode_StateMachine : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_StateMachine";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    DynArray<Handle<anim::AnimNode_State>> states; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(states))];
    DynArray<Handle<anim::AnimStateMachineConditionalEntry>> conditionalEntries; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(conditionalEntries))];
    DynArray<Handle<anim::AnimStateTransitionDescription>> transitions; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(transitions))];
    DynArray<Handle<anim::AnimStateTransitionDescription>> globalTransitions; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(globalTransitions))];
    Handle<anim::IAnimStateTransitionInterpolator> anyStateInterpolator; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(anyStateInterpolator))];
    Handle<anim::AnimNode_StateFrozen> frozenState; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(frozenState))];
    uint32_t defaultStateIndex; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(defaultStateIndex))];
    bool notifyOnEnterState; // AC
#else
    DynArray<Handle<anim::AnimNode_State>> states; // 48
    DynArray<Handle<anim::AnimStateMachineConditionalEntry>> conditionalEntries; // 58
    DynArray<Handle<anim::AnimStateTransitionDescription>> transitions; // 68
    DynArray<Handle<anim::AnimStateTransitionDescription>> globalTransitions; // 78
    Handle<anim::IAnimStateTransitionInterpolator> anyStateInterpolator; // 88
    Handle<anim::AnimNode_StateFrozen> frozenState; // 98
    uint32_t defaultStateIndex; // A8
    bool notifyOnEnterState; // AC
    uint8_t unkAD[0x140 - 0xAD]; // AD
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_StateMachine, 0x140);
} // namespace anim
using animAnimNode_StateMachine = anim::AnimNode_StateMachine;
} // namespace RED4ext

// clang-format on

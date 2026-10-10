#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IDynamicEntityIDSystem : IGameSystem
{
    static constexpr const char* NAME = "gameIDynamicEntityIDSystem";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
    // Mac (R21, checked against the game): no out argument, the 8 byte EntityID comes back in x0 (slots 0x1B8 and 0x1C0).
    virtual ent::EntityID GetNextTransientID() = 0;   // 1A8
    virtual ent::EntityID GetNextPersistableID() = 0; // 1B0
#else
    virtual void* GetNextTransientID(ent::EntityID& aOut) = 0;   // 1A8
    virtual void* GetNextPersistableID(ent::EntityID& aOut) = 0; // 1B0
#endif
    virtual void sub_1B8() = 0;                                  // 1B8
    virtual void sub_1C0() = 0;                                  // 1C0
    virtual void sub_1C8() = 0;                                  // 1C8
    virtual void sub_1D0() = 0;                                  // 1D0
    virtual void sub_1D8() = 0;                                  // 1D8
    virtual void sub_1E0() = 0;                                  // 1E0
    virtual void sub_1E8() = 0;                                  // 1E8
    virtual void sub_1F0() = 0;                                  // 1F0
    virtual void sub_1F8() = 0;                                  // 1F8
    virtual void sub_200() = 0;                                  // 200
    virtual void sub_208() = 0;                                  // 208
    virtual void sub_210() = 0;                                  // 210
};
RED4EXT_ASSERT_SIZE(IDynamicEntityIDSystem, 0x48);
} // namespace game
using IDynamicEntityIDSystem = game::IDynamicEntityIDSystem;
} // namespace RED4ext

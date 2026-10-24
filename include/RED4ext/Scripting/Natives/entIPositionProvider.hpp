#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Vector3.hpp>

namespace RED4ext
{
namespace ent
{
struct IPositionProvider : IScriptable
{
    static constexpr const char* NAME = "entIPositionProvider";
    static constexpr const char* ALIAS = "IPositionProvider";

#if defined(__APPLE__)
    // Mac 2.5 reflection dump lists no property on entIPositionProvider (size 80 / 0x50).
    // Upstream #222's worldOffset is the Windows member; it is not added on Apple.
    uint8_t unk40[0x50 - 0x40]; // 40
#else
    Vector3 worldOffset;        // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(IPositionProvider, 0x50);
#if !defined(__APPLE__)
RED4EXT_ASSERT_OFFSET(IPositionProvider, worldOffset, 0x40);
#endif
} // namespace ent
using entIPositionProvider = ent::IPositionProvider;
using IPositionProvider = ent::IPositionProvider;
} // namespace RED4ext

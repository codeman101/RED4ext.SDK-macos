#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingDataGroup.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CompiledNodeInstanceSetupInfo
{
    Transform transform;               // 00
    Vector3 scale;                     // 20
    Vector3 secondaryRefPointPosition; // 2C
    Vector3 streamingRefPoint;         // 38
    Vector3 unk44;                     // 44
    Node* node;                        // 50
    uint64_t globalNodeID;             // 58
    uint64_t proxyNodeID;              // 60
    ResourcePath unk68;                // 68
    union
    {
        // Version 68 (patch 2.5, current)
        struct
        {
            uint64_t nodeIndex : 19;             // 70
            uint64_t unk70_19 : 29;              // 70
            uint64_t unk70_48 : 16;              // 70
            float secondaryRefPointDistance;     // 78
            float streamingDistance;             // 7C
            uint32_t instanceIndex;              // 80
            world::StreamingDataGroup dataGroup; // 84
            uint8_t unk85[0x90 - 0x85];          // 85
        };
        // Version 62 (patch 2.31)
        struct
        {
            float secondaryRefPointDistance; // 70
            float streamingDistance;         // 74
            uint16_t nodeIndex;              // 78
            uint16_t unk7A;                  // 7A
            uint16_t unk7C;                  // 7C
            uint64_t unk80;                  // 80
            uint64_t unk88;                  // 88
        } v62;
    };
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfo, 0x90);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, node, 0x50);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, globalNodeID, 0x58);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, proxyNodeID, 0x60);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, secondaryRefPointDistance, 0x78);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, streamingDistance, 0x7C);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, instanceIndex, 0x80);

struct CompiledNodeInstanceSetupInfoBuffer
{
    static constexpr const char* NAME = "worldCompiledNodeInstanceSetupInfoBuffer";
    static constexpr const char* ALIAS = NAME;

    TDataBuffer<CompiledNodeInstanceSetupInfo> nodeSetups; // 00
    uint32_t version;                                      // 28
    uint8_t unk2C[0x30 - 0x2C];                            // 2C
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfoBuffer, 0x30);
} // namespace world
using worldCompiledNodeInstanceSetupInfoBuffer = world::CompiledNodeInstanceSetupInfoBuffer;
} // namespace RED4ext

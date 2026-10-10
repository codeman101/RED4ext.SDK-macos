#pragma once

// RED4ext.SDK 1.0 moved this header to RED4ext/Rendering/ (upstream #194). The macOS port keeps it at RED4ext/RenderProxy.hpp until the
// SDK 1.0 merge; this forwarding header lets the frameworks that already include the new path (ArchiveXL 1.27) build unchanged.
#include <RED4ext/RenderProxy.hpp>

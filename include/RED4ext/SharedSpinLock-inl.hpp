#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SharedSpinLock.hpp>
#endif

#include <cstdint>

#if defined(_WIN32) || defined(_WIN64)
#include <intrin.h>
#include <Windows.h>
#else
#include <RED4ext/Detail/WinCompat.hpp>
#endif

RED4EXT_INLINE RED4ext::SharedSpinLock::SharedSpinLock()
    : state(0)
{
}

#if defined(__APPLE__)
// Mac game protocol (R21, read from the game's lock functions 0x2098, 0x20C0, 0x20E8, 0x2100): a writer is bit 7 (0x80) of the byte,
// readers are the low bits. A writer takes the lock only from 0 (no readers, no writer) with 0 -> 0x80 and releases by clearing bit 7. A reader
// adds 1 and, when bit 7 was set, waits until it clears (the Mac reader below only adds 1 while bit 7 is clear, which a game reader that is
// already waiting is compatible with). The Windows protocol (-1 for a writer, Unlock stores 0) breaks against it: a game reader would pass an
// SDK writer, and an SDK reader would pass a game writer. Locks the SDK shares with the game (mesh appearance, workspot, mappin, quest and
// wardrobe systems) need this protocol.
RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLock()
{
    return _InterlockedCompareExchange8(&state, static_cast<char>(0x80), 0) == 0;
}
#else
RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLock()
{
    return _InterlockedCompareExchange8(&state, -1, 0) == 0;
}
#endif

RED4EXT_INLINE void RED4ext::SharedSpinLock::Lock()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLock())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
}

#if defined(__APPLE__)
RED4EXT_INLINE void RED4ext::SharedSpinLock::Unlock()
{
    __atomic_fetch_and(&state, static_cast<char>(0x7F), __ATOMIC_RELEASE);
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLockShared()
{
    const char currentState = state;
    if ((currentState & 0x80) == 0)
    {
        return _InterlockedCompareExchange8(&state, static_cast<char>(currentState + 1), currentState) == currentState;
    }
    return false;
}
#else
RED4EXT_INLINE void RED4ext::SharedSpinLock::Unlock()
{
    InterlockedExchange8(&state, 0);
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLockShared()
{
    char currentState = state;
    if (currentState != -1)
    {
        return _InterlockedCompareExchange8(&state, currentState + 1, currentState) == currentState;
    }
    return false;
}
#endif

RED4EXT_INLINE void RED4ext::SharedSpinLock::LockShared()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLockShared())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::UnlockShared()
{
    _InterlockedExchangeAdd8(&state, -1);
}

// --------------------------------------------
// -- support for lock_guard and shared_lock --
// --------------------------------------------

RED4EXT_INLINE bool RED4ext::SharedSpinLock::try_lock()
{
    return TryLock();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::unlock()
{
    Unlock();
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::try_lock_shared()
{
    return TryLockShared();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::lock_shared()
{
    LockShared();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::unlock_shared()
{
    UnlockShared();
}

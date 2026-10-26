#!/usr/bin/env python3
"""vtctx: vtable-slot context of an (old 2.3.1, new 2.5.0) function pair. Read-only.

For a function that is only reached through vtables, the call graph cannot tell twins apart; its neighbours in the vtables can.
Scans __DATA_CONST,__const of both binaries (chained-fixup pointers: low 36 bits = target address), finds every table word that
points at the function, and compares the words on both sides of it, mapped through the macdiff function matching.

    vtctx.py OLD_RVA:NEW_RVA [...]
Prints: occurrences old/new, and how many old occurrences have a new occurrence whose previous and next slot are the twins of the old ones
(prev_ok / next_ok / both).
"""
import sys, pickle, collections
import numpy as np
sys.path.insert(0, '/Users/frankgreico/repos/cp2077-mac/tools/addr-match')
import macdiff
OLD = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/_backup-2026-10-09/Cyberpunk2077-jm.app/Contents/MacOS/Cyberpunk2077'
NEW = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/Cyberpunk2077.app/Contents/MacOS/Cyberpunk2077'
D = pickle.load(open('/Users/frankgreico/repos/cp2077-mac/p25/diff-feat.pkl', 'rb'))
match = D['match']


def load(path, A):
    B = macdiff.Bin(path)
    out = {}
    q_all = []
    for sect in (('__DATA_CONST', '__const'),):
        va, sz, so = B.sects[sect]
        raw = np.frombuffer(B.m[B.off + so:B.off + so + sz - sz % 8], dtype='<u8')
        low = (raw & ((1 << 36) - 1)).astype(np.int64)
        low = np.where(low >= 0x100000000, low - 0x100000000, low)
        text0, tsz = B.text[0], B.text[1]
        # map each word to a function index when it points at a function start
        idx = np.searchsorted(A['starts'], low)
        idx = np.clip(idx, 0, len(A['starts']) - 1)
        isfn = (A['starts'][idx] == low)
        fn = np.where(isfn, idx, -1)
        return va, fn
    return None


def occ(fn, k):
    return np.nonzero(fn == k)[0]


def main():
    O, N = D['O'], D['N']
    va_o, fn_o = load(OLD, O)
    va_n, fn_n = load(NEW, N)
    for spec in sys.argv[1:]:
        a, b = spec.split(':')
        ko = int(np.searchsorted(O['starts'], int(a, 16)))
        kn = int(np.searchsorted(N['starts'], int(b, 16)))
        if O['starts'][ko] != int(a, 16) or N['starts'][kn] != int(b, 16):
            print(spec, 'not function starts'); continue
        oo, on = occ(fn_o, ko), occ(fn_n, kn)
        pv_ok = nx_ok = both = 0
        nset = set(int(i) for i in on)
        for i in oo:
            pv = fn_o[i - 1] if i > 0 else -1
            nx = fn_o[i + 1] if i + 1 < len(fn_o) else -1
            pv_t = match.get(int(pv)) if pv >= 0 else None
            nx_t = match.get(int(nx)) if nx >= 0 else None
            okp = oks = False
            for j in on:
                j = int(j)
                if pv_t is not None and fn_n[j - 1] == pv_t: okp = True
                if nx_t is not None and j + 1 < len(fn_n) and fn_n[j + 1] == nx_t: oks = True
            # both on the same occurrence
            same = any((pv_t is not None and fn_n[int(j) - 1] == pv_t) and (nx_t is not None and int(j) + 1 < len(fn_n) and fn_n[int(j) + 1] == nx_t) for j in on)
            pv_ok += okp; nx_ok += oks; both += same
        print(f'{spec}: table words old {len(oo)} new {len(on)}; old occurrences with twin neighbour prev {pv_ok} next {nx_ok} both {both}')


main()

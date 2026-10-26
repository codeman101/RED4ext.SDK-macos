#!/usr/bin/env python3
"""strrefs: functions that reference a C string, in the 2.3.1 (old) or 2.5.0 (new) binary. Read-only.
    strrefs.py old|new 'exact string' [...]
"""
import sys, pickle, mmap
import numpy as np
sys.path.insert(0, '/Users/frankgreico/repos/cp2077-mac/tools/addr-match')
import macdiff
OLD = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/_backup-2026-10-09/Cyberpunk2077-jm.app/Contents/MacOS/Cyberpunk2077'
NEW = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/Cyberpunk2077.app/Contents/MacOS/Cyberpunk2077'
D = pickle.load(open('/Users/frankgreico/repos/cp2077-mac/p25/diff-feat.pkl', 'rb'))
which = sys.argv[1]
A = D['O'] if which == 'old' else D['N']
B = macdiff.Bin(OLD if which == 'old' else NEW)
cs = B.cstr
for s in sys.argv[2:]:
    needle = b'\0' + s.encode() + b'\0'
    base = B.m
    lo = B.off + B.sects[('__TEXT', '__cstring')][2]
    size = B.cstr[1]
    blob = bytes(base[lo:lo + size])
    i = blob.find(needle)
    hits = []
    while i >= 0:
        rva = B.cstr[0] + i + 1
        refs = np.nonzero(A['ref_t'] == rva)[0]
        fns = sorted({int(A['starts'][np.searchsorted(A['starts'], int(A['ref_pc'][r]), side='right') - 1]) for r in refs})
        hits.append((hex(rva), [hex(f) for f in fns]))
        i = blob.find(needle, i + 1)
    print(repr(s), which, hits)

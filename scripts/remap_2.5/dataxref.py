#!/usr/bin/env python3
"""dataxref: functions that reference a data address (ADRP+ADD/LDR/STR pairs), old 2.3.1 vs new 2.5.0, with twins. Read-only.
    dataxref.py OLD_RVA[:NEW_RVA] ...
Prints the referencing functions on each side, and for the old ones the matched twin and whether the twin references the new address.
"""
import sys, pickle
import numpy as np
D = pickle.load(open('/Users/frankgreico/repos/cp2077-mac/p25/diff-feat.pkl', 'rb'))
O, N, match = D['O'], D['N'], D['match']
rev = {v: k for k, v in match.items()}


def refs(A, a, width=1):
    idx = np.nonzero((A['ref_t'] >= a) & (A['ref_t'] < a + width))[0]
    fs = {}
    for r in idx:
        k = int(np.searchsorted(A['starts'], int(A['ref_pc'][r]), side='right') - 1)
        fs.setdefault(k, []).append(hex(int(A['ref_t'][r])))
    return fs


for spec in sys.argv[1:]:
    parts = spec.split(':')
    a = int(parts[0], 16)
    b = int(parts[1], 16) if len(parts) > 1 else None
    fo = refs(O, a)
    print(f'--- old {a:#x}: {len(fo)} referencing functions')
    if b is not None:
        fn = refs(N, b)
        hit = 0; matched = 0
        for k in fo:
            tw = match.get(k)
            if tw is not None:
                matched += 1
                if tw in fn: hit += 1
        print(f'    new {b:#x}: {len(fn)} referencing functions; old functions with a twin {matched}, twin references the new address {hit}')
        if len(fo) <= 6:
            for k in fo:
                tw = match.get(k)
                print('      old fn', hex(int(O['starts'][k])), '-> twin', hex(int(N['starts'][tw])) if tw is not None else None, 'refs new' if tw in fn else '')
            print('      new fns', [hex(int(N['starts'][k])) for k in list(fn)[:8]])
    else:
        for k in list(fo)[:8]:
            tw = match.get(k)
            print('      old fn', hex(int(O['starts'][k])), '-> twin', hex(int(N['starts'][tw])) if tw is not None else None)

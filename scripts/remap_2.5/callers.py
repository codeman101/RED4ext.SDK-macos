#!/usr/bin/env python3
"""callers: direct callers (bl/b) of a function, with the matched twin of each caller. Read-only.
    callers.py old|new RVA [RVA ...]
"""
import sys, pickle
import numpy as np
D = pickle.load(open('/Users/frankgreico/repos/cp2077-mac/p25/diff-feat.pkl', 'rb'))
which = sys.argv[1]
A, B = (D['O'], D['N']) if which == 'old' else (D['N'], D['O'])
match = D['match']; rev = {v: k for k, v in match.items()}
for s in sys.argv[2:]:
    t = int(s, 16)
    hits = np.nonzero(A['call_t'] == t)[0]
    out = []
    for h in hits:
        pc = int(A['call_pc'][h]); k = int(np.searchsorted(A['starts'], pc, side='right') - 1)
        tw = (match.get(k) if which == 'old' else rev.get(k))
        out.append((hex(int(A['starts'][k])), hex(pc - int(A['starts'][k])), hex(int(B['starts'][tw])) if tw is not None else None))
    print(f'{which} callers of {t:#x}: {len(out)}', out[:12])

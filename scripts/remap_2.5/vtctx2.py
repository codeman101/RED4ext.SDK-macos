#!/usr/bin/env python3
"""vtctx2: per-offset neighbour agreement of a vtable-slot function pair (old 2.3.1, new 2.5.0). Read-only.
    vtctx2.py OLD_RVA:NEW_RVA [...]
For every table word that points at the old function, looks at the words d slots away (d = -8..8) and counts how often the twin of that
old word is the word d slots away from some occurrence of the new function. A genuine same-slot pair agrees on most offsets that have
not been renumbered by inserted slots; the sum is printed per offset.
"""
import sys
import numpy as np
src = open('/Users/frankgreico/repos/cp2077-mac/p25/loader/sdk-tools/vtctx.py').read().replace("\nmain()\n", "\n")
ns = {}
exec(compile(src, 'vtctx', 'exec'), ns)
D, match, load = ns['D'], ns['match'], ns['load']
O, N = D['O'], D['N']
va_o, fn_o = load(ns['OLD'], O)
va_n, fn_n = load(ns['NEW'], N)
for spec in sys.argv[1:]:
    a, b = spec.split(':')
    ko = int(np.searchsorted(O['starts'], int(a, 16))); kn = int(np.searchsorted(N['starts'], int(b, 16)))
    oo = np.nonzero(fn_o == ko)[0]; on = np.nonzero(fn_n == kn)[0]
    if len(oo) == 0 or len(on) == 0:
        print(spec, 'occurrences old', len(oo), 'new', len(on)); continue
    # index new occurrences by the twin context: set of positions
    sample = oo[:2000]
    res = {}
    for d in range(-8, 9):
        if d == 0: continue
        hit = 0; tot = 0
        # positions in new where the word at j+d is f -> set per f
        for i in sample:
            t = int(fn_o[i + d]) if 0 <= i + d < len(fn_o) else -1
            if t < 0: continue
            tw = match.get(t)
            if tw is None: continue
            tot += 1
            # any new occurrence with fn_n[j+d]==tw ?
            if any(0 <= j + d < len(fn_n) and fn_n[j + d] == tw for j in on[:400]): hit += 1
        res[d] = (hit, tot)
    print(spec, 'old', len(oo), 'new', len(on), ' '.join(f'{d}:{h}/{t}' for d, (h, t) in res.items() if t))

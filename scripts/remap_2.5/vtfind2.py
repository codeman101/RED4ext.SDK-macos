#!/usr/bin/env python3
"""vtfind2: propose the new-build twin of a vtable-only function from its vtable neighbours. Read-only.
    vtfind2.py OLD_RVA
For every table word that points at the old function, the twins of the words around it (d = -3..3) are looked up in the new tables;
the function found at the same distance from them is a vote for the twin. Prints the top candidates.
"""
import sys, collections
import numpy as np
src = open('/Users/frankgreico/repos/cp2077-mac/p25/loader/sdk-tools/vtctx.py').read().replace("\nmain()\n", "\n")
ns = {}
exec(compile(src, 'vtctx', 'exec'), ns)
D, match, load = ns['D'], ns['match'], ns['load']
O, N = D['O'], D['N']
va_o, fn_o = load(ns['OLD'], O)
va_n, fn_n = load(ns['NEW'], N)
# index new words by function
pos_n = collections.defaultdict(list)
for j in np.nonzero(fn_n >= 0)[0]:
    pos_n[int(fn_n[j])].append(int(j))
for a in sys.argv[1:]:
    ko = int(np.searchsorted(O['starts'], int(a, 16)))
    oo = np.nonzero(fn_o == ko)[0]
    print(a, 'old occurrences', len(oo), 'function', hex(int(O['starts'][ko])))
    votes = collections.Counter()
    for i in oo[:200]:
        for d in (-3, -2, -1, 1, 2, 3):
            t = int(fn_o[i + d]) if 0 <= i + d < len(fn_o) else -1
            tw = match.get(t) if t >= 0 else None
            if tw is None: continue
            for j in pos_n.get(tw, [])[:50]:
                c = int(fn_n[j - d]) if 0 <= j - d < len(fn_n) else -1
                if c >= 0: votes[c] += 1
    for c, v in votes.most_common(5):
        print('   candidate', hex(int(N['starts'][c])), 'votes', v)

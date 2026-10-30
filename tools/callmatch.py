"""Name the remaining functions through the call graph: for matched function pairs (ref -> ours) with the same
number of bl calls, the n-th bl target in ours corresponds to the n-th in ref. Votes are tallied per target.
usage: callmatch.py ref.dol ref_symbols.txt our.dol our_symbols.txt map.json names.txt"""
import sys,os,json,collections
sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..','src'))
from dol import Dol, load_symbols
rd,rs,od,os_,mp,want=sys.argv[1:7]
R=Dol(rd);rf,_=load_symbols(rs);O=Dol(od);of,_=load_symbols(os_)
rsz={a:(s,n) for a,s,n in rf}; osz={a:(s,n) for a,s,n in of}
rname={n:a for a,s,n in rf}
m={int(k,16):int(v[0],16) for k,v in json.load(open(mp)).items()}
def bls(D,a,s):
    out=[]
    for i in range(0,s,4):
        w=D.word(a+i)
        if w is None: break
        if w>>26==18 and w&1:
            off=w&0x3FFFFFC
            if off&0x2000000: off-=0x4000000
            out.append((a+i+off)&0xFFFFFFFF if not w&2 else off&0xFFFFFFFF)
    return out
# fuzzy pairs too: same-name functions already named in ours
pairs=dict(m)
votes=collections.defaultdict(collections.Counter)
for oa,ra in pairs.items():
    if oa not in osz or ra not in rsz: continue
    ob=bls(O,oa,osz[oa][0]); rb=bls(R,ra,rsz[ra][0])
    if len(ob)!=len(rb): continue
    for x,y in zip(ob,rb): votes[y][x]+=1
# also callers: functions that call a wanted fn are often unmatched themselves; iterate once more using new pairs
names=[l.strip() for l in open(want) if l.strip()]
res={}
for n in names:
    ra=rname.get(n)
    if ra is None: print(n,'not in ref'); continue
    v=votes.get(ra)
    if not v: print(n,hex(ra),'no votes'); continue
    best,c=v.most_common(1)[0]
    print(n,hex(ra),'->',hex(best),osz.get(best,('?','?')),'votes',c,'of',sum(v.values()),'refsize',hex(rsz[ra][0]))
    res[f'{best:08X}']=[f'{ra:08X}',n]
json.dump(res,open('tools/callmatch_out.json','w'),indent=0)

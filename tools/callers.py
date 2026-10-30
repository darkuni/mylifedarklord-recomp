"""usage: callers.py main.dol symbols.txt name|0xaddr ...  -> functions that bl to the target"""
import sys,os,bisect
sys.path.insert(0,os.path.join(os.path.dirname(os.path.abspath(__file__)),'..','src'))
from dol import Dol, load_symbols
D=Dol(sys.argv[1]); F,_=load_symbols(sys.argv[2]); fa=sorted(F); st=[a for a,s,n in fa]
byn={n:a for a,s,n in fa}
for t in sys.argv[3:]:
    ta=int(t,16) if t.startswith('0x') else byn[t]; out=[]
    for a,s,n in fa:
        for x in range(a,a+s,4):
            w=D.word(x)
            if w is None or w>>26!=18 or not w&1: continue
            off=w&0x3FFFFFC
            if off&0x2000000: off-=0x4000000
            if (x+off)&0xFFFFFFFF==ta: out.append(f'{n}@{x:08X}')
    print(t,out)

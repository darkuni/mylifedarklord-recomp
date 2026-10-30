"""Minimal Squirrel 2.x (big-endian, Wii) compiled-closure reader + disassembler.
usage: sqdis.py file.cnb funcname [nth]"""
import struct,sys
OPS=['LINE','LOAD','LOADINT','LOADFLOAT','DLOAD','TAILCALL','CALL','PREPCALL','PREPCALLK','GETK','MOVE','NEWSLOT','DELETE','SET','GET','EQ','NE','ARITH','BITW','RETURN','LOADNULLS','LOADROOTTABLE','LOADBOOL','DMOVE','JMP','JNZ','JZ','LOADFREEVAR','VARGC','GETVARGV','NEWTABLE','NEWARRAY','APPENDARRAY','GETPARENT','COMPARITH','COMPARITHL','INC','INCL','PINC','PINCL','CMP','EXISTS','INSTANCEOF','AND','OR','NEG','NOT','BWNOT','CLOSURE','YIELD','RESUME','FOREACH','POSTFOREACH','DELEGATE','CLONE','TYPEOF','PUSHTRAP','POPTRAP','THROW','CLASS','NEWSLOTA']
class R:
    def __init__(s,d,p=0): s.d=d; s.p=p
    def u32(s): v=struct.unpack_from('>I',s.d,s.p)[0]; s.p+=4; return v
    def i32(s): v=struct.unpack_from('>i',s.d,s.p)[0]; s.p+=4; return v
    def tag(s,t=b'PART'):
        if s.d[s.p:s.p+4]!=t: raise Exception(f'tag {t} expected at {s.p:x}: {s.d[s.p:s.p+8]}')
        s.p+=4
    def obj(s):
        t=s.u32()
        if t==0x08000010: n=s.u32(); v=s.d[s.p:s.p+n].decode('latin1'); s.p+=n; return v
        if t==0x05000002: return s.i32()
        if t==0x05000004: v=struct.unpack_from('>f',s.d,s.p)[0]; s.p+=4; return v
        if t==0x01000001: return None
        if t==0x01000008: return bool(s.u32())
        raise Exception(f'obj type {t:08x} at {s.p-4:x}')
def func(r,depth=0):
    r.tag(); src=r.obj(); name=r.obj(); r.tag()
    nl,np,no,nlv,nli,ni,nf=[r.u32() for _ in range(7)]
    r.tag(); lits=[r.obj() for _ in range(nl)]
    r.tag(); params=[r.obj() for _ in range(np)]
    r.tag(); outs=[]
    for _ in range(no): typ=r.u32(); o=r.obj(); n=r.obj(); outs.append((typ,o,n))
    r.tag(); lvs=[]
    for _ in range(nlv): n=r.obj(); pos=r.u32(); so=r.u32(); eo=r.u32(); lvs.append((n,pos,so,eo))
    r.tag(); lis=[(r.u32(),r.u32()) for _ in range(nli)]
    r.tag(); ins=[]
    for _ in range(ni): a1,op,a0,a2,a3=struct.unpack_from('>iBBBB',r.d,r.p); r.p+=8; ins.append((op,a0,a1,a2,a3))
    r.tag(); fns=[func(r,depth+1) for _ in range(nf)]
    stack=r.u32(); gen=r.d[r.p]; r.p+=1; var=r.d[r.p]; r.p+=1
    return dict(src=src,name=name,lits=lits,params=params,outs=outs,lvs=lvs,ins=ins,fns=fns,lines=lis)
def walk(f):
    yield f
    for g in f['fns']: yield from walk(g)
def dis(f):
    L=f['lits']; line={op:l for l,op in f['lines']}
    lv={}
    for n,pos,so,eo in f['lvs']: lv.setdefault(pos,[]).append((so,eo,n))
    def reg(i,pc):
        for so,eo,n in lv.get(i,[]):
            if so<=pc<=eo+1: return f'{n}'
        return f'r{i}'
    print(f"== {f['name']} params {f['params']}")
    for pc,(op,a0,a1,a2,a3) in enumerate(f['ins']):
        o=OPS[op] if op<len(OPS) else f'op{op}'; x=''
        if o in('LOAD','PREPCALLK','GETK','DLOAD'): x=repr(L[a1]) if 0<=a1<len(L) else ''
        if o=='DLOAD': x+=' '+(repr(L[a3]) if a3<len(L) else '')
        if o in('JMP','JNZ','JZ'): x=f'-> {pc+1+a1}'
        ln=f"L{line[pc]}" if pc in line else ''
        print(f'{pc:5d} {ln:>6} {o:12s} {reg(a0,pc):>14} {a1:6d} {a2:3d} {a3:3d}  {x}')
d=open(sys.argv[1],'rb').read()
r=R(d,0); r.tag(b'\xfa\xfaSQ'); r.tag(b'IR\x00\x00') if d[4:8]==b'IR\x00\x00' else None
# header: FAFA 'SQIR' sizes...
p=d.find(b'PART'); r.p=p
# sizes of char/int/float follow tag in header; skip to first PART
top=func(r)
want=sys.argv[2]; nth=int(sys.argv[3]) if len(sys.argv)>3 else 0
hits=[f for f in walk(top) if f['name']==want]
print(len(hits),'matches')
dis(hits[nth])

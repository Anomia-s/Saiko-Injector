/**
 * Function: D3D12Backend
 * Address:  14022cd70
 * Signature: D3D12Backend * __thiscall D3D12Backend(D3D12Backend * this, undefined8 param_1)
 * Body size: 259 bytes
 */


D3D12Backend * __thiscall
D3D12Backend::D3D12Backend(D3D12Backend *this,D3D12Backend_vftable *param_1)

{
  char cVar1;
  D3D12Backend *pDVar2;
  
  pDVar2 = (D3D12Backend *)FUN_140b65d30(0x250);
  pDVar2->vftablePtr = &vftable;
  pDVar2[1].vftablePtr = (D3D12Backend_vftable *)this;
  pDVar2[2].vftablePtr = param_1;
  memset(pDVar2 + 3,0,0x16c);
  pDVar2[0x31].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x32].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x33].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x34].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x35].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x36].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x37].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x38].vftablePtr = (D3D12Backend_vftable *)0x0;
  *(undefined4 *)&pDVar2[0x39].vftablePtr = 0;
  *(undefined1 *)((longlong)&pDVar2[0x39].vftablePtr + 4) = 1;
  *(undefined4 *)&pDVar2[0x3a].vftablePtr = 0x41800000;
  *(undefined1 *)((longlong)&pDVar2[0x3a].vftablePtr + 4) = 0;
  pDVar2[0x3b].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x3c].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x3d].vftablePtr = (D3D12Backend_vftable *)0x1c;
  *(undefined4 *)&pDVar2[0x3e].vftablePtr = 0;
  *(undefined1 *)((longlong)&pDVar2[0x3e].vftablePtr + 4) = 1;
  pDVar2[0x3f].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x40].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x41].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x42].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x43].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x44].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x45].vftablePtr = (D3D12Backend_vftable *)0xffffffff00000000;
  pDVar2[0x48].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x49].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x46].vftablePtr = (D3D12Backend_vftable *)0x0;
  pDVar2[0x47].vftablePtr = (D3D12Backend_vftable *)0x0;
  cVar1 = ldv_d3d12_debug(pDVar2);
  if (cVar1 == '\0') {
    FUN_14022b930(pDVar2);
    thunk_FUN_140b68ba8(pDVar2,0x250);
    pDVar2 = (D3D12Backend *)0x0;
  }
  return pDVar2;
}


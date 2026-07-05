/**
 * Function: VulkanBackend
 * Address:  14022a530
 * Signature: VulkanBackend * __thiscall VulkanBackend(VulkanBackend * this, undefined8 param_1)
 * Body size: 260 bytes
 */


VulkanBackend * __thiscall
VulkanBackend::VulkanBackend(VulkanBackend *this,VulkanBackend_vftable *param_1)

{
  char cVar1;
  VulkanBackend *pVVar2;
  
  pVVar2 = (VulkanBackend *)FUN_140b65d30(0x138);
  pVVar2->vftablePtr = &vftable;
  pVVar2[1].vftablePtr = (VulkanBackend_vftable *)this;
  pVVar2[2].vftablePtr = param_1;
  pVVar2[8].vftablePtr = (VulkanBackend_vftable *)0x0;
  *(undefined4 *)&pVVar2[9].vftablePtr = 0;
  pVVar2[3].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[4].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[5].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[6].vftablePtr = (VulkanBackend_vftable *)0x0;
  *(undefined4 *)&pVVar2[7].vftablePtr = 0;
  pVVar2[10].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0xb].vftablePtr = (VulkanBackend_vftable *)0x0;
  *(undefined1 *)&pVVar2[0xc].vftablePtr = 0;
  *(undefined8 *)((longlong)&pVVar2[0xc].vftablePtr + 4) = 0x3f800000;
  pVVar2[0xe].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0xf].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x10].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x11].vftablePtr = (VulkanBackend_vftable *)0x2;
  *(undefined4 *)&pVVar2[0x12].vftablePtr = 0;
  pVVar2[0x1d].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x1e].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x1b].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x1c].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x19].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x1a].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x17].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x18].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x15].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x16].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x13].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x14].vftablePtr = (VulkanBackend_vftable *)0x0;
  *(undefined4 *)&pVVar2[0x1f].vftablePtr = 0;
  *(undefined8 *)((longlong)&pVVar2[0x1f].vftablePtr + 4) = 0xffffffff;
  pVVar2[0x21].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x22].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x23].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x24].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x25].vftablePtr = (VulkanBackend_vftable *)0x0;
  pVVar2[0x26].vftablePtr = (VulkanBackend_vftable *)0x0;
  cVar1 = vkcreateinstance(pVVar2);
  if (cVar1 == '\0') {
    FUN_140221a00(pVVar2);
    thunk_FUN_140b68ba8(pVVar2,0x138);
    pVVar2 = (VulkanBackend *)0x0;
  }
  return pVVar2;
}


/**
 * Function: CResizeHandle
 * Address:  1405990f0
 * Signature: CResizeHandle * __thiscall CResizeHandle(CResizeHandle * this, undefined4 param_1, longlong param_2)
 * Body size: 161 bytes
 */


CResizeHandle * __thiscall
ads::CResizeHandle::CResizeHandle(CResizeHandle *this,undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  
  QFrame::QFrame((QFrame *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  plVar1 = (longlong *)FUN_140b65d30(0x40);
  *plVar1 = (longlong)this;
  *(undefined4 *)(plVar1 + 1) = 2;
  *(undefined4 *)(plVar1 + 3) = 0;
  *(undefined1 *)((longlong)plVar1 + 0x1c) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x24) = 1;
  plVar1[5] = 0;
  plVar1[6] = 0;
  *(undefined1 *)(plVar1 + 7) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x3c) = 4;
  (this->CResizeHandle_data).offset_0x10 = plVar1;
  plVar1[2] = param_2;
  *(undefined4 *)(plVar1 + 4) = 0x30;
  FUN_1405991e0(this,param_1);
  return this;
}


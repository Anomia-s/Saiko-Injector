/**
 * Function: PropSetSimple
 * Address:  140a4e8d0
 * Signature: PropSetSimple * __thiscall PropSetSimple(PropSetSimple * this)
 * Body size: 100 bytes
 */


PropSetSimple * __thiscall Scintilla::PropSetSimple::PropSetSimple(PropSetSimple *this)

{
  longlong *plVar1;
  longlong lVar2;
  
  this->vftablePtr = &vftable;
  plVar1 = (longlong *)FUN_140b65d30(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_140b65d30(0x60);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  (this->PropSetSimple_data).offset_0x0 = plVar1;
  return this;
}


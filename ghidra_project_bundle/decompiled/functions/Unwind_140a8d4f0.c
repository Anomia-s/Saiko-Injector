/**
 * Function: Unwind@140a8d4f0
 * Address:  140a8d4f0
 * Signature: void __fastcall Unwind@140a8d4f0(undefined8 param_1, longlong param_2)
 * Body size: 66 bytes
 */


void Unwind_140a8d4f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(FontAlias_vftable **)(lVar1 + 0x50) = &Scintilla::FontAlias::vftable;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  httplib::ClientImpl::vfunction4();
  return;
}


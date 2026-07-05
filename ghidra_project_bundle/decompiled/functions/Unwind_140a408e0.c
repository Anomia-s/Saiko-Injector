/**
 * Function: Unwind@140a408e0
 * Address:  140a408e0
 * Signature: undefined Unwind@140a408e0(void)
 * Body size: 86 bytes
 */


void Unwind_140a408e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x50) != 0) {
    thunk_FUN_140b68ba8();
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    thunk_FUN_140b68ba8();
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    thunk_FUN_140b68ba8();
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    thunk_FUN_140b68ba8();
  }
  return;
}


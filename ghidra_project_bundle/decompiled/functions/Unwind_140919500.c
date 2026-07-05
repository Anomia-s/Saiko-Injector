/**
 * Function: Unwind@140919500
 * Address:  140919500
 * Signature: undefined Unwind@140919500(void)
 * Body size: 86 bytes
 */


void Unwind_140919500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x28) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  return;
}


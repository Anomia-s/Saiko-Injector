/**
 * Function: Unwind@140919440
 * Address:  140919440
 * Signature: undefined Unwind@140919440(void)
 * Body size: 86 bytes
 */


void Unwind_140919440(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x48) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  return;
}


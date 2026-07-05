/**
 * Function: Unwind@140918ff0
 * Address:  140918ff0
 * Signature: undefined Unwind@140918ff0(void)
 * Body size: 95 bytes
 */


void Unwind_140918ff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x1a20) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x1a20) = 0;
  *(undefined4 *)(lVar1 + 0x1a18) = 0;
  return;
}


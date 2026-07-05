/**
 * Function: Unwind@140512d20
 * Address:  140512d20
 * Signature: undefined Unwind@140512d20(void)
 * Body size: 60 bytes
 */


void Unwind_140512d20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  thunk_FUN_140b68ba8(lVar1,0x28);
  return;
}


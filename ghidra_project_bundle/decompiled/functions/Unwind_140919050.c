/**
 * Function: Unwind@140919050
 * Address:  140919050
 * Signature: undefined Unwind@140919050(void)
 * Body size: 95 bytes
 */


void Unwind_140919050(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x1a10) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x1a10) = 0;
  *(undefined4 *)(lVar1 + 0x1a08) = 0;
  return;
}


/**
 * Function: Unwind@1407921d0
 * Address:  1407921d0
 * Signature: undefined Unwind@1407921d0(void)
 * Body size: 84 bytes
 */


void Unwind_1407921d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0xe0) * 0x28 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}


/**
 * Function: Unwind@1407898b0
 * Address:  1407898b0
 * Signature: undefined Unwind@1407898b0(void)
 * Body size: 104 bytes
 */


void Unwind_1407898b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xf8);
  lVar2 = *(longlong *)(param_2 + 0x100) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x118);
  lVar2 = *(longlong *)(param_2 + 0x120) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}


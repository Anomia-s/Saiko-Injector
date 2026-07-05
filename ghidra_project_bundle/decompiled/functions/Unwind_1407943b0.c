/**
 * Function: Unwind@1407943b0
 * Address:  1407943b0
 * Signature: undefined Unwind@1407943b0(void)
 * Body size: 164 bytes
 */


void Unwind_1407943b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xe0);
  lVar2 = *(longlong *)(param_2 + 0xe8) * 0xc + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x130);
  lVar2 = *(longlong *)(param_2 + 0x138) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0xf8);
  lVar2 = *(longlong *)(param_2 + 0x100) * 0x20 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x148);
  lVar2 = *(longlong *)(param_2 + 0x150) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}


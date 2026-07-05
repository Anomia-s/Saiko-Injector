/**
 * Function: Unwind@1407970c0
 * Address:  1407970c0
 * Signature: undefined Unwind@1407970c0(void)
 * Body size: 173 bytes
 */


void Unwind_1407970c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x188);
  lVar2 = *(longlong *)(param_2 + 400) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x120);
  lVar2 = *(longlong *)(param_2 + 0x128) * 0xc + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x138);
  lVar2 = *(longlong *)(param_2 + 0x140) * 0x20 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x160);
  lVar2 = *(longlong *)(param_2 + 0x168) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}


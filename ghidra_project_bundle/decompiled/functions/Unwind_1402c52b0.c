/**
 * Function: Unwind@1402c52b0
 * Address:  1402c52b0
 * Signature: undefined Unwind@1402c52b0(void)
 * Body size: 127 bytes
 */


void Unwind_1402c52b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0xcf0);
  lVar2 = *plVar1;
  uVar3 = *(longlong *)(param_2 + 0xcf8) - lVar2;
  uVar4 = plVar1[1] - lVar2;
  if (uVar3 < uVar4) {
    lVar2 = lVar2 + uVar3;
  }
  else {
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      return;
    }
    if ((ulonglong)(plVar1[2] - lVar2) < uVar3) {
      FUN_1401ffe00(plVar1,uVar3,param_2 + 0xccf);
      return;
    }
    lVar2 = plVar1[1] + (uVar3 - uVar4);
  }
  plVar1[1] = lVar2;
  return;
}


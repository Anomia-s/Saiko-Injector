/**
 * Function: Unwind@1400468c0
 * Address:  1400468c0
 * Signature: undefined Unwind@1400468c0(void)
 * Body size: 93 bytes
 */


void Unwind_1400468c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 600);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))
              (plVar2,CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 0x28) >> 8),
                               plVar2 != *(longlong **)(param_2 + 0x28)));
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 600) = 0;
  }
  FUN_1400e3c20(uVar1);
  return;
}


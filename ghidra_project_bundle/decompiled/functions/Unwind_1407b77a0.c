/**
 * Function: Unwind@1407b77a0
 * Address:  1407b77a0
 * Signature: undefined Unwind@1407b77a0(void)
 * Body size: 72 bytes
 */


void Unwind_1407b77a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xf0);
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    (*(code *)PTR_FUN_1415175d0)(*(undefined8 *)(param_2 + 0x20 + lVar1 * 8));
  }
  return;
}


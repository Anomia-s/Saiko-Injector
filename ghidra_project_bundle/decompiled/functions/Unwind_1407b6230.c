/**
 * Function: Unwind@1407b6230
 * Address:  1407b6230
 * Signature: undefined Unwind@1407b6230(void)
 * Body size: 75 bytes
 */


void Unwind_1407b6230(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 400);
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    (*(code *)PTR_FUN_1415175d0)(*(undefined8 *)(param_2 + 0xd0 + lVar1 * 8));
  }
  return;
}


/**
 * Function: Unwind@1407b7470
 * Address:  1407b7470
 * Signature: undefined Unwind@1407b7470(void)
 * Body size: 224 bytes
 */


void Unwind_1407b7470(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x2148);
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    (*(code *)PTR_FUN_1415175d0)(*(undefined8 *)(param_2 + 0x2020 + lVar1 * 8));
  }
  return;
}


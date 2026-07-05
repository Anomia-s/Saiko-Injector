/**
 * Function: Unwind@140527530
 * Address:  140527530
 * Signature: undefined Unwind@140527530(void)
 * Body size: 65 bytes
 */


void Unwind_140527530(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x37) == '\0') {
    lVar2 = *(longlong *)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + -0x68;
      FUN_14000a4b0(lVar2);
    } while (lVar2 != lVar1);
  }
  return;
}


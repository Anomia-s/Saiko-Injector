/**
 * Function: Unwind@1409ee510
 * Address:  1409ee510
 * Signature: undefined Unwind@1409ee510(void)
 * Body size: 78 bytes
 */


void Unwind_1409ee510(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x77) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x60);
    lVar2 = *(longlong *)(param_2 + 0x68);
    do {
      lVar1 = lVar2 + -0x418 + lVar3;
      lVar3 = lVar3 + -0x418;
      FUN_140a8b880(lVar1);
    } while (lVar3 != 0x18);
  }
  return;
}


/**
 * Function: Unwind@1408f6b20
 * Address:  1408f6b20
 * Signature: undefined Unwind@1408f6b20(void)
 * Body size: 81 bytes
 */


void Unwind_1408f6b20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x67) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x50);
    lVar2 = *(longlong *)(param_2 + 0x58);
    do {
      lVar1 = lVar2 + -0x418 + lVar3;
      lVar3 = lVar3 + -0x418;
      FUN_140a8b880(lVar1);
    } while (lVar3 != 0x28);
  }
  return;
}


/**
 * Function: Unwind@140036350
 * Address:  140036350
 * Signature: undefined Unwind@140036350(void)
 * Body size: 91 bytes
 */


void Unwind_140036350(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x367) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x340);
    do {
      lVar1 = lVar1 + -0x28;
      FUN_140004b30(lVar1);
    } while (lVar1 != param_2 + 0x80);
  }
  return;
}


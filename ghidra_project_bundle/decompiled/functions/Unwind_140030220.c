/**
 * Function: Unwind@140030220
 * Address:  140030220
 * Signature: undefined Unwind@140030220(void)
 * Body size: 71 bytes
 */


void Unwind_140030220(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = lVar2 + -0x40) {
    FUN_140016fe0(lVar1);
    lVar1 = lVar1 + 0x40;
  }
  FUN_140030270(param_2 + 0x20);
  return;
}


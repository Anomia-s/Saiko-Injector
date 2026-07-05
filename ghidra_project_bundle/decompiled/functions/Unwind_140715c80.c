/**
 * Function: Unwind@140715c80
 * Address:  140715c80
 * Signature: undefined Unwind@140715c80(void)
 * Body size: 69 bytes
 */


void Unwind_140715c80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = lVar2 + -0x48) {
    FUN_140714f70(lVar1);
    lVar1 = lVar1 + 0x48;
  }
  return;
}


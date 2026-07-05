/**
 * Function: cryptoevpsignaturec
 * Address:  140bfec20
 * Signature: undefined cryptoevpsignaturec(void)
 * Body size: 95 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoevpsignaturec(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 8),"crypto\\evp\\signature.c",0x1d4);
      FUN_140bd3160(*(undefined8 *)(param_1 + 0x18));
      FUN_140b8d990(param_1,"crypto\\evp\\signature.c",0x1d7);
    }
  }
  return;
}


/**
 * Function: cryptoengineeng_initc
 * Address:  140bd1e10
 * Signature: undefined cryptoengineeng_initc(void)
 * Body size: 260 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int cryptoengineeng_initc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_init.c",0x5a,"ENGINE_init");
    FUN_140b91cc0(0x26,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_140b8b890(&DAT_1417001a8,FUN_140c105d0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1417001ac;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_140b8b770(DAT_1417001c0);
    if (iVar2 != 0) {
      iVar2 = 1;
      if (((*(int *)(param_1 + 0xa0) != 0) || (*(code **)(param_1 + 0x60) == (code *)0x0)) ||
         (iVar2 = (**(code **)(param_1 + 0x60))(param_1), iVar2 != 0)) {
        LOCK();
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        UNLOCK();
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      FUN_140b8b7a0(DAT_1417001c0);
      return iVar2;
    }
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_init.c",0x5f,"ENGINE_init");
  FUN_140b91cc0(0x26,0x8000f,0);
  return 0;
}


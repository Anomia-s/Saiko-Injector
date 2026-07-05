/**
 * Function: ossl_store_get0_loader_int
 * Address:  140cb3590
 * Signature: undefined ossl_store_get0_loader_int(void)
 * Body size: 339 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_store_get0_loader_int(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_10;
  
  uStack_10 = 0x140cb35a0;
  uVar2 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_e8[0] = param_1;
  iVar1 = FUN_140b8b890(&DAT_141700d60,FUN_140cb3730);
  uVar3 = uVar2;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_141700d64;
  }
  if ((int)uVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_register.c",0xe3,"ossl_store_get0_loader_int");
    FUN_140b91cc0(0x2c,0x8000f,0);
  }
  else {
    iVar1 = FUN_140b8b770(DAT_141700d58);
    if (iVar1 != 0) {
      iVar1 = FUN_140cb3760();
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\store\\store_register.c",0xea,"ossl_store_get0_loader_int");
        FUN_140b91cc0(0x2c,0xc0103,0);
      }
      else {
        uVar2 = FUN_140b91690(DAT_141700d68,local_e8);
        if (uVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\store\\store_register.c",0xed,"ossl_store_get0_loader_int");
          FUN_140b91cc0(0x2c,0x69,"scheme=%s",param_1);
        }
      }
      FUN_140b8b7a0(DAT_141700d58);
      return uVar2;
    }
  }
  return 0;
}


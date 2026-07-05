/**
 * Function: pkcs8_encrypt_ex
 * Address:  140ce1010
 * Signature: undefined pkcs8_encrypt_ex(void)
 * Body size: 500 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pkcs8_encrypt_ex(int param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                         undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8
                         ,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_1 == -1) {
    if (param_2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pkcs12\\p12_p8e.c",0x1b,"PKCS8_encrypt_ex");
      FUN_140b91cc0(0x23,0xc0102,0);
      return 0;
    }
    lVar2 = FUN_140d00270(param_2,param_7,param_5,param_6,0,0xffffffff,param_9,0x140ce1030);
  }
  else {
    FUN_140b932f0();
    iVar1 = FUN_140c24c80(1,param_1,0,0,0);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      lVar2 = FUN_140cffdd0(param_1,param_7,param_5,param_6,param_9);
    }
    else {
      FUN_140b93470();
      if (param_2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pkcs12\\p12_p8e.c",0x25,"PKCS8_encrypt_ex");
        FUN_140b91cc0(0x23,0xc0102,0);
        return 0;
      }
      lVar2 = FUN_140d00270(param_2,param_7,param_5,param_6,0,CONCAT44(uVar4,param_1),param_9);
    }
  }
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_p8e.c",0x30,"PKCS8_encrypt_ex");
    FUN_140b91cc0(0x23,0x8000d,0);
  }
  else {
    lVar3 = FUN_140ce1210(param_3,param_4,param_8,lVar2,param_9,param_10);
    if (lVar3 != 0) {
      return lVar3;
    }
    FUN_140bdf9b0(lVar2);
  }
  return 0;
}


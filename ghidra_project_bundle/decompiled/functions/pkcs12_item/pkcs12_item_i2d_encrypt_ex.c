/**
 * Function: pkcs12_item_i2d_encrypt_ex
 * Address:  140ce0e40
 * Signature: undefined pkcs12_item_i2d_encrypt_ex(void)
 * Body size: 456 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pkcs12_item_i2d_encrypt_ex
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  local_18[1] = 0x140ce0e60;
  local_18[0] = 0;
  lVar2 = FUN_140b90f50();
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_decr.c",0xbd,"PKCS12_item_i2d_encrypt_ex");
    FUN_140b91cc0(0x23,0x8000d,0);
    FUN_140b90e80(0);
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_140be3340(param_5,local_18,param_2);
    if (local_18[0] == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pkcs12\\p12_decr.c",0xc2,"PKCS12_item_i2d_encrypt_ex");
      FUN_140b91cc0(0x23,0x66,0);
      FUN_140b90e80(lVar2);
      lVar2 = 0;
    }
    else {
      lVar3 = maybe_wrong_password
                        (param_1,param_3,param_4,local_18[0],iVar1,lVar2 + 8,lVar2,1,param_7,param_8
                        );
      if (lVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pkcs12\\p12_decr.c",199,"PKCS12_item_i2d_encrypt_ex");
        FUN_140b91cc0(0x23,0x67,0);
        FUN_140b8d990(local_18[0],"crypto\\pkcs12\\p12_decr.c",200);
        FUN_140b90e80(lVar2);
        lVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          FUN_14046e980(local_18[0],(longlong)iVar1);
        }
        FUN_140b8d990(local_18[0],"crypto\\pkcs12\\p12_decr.c",0xcd);
      }
    }
  }
  return lVar2;
}


/**
 * Function: ossl_sm2_internal_sign
 * Address:  140da8600
 * Signature: undefined ossl_sm2_internal_sign(void)
 * Body size: 356 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_sm2_internal_sign
          (undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18;
  
  lVar2 = 0;
  lVar4 = 0;
  uVar3 = 0xffffffff;
  local_res18 = param_3;
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\sm2\\sm2_sign.c",0x1d5,"ossl_sm2_internal_sign");
    FUN_140b91cc0(0x35,0xc0102,0);
    lVar4 = lVar2;
  }
  else {
    lVar2 = FUN_140bfcc40(param_1,param_2,0);
    if (lVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\sm2\\sm2_sign.c",0x1db,"ossl_sm2_internal_sign");
      FUN_140b91cc0(0x35,0x80003,0);
    }
    else {
      lVar4 = cryptosm2sm2_signc(param_5,lVar2);
      if (lVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\sm2\\sm2_sign.c",0x1e1,"ossl_sm2_internal_sign");
        FUN_140b91cc0(0x35,0xc0103,0);
      }
      else {
        iVar1 = FUN_140c6e950(lVar4,&local_res18);
        if (iVar1 < 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\sm2\\sm2_sign.c",0x1e7,"ossl_sm2_internal_sign");
          FUN_140b91cc0(0x35,0xc0103,0);
        }
        else {
          *param_4 = iVar1;
          uVar3 = 1;
        }
      }
    }
  }
  FUN_140c6e800(lVar4);
  FUN_140bfcf10(lVar2);
  return uVar3;
}


/**
 * Function: ossl_sm2_internal_verify
 * Address:  140da8770
 * Signature: undefined ossl_sm2_internal_verify(void)
 * Body size: 393 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ossl_sm2_internal_verify
          (undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res18;
  void *local_28;
  void *local_20;
  
  lVar4 = 0;
  local_res18 = 0;
  local_28 = (void *)0x0;
  uVar2 = 0xffffffff;
  local_20 = param_3;
  local_res18 = FUN_140c6e7d0();
  if (local_res18 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\sm2\\sm2_sign.c",0x201,"ossl_sm2_internal_verify");
    uVar5 = 0x8002a;
  }
  else {
    lVar3 = FUN_140c6e850(&local_res18,&local_20,param_4);
    if (lVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x205;
    }
    else {
      iVar1 = FUN_140c6e950(local_res18,&local_28);
      if (iVar1 == param_4) {
        iVar1 = memcmp(param_3,local_28,(longlong)iVar1);
        if (iVar1 == 0) {
          lVar4 = FUN_140bfcc40(param_1,param_2,0);
          if (lVar4 != 0) {
            uVar2 = cryptosm2sm2_signc(param_5,local_res18,lVar4);
            goto LAB_140da88b5;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\sm2\\sm2_sign.c",0x211,"ossl_sm2_internal_verify");
          uVar5 = 0x80003;
          goto LAB_140da88a8;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x20b;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\sm2\\sm2_sign.c",uVar5,"ossl_sm2_internal_verify");
    uVar5 = 0x68;
  }
LAB_140da88a8:
  FUN_140b91cc0(0x35,uVar5,0);
LAB_140da88b5:
  FUN_140b8d990(local_28,"crypto\\sm2\\sm2_sign.c",0x218);
  FUN_140bfcf10(lVar4);
  FUN_140c6e800(local_res18);
  return uVar2;
}


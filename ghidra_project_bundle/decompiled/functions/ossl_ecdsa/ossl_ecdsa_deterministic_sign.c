/**
 * Function: ossl_ecdsa_deterministic_sign
 * Address:  140cef210
 * Signature: undefined ossl_ecdsa_deterministic_sign(void)
 * Body size: 408 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_ecdsa_deterministic_sign
                    (undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 *param_4,
                    undefined8 param_5,undefined4 param_6,longlong param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x6a,"ossl_ecdsa_deterministic_sign");
    FUN_140b91cc0(0x10,0xc0102,0);
    return 0;
  }
  if (param_7 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x6e,"ossl_ecdsa_deterministic_sign");
    FUN_140b91cc0(0x10,0x97,0);
    return 0;
  }
  *param_4 = 0;
  uVar3 = ecdsa_sign_setup(param_5,0,&local_28,&local_20,param_1,param_2,param_6,param_7,param_8,
                           param_9);
  uVar1 = local_20;
  if ((int)uVar3 != 0) {
    lVar4 = cryptoececdsa_signc(param_1,param_2,local_28,local_20,param_5);
    if (lVar4 != 0) {
      uVar2 = FUN_140c6e950(lVar4,local_res18);
      *param_4 = uVar2;
      FUN_140c6e800(lVar4);
    }
    uVar3 = (ulonglong)(lVar4 != 0);
    FUN_140bfcb30(local_28);
    FUN_140bfcb30(uVar1);
  }
  return uVar3;
}


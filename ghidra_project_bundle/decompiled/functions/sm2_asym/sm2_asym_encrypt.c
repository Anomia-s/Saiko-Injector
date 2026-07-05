/**
 * Function: sm2_asym_encrypt
 * Address:  140d4ff70
 * Signature: undefined sm2_asym_encrypt(void)
 * Body size: 212 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_asym_encrypt(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140b8c100(param_1 + 2);
  if ((lVar2 != 0) || (lVar2 = FUN_140d71850(param_1 + 2,*param_1,&DAT_1413a6e6c,0), lVar2 != 0)) {
    if (param_2 != 0) {
      uVar3 = ossl_sm2_encrypt(param_1[1],lVar2,param_5,param_6,param_2,param_3);
      return uVar3;
    }
    iVar1 = FUN_140dab320(param_1[1],lVar2,param_6,param_3);
    if (iVar1 != 0) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\asymciphers\\sm2_enc.c",0x5e,"sm2_asym_encrypt");
    FUN_140b91cc0(0x39,0x9e,0);
  }
  return 0;
}


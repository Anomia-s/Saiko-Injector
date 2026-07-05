/**
 * Function: negative_big_numbers_are_unsupported_for_ossl
 * Address:  140c467f0
 * Signature: undefined negative_big_numbers_are_unsupported_for_ossl(void)
 * Body size: 353 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
negative_big_numbers_are_unsupported_for_ossl
          (undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  uVar4 = 0;
  if (1 < param_5 - 1U) {
    return 0;
  }
  if (param_3 == 0) {
LAB_140c46921:
    lVar2 = FUN_140c46590(param_1,param_2,param_4,param_4,param_5,CONCAT44(uVar6,uVar4));
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x20) = param_3;
      return 1;
    }
  }
  else {
    uVar6 = 1;
    if ((param_5 == 2) && (uVar6 = 1, iVar1 = FUN_140bfcde0(param_3), iVar1 != 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\param_build.c",0xcd,"push_BN");
      pcVar5 = "Negative big numbers are unsupported for OSSL_PARAM_UNSIGNED_INTEGER";
      uVar3 = 0x8010c;
    }
    else {
      iVar1 = FUN_140bfc870(param_3);
      iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
      if (iVar1 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\param_build.c",0xd4,"push_BN");
        pcVar5 = (char *)0x0;
        uVar3 = 0x73;
      }
      else {
        if ((ulonglong)(longlong)iVar1 <= param_4) {
          iVar1 = FUN_140bfc6e0(param_3,8);
          uVar4 = (uint)(iVar1 == 8);
          if (param_4 == 0) {
            param_4 = 1;
          }
          goto LAB_140c46921;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\param_build.c",0xd8,"push_BN");
        pcVar5 = (char *)0x0;
        uVar3 = 0x74;
      }
    }
    FUN_140b91cc0(0xf,uVar3,pcVar5);
  }
  return 0;
}


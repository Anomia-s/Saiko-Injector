/**
 * Function: cryptosm2sm2_signc
 * Address:  140da8c90
 * Signature: undefined cryptosm2sm2_signc(void)
 * Body size: 752 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cryptosm2sm2_signc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res20;
  undefined8 local_48 [2];
  
  lVar9 = 0;
  uVar2 = FUN_140b772a0();
  uVar3 = FUN_140b77290(uVar2);
  local_48[0] = 0;
  local_res20 = 0;
  uVar4 = FUN_140b9f2f0(param_1);
  lVar5 = FUN_140c936d0(uVar4);
  lVar7 = lVar9;
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\sm2\\sm2_sign.c",0x15a,"sm2_sig_verify");
    FUN_140b91cc0(0x35,0x80003,0);
    goto LAB_140da8f57;
  }
  bn_ctx_start(lVar5);
  uVar4 = FUN_140c93a20(lVar5);
  lVar6 = FUN_140c93a20(lVar5);
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar2 = 0x161;
    goto LAB_140da8d62;
  }
  lVar7 = FUN_140c0cd80(uVar2);
  if (lVar7 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar2 = 0x167;
LAB_140da8d99:
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\sm2\\sm2_sign.c",uVar2,"sm2_sig_verify");
    uVar2 = 0x80010;
  }
  else {
    FUN_140c6ea90(param_2,local_48,&local_res20);
    uVar8 = FUN_140bfc860();
    iVar1 = FUN_140bfce80(local_48[0],uVar8);
    if (iVar1 < 0) {
LAB_140da8f1b:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar2 = 0x17b;
    }
    else {
      uVar8 = FUN_140bfc860();
      iVar1 = FUN_140bfce80(local_res20,uVar8);
      if (((iVar1 < 0) || (iVar1 = FUN_140bfce80(uVar3,local_48[0]), iVar1 < 1)) ||
         (iVar1 = FUN_140bfce80(uVar3,local_res20), iVar1 < 1)) goto LAB_140da8f1b;
      iVar1 = FUN_140cc3940(uVar4,local_48[0],local_res20,uVar3,lVar5);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar2 = 0x180;
LAB_140da8d62:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\sm2\\sm2_sign.c",uVar2,"sm2_sig_verify");
        uVar2 = 0x80003;
        goto LAB_140da8f3d;
      }
      iVar1 = FUN_140bfc7d0(uVar4);
      if (iVar1 == 0) {
        uVar8 = FUN_140b97dc0(param_1);
        iVar1 = FUN_140c0d950(uVar2,lVar7,local_res20,uVar8,uVar4,lVar5);
        if ((iVar1 == 0) || (iVar1 = ec_point_is_at_infinity(uVar2,lVar7,lVar6,0,lVar5), iVar1 == 0)
           ) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar2 = 0x18b;
          goto LAB_140da8d99;
        }
        iVar1 = FUN_140cc3940(uVar4,param_3,lVar6,uVar3,lVar5);
        if (iVar1 != 0) {
          iVar1 = FUN_140bfce80(local_48[0],uVar4);
          if (iVar1 == 0) {
            lVar9 = 1;
          }
          goto LAB_140da8f57;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar2 = 400;
        goto LAB_140da8d62;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar2 = 0x185;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\sm2\\sm2_sign.c",uVar2,"sm2_sig_verify");
    uVar2 = 0x65;
  }
LAB_140da8f3d:
  FUN_140b91cc0(0x35,uVar2,0);
LAB_140da8f57:
  FUN_140c93bc0(lVar5);
  FUN_140c0ce80(lVar7);
  FUN_140c93850(lVar5);
  return lVar9;
}


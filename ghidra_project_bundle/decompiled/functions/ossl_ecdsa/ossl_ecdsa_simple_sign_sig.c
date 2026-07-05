/**
 * Function: ossl_ecdsa_simple_sign_sig
 * Address:  140cef6c0
 * Signature: undefined ossl_ecdsa_simple_sign_sig(void)
 * Body size: 1165 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
ossl_ecdsa_simple_sign_sig
          (undefined8 param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  local_40 = 0x140cef6dd;
  local_50 = 0;
  local_58 = 0;
  lVar11 = 0;
  lVar5 = FUN_140b772a0(param_5);
  local_48 = FUN_140b6a6a0(param_5);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x11f,"ossl_ecdsa_simple_sign_sig");
    FUN_140b91cc0(0x10,0xc0102,0);
    return (longlong *)0x0;
  }
  if (local_48 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x123,"ossl_ecdsa_simple_sign_sig");
    FUN_140b91cc0(0x10,0x7d,0);
    return (longlong *)0x0;
  }
  iVar2 = FUN_140c0e750(param_5);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x128,"ossl_ecdsa_simple_sign_sig");
    FUN_140b91cc0(0x10,0x9f,0);
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)FUN_140c6e7d0();
  if (plVar6 == (longlong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x12e,"ossl_ecdsa_simple_sign_sig");
    FUN_140b91cc0(0x10,0x8002a,0);
    return (longlong *)0x0;
  }
  lVar7 = FUN_140bfcab0();
  *plVar6 = lVar7;
  lVar7 = FUN_140bfcab0();
  plVar6[1] = lVar7;
  if ((*plVar6 == 0) || (lVar7 == 0)) {
    uVar12 = 0x134;
  }
  else {
    lVar11 = FUN_140c936d0(*(undefined8 *)(param_5 + 0x50));
    if ((lVar11 == 0) || (local_58 = FUN_140bfcab0(), local_58 == 0)) {
      uVar12 = 0x13b;
    }
    else {
      local_40 = FUN_140b77290(lVar5);
      if (local_40 == 0) {
        uVar10 = 0x80010;
        uVar12 = 0x140;
        goto LAB_140cefada;
      }
      uVar3 = FUN_140bfc870(local_40);
      if ((int)uVar3 < param_2 * 8) {
        param_2 = (int)(uVar3 + 7 + ((int)(uVar3 + 7) >> 0x1f & 7U)) >> 3;
      }
      lVar8 = FUN_140bfcc40(param_1,param_2,local_58);
      if (lVar8 == 0) {
        uVar12 = 0x14b;
      }
      else {
        iVar2 = 0;
        if ((param_2 * 8 <= (int)uVar3) ||
           (iVar4 = FUN_140c23400(local_58,local_58,8 - (uVar3 & 7)), iVar2 = 0, iVar4 != 0)) {
          do {
            if ((param_3 == 0) || (param_4 == 0)) {
              iVar4 = ecdsa_sign_setup(param_5,lVar11,&local_50,plVar6,param_1,param_2,0,0,0,0);
              lVar8 = local_50;
              if (iVar4 == 0) {
                uVar10 = 0x8002a;
                uVar12 = 0x157;
                goto LAB_140cefada;
              }
            }
            else {
              lVar9 = FUN_140bfcbb0(*plVar6,param_4);
              lVar8 = param_3;
              if (lVar9 == 0) {
                uVar12 = 0x15e;
                goto LAB_140cefad5;
              }
            }
            iVar4 = FUN_140c93150(lVar7,*plVar6,*(undefined8 *)(lVar5 + 0x90),lVar11);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_140c93010(lVar7,lVar7,local_48,*(undefined8 *)(lVar5 + 0x90),lVar11),
               iVar4 == 0)) {
              uVar12 = 0x16c;
              goto LAB_140cefad5;
            }
            iVar4 = FUN_140cc3d60(lVar7,lVar7,local_58,local_40);
            if (iVar4 == 0) {
              uVar12 = 0x170;
              goto LAB_140cefad5;
            }
            iVar4 = FUN_140c93150(lVar7,lVar7,*(undefined8 *)(lVar5 + 0x90),lVar11);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_140c92a50(lVar7,lVar7,lVar8,*(undefined8 *)(lVar5 + 0x90),lVar11),
               iVar4 == 0)) {
              uVar12 = 0x179;
              goto LAB_140cefad5;
            }
            iVar4 = FUN_140bfc7d0(lVar7);
            if (iVar4 == 0) goto LAB_140cefb17;
            if ((param_3 != 0) && (param_4 != 0)) {
              uVar10 = 0x9d;
              uVar12 = 0x183;
              goto LAB_140cefada;
            }
            bVar1 = iVar2 < 9;
            iVar2 = iVar2 + 1;
          } while (bVar1);
          uVar10 = 0xb0;
          uVar12 = 0x188;
          goto LAB_140cefada;
        }
        uVar12 = 0x150;
      }
    }
  }
LAB_140cefad5:
  uVar10 = 0x80003;
LAB_140cefada:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\ec\\ecdsa_ossl.c",uVar12,"ossl_ecdsa_simple_sign_sig");
  FUN_140b91cc0(0x10,uVar10,0);
  FUN_140c6e800(plVar6);
  plVar6 = (longlong *)0x0;
LAB_140cefb17:
  FUN_140c93850(lVar11);
  FUN_140bfcb30(local_58);
  FUN_140bfcb30(local_50);
  return plVar6;
}


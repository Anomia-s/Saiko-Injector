/**
 * Function: ecp_nistz256group_full_init
 * Address:  140c9de00
 * Signature: undefined ecp_nistz256group_full_init(void)
 * Body size: 1143 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ecp_nistz256group_full_init(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar6 = 0;
  lVar5 = 0;
  lVar11 = 0;
  lVar7 = 0;
  local_res18 = 0;
  local_58 = 0;
  lVar9 = 0;
  local_50 = 0;
  lVar8 = 0;
  local_48 = 0;
  lVar12 = 0;
  local_res20 = 0;
  lVar2 = FUN_140c936d0(*(undefined8 *)(param_1 + 0xa8));
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecp_nistz256.c",0x5b6,"ecp_nistz256group_full_init");
    FUN_140b91cc0(0x10,0xc0100,0);
    return 0;
  }
  lVar3 = FUN_140c0bde0(param_1,param_2,0x14);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x5bb;
    lVar9 = lVar6;
    lVar12 = lVar6;
    goto LAB_140c9dec1;
  }
  local_res18 = FUN_140bfcc40(param_2 + 0x14,0x20,0);
  if (((local_res18 == 0) || (local_58 = FUN_140bfcc40(param_2 + 0x34,0x20,0), local_58 == 0)) ||
     (local_50 = FUN_140bfcc40(param_2 + 0x54,0x20,0), local_50 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x5c3;
    goto LAB_140c9e1cb;
  }
  lVar11 = FUN_140c929d0();
  lVar3 = lVar6;
  lVar10 = lVar6;
  lVar13 = lVar6;
  if ((lVar11 == 0) ||
     (iVar1 = FUN_140c93210(lVar11,local_res18,0x100,param_2 + 0xd4,0x20,1,0), lVar3 = lVar8,
     lVar10 = lVar9, lVar13 = lVar12, iVar1 == 0)) goto LAB_140c9e1f0;
  lVar8 = FUN_140bfcab0();
  if (lVar8 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x5d5;
    lVar9 = lVar6;
    lVar12 = lVar6;
LAB_140c9e1cb:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecp_nistz256.c",uVar4,"ecp_nistz256group_full_init");
    uVar4 = 0x80003;
  }
  else {
    uVar4 = FUN_140bfc860();
    iVar1 = FUN_140bfd560(lVar8,uVar4,lVar11,lVar2);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x5d9;
      goto LAB_140c9e1cb;
    }
    *(longlong *)(param_1 + 0x78) = lVar11;
    lVar11 = 0;
    *(longlong *)(param_1 + 0x80) = lVar8;
    lVar3 = 0;
    iVar1 = FUN_140ca0760(param_1,local_res18,local_58,local_50,lVar2);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x5e2;
    }
    else {
      lVar12 = FUN_140c0cd80(param_1);
      if (lVar12 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x5e7;
      }
      else {
        lVar9 = FUN_140bfcc40(param_2 + 0x74,0x20,0);
        lVar8 = lVar3;
        if ((lVar9 == 0) || (local_48 = FUN_140bfcc40(param_2 + 0x94,0x20,0), local_48 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x5ed;
          goto LAB_140c9e1cb;
        }
        iVar1 = FUN_140c0d1a0(param_1,lVar12,lVar9,local_48,lVar2);
        if (iVar1 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x5f1;
        }
        else {
          local_res20 = FUN_140bfcc40(param_2 + 0xb4,0x20,0);
          if ((local_res20 == 0) || (iVar1 = FUN_140bfcdf0(lVar9,1), iVar1 == 0)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x5f6;
            goto LAB_140c9e1cb;
          }
          lVar8 = FUN_140c0cd80(param_1);
          *(longlong *)(param_1 + 8) = lVar8;
          if (lVar8 != 0) {
            iVar1 = FUN_140c0cf10(lVar8,lVar12);
            lVar6 = lVar5;
            lVar10 = lVar9;
            lVar13 = lVar12;
            if ((((iVar1 != 0) &&
                 (lVar8 = FUN_140bfcbb0(*(undefined8 *)(param_1 + 0x10),local_res20), lVar8 != 0))
                && (iVar1 = FUN_140bfcdf0(*(undefined8 *)(param_1 + 0x18),1), iVar1 != 0)) &&
               ((lVar7 = FUN_140c929d0(), lVar7 != 0 &&
                (iVar1 = FUN_140c93210(lVar7,local_res20,0x100,param_2 + 0xf4,0x20,0xee00bc4f,
                                       0xccd1c8aa), iVar1 != 0)))) {
              *(longlong *)(param_1 + 0x90) = lVar7;
              lVar7 = 0;
              lVar6 = 1;
            }
            goto LAB_140c9e1f0;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x5ff;
        }
      }
    }
LAB_140c9dec1:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecp_nistz256.c",uVar4,"ecp_nistz256group_full_init");
    uVar4 = 0x80010;
    lVar8 = lVar6;
    lVar11 = lVar6;
  }
  FUN_140b91cc0(0x10,uVar4,0);
  lVar7 = lVar6;
  lVar3 = lVar8;
  lVar10 = lVar9;
  lVar13 = lVar12;
LAB_140c9e1f0:
  FUN_140c0ce80(lVar13);
  FUN_140c93850(lVar2);
  FUN_140c92b30(lVar11);
  FUN_140c92b30(lVar7);
  FUN_140bfcf10(local_res18);
  FUN_140bfcf10(lVar3);
  FUN_140bfcf10(local_58);
  FUN_140bfcf10(local_50);
  FUN_140bfcf10(local_res20);
  FUN_140bfcf10(lVar10);
  FUN_140bfcf10(local_48);
  return lVar6;
}


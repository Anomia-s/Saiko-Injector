/**
 * Function: dsa_sign_setup
 * Address:  140c99540
 * Signature: undefined dsa_sign_setup(void)
 * Body size: 1211 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dsa_sign_setup(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
              longlong param_5,int param_6,int param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_4;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0xe6,"dsa_sign_setup");
    uVar11 = 0x65;
LAB_140c999e2:
    FUN_140b91cc0(10,uVar11,0);
    return 0;
  }
  iVar3 = FUN_140bfc7d0();
  if ((((iVar3 != 0) || (iVar3 = FUN_140bfc7d0(*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) ||
      ((iVar3 = FUN_140bfc7d0(*(undefined8 *)(param_1 + 0x18)), iVar3 != 0 ||
       ((iVar3 = FUN_140bfcde0(*(undefined8 *)(param_1 + 8)), iVar3 != 0 ||
        (iVar3 = FUN_140bfcde0(*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)))))) ||
     (iVar3 = FUN_140bfcde0(*(undefined8 *)(param_1 + 0x18)), iVar3 != 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0xf1,"dsa_sign_setup");
    uVar11 = 0x70;
    goto LAB_140c999e2;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0xf5,"dsa_sign_setup");
    uVar11 = 0x6f;
    goto LAB_140c999e2;
  }
  lVar6 = FUN_140bfcab0();
  lVar7 = FUN_140bfcab0();
  lVar8 = 0;
  if (((lVar6 != 0) && (lVar8 = 0, lVar7 != 0)) &&
     ((lVar8 = param_2, param_2 != 0 || (lVar8 = FUN_140c936d0(0), lVar8 != 0)))) {
    iVar3 = FUN_140bfc870(*(undefined8 *)(param_1 + 0x10));
    iVar4 = FUN_140b97ea0(*(undefined8 *)(param_1 + 0x10));
    if (0x7f < iVar3) {
      iVar4 = iVar4 + 2;
      lVar9 = FUN_140bfd590(lVar6,iVar4);
      if ((lVar9 != 0) && (lVar9 = FUN_140bfd590(lVar7,iVar4), lVar9 != 0)) {
        do {
          if (param_5 == 0) {
            iVar5 = FUN_140ca3ca0(lVar6,*(undefined8 *)(param_1 + 0x10),0,lVar8);
          }
          else if (param_7 == 1) {
            iVar5 = FUN_140cf7f90(lVar6);
          }
          else {
            iVar5 = FUN_140ca3f50(lVar6,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined8 *)(param_1 + 0x70),param_5,(longlong)param_6,lVar8);
          }
          if (iVar5 == 0) goto LAB_140c9992b;
          iVar5 = FUN_140bfd7a0(lVar6,0);
        } while (iVar5 != 0);
        FUN_140bfc6d0(lVar6,4);
        FUN_140bfc6d0(lVar7,4);
        if (((((*(byte *)(param_1 + 0x78) & 1) == 0) ||
             (lVar9 = FUN_140c92e90((undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xb0),
                                    *(undefined8 *)(param_1 + 8),lVar8), lVar9 != 0)) &&
            (iVar5 = FUN_140c9a0e0(lVar7,lVar6,*(undefined8 *)(param_1 + 0x10)), iVar5 != 0)) &&
           (iVar5 = FUN_140c9a0e0(lVar6,lVar7,*(undefined8 *)(param_1 + 0x10)), iVar5 != 0)) {
          iVar3 = FUN_140bfcf90(lVar7,iVar3);
          FUN_140bfd3f0((longlong)iVar3,lVar6,lVar7,iVar4);
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0xa0) + 0x28);
          uVar2 = *(undefined8 *)(param_1 + 0x80);
          if (pcVar1 == (code *)0x0) {
            iVar3 = FUN_140c9a960(uVar11,*(undefined8 *)(param_1 + 0x18),lVar6,
                                  *(undefined8 *)(param_1 + 8),lVar8,uVar2);
          }
          else {
            iVar3 = (*pcVar1)(param_1,uVar11,*(undefined8 *)(param_1 + 0x18),lVar6,
                              *(undefined8 *)(param_1 + 8),lVar8,uVar2);
          }
          if ((iVar3 != 0) &&
             (iVar3 = FUN_140c9a180(0,uVar11,uVar11,*(undefined8 *)(param_1 + 0x10),lVar8),
             iVar3 != 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x10);
            lVar9 = FUN_140bfcab0();
            if (lVar9 != 0) {
              bn_ctx_start(lVar8);
              lVar10 = FUN_140c93a20(lVar8);
              if (((lVar10 != 0) && (iVar3 = FUN_140bfcdf0(lVar9,2), iVar3 != 0)) &&
                 ((iVar3 = FUN_140c99e50(lVar10,uVar11,lVar9), iVar3 != 0 &&
                  (iVar3 = FUN_140c9a960(lVar9,lVar6,lVar10,uVar11,lVar8,0), iVar3 != 0)))) {
                FUN_140c93bc0(lVar8);
                FUN_140bfcb30(*param_3);
                *param_3 = lVar9;
                uVar11 = 1;
                goto LAB_140c9995a;
              }
              FUN_140bfcf10(lVar9);
              FUN_140c93bc0(lVar8);
            }
          }
        }
      }
    }
  }
LAB_140c9992b:
  uVar11 = 0;
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0x15b,"dsa_sign_setup");
  FUN_140b91cc0(10,0x80003,0);
LAB_140c9995a:
  if (lVar8 != param_2) {
    FUN_140c93850(lVar8);
  }
  FUN_140bfcb30(lVar6);
  FUN_140bfcb30(lVar7);
  return uVar11;
}


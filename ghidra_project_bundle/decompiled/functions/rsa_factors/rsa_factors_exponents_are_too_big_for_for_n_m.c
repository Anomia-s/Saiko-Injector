/**
 * Function: rsa_factors_exponents_are_too_big_for_for_n_m
 * Address:  140c15b20
 * Signature: undefined rsa_factors_exponents_are_too_big_for_for_n_m(void)
 * Body size: 1702 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_factors_exponents_are_too_big_for_for_n_m(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  int local_res8 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  local_40 = 0x140c15b3c;
  lVar13 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0;
  lVar16 = 0;
  local_60 = 0;
  lVar14 = 0;
  local_58 = 0;
  local_res8[0] = 0;
  local_res20 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_40 = FUN_140b93540(param_2,&DAT_1413a5f98);
  lVar7 = FUN_140b93540(param_2,&DAT_1413a6350);
  lVar8 = lVar13;
  lVar10 = lVar13;
  lVar15 = lVar13;
  lVar9 = lVar13;
  if ((((local_40 == 0) || (iVar1 = FUN_140b94bf0(local_40,&local_68), iVar1 == 0)) || (lVar7 == 0))
     || (iVar1 = FUN_140b94bf0(lVar7,&local_60), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar12 = 0x53;
LAB_140c15c58:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_backend.c",uVar12,"ossl_rsa_fromdata");
    FUN_140b91cc0(4,0xc0102,0);
  }
  else {
    lVar7 = lVar13;
    if (param_3 != 0) {
      lVar7 = FUN_140b93540(param_2,"rsa-derive-from-pq");
      if ((lVar7 != 0) && (iVar1 = FUN_140b93920(lVar7,local_res8), iVar1 == 0)) goto LAB_140c15c79;
      lVar7 = FUN_140b93540(param_2,&DAT_1413a647c);
      if ((lVar7 != 0) && (iVar1 = FUN_140b94bf0(lVar7,&local_58), iVar1 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x61;
        goto LAB_140c15c58;
      }
      if (local_res8[0] != 0) {
        local_res20 = FUN_140c936d0(*(undefined8 *)(param_1 + 8));
        lVar8 = 0;
        lVar10 = lVar14;
        lVar15 = local_res20;
        lVar9 = lVar16;
        if (local_res20 == 0) goto LAB_140c15c79;
        local_40 = FUN_140b93540(param_2,"rsa-factor1");
        lVar8 = FUN_140b93540(param_2,"rsa-factor2");
        if (((local_40 == 0) || (iVar1 = FUN_140b94bf0(local_40,&local_50), iVar1 == 0)) ||
           ((lVar8 == 0 || (iVar1 = FUN_140b94bf0(lVar8,&local_48), iVar1 == 0)))) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\rsa\\rsa_backend.c",0x6f,"ossl_rsa_fromdata");
          FUN_140b91cc0(4,0xc0102,0);
          lVar8 = lVar13;
          lVar10 = lVar13;
          lVar9 = lVar13;
          goto LAB_140c15c79;
        }
      }
    }
    bVar17 = local_58 != 0;
    iVar1 = FUN_140c29f60(param_1,local_68,local_60);
    lVar8 = lVar13;
    lVar10 = lVar14;
    lVar15 = local_res20;
    lVar9 = lVar16;
    if (iVar1 != 0) {
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      lVar10 = lVar13;
      lVar9 = lVar13;
      if (bVar17) {
        lVar8 = FUN_140b77ab0();
        iVar1 = FUN_140c16a80(lVar8,param_2,&PTR_s_rsa_factor1_141519420);
        lVar10 = lVar14;
        lVar9 = lVar16;
        if (iVar1 == 0) goto LAB_140c15c79;
        lVar9 = FUN_140b77ab0();
        iVar1 = FUN_140c16a80(lVar9,param_2,&PTR_s_rsa_exponent1_141519480);
        if (iVar1 == 0) goto LAB_140c15c79;
        lVar10 = FUN_140b77ab0();
        iVar1 = FUN_140c16a80(lVar10,param_2,&PTR_s_rsa_coefficient1_1415194e0);
        if (iVar1 == 0) goto LAB_140c15c79;
        if (((local_res8[0] == 0) || (iVar1 = FUN_140b77980(lVar9), iVar1 != 0)) ||
           (iVar1 = FUN_140b77980(lVar10), iVar1 != 0)) {
          iVar1 = FUN_140b77980(lVar8);
          if ((iVar1 != 0) && (iVar1 = FUN_140c2a5a0(param_1,lVar8,lVar9,lVar10), iVar1 == 0))
          goto LAB_140c15c79;
        }
        else {
          iVar1 = FUN_140b77980(lVar8);
          if (iVar1 < 2) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_backend.c",0x8c,"ossl_rsa_fromdata");
            FUN_140b91cc0(4,0xc0102,0);
            goto LAB_140c15c79;
          }
          iVar1 = FUN_140b77980(lVar8);
          if ((2 < iVar1) && (lVar7 == 0)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_backend.c",0x96,"ossl_rsa_fromdata");
            FUN_140b91cc0(4,0xc0102,0);
            goto LAB_140c15c79;
          }
          iVar1 = FUN_140b77980(lVar8);
          if (iVar1 == 2) {
            uVar12 = FUN_140b77990(lVar8,1);
            uVar11 = FUN_140b77990(lVar8,0);
            iVar1 = FUN_140c2a010(param_1,uVar11,uVar12);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\rsa\\rsa_backend.c",0x9f,"ossl_rsa_fromdata");
              FUN_140b91cc0(4,0xc0103,0);
              goto LAB_140c15c79;
            }
            FUN_140b783c0(lVar8);
            FUN_140b783c0(lVar8);
            uVar2 = FUN_140c8d080(param_1);
            iVar1 = FUN_140ca9850(param_1,uVar2,0,local_res20);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\rsa\\rsa_backend.c",0xb2,"ossl_rsa_fromdata");
              FUN_140b91cc0(4,0xc0103,0);
              goto LAB_140c15c79;
            }
          }
          else {
            uVar3 = FUN_140b77980(lVar8);
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            uVar4 = FUN_140c8d080(param_1);
            lVar13 = lVar8;
            lVar14 = lVar9;
            iVar1 = FUN_140c8d500(param_1,uVar4,uVar3,uVar12,lVar8,lVar9,lVar10);
            uVar3 = (undefined4)((ulonglong)lVar13 >> 0x20);
            uVar4 = (undefined4)((ulonglong)lVar14 >> 0x20);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\rsa\\rsa_backend.c",0xbf,"ossl_rsa_fromdata");
              FUN_140b91cc0(4,0xc0103,0);
              goto LAB_140c15c79;
            }
            iVar1 = FUN_140c2a5a0(param_1,lVar8,lVar9,lVar10);
            if (iVar1 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\rsa\\rsa_backend.c",200,"ossl_rsa_fromdata");
              FUN_140b91cc0(4,0xc0103,0);
              goto LAB_140c15c79;
            }
          }
        }
        iVar1 = FUN_140b77980(lVar8);
        if (((iVar1 != 0) || (iVar1 = FUN_140b77980(lVar9), iVar1 != 0)) ||
           (iVar1 = FUN_140b77980(lVar10), lVar13 = lVar8, iVar1 != 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\rsa\\rsa_backend.c",0xe0,"ossl_rsa_fromdata");
          uVar2 = FUN_140b77980(lVar10);
          uVar5 = FUN_140b77980(lVar9);
          uVar6 = FUN_140b77980(lVar8);
          FUN_140b91cc0(4,0xc0103,
                        "There are %d, %d, %d elements left on our factors, exps, coeffs stacks\n",
                        uVar6,CONCAT44(uVar3,uVar5),CONCAT44(uVar4,uVar2));
          goto LAB_140c15c79;
        }
      }
      iVar1 = FUN_140c2aa50(param_1);
      if (iVar1 != 0) {
        FUN_140bfcb30(local_50);
        FUN_140bfcb30(local_48);
        FUN_140b77c10(lVar13);
        FUN_140b77c10(lVar9);
        FUN_140b77c10(lVar10);
        FUN_140c93850(local_res20);
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_backend.c",0xe9,"ossl_rsa_fromdata");
      FUN_140b91cc0(4,0xab,"RSA factors/exponents are too big for for n-modulus\n");
      lVar8 = lVar13;
    }
  }
LAB_140c15c79:
  FUN_140bfcf10(local_68);
  FUN_140bfcf10(local_60);
  FUN_140bfcf10(local_58);
  FUN_140b77c60(lVar8,FUN_140bfcb30);
  FUN_140b77c60(lVar9,FUN_140bfcb30);
  FUN_140b77c60(lVar10,FUN_140bfcb30);
  FUN_140c93850(lVar15);
  return 0;
}


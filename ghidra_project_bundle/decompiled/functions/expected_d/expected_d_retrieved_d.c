/**
 * Function: expected_d_retrieved_d
 * Address:  140c90410
 * Signature: undefined expected_d_retrieved_d(void)
 * Body size: 1386 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void expected_d_retrieved_d
               (byte *param_1,undefined8 param_2,longlong param_3,longlong param_4,byte *param_5,
               int *param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  uint *puVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar23;
  size_t _Size;
  uint uVar24;
  int iVar25;
  byte *pbVar26;
  longlong lVar27;
  longlong lVar28;
  byte bVar29;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_c8;
  byte *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  byte *pbVar22;
  
  uStack_48 = 0x140c90427;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  pbVar22 = (byte *)0x0;
  iVar15 = *param_6;
  uVar21 = 0;
  pbVar26 = (byte *)0x0;
  local_a0 = param_6;
  local_c0 = param_1;
  local_b0 = param_3;
  local_a8 = param_2;
  lVar16 = FUN_140b70980();
  pbVar17 = pbVar22;
  if (lVar16 == 0) goto LAB_140c9094a;
  local_b8 = param_3;
  if (param_4 != 0) {
    local_b8 = param_4;
  }
  iVar14 = FUN_140b97b40(param_3);
  pbVar17 = pbVar26;
  local_c8 = iVar14;
  if (iVar14 < 1) goto LAB_140c9094a;
  iVar25 = iVar14;
  if ((iVar15 != -1) && (iVar25 = iVar15, iVar15 < -4)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",0x4e,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x88,0);
    goto LAB_140c9094a;
  }
  cVar13 = FUN_140bfc870(*(undefined8 *)(param_1 + 0x28));
  bVar29 = cVar13 - 1U & 7;
  iVar15 = FUN_140c8d0a0(local_c0);
  if ((*param_5 & (byte)(0xff << bVar29)) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",0x55,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x85,0);
    goto LAB_140c9094a;
  }
  if (bVar29 == 0) {
    param_5 = param_5 + 1;
    iVar15 = iVar15 + -1;
  }
  if (iVar15 < iVar14 + 2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",0x5d,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x6d,0);
    goto LAB_140c9094a;
  }
  iVar14 = iVar15 - iVar14;
  iVar23 = iVar14 + -2;
  if ((iVar25 != -3) && (bVar4 = iVar23 < iVar25, iVar23 = iVar25, bVar4)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",99,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x6d,0);
    goto LAB_140c9094a;
  }
  if (param_5[(longlong)iVar15 + -1] != 0xbc) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",0x67,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x86,0);
    goto LAB_140c9094a;
  }
  uVar24 = iVar14 - 1;
  lVar28 = (longlong)(int)uVar24;
  local_c0 = param_5 + lVar28;
  pbVar17 = (byte *)FUN_140b8d8d0(lVar28,"crypto\\rsa\\rsa_pss.c",0x6c);
  if (pbVar17 == (byte *)0x0) goto LAB_140c9094a;
  local_d8 = local_b8;
  iVar15 = FUN_140c8f080(pbVar17,uVar24,local_c0,local_c8);
  if (iVar15 < 0) goto LAB_140c9094a;
  pbVar26 = pbVar22;
  if (((0 < (int)uVar24) && (pbVar26 = (byte *)0x0, 7 < uVar24)) &&
     ((param_5 + (iVar14 + -2) < pbVar17 || (pbVar17 + (iVar14 + -2) < param_5)))) {
    pbVar26 = pbVar22;
    if (0x3f < uVar24) {
      uVar18 = uVar24 & 0x8000003f;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xffffffc0) + 1;
      }
      lVar27 = (longlong)param_5 - (longlong)pbVar17;
      puVar19 = (uint *)(pbVar17 + 0x10);
      do {
        pbVar26 = (byte *)(ulonglong)((int)pbVar26 + 0x40);
        puVar2 = (uint *)((longlong)puVar19 + lVar27 + -0x10);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar1 = (uint *)((longlong)puVar19 + lVar27);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar1 = puVar19 + 0x10;
        puVar19[-4] = *puVar2 ^ puVar19[-4];
        puVar19[-3] = uVar5 ^ puVar19[-3];
        puVar19[-2] = uVar6 ^ puVar19[-2];
        puVar19[-1] = uVar7 ^ puVar19[-1];
        puVar2 = (uint *)((longlong)puVar19 + lVar27 + 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar12 = puVar2[3];
        *puVar19 = uVar8 ^ *puVar19;
        puVar19[1] = uVar9 ^ puVar19[1];
        puVar19[2] = uVar10 ^ puVar19[2];
        puVar19[3] = uVar11 ^ puVar19[3];
        puVar19[4] = uVar5 ^ puVar19[4];
        puVar19[5] = uVar6 ^ puVar19[5];
        puVar19[6] = uVar7 ^ puVar19[6];
        puVar19[7] = uVar12 ^ puVar19[7];
        auVar3 = *(undefined1 (*) [16])(puVar19 + 8);
        puVar2 = (uint *)((longlong)puVar19 + lVar27 + 0x20);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar19[8] = *puVar2 ^ auVar3._0_4_;
        puVar19[9] = uVar5 ^ auVar3._4_4_;
        puVar19[10] = uVar6 ^ auVar3._8_4_;
        puVar19[0xb] = uVar7 ^ auVar3._12_4_;
        puVar19 = puVar1;
      } while ((longlong)((longlong)puVar1 + (-0x10 - (longlong)pbVar17)) <
               (longlong)(int)(uVar24 - uVar18));
      if (((byte)uVar24 & 0x3f) < 8) goto LAB_140c90783;
    }
    uVar18 = uVar24 & 0x80000007;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
    }
    pbVar20 = pbVar17 + (int)pbVar26;
    do {
      pbVar26 = (byte *)(ulonglong)((int)pbVar26 + 8);
      *(ulonglong *)pbVar20 =
           CONCAT44((uint)((ulonglong)
                           *(undefined8 *)(pbVar20 + ((longlong)param_5 - (longlong)pbVar17)) >>
                          0x20) ^ (uint)((ulonglong)*(undefined8 *)pbVar20 >> 0x20),
                    (uint)*(undefined8 *)(pbVar20 + ((longlong)param_5 - (longlong)pbVar17)) ^
                    (uint)*(undefined8 *)pbVar20);
      pbVar20 = pbVar20 + 8;
    } while ((longlong)pbVar20 - (longlong)pbVar17 < (longlong)(int)(uVar24 - uVar18));
  }
LAB_140c90783:
  lVar27 = (longlong)(int)pbVar26;
  if (lVar27 < lVar28) {
    pbVar26 = pbVar17 + lVar27;
    lVar28 = lVar28 - lVar27;
    do {
      *pbVar26 = *pbVar26 ^ pbVar26[(longlong)param_5 - (longlong)pbVar17];
      pbVar26 = pbVar26 + 1;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  if (bVar29 != 0) {
    *pbVar17 = *pbVar17 & (byte)(0xff >> (8 - bVar29 & 0x1f));
  }
  if (*pbVar17 == 0) {
    pbVar26 = pbVar17;
    do {
      uVar21 = (uint)pbVar22;
      if (iVar14 + -2 <= (int)uVar21) break;
      pbVar26 = pbVar26 + 1;
      uVar21 = uVar21 + 1;
      pbVar22 = (byte *)(ulonglong)uVar21;
    } while (*pbVar26 == 0);
  }
  iVar15 = uVar21 + 1;
  if (pbVar17[(int)uVar21] == 1) {
    if (((iVar23 + 4U & 0xfffffffd) == 0) || (uVar24 - iVar15 == iVar23)) {
      iVar25 = uVar24 - iVar15;
      iVar14 = FUN_140b70ff0(lVar16,local_b0,0);
      if ((iVar14 != 0) && (iVar14 = evp_digestupdate(lVar16,&DAT_1412784a8,8), iVar14 != 0)) {
        _Size = (size_t)local_c8;
        iVar14 = evp_digestupdate(lVar16,local_a8,_Size);
        if ((iVar14 != 0) &&
           (((iVar25 == 0 ||
             (iVar15 = evp_digestupdate(lVar16,pbVar17 + iVar15,(longlong)iVar25), iVar15 != 0)) &&
            (iVar15 = assertion_failed_mdsize_evp_max_md_size(lVar16,local_98,0), iVar15 != 0)))) {
          iVar15 = memcmp(local_98,local_c0,_Size);
          if (iVar15 != 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_pss.c",0x8f,"ossl_rsa_verify_PKCS1_PSS_mgf1");
            FUN_140b91cc0(4,0x68,0);
          }
          *local_a0 = iVar25;
        }
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_pss.c",0x7d,"ossl_rsa_verify_PKCS1_PSS_mgf1");
      local_d8 = CONCAT44(local_d8._4_4_,uVar24 - iVar15);
      FUN_140b91cc0(4,0x88,"expected: %d retrieved: %d",iVar23);
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_pss.c",0x77,"ossl_rsa_verify_PKCS1_PSS_mgf1");
    FUN_140b91cc0(4,0x87,0);
  }
LAB_140c9094a:
  FUN_140b8d990(pbVar17,"crypto\\rsa\\rsa_pss.c",0x97);
  FUN_140b709d0(lVar16);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_f8);
}


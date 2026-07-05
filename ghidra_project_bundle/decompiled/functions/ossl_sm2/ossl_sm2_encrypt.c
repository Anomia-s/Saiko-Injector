/**
 * Function: ossl_sm2_encrypt
 * Address:  140dab490
 * Signature: undefined ossl_sm2_encrypt(void)
 * Body size: 2527 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
ossl_sm2_encrypt(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                void *param_5,size_t *param_6)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  byte *pbVar31;
  undefined1 *puVar32;
  undefined1 *puVar34;
  ulonglong uVar35;
  undefined1 *_Dst;
  longlong lVar36;
  undefined1 *puVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  longlong local_b8;
  longlong local_a8;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 *puVar33;
  
  local_40 = 0x140dab4b4;
  puVar33 = (undefined1 *)0x0;
  puVar32 = (undefined1 *)0x0;
  lVar36 = 0;
  lVar14 = FUN_140b70980();
  uVar15 = FUN_140b772a0(param_1);
  uVar16 = FUN_140b77290(uVar15);
  local_40 = FUN_140b97dc0(param_1);
  local_b8 = 0;
  puVar34 = (undefined1 *)0x0;
  local_a8 = 0;
  _Dst = (undefined1 *)0x0;
  iVar11 = FUN_140b97b40(param_2);
  local_68 = 0;
  uVar17 = FUN_140b9f2f0(param_1);
  uVar18 = FUN_140c0f090(param_1);
  local_48 = 0;
  local_50 = 0;
  puVar25 = puVar32;
  if ((lVar14 == 0) || (iVar11 < 1)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\sm2\\sm2_crypt.c",0x8d,"ossl_sm2_encrypt");
    FUN_140b91cc0(0x35,0xc0103,0);
    puVar37 = (undefined1 *)0x0;
  }
  else {
    lVar19 = FUN_140b73250(uVar15);
    if (lVar19 != 0) {
      iVar12 = FUN_140bfc870(lVar19);
      iVar12 = (int)(iVar12 + 7 + (iVar12 + 7 >> 0x1f & 7U)) >> 3;
      lVar19 = (longlong)iVar12;
      if (iVar12 != 0) {
        local_b8 = FUN_140c0cd80(uVar15);
        local_a8 = FUN_140c0cd80(uVar15);
        if ((local_b8 == 0) || (local_a8 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\sm2\\sm2_crypt.c",0x9a,"ossl_sm2_encrypt");
          FUN_140b91cc0(0x35,0x80010,0);
          puVar37 = (undefined1 *)0x0;
        }
        else {
          lVar36 = FUN_140c936d0(uVar17);
          if (lVar36 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\sm2\\sm2_crypt.c",0x9f,"ossl_sm2_encrypt");
            FUN_140b91cc0(0x35,0x80003,0);
            puVar25 = puVar33;
            puVar34 = puVar33;
            _Dst = puVar33;
            puVar37 = puVar33;
          }
          else {
            bn_ctx_start(lVar36);
            uVar20 = FUN_140c93a20(lVar36);
            uVar21 = FUN_140c93a20(lVar36);
            uVar22 = FUN_140c93a20(lVar36);
            uVar23 = FUN_140c93a20(lVar36);
            lVar24 = FUN_140c93a20(lVar36);
            if (lVar24 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\sm2\\sm2_crypt.c",0xab,"ossl_sm2_encrypt");
              FUN_140b91cc0(0x35,0x80003,0);
              puVar37 = (undefined1 *)0x0;
              puVar25 = puVar33;
            }
            else {
              _Dst = (undefined1 *)FUN_140b8da80(lVar19 * 2,"crypto\\sm2\\sm2_crypt.c",0xaf);
              puVar37 = (undefined1 *)
                        FUN_140b8da80((longlong)iVar11,"crypto\\sm2\\sm2_crypt.c",0xb0);
              if ((_Dst != (undefined1 *)0x0) && (puVar37 != (undefined1 *)0x0)) {
                memset(param_5,0,*param_6);
                puVar34 = (undefined1 *)FUN_140b8da80(param_4,"crypto\\sm2\\sm2_crypt.c",0xb7);
                puVar25 = puVar33;
                if (puVar34 != (undefined1 *)0x0) {
                  iVar13 = FUN_140ca3c70(uVar20,uVar16,0,lVar36);
                  if (iVar13 != 0) {
LAB_140dab740:
                    iVar13 = FUN_140c0d950(uVar15,local_b8,uVar20,0,0,lVar36);
                    if ((((iVar13 == 0) ||
                         (iVar13 = ec_point_is_at_infinity(uVar15,local_b8,uVar21,uVar23,lVar36),
                         iVar13 == 0)) ||
                        (iVar13 = FUN_140c0d950(uVar15,local_a8,0,local_40,uVar20,lVar36),
                        iVar13 == 0)) ||
                       (iVar13 = ec_point_is_at_infinity(uVar15,local_a8,uVar22,lVar24,lVar36),
                       iVar13 == 0)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\sm2\\sm2_crypt.c",0xc5,"ossl_sm2_encrypt");
                      uVar15 = 0x80010;
                      goto LAB_140dab941;
                    }
                    iVar13 = FUN_140bfcca0(uVar22,_Dst,iVar12);
                    if ((iVar13 < 0) ||
                       (iVar13 = FUN_140bfcca0(lVar24,_Dst + lVar19,iVar12), iVar13 < 0)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      uVar15 = 0xcb;
                      goto LAB_140dab930;
                    }
                    iVar13 = FUN_140c7f340(puVar34,param_4,_Dst,lVar19 * 2,0,0,param_2,uVar17,uVar18
                                          );
                    if (iVar13 == 0) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\sm2\\sm2_crypt.c",0xd2,"ossl_sm2_encrypt");
                      uVar15 = 0x80006;
                      goto LAB_140dab941;
                    }
                    bVar28 = 0;
                    if (param_4 == (undefined1 *)0x0) goto LAB_140dab8f3;
                    puVar25 = puVar33;
                    if (param_4 < &DAT_00000020) goto LAB_140dab8e0;
                    auVar39 = ZEXT816(0);
                    auVar38 = ZEXT816(0);
                    do {
                      auVar39 = auVar39 | *(undefined1 (*) [16])(puVar34 + (longlong)puVar25);
                      pauVar2 = (undefined1 (*) [16])(puVar34 + 0x10 + (longlong)puVar25);
                      puVar25 = puVar25 + 0x20;
                      auVar38 = auVar38 | *pauVar2;
                    } while (puVar25 < (undefined1 *)((ulonglong)param_4 & 0xffffffffffffffe0));
                    auVar38 = auVar38 | auVar39 | (auVar38 | auVar39) >> 0x40;
                    auVar38 = auVar38 | auVar38 >> 0x20;
                    auVar38 = auVar38 | auVar38 >> 0x10;
                    auVar38 = auVar38 | auVar38 >> 8;
                    uVar30 = auVar38._0_4_;
                    bVar29 = auVar38[0];
                    for (; bVar28 = (byte)uVar30, puVar25 < param_4; puVar25 = puVar25 + 1) {
LAB_140dab8e0:
                      bVar29 = bVar28 | puVar34[(longlong)puVar25];
                      uVar30 = (uint)bVar29;
                    }
                    if (bVar29 == 0) goto LAB_140dab8f3;
                    puVar25 = puVar33;
                    if ((param_4 < &DAT_00000008) ||
                       ((puVar34 <= param_3 + -1 + (longlong)param_4 &&
                        (param_3 <= param_4 + -1 + (longlong)puVar34)))) goto LAB_140dabae4;
                    if (param_4 < (undefined1 *)0x40) goto LAB_140dabaae;
                    uVar35 = (ulonglong)((uint)param_4 & 0x3f);
                    lVar24 = (longlong)param_3 - (longlong)puVar34;
                    puVar26 = (uint *)(puVar34 + 0x10);
                    do {
                      puVar25 = puVar25 + 0x40;
                      puVar3 = (uint *)(lVar24 + -0x10 + (longlong)puVar26);
                      uVar30 = puVar3[1];
                      uVar4 = puVar3[2];
                      uVar5 = puVar3[3];
                      puVar1 = (uint *)(lVar24 + (longlong)puVar26);
                      uVar6 = *puVar1;
                      uVar7 = puVar1[1];
                      uVar8 = puVar1[2];
                      uVar9 = puVar1[3];
                      puVar1 = puVar26 + 0x10;
                      puVar26[-4] = *puVar3 ^ puVar26[-4];
                      puVar26[-3] = uVar30 ^ puVar26[-3];
                      puVar26[-2] = uVar4 ^ puVar26[-2];
                      puVar26[-1] = uVar5 ^ puVar26[-1];
                      puVar3 = (uint *)(lVar24 + -0x30 + (longlong)puVar1);
                      uVar30 = *puVar3;
                      uVar4 = puVar3[1];
                      uVar5 = puVar3[2];
                      uVar10 = puVar3[3];
                      *puVar26 = uVar6 ^ *puVar26;
                      puVar26[1] = uVar7 ^ puVar26[1];
                      puVar26[2] = uVar8 ^ puVar26[2];
                      puVar26[3] = uVar9 ^ puVar26[3];
                      puVar26[4] = uVar30 ^ puVar26[4];
                      puVar26[5] = uVar4 ^ puVar26[5];
                      puVar26[6] = uVar5 ^ puVar26[6];
                      puVar26[7] = uVar10 ^ puVar26[7];
                      auVar38 = *(undefined1 (*) [16])(puVar26 + 8);
                      puVar3 = (uint *)(lVar24 + -0x20 + (longlong)puVar1);
                      uVar30 = puVar3[1];
                      uVar4 = puVar3[2];
                      uVar5 = puVar3[3];
                      puVar26[8] = *puVar3 ^ auVar38._0_4_;
                      puVar26[9] = uVar30 ^ auVar38._4_4_;
                      puVar26[10] = uVar4 ^ auVar38._8_4_;
                      puVar26[0xb] = uVar5 ^ auVar38._12_4_;
                      puVar26 = puVar1;
                    } while (puVar25 != param_4 + -uVar35);
                    if (7 < uVar35) {
LAB_140dabaae:
                      puVar27 = (undefined8 *)(puVar25 + (longlong)puVar34);
                      do {
                        puVar25 = puVar25 + 8;
                        uVar15 = *(undefined8 *)
                                  ((longlong)puVar27 + ((longlong)param_3 - (longlong)puVar34));
                        *puVar27 = CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^
                                            (uint)((ulonglong)*puVar27 >> 0x20),
                                            (uint)uVar15 ^ (uint)*puVar27);
                        puVar27 = puVar27 + 1;
                      } while (puVar25 != (undefined1 *)((ulonglong)param_4 & 0xfffffffffffffff8));
                    }
                    if (puVar25 != param_4) {
LAB_140dabae4:
                      pbVar31 = puVar25 + (longlong)puVar34;
                      lVar24 = (longlong)param_4 - (longlong)puVar25;
                      do {
                        *pbVar31 = *pbVar31 ^ pbVar31[(longlong)param_3 - (longlong)puVar34];
                        pbVar31 = pbVar31 + 1;
                        lVar24 = lVar24 + -1;
                      } while (lVar24 != 0);
                    }
                    uVar15 = FUN_140b97a80(param_2);
                    local_68 = FUN_140b71980(uVar17,uVar15,uVar18);
                    if (local_68 != 0) {
                      iVar12 = FUN_140b715b0(lVar14,local_68);
                      if ((((iVar12 == 0) ||
                           (iVar12 = evp_digestupdate(lVar14,_Dst,lVar19), iVar12 == 0)) ||
                          (iVar12 = evp_digestupdate(lVar14,param_3,param_4), iVar12 == 0)) ||
                         ((iVar12 = evp_digestupdate(lVar14,_Dst + lVar19,lVar19), iVar12 == 0 ||
                          (iVar12 = FUN_140b715f0(lVar14,puVar37,0), iVar12 == 0)))) {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("crypto\\sm2\\sm2_crypt.c",0xe8,"ossl_sm2_encrypt");
                        FUN_140b91cc0(0x35,0x80006,0);
                        puVar25 = puVar32;
                      }
                      else {
                        local_60 = uVar21;
                        local_58 = uVar23;
                        local_50 = FUN_140b90f50();
                        local_48 = FUN_140b90f50();
                        if ((local_50 == 0) || (local_48 == 0)) {
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("crypto\\sm2\\sm2_crypt.c",0xf2,"ossl_sm2_encrypt");
                          FUN_140b91cc0(0x35,0x8000d,0);
                          puVar25 = puVar32;
                        }
                        else {
                          iVar11 = FUN_140bec4a0(local_50,puVar37,iVar11);
                          if ((iVar11 == 0) ||
                             (iVar11 = FUN_140bec4a0(local_48,puVar34,
                                                     (ulonglong)param_4 & 0xffffffff), iVar11 == 0))
                          {
                            d_aplatformplatformopenssl_srccryptoerrerr_lo();
                            d_aplatformplatformopenssl_srccryptoerrerr_lo
                                      ("crypto\\sm2\\sm2_crypt.c",0xf7,"ossl_sm2_encrypt");
                            FUN_140b91cc0(0x35,0xc0103,0);
                            puVar25 = puVar32;
                          }
                          else {
                            iVar11 = FUN_140be3340(&local_60,&param_5,&DAT_14131bc60);
                            if (iVar11 < 0) {
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              d_aplatformplatformopenssl_srccryptoerrerr_lo
                                        ("crypto\\sm2\\sm2_crypt.c",0xfe,"ossl_sm2_encrypt");
                              FUN_140b91cc0(0x35,0xc0103,0);
                              puVar25 = puVar32;
                            }
                            else {
                              *param_6 = (longlong)iVar11;
                              puVar25 = (undefined1 *)0x1;
                            }
                          }
                        }
                      }
                      goto LAB_140dab953;
                    }
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    uVar15 = 0xe0;
                    goto LAB_140dab930;
                  }
LAB_140dab91f:
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar15 = 0xbd;
LAB_140dab930:
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\sm2\\sm2_crypt.c",uVar15,"ossl_sm2_encrypt");
                  uVar15 = 0xc0103;
LAB_140dab941:
                  FUN_140b91cc0(0x35,uVar15,0);
                  puVar25 = puVar33;
                }
              }
            }
          }
        }
        goto LAB_140dab953;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\sm2\\sm2_crypt.c",0x93,"ossl_sm2_encrypt");
    FUN_140b91cc0(0x35,0xc0103,0);
    puVar37 = (undefined1 *)0x0;
  }
LAB_140dab953:
  FUN_140b719e0(local_68);
  FUN_140b90e80(local_48);
  FUN_140b90e80(local_50);
  FUN_140b8d990(puVar34,"crypto\\sm2\\sm2_crypt.c",0x109);
  FUN_140b8d990(_Dst,"crypto\\sm2\\sm2_crypt.c",0x10a);
  FUN_140b8d990(puVar37,"crypto\\sm2\\sm2_crypt.c",0x10b);
  FUN_140b709d0(lVar14);
  FUN_140c93850(lVar36);
  FUN_140c0ce80(local_b8);
  FUN_140c0ce80(local_a8);
  return puVar25;
LAB_140dab8f3:
  memset(_Dst,0,lVar19 * 2);
  iVar13 = FUN_140ca3c70(uVar20,uVar16,0);
  if (iVar13 == 0) goto LAB_140dab91f;
  goto LAB_140dab740;
}


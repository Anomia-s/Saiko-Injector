/**
 * Function: ossl_sm2_decrypt
 * Address:  140dabe70
 * Signature: undefined ossl_sm2_decrypt(void)
 * Body size: 2158 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
ossl_sm2_decrypt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                void *param_5,size_t *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  longlong lVar33;
  undefined8 uVar34;
  uint uVar35;
  uint *puVar36;
  undefined8 *puVar37;
  byte *pbVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 local_res18 [2];
  longlong local_80;
  longlong local_70;
  
  puVar41 = (undefined8 *)0x0;
  local_80 = 0;
  local_res18[0] = param_3;
  uVar27 = FUN_140b772a0();
  local_70 = 0;
  lVar28 = FUN_140b73250(uVar27);
  puVar31 = puVar41;
  if (lVar28 == 0) {
    FUN_140b97b40(param_2);
    FUN_140b9f2f0(param_1);
    FUN_140c0f090(param_1);
    puVar39 = puVar41;
    puVar40 = puVar41;
    puVar43 = puVar41;
    puVar44 = puVar41;
  }
  else {
    iVar24 = FUN_140bfc870(lVar28);
    iVar24 = (int)(iVar24 + 7 + (iVar24 + 7 >> 0x1f & 7U)) >> 3;
    lVar28 = (longlong)iVar24;
    iVar25 = FUN_140b97b40(param_2);
    puVar39 = (undefined8 *)0x0;
    puVar40 = (undefined8 *)0x0;
    uVar29 = FUN_140b9f2f0(param_1);
    uVar30 = FUN_140c0f090(param_1);
    if ((lVar28 != 0) && (puVar31 = (undefined8 *)0x0, 0 < iVar25)) {
      memset(param_5,0xff,*param_6);
      puVar31 = (undefined8 *)FUN_140be0d50(0,local_res18,param_4,&DAT_14131bc60);
      if (puVar31 == (undefined8 *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\sm2\\sm2_crypt.c",0x134,"ossl_sm2_decrypt");
        uVar27 = 100;
      }
      else if (*(int *)puVar31[2] == iVar25) {
        uVar6 = *(undefined8 *)((int *)puVar31[2] + 2);
        uVar5 = *(uint *)puVar31[3];
        uVar42 = (ulonglong)(int)uVar5;
        puVar7 = *(undefined8 **)((uint *)puVar31[3] + 2);
        if (*param_6 < uVar42) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\sm2\\sm2_crypt.c",0x141,"ossl_sm2_decrypt");
          uVar27 = 0x6b;
        }
        else {
          local_80 = FUN_140c936d0(uVar29);
          if (local_80 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar27 = 0x147;
          }
          else {
            bn_ctx_start(local_80);
            uVar32 = FUN_140c93a20(local_80);
            lVar33 = FUN_140c93a20(local_80);
            if (lVar33 != 0) {
              puVar39 = (undefined8 *)FUN_140b8da80(uVar42,"crypto\\sm2\\sm2_crypt.c",0x154);
              puVar43 = (undefined8 *)FUN_140b8da80(lVar28 * 2,"crypto\\sm2\\sm2_crypt.c",0x155);
              puVar44 = (undefined8 *)
                        FUN_140b8da80((longlong)iVar25,"crypto\\sm2\\sm2_crypt.c",0x156);
              if (((puVar39 == (undefined8 *)0x0) || (puVar43 == (undefined8 *)0x0)) ||
                 (puVar44 == (undefined8 *)0x0)) goto LAB_140dac085;
              local_70 = FUN_140c0cd80(uVar27);
              if (local_70 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar27 = 0x15d;
LAB_140dac1fd:
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\sm2\\sm2_crypt.c",uVar27,"ossl_sm2_decrypt");
                uVar27 = 0x80010;
                puVar40 = puVar41;
              }
              else {
                iVar26 = FUN_140c0d1a0(uVar27,local_70,*puVar31,puVar31[1],local_80);
                if (iVar26 == 0) {
LAB_140dac6bd:
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar27 = 0x166;
                  goto LAB_140dac1fd;
                }
                uVar34 = FUN_140b6a6a0(param_1);
                iVar26 = FUN_140c0d950(uVar27,local_70,0,local_70,uVar34,local_80);
                if ((iVar26 == 0) ||
                   (iVar26 = ec_point_is_at_infinity(uVar27,local_70,uVar32,lVar33,local_80),
                   iVar26 == 0)) goto LAB_140dac6bd;
                iVar26 = FUN_140bfcca0(uVar32,puVar43,iVar24);
                if (iVar26 < 0) {
LAB_140dac696:
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\sm2\\sm2_crypt.c",0x16e,"ossl_sm2_decrypt");
                  uVar27 = 0xc0103;
                }
                else {
                  iVar24 = FUN_140bfcca0(lVar33,(longlong)puVar43 + lVar28,iVar24);
                  if ((iVar24 < 0) ||
                     (iVar24 = FUN_140c7f340(puVar39,uVar42,puVar43,lVar28 * 2,0,0,param_2,uVar29,
                                             uVar30), iVar24 == 0)) goto LAB_140dac696;
                  iVar24 = FUN_140dac6e0(puVar39,uVar42);
                  if (iVar24 == 0) {
                    puVar40 = puVar41;
                    if ((uVar5 != 0) && (7 < uVar5)) {
                      lVar33 = (longlong)(int)(uVar5 - 1);
                      puVar40 = (undefined8 *)0x0;
                      if ((((void *)(lVar33 + (longlong)puVar39) < param_5) ||
                          ((undefined8 *)(lVar33 + (longlong)param_5) < puVar39)) &&
                         (((void *)(lVar33 + (longlong)puVar7) < param_5 ||
                          ((undefined8 *)(lVar33 + (longlong)param_5) < puVar7)))) {
                        puVar40 = puVar41;
                        if (0x3f < uVar5) {
                          uVar35 = uVar5 & 0x8000003f;
                          if ((int)uVar35 < 0) {
                            uVar35 = (uVar35 - 1 | 0xffffffc0) + 1;
                          }
                          lVar33 = (longlong)puVar7 - (longlong)puVar39;
                          puVar36 = (uint *)(puVar39 + 2);
                          do {
                            uVar8 = puVar36[-3];
                            uVar9 = puVar36[-2];
                            uVar10 = puVar36[-1];
                            puVar40 = (undefined8 *)(ulonglong)((int)puVar40 + 0x40);
                            puVar2 = (uint *)(lVar33 + -0x10 + (longlong)puVar36);
                            uVar11 = puVar2[1];
                            uVar12 = puVar2[2];
                            uVar13 = puVar2[3];
                            puVar1 = (uint *)(lVar33 + (longlong)puVar36);
                            uVar14 = *puVar1;
                            uVar15 = puVar1[1];
                            uVar16 = puVar1[2];
                            uVar17 = puVar1[3];
                            puVar1 = puVar36 + 0x10;
                            uVar18 = *puVar36;
                            uVar19 = puVar36[1];
                            uVar20 = puVar36[2];
                            uVar21 = puVar36[3];
                            puVar3 = (uint *)((longlong)param_5 + (-0x50 - (longlong)puVar39) +
                                             (longlong)puVar1);
                            *puVar3 = *puVar2 ^ puVar36[-4];
                            puVar3[1] = uVar11 ^ uVar8;
                            puVar3[2] = uVar12 ^ uVar9;
                            puVar3[3] = uVar13 ^ uVar10;
                            uVar8 = puVar36[4];
                            uVar9 = puVar36[5];
                            uVar10 = puVar36[6];
                            uVar11 = puVar36[7];
                            puVar2 = (uint *)(lVar33 + -0x30 + (longlong)puVar1);
                            uVar12 = *puVar2;
                            uVar13 = puVar2[1];
                            uVar22 = puVar2[2];
                            uVar23 = puVar2[3];
                            puVar2 = (uint *)((longlong)param_5 + (-0x40 - (longlong)puVar39) +
                                             (longlong)puVar1);
                            *puVar2 = uVar14 ^ uVar18;
                            puVar2[1] = uVar15 ^ uVar19;
                            puVar2[2] = uVar16 ^ uVar20;
                            puVar2[3] = uVar17 ^ uVar21;
                            auVar4 = *(undefined1 (*) [16])(puVar36 + 8);
                            puVar36 = (uint *)(lVar33 + -0x20 + (longlong)puVar1);
                            uVar14 = *puVar36;
                            uVar15 = puVar36[1];
                            uVar16 = puVar36[2];
                            uVar17 = puVar36[3];
                            puVar36 = (uint *)((longlong)param_5 + (-0x30 - (longlong)puVar39) +
                                              (longlong)puVar1);
                            *puVar36 = uVar12 ^ uVar8;
                            puVar36[1] = uVar13 ^ uVar9;
                            puVar36[2] = uVar22 ^ uVar10;
                            puVar36[3] = uVar23 ^ uVar11;
                            puVar36 = (uint *)((longlong)param_5 + (-0x20 - (longlong)puVar39) +
                                              (longlong)puVar1);
                            *puVar36 = uVar14 ^ auVar4._0_4_;
                            puVar36[1] = uVar15 ^ auVar4._4_4_;
                            puVar36[2] = uVar16 ^ auVar4._8_4_;
                            puVar36[3] = uVar17 ^ auVar4._12_4_;
                            puVar36 = puVar1;
                          } while ((-0x10 - (longlong)puVar39) + (longlong)puVar1 !=
                                   (longlong)(int)(uVar5 - uVar35));
                          if (((byte)uVar5 & 0x3f) < 8) goto LAB_140dac4fd;
                        }
                        uVar35 = uVar5 & 0x80000007;
                        if ((int)uVar35 < 0) {
                          uVar35 = (uVar35 - 1 | 0xfffffff8) + 1;
                        }
                        puVar37 = (undefined8 *)((longlong)(int)puVar40 + (longlong)puVar39);
                        do {
                          uVar27 = *(undefined8 *)
                                    (((longlong)puVar7 - (longlong)puVar39) + (longlong)puVar37);
                          puVar40 = (undefined8 *)(ulonglong)((int)puVar40 + 8);
                          *(ulonglong *)
                           (((longlong)param_5 - (longlong)puVar39) + (longlong)puVar37) =
                               CONCAT44((uint)((ulonglong)uVar27 >> 0x20) ^
                                        (uint)((ulonglong)*puVar37 >> 0x20),
                                        (uint)uVar27 ^ (uint)*puVar37);
                          puVar37 = puVar37 + 1;
                        } while ((longlong)puVar37 - (longlong)puVar39 !=
                                 (longlong)(int)(uVar5 - uVar35));
                      }
                    }
LAB_140dac4fd:
                    if ((longlong)(int)puVar40 != uVar42) {
                      pbVar38 = (byte *)((longlong)(int)puVar40 + (longlong)puVar39);
                      do {
                        pbVar38[(longlong)param_5 - (longlong)puVar39] =
                             pbVar38[(longlong)puVar7 - (longlong)puVar39] ^ *pbVar38;
                        pbVar38 = pbVar38 + 1;
                      } while ((longlong)pbVar38 - (longlong)puVar39 != uVar42);
                    }
                    puVar40 = (undefined8 *)FUN_140b70980();
                    if (puVar40 != (undefined8 *)0x0) {
                      iVar24 = FUN_140b715b0(puVar40,param_2);
                      if ((((iVar24 == 0) ||
                           (iVar24 = evp_digestupdate(puVar40,puVar43,lVar28), iVar24 == 0)) ||
                          (iVar24 = evp_digestupdate(puVar40,param_5,uVar42), iVar24 == 0)) ||
                         ((iVar24 = evp_digestupdate(puVar40,(longlong)puVar43 + lVar28,lVar28),
                          iVar24 == 0 || (iVar24 = FUN_140b715f0(puVar40,puVar44,0), iVar24 == 0))))
                      {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("crypto\\sm2\\sm2_crypt.c",0x185,"ossl_sm2_decrypt");
                        FUN_140b91cc0(0x35,0x80006,0);
                      }
                      else {
                        iVar24 = FUN_14046e9f0(puVar44,uVar6,(longlong)iVar25);
                        if (iVar24 == 0) {
                          puVar41 = (undefined8 *)0x1;
                          *param_6 = uVar42;
                          goto LAB_140dac09f;
                        }
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("crypto\\sm2\\sm2_crypt.c",0x18a,"ossl_sm2_decrypt");
                        FUN_140b91cc0(0x35,0x66,0);
                      }
                      goto LAB_140dac085;
                    }
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\sm2\\sm2_crypt.c",0x17c,"ossl_sm2_decrypt");
                    uVar27 = 0x80006;
                  }
                  else {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\sm2\\sm2_crypt.c",0x173,"ossl_sm2_decrypt");
                    uVar27 = 0x68;
                    puVar40 = puVar41;
                  }
                }
              }
              FUN_140b91cc0(0x35,uVar27,0);
              goto LAB_140dac085;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar27 = 0x150;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\sm2\\sm2_crypt.c",uVar27,"ossl_sm2_decrypt");
          uVar27 = 0x80003;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\sm2\\sm2_crypt.c",0x139,"ossl_sm2_decrypt");
        uVar27 = 0x68;
      }
      FUN_140b91cc0(0x35,uVar27,0);
    }
    puVar43 = (undefined8 *)0x0;
    puVar44 = (undefined8 *)0x0;
  }
LAB_140dac085:
  memset(param_5,0,*param_6);
LAB_140dac09f:
  FUN_140b8d990(puVar39,"crypto\\sm2\\sm2_crypt.c",0x195);
  FUN_140b8d990(puVar43,"crypto\\sm2\\sm2_crypt.c",0x196);
  FUN_140b8d990(puVar44,"crypto\\sm2\\sm2_crypt.c",0x197);
  FUN_140c0ce80(local_70);
  FUN_140c93850(local_80);
  FUN_140be0760(puVar31,&DAT_14131bc60);
  FUN_140b709d0(puVar40);
  return puVar41;
}


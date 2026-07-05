/**
 * Function: comments_start
 * Address:  1408d67d0
 * Signature: undefined comments_start(void)
 * Body size: 14983 bytes
 */


void comments_start(undefined8 *param_1,longlong param_2,int param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  longlong lVar12;
  size_t sVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined7 uVar18;
  uint7 uVar21;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined1 local_280;
  uint local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 *local_228 [2];
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_1f0;
  longlong local_1e8;
  undefined8 local_1d8;
  undefined2 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  longlong lStack_1c0;
  int iStack_1b8;
  longlong local_1b0;
  char local_1a8 [112];
  byte local_138 [4];
  char cStack_134;
  char cStack_133;
  char cStack_132;
  char cStack_131;
  char cStack_130;
  char cStack_12f;
  char cStack_12e;
  char cStack_12d;
  char cStack_12c;
  char cStack_12b;
  char cStack_12a;
  char cStack_129;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_2a8;
  local_230 = *param_4;
  local_238 = param_4[1];
  local_248 = param_4[2];
  local_240 = param_4[3];
  local_250 = param_4[4];
  local_258 = param_4[5];
  local_260 = param_4[6];
  local_268 = param_4[7];
  lVar8 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,param_1);
  puVar9 = param_1;
  iVar7 = 2;
  if (((param_3 != 2) && (iVar7 = param_3, 0 < lVar8)) &&
     ((cVar2 = FUN_1408da3e0(lVar8,param_5), cVar2 != '\0' ||
      ((lVar8 != 1 && (cVar2 = FUN_1408da3e0(lVar8 + -1,param_5), cVar2 != '\0')))))) {
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)*param_5 + 0x30))((longlong *)*param_5,lVar8 + -1);
    iVar7 = 0;
    if (lVar8 != 1) {
      lVar8 = lVar8 + -2;
      do {
        lVar16 = lVar8 + 1;
        cVar2 = FUN_1408da3e0(lVar16,param_5);
        if ((cVar2 == '\0') &&
           ((lVar8 == 0 || (cVar2 = FUN_1408da3e0(lVar8,param_5), cVar2 == '\0')))) break;
        puVar9 = (undefined8 *)
                 (**(code **)(*(longlong *)*param_5 + 0x30))((longlong *)*param_5,lVar8);
        lVar8 = lVar8 + -1;
      } while (1 < lVar16);
    }
  }
  (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,puVar9,0xff);
  param_5[0x3f0] = puVar9;
  local_288 = param_5;
  local_280 = 0xff;
  FUN_1408c6740(local_228,puVar9,(longlong)param_1 + (param_2 - (longlong)puVar9),iVar7);
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_68 = 0;
  if (local_1f0 < local_218) {
    local_270 = 0;
    local_26c = 0;
    uVar15 = 0;
LAB_1408d6a10:
    FUN_140a8b700(local_228,local_138,100);
    uVar11 = local_1c8;
    uVar6 = local_1c8._4_4_;
    if ((int)local_1c8._4_4_ < 0x80) {
      iVar7 = isalnum(local_1c8._4_4_);
      bVar3 = uVar6 == 0x5f || iVar7 != 0;
      if (uVar6 != 0x7d) goto LAB_1408d6a5d;
LAB_1408d6a61:
      strcpy(local_c8,(char *)local_138);
      param_1 = (undefined8 *)strlen(local_c8);
      iVar7 = (int)param_1;
      if (iVar7 < 99) {
        iVar5 = tolower(uVar6);
        local_c8[iVar7] = (char)iVar5;
        local_c8[iVar7 + 1] = 0;
      }
    }
    else {
      bVar3 = false;
      if (local_1c8._4_4_ == 0x7d) goto LAB_1408d6a61;
LAB_1408d6a5d:
      if (bVar3) goto LAB_1408d6a61;
    }
    puVar9 = local_228[0];
    cVar2 = (char)uVar15;
    uVar18 = (undefined7)((ulonglong)param_1 >> 8);
    switch(local_1cc) {
    case 1:
      if (local_1d0._1_1_ != '\x01') goto LAB_1408d9120;
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = local_228[0][0x3ef];
      if (uVar20 == uVar19 - 1) {
LAB_1408d7287:
        local_228[0][0x3ef] = uVar20 + 1;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
      if (uVar19 <= uVar20) {
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (3999 < lVar16 + (uVar20 - uVar19) + 1) {
          (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,1);
          puVar9[0x3ef] = lVar8;
          local_1cc = 0;
          goto LAB_1408d848f;
        }
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar16 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar16 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 1;
        }
LAB_1408d8232:
        puVar9[0x3ef] = lVar8;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
      goto LAB_1408d7d2c;
    case 2:
      if (local_1d0._1_1_ == '\x01') {
        if ((CONCAT13(local_138[3],CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0]))) ==
             0x656323) ||
           (CONCAT17(cStack_12b,
                     CONCAT16(cStack_12c,
                              CONCAT15(cStack_12d,
                                       CONCAT14(cStack_12e,
                                                CONCAT13(cStack_12f,
                                                         CONCAT12(cStack_130,
                                                                  CONCAT11(cStack_131,cStack_132))))
                                      ))) == 0x646e652d73746e &&
            CONCAT17(cStack_131,
                     CONCAT16(cStack_132,
                              CONCAT15(cStack_133,
                                       CONCAT14(cStack_134,
                                                CONCAT13(local_138[3],
                                                         CONCAT12(local_138[2],
                                                                  CONCAT11(local_138[1],local_138[0]
                                                                          ))))))) ==
            0x746e656d6d6f6323)) {
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 != uVar19 - 1) {
            if (uVar20 < uVar19) {
              local_270 = 0;
              local_1cc = 0;
              goto LAB_1408d848f;
            }
            lVar8 = local_228[0][0x3ee];
            if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
              (**(code **)(*(longlong *)*local_228[0] + 0x68))
                        ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
              uVar19 = puVar9[0x3ef];
              puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
              puVar9[0x3ee] = 0;
              lVar8 = 0;
            }
            if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar8 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar8 + 1;
                *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 2;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar9 + 0x60))
                        ((longlong *)*puVar9,(uVar20 - uVar19) + 1,2);
            }
          }
          puVar9[0x3ef] = uVar20 + 1;
          local_270 = 0;
          local_1cc = 0;
          goto LAB_1408d848f;
        }
LAB_1408d6d53:
        local_270 = 0;
        break;
      }
      if ((int)local_1c8 == 0x3b) {
        uVar17 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar20 = local_228[0][0x3ef];
        uVar19 = uVar20 - 1;
        if (uVar17 == uVar19) {
LAB_1408d7220:
          puVar9[0x3ef] = uVar17 + 1;
        }
        else if (uVar20 <= uVar17) {
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar17 + 1) - uVar20) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar20 = puVar9[0x3ef];
            puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
            puVar9[0x3ee] = 0;
            lVar8 = 0;
          }
          uVar19 = uVar17 - uVar20;
          if (lVar8 + uVar19 + 1 < 4000) {
            for (; uVar20 <= uVar17; uVar20 = uVar20 + 1) {
              uVar19 = puVar9[0x3ee];
              puVar9[0x3ee] = uVar19 + 1;
              *(undefined1 *)((longlong)puVar9 + uVar19 + 0xfd0) = 2;
            }
          }
          else {
            uVar19 = (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,uVar19 + 1,2);
          }
          goto LAB_1408d7220;
        }
        local_1cc = 2;
        local_270 = (uint)CONCAT71((int7)(uVar19 >> 8),2);
        param_1 = puVar9;
        goto LAB_1408d9120;
      }
      if ((char)local_270 == '\x02') break;
      if ((local_270 & 0xff) == 0) {
        cVar2 = (char)((ulonglong)uVar11 >> 0x20);
        iVar7 = isalnum((int)cVar2);
        if ((iVar7 == 0) &&
           ((uVar22 = (int)cVar2 - 0x23, param_1 = (undefined8 *)(ulonglong)uVar22, 0x3c < uVar22 ||
            ((0x1000000020000803U >> ((ulonglong)param_1 & 0x3f) & 1) == 0)))) {
          if ((-1 < cVar2) && (iVar7 = isalnum(uVar6 & 0x7f), iVar7 != 0)) goto LAB_1408d6d53;
          local_270 = 0;
          uVar6 = (uVar6 & 0xff) - 0x26;
          if ((0x38 < uVar6) || ((0x1a0000001c002fdU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)) break;
        }
        param_1 = local_228[0];
        uVar17 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar20 = local_228[0][0x3ef];
        uVar19 = uVar20 - 1;
        if (uVar17 == uVar19) {
LAB_1408d7602:
          param_1[0x3ef] = uVar17 + 1;
        }
        else if (uVar20 <= uVar17) {
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar17 + 1) - uVar20) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar20 = param_1[0x3ef];
            param_1[0x3f0] = param_1[0x3f0] + param_1[0x3ee];
            param_1[0x3ee] = 0;
            lVar8 = 0;
          }
          uVar19 = uVar17 - uVar20;
          if (lVar8 + uVar19 + 1 < 4000) {
            for (; uVar20 <= uVar17; uVar20 = uVar20 + 1) {
              uVar19 = param_1[0x3ee];
              param_1[0x3ee] = uVar19 + 1;
              *(undefined1 *)((longlong)param_1 + uVar19 + 0xfd0) = 2;
            }
          }
          else {
            uVar19 = (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,uVar19 + 1,2);
          }
          goto LAB_1408d7602;
        }
        local_1cc = 2;
        local_270 = (uint)CONCAT71((int7)(uVar19 >> 8),1);
        goto LAB_1408d9120;
      }
      if (((int)uVar6 < 0x80) &&
         (((iVar7 = isalnum(uVar6), uVar6 == 0x5f || (iVar7 != 0)) ||
          ((uVar6 == 0x2d &&
           (CONCAT11(cStack_12f,cStack_130) == 0x73 &&
            CONCAT17(cStack_131,
                     CONCAT16(cStack_132,
                              CONCAT15(cStack_133,
                                       CONCAT14(cStack_134,
                                                CONCAT13(local_138[3],
                                                         CONCAT12(local_138[2],
                                                                  CONCAT11(local_138[1],local_138[0]
                                                                          ))))))) ==
            0x746e656d6d6f6323)))))) break;
      puVar9 = local_228[0];
      if ((CONCAT13(local_138[3],CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0]))) !=
           0x656323) &&
         (uVar19 = CONCAT17(cStack_131,
                            CONCAT16(cStack_132,
                                     CONCAT15(cStack_133,
                                              CONCAT14(cStack_134,
                                                       CONCAT13(local_138[3],
                                                                CONCAT12(local_138[2],
                                                                         CONCAT11(local_138[1],
                                                                                  local_138[0]))))))
                           ) ^ 0x746e656d6d6f6323,
         CONCAT17(cStack_12b,
                  CONCAT16(cStack_12c,
                           CONCAT15(cStack_12d,
                                    CONCAT14(cStack_12e,
                                             CONCAT13(cStack_12f,
                                                      CONCAT12(cStack_130,
                                                               CONCAT11(cStack_131,cStack_132)))))))
         != 0x646e652d73746e || uVar19 != 0)) {
        local_270 = (uint)CONCAT71((int7)(uVar19 >> 8),2);
        break;
      }
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = local_228[0][0x3ef];
      if (uVar20 == uVar19 - 1) goto LAB_1408d86db;
      if (uVar19 <= uVar20) {
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 2;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,2);
        }
        goto LAB_1408d86e1;
      }
      goto LAB_1408d881b;
    case 3:
      cVar2 = (char)local_26c;
      if (((CONCAT11(local_138[1],local_138[0]) == 0x30) && ((uVar6 & 0xffffffdf) == 0x58)) &&
         (uVar19 = 0, cVar2 == '\0')) {
LAB_1408d715f:
        local_26c = (undefined4)CONCAT71((int7)(uVar19 >> 8),2);
      }
      else {
        uVar19 = (ulonglong)((int)local_1c8 - 0x30U);
        if (((9 < (int)local_1c8 - 0x30U) ||
            (uVar19 = (ulonglong)(uVar6 & 0xffffffdf), (uVar6 & 0xffffffdf) != 0x45)) ||
           ('\x01' < cVar2)) {
          if ((cVar2 == '\x02') &&
             (uVar22 = (uVar6 & 0xffffffdf) - 0x41, uVar19 = (ulonglong)uVar22, uVar22 < 6))
          goto LAB_1408d715f;
          if (uVar6 == 0x2e) {
            local_26c = (undefined4)CONCAT71((int7)(uVar19 >> 8),(cVar2 != '\0') * '\b' + '\x01');
            break;
          }
          if (uVar6 - 0x30 < 10) break;
          uVar6 = (uint)CONCAT71(uVar18,3);
          if (cVar2 == '\t') {
            local_1cc = 0;
            uVar6 = 0;
          }
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 != uVar19 - 1) {
            if (uVar19 <= uVar20) {
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              lVar12 = uVar20 - uVar19;
              if (3999 < lVar16 + lVar12 + 1U) goto LAB_1408d806d;
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar16 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar16 + 1;
                *(char *)((longlong)puVar9 + lVar16 + 0xfd0) = (char)uVar6;
              }
              goto LAB_1408d7bc3;
            }
            goto LAB_1408d7bec;
          }
LAB_1408d7bbd:
          lVar8 = uVar20 + 1;
          puVar9 = local_228[0];
          goto LAB_1408d7bc3;
        }
        local_26c = 3;
      }
      break;
    case 5:
      if ((0x7f < (int)uVar6) ||
         ((((iVar7 = isalnum(uVar6), uVar6 != 0x5f && (iVar7 == 0)) && (uVar6 != 0x24)) &&
          ((uVar6 != 0x2d ||
           ((CONCAT11(cStack_12f,cStack_130) != 0x73 ||
             CONCAT17(cStack_131,
                      CONCAT16(cStack_132,
                               CONCAT15(cStack_133,
                                        CONCAT14(cStack_134,
                                                 CONCAT13(local_138[3],
                                                          CONCAT12(local_138[2],
                                                                   CONCAT11(local_138[1],
                                                                            local_138[0]))))))) !=
             0x746e656d6d6f6323 &&
            (cStack_130 != '\0' ||
             CONCAT17(cStack_131,
                      CONCAT16(cStack_132,
                               CONCAT15(cStack_133,
                                        CONCAT14(cStack_134,
                                                 CONCAT13(local_138[3],
                                                          CONCAT12(local_138[2],
                                                                   CONCAT11(local_138[1],
                                                                            local_138[0]))))))) !=
             0x6564756c636e6923)))))))) {
        puVar9 = local_228[0];
        if ((CONCAT13(local_138[3],CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0]))) ==
             0x736323) ||
           (auVar23[0] = -(local_138[0] == '#'), auVar23[1] = -(local_138[1] == 'c'),
           auVar23[2] = -(local_138[2] == 'o'), auVar23[3] = -(local_138[3] == 'm'),
           auVar23[4] = -(cStack_134 == 'm'), auVar23[5] = -(cStack_133 == 'e'),
           auVar23[6] = -(cStack_132 == 'n'), auVar23[7] = -(cStack_131 == 't'),
           auVar23[8] = -(cStack_130 == 's'), auVar23[9] = -(cStack_12f == '-'),
           auVar23[10] = -(cStack_12e == 's'), auVar23[0xb] = -(cStack_12d == 't'),
           auVar23[0xc] = -(cStack_12c == 'a'), auVar23[0xd] = -(cStack_12b == 'r'),
           auVar23[0xe] = -(cStack_12a == 't'), auVar23[0xf] = -(cStack_129 == '\0'),
           (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff)) {
          local_1cc = 2;
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 == uVar19 - 1) {
LAB_1408d7370:
            puVar9[0x3ef] = uVar20 + 1;
          }
          else if (uVar19 <= uVar20) {
            lVar8 = local_228[0][0x3ee];
            if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
              (**(code **)(*(longlong *)*local_228[0] + 0x68))
                        ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
              uVar19 = puVar9[0x3ef];
              puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
              puVar9[0x3ee] = 0;
              lVar8 = 0;
            }
            if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar8 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar8 + 1;
                *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 2;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar9 + 0x60))
                        ((longlong *)*puVar9,(uVar20 - uVar19) + 1,2);
            }
            goto LAB_1408d7370;
          }
          local_1cc = 2;
          param_1 = puVar9;
          goto LAB_1408d9120;
        }
        cVar2 = FUN_140a8bc50(local_230,local_138);
        puVar9 = local_228[0];
        if (cVar2 == '\0') {
          cVar2 = FUN_140a8bc50(local_238,local_138);
          puVar9 = local_228[0];
          if (cVar2 == '\0') {
            cVar2 = FUN_140a8bc50(local_248,local_138);
            if (cVar2 == '\0') {
              cVar2 = FUN_140a8bc50(local_250,local_138);
              if (cVar2 != '\0') {
                local_1cc = 0xb;
                FUN_1408c6890(local_228,0);
                uVar15 = uVar15 & 0xff;
                if (cStack_130 == '\0' &&
                    CONCAT17(cStack_131,
                             CONCAT16(cStack_132,
                                      CONCAT15(cStack_133,
                                               CONCAT14(cStack_134,
                                                        CONCAT13(local_138[3],
                                                                 CONCAT12(local_138[2],
                                                                          CONCAT11(local_138[1],
                                                                                   local_138[0])))))
                                     )) == 0x6564756c636e6923) {
                  uVar15 = 3;
                }
                goto LAB_1408d7b78;
              }
              cVar2 = FUN_140a8bc50(local_258,local_138);
              if (cVar2 == '\0') {
                cVar2 = FUN_140a8bc50(local_260,local_138);
                if (cVar2 != '\0') {
                  uVar6 = local_1c8._4_4_;
                  param_1 = (undefined8 *)(ulonglong)local_1c8._4_4_;
                  if ((((-1 < (char)((ulonglong)local_1c8 >> 0x20)) &&
                       (iVar7 = isalnum(local_1c8._4_4_ & 0x7f), iVar7 != 0)) ||
                      (uVar6 = (uVar6 & 0xff) - 0x26, 0x38 < uVar6)) ||
                     ((0x1a0000001c002fdU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)) {
                    local_1cc = 0xd;
                    goto LAB_1408d8347;
                  }
                }
                cVar2 = FUN_140a8bc50(local_268,local_138);
                if (cVar2 == '\0') {
                  if (CONCAT11(local_138[1],local_138[0]) == 0x5f) {
                    local_1cc = 8;
                  }
                  else {
                    uVar6 = local_1c8._4_4_;
                    param_1 = (undefined8 *)(ulonglong)local_1c8._4_4_;
                    if (((int)local_1c8._4_4_ < 0x80) &&
                       ((iVar7 = isalnum(local_1c8._4_4_), uVar6 == 0x5f || (iVar7 != 0))))
                    goto LAB_1408d7b78;
                    local_1cc = 0;
                  }
                }
                else {
                  local_1cc = 0xf;
                }
                goto LAB_1408d8347;
              }
              local_1cc = 0xc;
              uVar11 = 0xc;
            }
            else {
              local_1cc = 6;
LAB_1408d8347:
              uVar11 = 0;
            }
            FUN_1408c6890(local_228,uVar11);
            goto LAB_1408d7b78;
          }
          local_1cc = 4;
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 != uVar19 - 1) {
            param_1 = local_228[0];
            if (uVar19 <= uVar20) {
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
                for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                  lVar16 = puVar9[0x3ee];
                  puVar9[0x3ee] = lVar16 + 1;
                  *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 4;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar9 + 0x60))
                          ((longlong *)*puVar9,(uVar20 - uVar19) + 1,4);
              }
              goto LAB_1408d7b66;
            }
            goto LAB_1408d7b6d;
          }
LAB_1408d7b60:
          lVar8 = uVar20 + 1;
          puVar9 = local_228[0];
LAB_1408d7b66:
          puVar9[0x3ef] = lVar8;
          param_1 = puVar9;
        }
        else {
          local_1cc = 5;
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 == uVar19 - 1) goto LAB_1408d7b60;
          param_1 = local_228[0];
          if (uVar19 <= uVar20) {
            lVar16 = local_228[0][0x3ee];
            lVar8 = uVar20 + 1;
            if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
              (**(code **)(*(longlong *)*local_228[0] + 0x68))
                        ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
              uVar19 = puVar9[0x3ef];
              puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
              puVar9[0x3ee] = 0;
              lVar16 = 0;
            }
            if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar16 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar16 + 1;
                *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 5;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar9 + 0x60))
                        ((longlong *)*puVar9,(uVar20 - uVar19) + 1,5);
            }
            goto LAB_1408d7b66;
          }
        }
LAB_1408d7b6d:
        local_1cc = 0;
      }
LAB_1408d7b78:
      uVar6 = local_1cc;
      puVar9 = local_228[0];
      if (local_1d0._1_1_ != '\x01') break;
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = local_228[0][0x3ef];
      if (uVar20 == uVar19 - 1) goto LAB_1408d7bbd;
      if (uVar19 <= uVar20) {
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        lVar12 = uVar20 - uVar19;
        if (lVar16 + lVar12 + 1U < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(char *)((longlong)puVar9 + lVar16 + 0xfd0) = (char)uVar6;
          }
        }
        else {
LAB_1408d806d:
          plVar14 = (longlong *)*puVar9;
          lVar16 = *plVar14;
          uVar19 = (ulonglong)uVar6;
LAB_1408d807d:
          (**(code **)(lVar16 + 0x60))(plVar14,lVar12 + 1,uVar19);
        }
        goto LAB_1408d7bc3;
      }
LAB_1408d7bec:
      local_1cc = 0;
      goto LAB_1408d848f;
    case 7:
      if (((cVar2 == '\x01' && uVar6 == 0x22) || (cVar2 == '\x02' && uVar6 == 0x27)) ||
         (uVar6 == 0x3e && cVar2 == '\x03')) {
        uVar15 = 0;
        FUN_1408c69d0(local_228,0);
        break;
      }
      if (local_1d0._1_1_ != '\x01') {
LAB_1408d7982:
        uVar22 = local_1cc;
        puVar9 = local_228[0];
        if (((0x3d < uVar6 - 0x21) ||
            ((0x2000000000000405U >> ((ulonglong)(uVar6 - 0x21) & 0x3f) & 1) == 0)) &&
           (uVar6 != 0x7b)) break;
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) {
LAB_1408d79e7:
          puVar9[0x3ef] = uVar20 + 1;
        }
        else if (uVar19 <= uVar20) {
          param_1 = (undefined8 *)(ulonglong)local_1cc;
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar19 = puVar9[0x3ef];
            puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
            puVar9[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
            for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
              lVar8 = puVar9[0x3ee];
              puVar9[0x3ee] = lVar8 + 1;
              *(char *)((longlong)puVar9 + lVar8 + 0xfd0) = (char)uVar22;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar9 + 0x60))
                      ((longlong *)*puVar9,(uVar20 - uVar19) + 1,uVar22);
          }
          goto LAB_1408d79e7;
        }
        local_1cc = 10;
        goto LAB_1408d9120;
      }
      uVar11 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,local_1f0);
      cVar2 = FUN_1408da3e0(uVar11,param_5);
      uVar6 = local_1cc;
      puVar9 = local_228[0];
      if (cVar2 != '\0') {
        uVar15 = 0;
        param_1 = param_5;
        uVar6 = local_1c8._4_4_;
        goto LAB_1408d7982;
      }
      uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar15 = local_228[0][0x3ef];
      if (uVar19 == uVar15 - 1) {
        local_228[0][0x3ef] = uVar19 + 1;
      }
      else if (uVar15 <= uVar19) {
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar19 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar15) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar15 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar19 - uVar15) + 1 < 4000) {
          for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(char *)((longlong)puVar9 + lVar16 + 0xfd0) = (char)uVar6;
          }
          puVar9[0x3ef] = lVar8;
        }
        else {
          (**(code **)(*(longlong *)*puVar9 + 0x60))
                    ((longlong *)*puVar9,(uVar19 - uVar15) + 1,uVar6);
          puVar9[0x3ef] = lVar8;
        }
      }
      goto LAB_1408d7d29;
    case 8:
      if (((0x7f < (int)uVar6) || ((int)local_1c8 != 0x2e)) ||
         ((iVar7 = isalnum(uVar6), param_1 = local_228[0], uVar6 != 0x5f && (iVar7 == 0)))) {
        puVar9 = local_228[0];
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) goto LAB_1408d7287;
        if (uVar20 < uVar19) goto LAB_1408d7d2c;
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 8;
          }
          goto LAB_1408d8232;
        }
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,8);
        puVar9[0x3ef] = lVar8;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = local_228[0][0x3ef];
      if (uVar20 == uVar19 - 1) {
LAB_1408d7573:
        param_1[0x3ef] = uVar20 + 1;
      }
      else if (uVar19 <= uVar20) {
        lVar8 = local_228[0][0x3ee];
        if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
          uVar19 = param_1[0x3ef];
          param_1[0x3f0] = param_1[0x3f0] + param_1[0x3ee];
          param_1[0x3ee] = 0;
          lVar8 = 0;
        }
        if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar8 = param_1[0x3ee];
            param_1[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)param_1 + lVar8 + 0xfd0) = 8;
          }
        }
        else {
          (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,(uVar20 - uVar19) + 1,8);
        }
        goto LAB_1408d7573;
      }
      local_1cc = 0xe;
      goto LAB_1408d9120;
    case 9:
      if (uVar6 != 0x2e) {
        if ((int)uVar6 < 0x80) goto LAB_1408d7232;
LAB_1408d724d:
        puVar9 = local_228[0];
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) goto LAB_1408d7287;
        if (uVar20 < uVar19) goto LAB_1408d7d2c;
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 9;
          }
          goto LAB_1408d8232;
        }
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,9);
        puVar9[0x3ef] = lVar8;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
      if (iStack_1b8 - 0x30U < 10) {
LAB_1408d7232:
        iVar7 = isalnum(uVar6);
        if ((uVar6 == 0x5f) || (iVar7 != 0)) break;
        goto LAB_1408d724d;
      }
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = local_228[0][0x3ef];
      if (uVar20 == uVar19 - 1) goto LAB_1408d87dc;
      if (uVar19 <= uVar20) {
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 9;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,9);
        }
        goto LAB_1408d87e2;
      }
      goto LAB_1408d87e9;
    case 10:
      if ((uVar6 == 0x7d) || ((int)local_1c8 != 0x7d)) {
        iVar7 = 1;
        pbVar10 = local_138;
        do {
          bVar4 = *pbVar10;
          if (bVar4 == 0) {
            if (iVar7 == 0) {
              local_1cc = 7;
              uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
              uVar19 = local_228[0][0x3ef];
              if (uVar20 == uVar19 - 1) goto LAB_1408d7f41;
              if (uVar20 < uVar19) goto LAB_1408d8390;
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              lVar12 = uVar20 - uVar19;
              if (lVar16 + lVar12 + 1U < 4000) goto joined_r0x0001408d9867;
            }
            else {
              if (iVar7 != 1) break;
              if (((uVar6 - 0x21 < 0x3e) &&
                  (bVar3 = false,
                  (0x2000000000000405U >> ((ulonglong)(uVar6 - 0x21) & 0x3f) & 1) != 0)) ||
                 (bVar3 = false, uVar6 == 0x7b)) goto LAB_1408d7cc6;
              local_1cc = 7;
              uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
              uVar19 = local_228[0][0x3ef];
              if (uVar20 == uVar19 - 1) {
LAB_1408d7f41:
                lVar8 = uVar20 + 1;
                goto LAB_1408d7f47;
              }
              if (uVar20 < uVar19) goto LAB_1408d8390;
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              lVar12 = uVar20 - uVar19;
              if (lVar16 + lVar12 + 1U < 4000) goto joined_r0x0001408d74f1;
            }
            (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,lVar12 + 1,7);
            goto LAB_1408d7f47;
          }
          iVar5 = iVar7;
          if (bVar4 == 0x7b) {
            iVar5 = 2;
          }
          if (iVar7 == 1) {
            iVar7 = iVar5;
          }
          if ((iVar7 == 1) &&
             ((0x3d < bVar4 - 0x21 ||
              (iVar7 = 1, (0x2000000000000405U >> ((ulonglong)(bVar4 - 0x21) & 0x3f) & 1) == 0)))) {
            iVar7 = 0;
          }
          pbVar10 = pbVar10 + 1;
        } while (iVar7 != 2);
        bVar3 = false;
        puVar1 = local_228[0];
        uVar11 = local_1c8;
      }
      else {
        iVar7 = FUN_1408da560(local_138,local_1a8);
        uVar21 = (uint7)(uint3)((ulonglong)uVar11 >> 0x28);
        if (iVar7 == 0) {
          sVar13 = strlen(local_1a8);
          if (sVar13 == 3) {
            uVar19 = CONCAT71(uVar21,10);
            local_1cc = 10;
          }
          else {
            bVar4 = FUN_140a8bc50(local_240,local_1a8);
            local_1cc = (uint)bVar4 + (uint)bVar4 * 2 + 7;
            uVar19 = (ulonglong)((uint)(bVar4 != 0) * 3 + 7);
          }
        }
        else {
          uVar19 = CONCAT71(uVar21,7);
          local_1cc = 7;
        }
        param_1 = local_228[0];
        uVar17 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar20 = local_228[0][0x3ef];
        if (uVar17 == uVar20 - 1) {
LAB_1408d7c9f:
          param_1[0x3ef] = uVar17 + 1;
        }
        else if (uVar20 <= uVar17) {
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar17 + 1) - uVar20) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar20 = param_1[0x3ef];
            param_1[0x3f0] = param_1[0x3f0] + param_1[0x3ee];
            param_1[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar17 - uVar20) + 1 < 4000) {
            for (; uVar20 <= uVar17; uVar20 = uVar20 + 1) {
              lVar8 = param_1[0x3ee];
              param_1[0x3ee] = lVar8 + 1;
              *(char *)((longlong)param_1 + lVar8 + 0xfd0) = (char)uVar19;
            }
          }
          else {
            (**(code **)(*(longlong *)*param_1 + 0x60))
                      ((longlong *)*param_1,(uVar17 - uVar20) + 1,uVar19);
          }
          goto LAB_1408d7c9f;
        }
        local_1cc = 7;
        bVar3 = true;
LAB_1408d7cc6:
        puVar1 = local_228[0];
        uVar11 = local_1c8;
      }
      goto joined_r0x0001408d83a5;
    case 0xc:
      param_1 = (undefined8 *)CONCAT71(uVar18,0xc);
      if (uVar6 == 0x3b) {
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) {
LAB_1408d7138:
          puVar9[0x3ef] = uVar20 + 1;
        }
        else if (uVar19 <= uVar20) {
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar19 = puVar9[0x3ef];
            puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
            puVar9[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
            for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
              lVar8 = puVar9[0x3ee];
              puVar9[0x3ee] = lVar8 + 1;
              *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0xc;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar9 + 0x60))
                      ((longlong *)*puVar9,(uVar20 - uVar19) + 1,0xc);
          }
          goto LAB_1408d7138;
        }
        local_1cc = 1;
        param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
      }
      puVar9 = local_228[0];
      if (local_1d0._1_1_ == '\x01') {
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) goto LAB_1408d7bbd;
        if (uVar20 < uVar19) goto LAB_1408d7bec;
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        lVar12 = uVar20 - uVar19;
        if (3999 < lVar16 + lVar12 + 1U) {
          plVar14 = (longlong *)*puVar9;
          lVar16 = *plVar14;
          uVar19 = (ulonglong)param_1 & 0xffffffff;
          goto LAB_1408d807d;
        }
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar16 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar16 + 1;
          *(char *)((longlong)puVar9 + lVar16 + 0xfd0) = (char)param_1;
        }
LAB_1408d7bc3:
        puVar9[0x3ef] = lVar8;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
      break;
    case 0xe:
      if ((0x7f < (int)uVar6) || ((iVar7 = isalnum(uVar6), uVar6 != 0x5f && (iVar7 == 0)))) {
        puVar9 = local_228[0];
        uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar19 = local_228[0][0x3ef];
        if (uVar20 == uVar19 - 1) goto LAB_1408d7287;
        if (uVar20 < uVar19) goto LAB_1408d7d2c;
        lVar16 = local_228[0][0x3ee];
        lVar8 = uVar20 + 1;
        if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
          uVar19 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar16 = 0;
        }
        if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar16 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar16 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0xe;
          }
          goto LAB_1408d8232;
        }
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,0xe);
        puVar9[0x3ef] = lVar8;
        local_1cc = 0;
        goto LAB_1408d848f;
      }
    }
    goto switchD_1408d6ab6_caseD_4;
  }
LAB_1408d9ab6:
  if (local_1cc == 5) {
    if (local_c8._0_4_ != 0x736323) {
      auVar24[0] = -(local_c8[0] == '#');
      auVar24[1] = -(local_c8[1] == 'c');
      auVar24[2] = -(local_c8[2] == 'o');
      auVar24[3] = -(local_c8[3] == 'm');
      auVar24[4] = -(local_c8[4] == 'm');
      auVar24[5] = -(local_c8[5] == 'e');
      auVar24[6] = -(local_c8[6] == 'n');
      auVar24[7] = -(local_c8[7] == 't');
      auVar24[8] = -(local_c8[8] == 's');
      auVar24[9] = -(local_c8[9] == '-');
      auVar24[10] = -(local_c8[10] == 's');
      auVar24[0xb] = -(local_c8[0xb] == 't');
      auVar24[0xc] = -(local_c8[0xc] == 'a');
      auVar24[0xd] = -(local_c8[0xd] == 'r');
      auVar24[0xe] = -(local_c8[0xe] == 't');
      auVar24[0xf] = -(local_c8[0xf] == '\0');
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar24[0xf] >> 7) << 0xf) != 0xffff) {
        cVar2 = FUN_140a8bc50(local_230,local_c8);
        if (cVar2 != '\0') {
          local_1cc = 5;
          uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar15 = local_228[0][0x3ef];
          if (uVar19 != uVar15 - 1) {
            uVar6 = 5;
            if (uVar19 < uVar15) goto LAB_1408da0d0;
            lVar8 = local_228[0][0x3ee];
            if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
              (**(code **)(*(longlong *)*local_228[0] + 0x68))
                        ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
              uVar15 = local_228[0][0x3ef];
              local_228[0][0x3f0] = local_228[0][0x3f0] + local_228[0][0x3ee];
              local_228[0][0x3ee] = 0;
              lVar8 = 0;
            }
            if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
              for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
                lVar8 = local_228[0][0x3ee];
                local_228[0][0x3ee] = lVar8 + 1;
                *(undefined1 *)((longlong)local_228[0] + lVar8 + 0xfd0) = 5;
              }
            }
            else {
              (**(code **)(*(longlong *)*local_228[0] + 0x60))
                        ((longlong *)*local_228[0],(uVar19 - uVar15) + 1,5);
            }
          }
          local_228[0][0x3ef] = uVar19 + 1;
          uVar6 = 5;
          goto LAB_1408da0d0;
        }
        cVar2 = FUN_140a8bc50(local_238,local_c8);
        if (cVar2 != '\0') {
          local_1cc = 4;
          uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar15 = local_228[0][0x3ef];
          if (uVar19 != uVar15 - 1) {
            uVar6 = 4;
            if (uVar19 < uVar15) goto LAB_1408da0d0;
            lVar8 = local_228[0][0x3ee];
            if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
              (**(code **)(*(longlong *)*local_228[0] + 0x68))
                        ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
              uVar15 = local_228[0][0x3ef];
              local_228[0][0x3f0] = local_228[0][0x3f0] + local_228[0][0x3ee];
              local_228[0][0x3ee] = 0;
              lVar8 = 0;
            }
            if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
              for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
                lVar8 = local_228[0][0x3ee];
                local_228[0][0x3ee] = lVar8 + 1;
                *(undefined1 *)((longlong)local_228[0] + lVar8 + 0xfd0) = 4;
              }
            }
            else {
              (**(code **)(*(longlong *)*local_228[0] + 0x60))
                        ((longlong *)*local_228[0],(uVar19 - uVar15) + 1,4);
            }
          }
          local_228[0][0x3ef] = uVar19 + 1;
          uVar6 = 4;
          goto LAB_1408da0d0;
        }
        cVar2 = FUN_140a8bc50(local_248,local_c8);
        uVar6 = 6;
        if (cVar2 == '\0') {
          cVar2 = FUN_140a8bc50(local_250,local_c8);
          uVar6 = 0xb;
          if (cVar2 == '\0') {
            cVar2 = FUN_140a8bc50(local_258,local_c8);
            uVar6 = 0xc;
            if (cVar2 == '\0') {
              cVar2 = FUN_140a8bc50(local_260,local_c8);
              if (cVar2 != '\0') {
                uVar6 = 0xd;
                if (local_1d0._1_1_ != '\0') goto LAB_1408d9e3d;
              }
              cVar2 = FUN_140a8bc50(local_268,local_c8);
              uVar6 = 0xf;
              if (cVar2 == '\0') {
                uVar6 = 0;
              }
            }
          }
        }
LAB_1408d9e3d:
        local_1cc = uVar6;
        FUN_1408c6890(local_228);
        goto LAB_1408d9e58;
      }
    }
    local_1cc = 2;
    uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar15 = local_228[0][0x3ef];
    if (uVar19 != uVar15 - 1) {
      uVar6 = 2;
      if (uVar19 < uVar15) goto LAB_1408da0d0;
      lVar8 = local_228[0][0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
        uVar15 = local_228[0][0x3ef];
        local_228[0][0x3f0] = local_228[0][0x3f0] + local_228[0][0x3ee];
        local_228[0][0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
        for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
          lVar8 = local_228[0][0x3ee];
          local_228[0][0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)local_228[0] + lVar8 + 0xfd0) = 2;
        }
      }
      else {
        (**(code **)(*(longlong *)*local_228[0] + 0x60))
                  ((longlong *)*local_228[0],(uVar19 - uVar15) + 1,2);
      }
    }
    local_228[0][0x3ef] = uVar19 + 1;
    uVar6 = 2;
    goto LAB_1408da0d0;
  }
LAB_1408d9e58:
  uVar6 = local_1cc;
  if (local_1cc != 10) goto LAB_1408da0d0;
  if (((int)local_1c8 == 0x7d) && (local_1c8._4_4_ != 0x7d)) {
    iVar7 = FUN_1408da560(local_c8,local_138);
    uVar18 = (undefined7)((ulonglong)param_1 >> 8);
    if (iVar7 == 0) {
      sVar13 = strlen((char *)local_138);
      if (sVar13 == 3) {
        iVar7 = (int)CONCAT71(uVar18,10);
        local_1cc = 10;
      }
      else {
        bVar4 = FUN_140a8bc50(local_240,local_138);
        local_1cc = (uint)bVar4 + (uint)bVar4 * 2 + 7;
        iVar7 = (uint)(bVar4 != 0) * 3 + 7;
      }
    }
    else {
      iVar7 = (int)CONCAT71(uVar18,7);
      local_1cc = 7;
    }
    puVar9 = local_228[0];
    uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar15 = local_228[0][0x3ef];
    if (uVar19 == uVar15 - 1) {
LAB_1408d9f28:
      puVar9[0x3ef] = uVar19 + 1;
    }
    else if (uVar15 <= uVar19) {
      lVar8 = local_228[0][0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
        uVar15 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
        for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
          lVar8 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar8 + 1;
          *(char *)((longlong)puVar9 + lVar8 + 0xfd0) = (char)iVar7;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar19 - uVar15) + 1,iVar7);
      }
      goto LAB_1408d9f28;
    }
    local_1cc = 7;
  }
  uVar6 = local_1cc;
  if (local_1d0._1_1_ == '\x01') {
    local_1cc = 7;
    uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar15 = local_228[0][0x3ef];
    if (uVar19 != uVar15 - 1) {
      uVar6 = 0;
      if (uVar19 < uVar15) goto LAB_1408da0d0;
      lVar8 = local_228[0][0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
        uVar15 = local_228[0][0x3ef];
        local_228[0][0x3f0] = local_228[0][0x3f0] + local_228[0][0x3ee];
        local_228[0][0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
        for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
          lVar8 = local_228[0][0x3ee];
          local_228[0][0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)local_228[0] + lVar8 + 0xfd0) = 7;
        }
      }
      else {
        (**(code **)(*(longlong *)*local_228[0] + 0x60))
                  ((longlong *)*local_228[0],(uVar19 - uVar15) + 1,7);
      }
    }
    local_228[0][0x3ef] = uVar19 + 1;
    uVar6 = 0;
  }
LAB_1408da0d0:
  local_1cc = uVar6;
  FUN_1408c6b70(local_228);
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_2a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_2a8);
joined_r0x0001408d9867:
  for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
    lVar16 = puVar9[0x3ee];
    puVar9[0x3ee] = lVar16 + 1;
    *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 7;
  }
  goto LAB_1408d7f47;
joined_r0x0001408d74f1:
  for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
    lVar16 = puVar9[0x3ee];
    puVar9[0x3ee] = lVar16 + 1;
    *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 7;
  }
LAB_1408d7f47:
  puVar9[0x3ef] = lVar8;
LAB_1408d8390:
  local_1cc = 7;
  bVar3 = true;
  puVar1 = local_228[0];
  param_1 = puVar9;
  uVar11 = local_1c8;
joined_r0x0001408d83a5:
  local_228[0] = puVar1;
  local_1c8 = uVar11;
  if (local_1d0._1_1_ == '\x01') {
    local_1cc = 7;
    uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar15 = puVar1[0x3ef];
    if (uVar19 == uVar15 - 1) {
LAB_1408d7d1b:
      puVar1[0x3ef] = uVar19 + 1;
    }
    else if (uVar15 <= uVar19) {
      lVar8 = puVar1[0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
        (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,lVar8,puVar1 + 0x1fa);
        uVar15 = puVar1[0x3ef];
        puVar1[0x3f0] = puVar1[0x3f0] + puVar1[0x3ee];
        puVar1[0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
        for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
          lVar8 = puVar1[0x3ee];
          puVar1[0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)puVar1 + lVar8 + 0xfd0) = 7;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar1 + 0x60))((longlong *)*puVar1,(uVar19 - uVar15) + 1,7);
      }
      goto LAB_1408d7d1b;
    }
LAB_1408d7d29:
    uVar15 = 0;
LAB_1408d7d2c:
    local_1cc = 0;
  }
  else {
    local_1c8._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
    iVar7 = local_1c8._4_4_;
    if ((bVar3) &&
       (((local_1c8._4_4_ - 0x21 < 0x3e &&
         ((0x2000000000000405U >> ((ulonglong)(local_1c8._4_4_ - 0x21) & 0x3f) & 1) != 0)) ||
        (local_1c8._4_4_ == 0x7b)))) {
      uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar19 = puVar1[0x3ef];
      if (uVar20 == uVar19 - 1) {
LAB_1408d840f:
        local_1c8 = uVar11;
        puVar1[0x3ef] = uVar20 + 1;
        iVar7 = local_1c8._4_4_;
      }
      else if (uVar19 <= uVar20) {
        lVar8 = puVar1[0x3ee];
        if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
          (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,lVar8,puVar1 + 0x1fa);
          uVar19 = puVar1[0x3ef];
          puVar1[0x3f0] = puVar1[0x3f0] + puVar1[0x3ee];
          puVar1[0x3ee] = 0;
          lVar8 = 0;
        }
        if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
          for (; uVar11 = local_1c8, uVar19 <= uVar20; uVar19 = uVar19 + 1) {
            lVar8 = puVar1[0x3ee];
            puVar1[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)puVar1 + lVar8 + 0xfd0) = 7;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar1 + 0x60))((longlong *)*puVar1,(uVar20 - uVar19) + 1,7);
          uVar11 = local_1c8;
        }
        goto LAB_1408d840f;
      }
      local_1cc = 10;
      param_1 = puVar1;
      uVar11 = local_1c8;
    }
    local_1c8 = uVar11;
    uVar18 = (undefined7)((ulonglong)param_1 >> 8);
    param_1 = (undefined8 *)CONCAT71(uVar18,1);
    if ((cVar2 == '\x01' && iVar7 == 0x22) ||
       (param_1 = (undefined8 *)CONCAT71(uVar18,2), iVar7 == 0x27 && cVar2 == '\x02')) {
      local_1cc = 7;
      FUN_1408c69d0(local_228,0);
      uVar15 = (ulonglong)param_1 & 0xffffffff;
    }
switchD_1408d6ab6_caseD_4:
    if (local_1cc != 0) goto LAB_1408d9120;
  }
LAB_1408d848f:
  uVar11 = local_1c8;
  puVar9 = local_228[0];
  uVar6 = local_1c8._4_4_;
  param_1 = (undefined8 *)(ulonglong)local_1c8._4_4_;
  uVar22 = local_1c8._4_4_ - 0x23;
  switch((ulonglong)uVar22) {
  case 0:
    uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar19 = local_228[0][0x3ef];
    if (uVar20 == uVar19 - 1) {
LAB_1408d8727:
      lVar8 = uVar20 + 1;
      puVar9 = local_228[0];
      goto LAB_1408d872d;
    }
    if (uVar19 <= uVar20) {
      lVar16 = local_228[0][0x3ee];
      lVar8 = uVar20 + 1;
      if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
        uVar19 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar16 = 0;
      }
      lVar12 = uVar20 - uVar19;
      if (lVar16 + lVar12 + 1U < 4000) {
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar16 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar16 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
        }
        goto LAB_1408d872d;
      }
LAB_1408d88a1:
      (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,lVar12 + 1,0);
      goto LAB_1408d872d;
    }
    break;
  case 1:
    uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar19 = local_228[0][0x3ef];
    if (uVar20 == uVar19 - 1) {
LAB_1408d8695:
      puVar9[0x3ef] = uVar20 + 1;
    }
    else if (uVar19 <= uVar20) {
      lVar8 = local_228[0][0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
        uVar19 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar8 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,0);
      }
      goto LAB_1408d8695;
    }
    local_1cc = 9;
    param_1 = puVar9;
    goto LAB_1408d9120;
  default:
    if ((local_1c8._4_4_ != 0x3c) || ((char)uVar15 != '\x03')) {
      if (local_1c8._4_4_ != 0x27) {
        if (local_1c8._4_4_ != 0x22) {
          if (local_1c8._4_4_ - 0x30 < 10) {
LAB_1408d8609:
            uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
            uVar19 = local_228[0][0x3ef];
            if (uVar20 == uVar19 - 1) {
LAB_1408d8649:
              puVar9[0x3ef] = uVar20 + 1;
            }
            else if (uVar19 <= uVar20) {
              lVar8 = local_228[0][0x3ee];
              if ((0 < lVar8) && (3999 < ((uVar20 + 1) - uVar19) + lVar8)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar8 = 0;
              }
              if (lVar8 + (uVar20 - uVar19) + 1 < 4000) {
                for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                  lVar8 = puVar9[0x3ee];
                  puVar9[0x3ee] = lVar8 + 1;
                  *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar9 + 0x60))
                          ((longlong *)*puVar9,(uVar20 - uVar19) + 1,0);
              }
              goto LAB_1408d8649;
            }
            local_1cc = 3;
            local_26c = 0;
            param_1 = puVar9;
            goto LAB_1408d9120;
          }
          if (local_1c8._4_4_ == 0x2e) {
            if (iStack_1b8 - 0x30U < 10) goto LAB_1408d8609;
LAB_1408d8f0f:
            iVar7 = isalnum(local_1c8._4_4_);
            puVar9 = local_228[0];
            if ((iVar7 != 0) ||
               ((uVar22 < 0x3d && ((0x1000000020000803U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0))))
            {
              uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
              uVar19 = local_228[0][0x3ef];
              if (uVar20 == uVar19 - 1) goto LAB_1408d8727;
              if (uVar20 < uVar19) break;
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              lVar12 = uVar20 - uVar19;
              if (3999 < lVar16 + lVar12 + 1U) goto LAB_1408d88a1;
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar16 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar16 + 1;
                *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
              }
              goto LAB_1408d872d;
            }
          }
          else if ((int)local_1c8._4_4_ < 0x80) goto LAB_1408d8f0f;
          if ((((-1 < (char)((ulonglong)uVar11 >> 0x20)) &&
               (iVar7 = isalnum(uVar6 & 0x7f), iVar7 != 0)) ||
              (puVar9 = local_228[0], uVar6 = (uVar6 & 0xff) - 0x26, 0x38 < uVar6)) ||
             ((0x1a0000001c002fdU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)) {
            if (local_1d0._1_1_ == '\x01') {
              FUN_1408c6890(local_228,0);
            }
            goto LAB_1408d9120;
          }
          uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
          uVar19 = local_228[0][0x3ef];
          if (uVar20 != uVar19 - 1) {
            if (uVar19 <= uVar20) {
              lVar16 = local_228[0][0x3ee];
              lVar8 = uVar20 + 1;
              if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
                (**(code **)(*(longlong *)*local_228[0] + 0x68))
                          ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
                uVar19 = puVar9[0x3ef];
                puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
                puVar9[0x3ee] = 0;
                lVar16 = 0;
              }
              lVar12 = uVar20 - uVar19;
              if (3999 < lVar16 + lVar12 + 1U) goto LAB_1408d896c;
              for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
                lVar16 = puVar9[0x3ee];
                puVar9[0x3ee] = lVar16 + 1;
                *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
              }
              goto LAB_1408d87e2;
            }
            goto LAB_1408d87e9;
          }
          goto LAB_1408d87dc;
        }
        uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
        uVar15 = local_228[0][0x3ef];
        if (uVar19 == uVar15 - 1) {
LAB_1408d8796:
          puVar9[0x3ef] = uVar19 + 1;
        }
        else if (uVar15 <= uVar19) {
          lVar8 = local_228[0][0x3ee];
          if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
            (**(code **)(*(longlong *)*local_228[0] + 0x68))
                      ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
            uVar15 = puVar9[0x3ef];
            puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
            puVar9[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
            for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
              lVar8 = puVar9[0x3ee];
              puVar9[0x3ee] = lVar8 + 1;
              *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar19 - uVar15) + 1,0);
          }
          goto LAB_1408d8796;
        }
        local_1cc = 7;
        uVar15 = 1;
        param_1 = puVar9;
        goto LAB_1408d9120;
      }
      uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
      uVar15 = local_228[0][0x3ef];
      if (uVar19 == uVar15 - 1) {
LAB_1408d8ace:
        puVar9[0x3ef] = uVar19 + 1;
      }
      else if (uVar15 <= uVar19) {
        lVar8 = local_228[0][0x3ee];
        if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
          (**(code **)(*(longlong *)*local_228[0] + 0x68))
                    ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
          uVar15 = puVar9[0x3ef];
          puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
          puVar9[0x3ee] = 0;
          lVar8 = 0;
        }
        if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
          for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
            lVar8 = puVar9[0x3ee];
            puVar9[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar19 - uVar15) + 1,0);
        }
        goto LAB_1408d8ace;
      }
      local_1cc = 7;
      uVar15 = 2;
      param_1 = puVar9;
      goto LAB_1408d9120;
    }
    uVar19 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar15 = local_228[0][0x3ef];
    if (uVar19 == uVar15 - 1) {
LAB_1408d85ea:
      puVar9[0x3ef] = uVar19 + 1;
    }
    else if (uVar15 <= uVar19) {
      lVar8 = local_228[0][0x3ee];
      if ((0 < lVar8) && (3999 < ((uVar19 + 1) - uVar15) + lVar8)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar8,local_228[0] + 0x1fa);
        uVar15 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar8 = 0;
      }
      if (lVar8 + (uVar19 - uVar15) + 1 < 4000) {
        for (; uVar15 <= uVar19; uVar15 = uVar15 + 1) {
          lVar8 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar8 + 0xfd0) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar19 - uVar15) + 1,0);
      }
      goto LAB_1408d85ea;
    }
    local_1cc = 7;
    uVar15 = 3;
    param_1 = puVar9;
    goto LAB_1408d9120;
  case 0xb:
    if (iStack_1b8 - 0x30U < 10) goto LAB_1408d8609;
    uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar19 = local_228[0][0x3ef];
    if (uVar20 == uVar19 - 1) {
LAB_1408d87dc:
      lVar8 = uVar20 + 1;
      puVar9 = local_228[0];
LAB_1408d87e2:
      puVar9[0x3ef] = lVar8;
    }
    else if (uVar19 <= uVar20) {
      lVar16 = local_228[0][0x3ee];
      lVar8 = uVar20 + 1;
      if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
        uVar19 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar16 = 0;
      }
      lVar12 = uVar20 - uVar19;
      if (lVar16 + lVar12 + 1U < 4000) {
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar16 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar16 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
        }
      }
      else {
LAB_1408d896c:
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,lVar12 + 1,0);
      }
      goto LAB_1408d87e2;
    }
LAB_1408d87e9:
    local_1cc = 8;
    param_1 = puVar9;
    goto LAB_1408d9120;
  case 0x18:
    uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar19 = local_228[0][0x3ef];
    if (uVar20 == uVar19 - 1) {
LAB_1408d86db:
      lVar8 = uVar20 + 1;
      puVar9 = local_228[0];
LAB_1408d86e1:
      puVar9[0x3ef] = lVar8;
    }
    else if (uVar19 <= uVar20) {
      lVar16 = local_228[0][0x3ee];
      lVar8 = uVar20 + 1;
      if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
        (**(code **)(*(longlong *)*local_228[0] + 0x68))
                  ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
        uVar19 = puVar9[0x3ef];
        puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
        puVar9[0x3ee] = 0;
        lVar16 = 0;
      }
      if (lVar16 + (uVar20 - uVar19) + 1 < 4000) {
        for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
          lVar16 = puVar9[0x3ee];
          puVar9[0x3ee] = lVar16 + 1;
          *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,(uVar20 - uVar19) + 1,0);
      }
      goto LAB_1408d86e1;
    }
LAB_1408d881b:
    local_1cc = 1;
    param_1 = puVar9;
    goto LAB_1408d9120;
  case 0x1d:
    uVar20 = (-1 - (ulonglong)(local_210 < local_1f0)) + local_1f0;
    uVar19 = local_228[0][0x3ef];
    if (uVar20 == uVar19 - 1) goto LAB_1408d8727;
    if (uVar20 < uVar19) break;
    lVar16 = local_228[0][0x3ee];
    lVar8 = uVar20 + 1;
    if ((0 < lVar16) && (3999 < (lVar8 - uVar19) + lVar16)) {
      (**(code **)(*(longlong *)*local_228[0] + 0x68))
                ((longlong *)*local_228[0],lVar16,local_228[0] + 0x1fa);
      uVar19 = puVar9[0x3ef];
      puVar9[0x3f0] = puVar9[0x3f0] + puVar9[0x3ee];
      puVar9[0x3ee] = 0;
      lVar16 = 0;
    }
    lVar12 = uVar20 - uVar19;
    if (3999 < lVar16 + lVar12 + 1U) goto LAB_1408d88a1;
    for (; uVar19 <= uVar20; uVar19 = uVar19 + 1) {
      lVar16 = puVar9[0x3ee];
      puVar9[0x3ee] = lVar16 + 1;
      *(undefined1 *)((longlong)puVar9 + lVar16 + 0xfd0) = 0;
    }
LAB_1408d872d:
    puVar9[0x3ef] = lVar8;
  }
  local_1cc = 5;
  param_1 = puVar9;
LAB_1408d9120:
  if (local_1f0 < local_218) {
    local_1d0 = CONCAT11(local_1d0._1_1_,local_1d0._1_1_);
    if (local_1d0._1_1_ == '\x01') {
      lVar8 = local_1e8 + 2;
      local_1e8 = local_1e8 + 1;
      local_1d8 = (**(code **)(*(longlong *)*local_228[0] + 0x30))((longlong *)*local_228[0],lVar8);
    }
    local_1f0 = local_1f0 + lStack_1c0;
    local_1c8 = CONCAT44(iStack_1b8,local_1c8._4_4_);
    lStack_1c0 = local_1b0;
    FUN_1408c6cd0(local_228);
    if (local_218 <= local_1f0) goto LAB_1408d9ab6;
    goto LAB_1408d6a10;
  }
  local_1d0 = 0x100;
  local_1c8 = 0x2000000020;
  iStack_1b8 = 0x20;
  if (local_218 <= local_1f0) goto LAB_1408d9ab6;
  goto LAB_1408d6a10;
}


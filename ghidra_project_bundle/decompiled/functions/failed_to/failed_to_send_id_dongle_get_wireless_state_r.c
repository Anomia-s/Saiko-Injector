/**
 * Function: failed_to_send_id_dongle_get_wireless_state_r
 * Address:  140640d10
 * Signature: undefined failed_to_send_id_dongle_get_wireless_state_r(void)
 * Body size: 1316 bytes
 */


undefined8 failed_to_send_id_dongle_get_wireless_state_r(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined6 uVar7;
  undefined1 auVar9 [12];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar10 [12];
  undefined1 auVar21 [16];
  undefined1 auVar11 [12];
  undefined1 auVar25 [16];
  undefined1 auVar12 [12];
  undefined1 auVar29 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_118 [32];
  char local_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined4 local_e8;
  undefined5 uStack_e4;
  undefined8 uStack_df;
  undefined8 local_d7;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 uStack_97;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined2 local_78 [40];
  ulonglong local_28;
  undefined1 auVar8 [12];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined2 uVar32;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_140160c70(1,0x170);
  if (plVar5 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_1406411f5;
  }
  *plVar5 = param_1;
  *(longlong **)(param_1 + 0x70) = plVar5;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_140160cf0();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_14043fe30(param_1,"Steam Controller");
  if (*(short *)(param_1 + 0x22) == 0x1142) {
    local_78[0] = 0xb400;
    if (*(char *)(param_1 + 0x54) == '\0') {
      iVar2 = 0x32;
      do {
        iVar4 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),local_78,0x41);
        if (-1 < iVar4) goto LAB_140640dd9;
        setwaitabletimerex(500000);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      cStack_f5 = '\0';
      cStack_f4 = '\0';
      cStack_f3 = '\0';
      cStack_f2 = '\0';
      cStack_f1 = '\0';
      uStack_f0 = 0;
      uStack_ef = 0;
      local_e8 = 0;
      local_f8 = '\x03';
      cStack_f7 = -0x40;
      cStack_f6 = -0x4c;
      iVar2 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_f8,0x14);
      if (-1 < iVar2) {
LAB_140640dd9:
        uVar6 = *(undefined8 *)(param_1 + 0x80);
        uStack_87 = 0;
        uStack_80 = 0;
        uStack_97 = 0;
        uStack_8f = 0;
        local_88 = 0;
        local_a7 = 0;
        uStack_9f = 0;
        local_b7 = 0;
        uStack_af = 0;
        local_c7 = 0;
        uStack_bf = 0;
        local_d7 = 0;
        uStack_cf = 0;
        uStack_e4 = 0;
        uStack_df = 0;
        cStack_f7 = '\0';
        cStack_f6 = '\0';
        cStack_f5 = '\0';
        cStack_f4 = '\0';
        cStack_f3 = '\0';
        cStack_f2 = '\0';
        cStack_f1 = '\0';
        uStack_f0 = 0;
        uStack_ef = 0;
        local_e8 = 0;
        local_f8 = '\x03';
        uVar3 = FUN_14017a690(uVar6,&local_f8,0x80);
        if (uVar3 == 0) {
          FUN_140118490(1);
LAB_140640f06:
          uVar6 = *(undefined8 *)(param_1 + 0x80);
          uStack_87 = 0;
          uStack_80 = 0;
          uStack_97 = 0;
          uStack_8f = 0;
          local_88 = 0;
          local_a7 = 0;
          uStack_9f = 0;
          local_b7 = 0;
          uStack_af = 0;
          local_c7 = 0;
          uStack_bf = 0;
          local_d7 = 0;
          uStack_cf = 0;
          uStack_e4 = 0;
          uStack_df = 0;
          cStack_f7 = '\0';
          cStack_f6 = '\0';
          cStack_f5 = '\0';
          cStack_f4 = '\0';
          cStack_f3 = '\0';
          cStack_f2 = '\0';
          cStack_f1 = '\0';
          uStack_f0 = 0;
          uStack_ef = 0;
          local_e8 = 0;
          local_f8 = '\x03';
          uVar3 = FUN_14017a690(uVar6,&local_f8,0x80);
          if (uVar3 == 0) {
            FUN_140118490(1);
          }
          else {
            if ((int)uVar3 < 0) goto LAB_1406411cd;
            uVar7 = CONCAT15(-(cStack_f6 == '\x03'),
                             CONCAT14(-(cStack_f6 == '\x03'),
                                      CONCAT13(-(cStack_f7 == '\0'),
                                               CONCAT12(-(cStack_f7 == '\0'),
                                                        CONCAT11(-(local_f8 == '\x01'),
                                                                 -(local_f8 == '\x01'))))));
            auVar17._0_8_ = CONCAT17(-(cStack_f5 == '\0'),CONCAT16(-(cStack_f5 == '\0'),uVar7));
            auVar9._0_10_ =
                 CONCAT19(-(cStack_f4 == '\0'),CONCAT18(-(cStack_f4 == '\0'),auVar17._0_8_));
            auVar9[10] = -(cStack_f3 == '\0');
            auVar9[0xb] = -(cStack_f3 == '\0');
            auVar16[0xc] = -(cStack_f2 == '\0');
            auVar16._0_12_ = auVar9;
            auVar16[0xd] = -(cStack_f2 == '\0');
            auVar16[0xe] = -(cStack_f1 == '\0');
            auVar16[0xf] = -(cStack_f1 == '\0');
            auVar33 = pshuflw(in_XMM1,auVar16,0x50);
            uVar32 = (undefined2)((ulonglong)auVar17._0_8_ >> 0x30);
            auVar19._12_2_ = uVar32;
            auVar19._0_12_ = auVar9;
            auVar19._14_2_ = uVar32;
            uVar32 = (undefined2)((uint6)uVar7 >> 0x20);
            auVar18._12_4_ = auVar19._12_4_;
            auVar18._10_2_ = uVar32;
            auVar18._0_10_ = auVar9._0_10_;
            auVar17._10_6_ = auVar18._10_6_;
            auVar17._8_2_ = uVar32;
            in_XMM1._0_8_ = auVar33._0_8_;
            in_XMM1._8_4_ = auVar17._8_4_;
            in_XMM1._12_4_ = auVar18._12_4_ ^ 0xffffffff;
            iVar2 = movmskps((int)uVar6,in_XMM1);
            uVar1 = 1;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 != '\x01') goto LAB_1406411ca;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 == '\x01') goto LAB_1406411c8;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x80);
          uStack_87 = 0;
          uStack_80 = 0;
          uStack_97 = 0;
          uStack_8f = 0;
          local_88 = 0;
          local_a7 = 0;
          uStack_9f = 0;
          local_b7 = 0;
          uStack_af = 0;
          local_c7 = 0;
          uStack_bf = 0;
          local_d7 = 0;
          uStack_cf = 0;
          uStack_e4 = 0;
          uStack_df = 0;
          cStack_f7 = '\0';
          cStack_f6 = '\0';
          cStack_f5 = '\0';
          cStack_f4 = '\0';
          cStack_f3 = '\0';
          cStack_f2 = '\0';
          cStack_f1 = '\0';
          uStack_f0 = 0;
          uStack_ef = 0;
          local_e8 = 0;
          local_f8 = '\x03';
          uVar3 = FUN_14017a690(uVar6,&local_f8,0x80);
          if (uVar3 == 0) {
            FUN_140118490(1);
          }
          else {
            if ((int)uVar3 < 0) goto LAB_1406411cd;
            uVar7 = CONCAT15(-(cStack_f6 == '\x03'),
                             CONCAT14(-(cStack_f6 == '\x03'),
                                      CONCAT13(-(cStack_f7 == '\0'),
                                               CONCAT12(-(cStack_f7 == '\0'),
                                                        CONCAT11(-(local_f8 == '\x01'),
                                                                 -(local_f8 == '\x01'))))));
            auVar21._0_8_ = CONCAT17(-(cStack_f5 == '\0'),CONCAT16(-(cStack_f5 == '\0'),uVar7));
            auVar10._0_10_ =
                 CONCAT19(-(cStack_f4 == '\0'),CONCAT18(-(cStack_f4 == '\0'),auVar21._0_8_));
            auVar10[10] = -(cStack_f3 == '\0');
            auVar10[0xb] = -(cStack_f3 == '\0');
            auVar20[0xc] = -(cStack_f2 == '\0');
            auVar20._0_12_ = auVar10;
            auVar20[0xd] = -(cStack_f2 == '\0');
            auVar20[0xe] = -(cStack_f1 == '\0');
            auVar20[0xf] = -(cStack_f1 == '\0');
            auVar33 = pshuflw(in_XMM1,auVar20,0x50);
            uVar32 = (undefined2)((ulonglong)auVar21._0_8_ >> 0x30);
            auVar23._12_2_ = uVar32;
            auVar23._0_12_ = auVar10;
            auVar23._14_2_ = uVar32;
            uVar32 = (undefined2)((uint6)uVar7 >> 0x20);
            auVar22._12_4_ = auVar23._12_4_;
            auVar22._10_2_ = uVar32;
            auVar22._0_10_ = auVar10._0_10_;
            auVar21._10_6_ = auVar22._10_6_;
            auVar21._8_2_ = uVar32;
            in_XMM1._0_8_ = auVar33._0_8_;
            in_XMM1._8_4_ = auVar21._8_4_;
            in_XMM1._12_4_ = auVar22._12_4_ ^ 0xffffffff;
            iVar2 = movmskps((int)uVar6,in_XMM1);
            uVar1 = 1;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 != '\x01') goto LAB_1406411ca;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 == '\x01') goto LAB_1406411c8;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x80);
          uStack_87 = 0;
          uStack_80 = 0;
          uStack_97 = 0;
          uStack_8f = 0;
          local_88 = 0;
          local_a7 = 0;
          uStack_9f = 0;
          local_b7 = 0;
          uStack_af = 0;
          local_c7 = 0;
          uStack_bf = 0;
          local_d7 = 0;
          uStack_cf = 0;
          uStack_e4 = 0;
          uStack_df = 0;
          cStack_f7 = '\0';
          cStack_f6 = '\0';
          cStack_f5 = '\0';
          cStack_f4 = '\0';
          cStack_f3 = '\0';
          cStack_f2 = '\0';
          cStack_f1 = '\0';
          uStack_f0 = 0;
          uStack_ef = 0;
          local_e8 = 0;
          local_f8 = '\x03';
          uVar3 = FUN_14017a690(uVar6,&local_f8,0x80);
          if (uVar3 == 0) {
            FUN_140118490(1);
          }
          else {
            if ((int)uVar3 < 0) goto LAB_1406411cd;
            uVar7 = CONCAT15(-(cStack_f6 == '\x03'),
                             CONCAT14(-(cStack_f6 == '\x03'),
                                      CONCAT13(-(cStack_f7 == '\0'),
                                               CONCAT12(-(cStack_f7 == '\0'),
                                                        CONCAT11(-(local_f8 == '\x01'),
                                                                 -(local_f8 == '\x01'))))));
            auVar25._0_8_ = CONCAT17(-(cStack_f5 == '\0'),CONCAT16(-(cStack_f5 == '\0'),uVar7));
            auVar11._0_10_ =
                 CONCAT19(-(cStack_f4 == '\0'),CONCAT18(-(cStack_f4 == '\0'),auVar25._0_8_));
            auVar11[10] = -(cStack_f3 == '\0');
            auVar11[0xb] = -(cStack_f3 == '\0');
            auVar24[0xc] = -(cStack_f2 == '\0');
            auVar24._0_12_ = auVar11;
            auVar24[0xd] = -(cStack_f2 == '\0');
            auVar24[0xe] = -(cStack_f1 == '\0');
            auVar24[0xf] = -(cStack_f1 == '\0');
            auVar33 = pshuflw(in_XMM1,auVar24,0x50);
            uVar32 = (undefined2)((ulonglong)auVar25._0_8_ >> 0x30);
            auVar27._12_2_ = uVar32;
            auVar27._0_12_ = auVar11;
            auVar27._14_2_ = uVar32;
            uVar32 = (undefined2)((uint6)uVar7 >> 0x20);
            auVar26._12_4_ = auVar27._12_4_;
            auVar26._10_2_ = uVar32;
            auVar26._0_10_ = auVar11._0_10_;
            auVar25._10_6_ = auVar26._10_6_;
            auVar25._8_2_ = uVar32;
            in_XMM1._0_8_ = auVar33._0_8_;
            in_XMM1._8_4_ = auVar25._8_4_;
            in_XMM1._12_4_ = auVar26._12_4_ ^ 0xffffffff;
            iVar2 = movmskps((int)uVar6,in_XMM1);
            uVar1 = 1;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 != '\x01') goto LAB_1406411ca;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 == '\x01') goto LAB_1406411c8;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x80);
          uStack_87 = 0;
          uStack_80 = 0;
          uStack_97 = 0;
          uStack_8f = 0;
          local_88 = 0;
          local_a7 = 0;
          uStack_9f = 0;
          local_b7 = 0;
          uStack_af = 0;
          local_c7 = 0;
          uStack_bf = 0;
          local_d7 = 0;
          uStack_cf = 0;
          uStack_e4 = 0;
          uStack_df = 0;
          cStack_f7 = '\0';
          cStack_f6 = '\0';
          cStack_f5 = '\0';
          cStack_f4 = '\0';
          cStack_f3 = '\0';
          cStack_f2 = '\0';
          cStack_f1 = '\0';
          uStack_f0 = 0;
          uStack_ef = 0;
          local_e8 = 0;
          local_f8 = '\x03';
          uVar3 = FUN_14017a690(uVar6,&local_f8,0x80);
          if (uVar3 == 0) {
            FUN_140118490(1);
          }
          else if (-1 < (int)uVar3) {
            uVar7 = CONCAT15(-(cStack_f6 == '\x03'),
                             CONCAT14(-(cStack_f6 == '\x03'),
                                      CONCAT13(-(cStack_f7 == '\0'),
                                               CONCAT12(-(cStack_f7 == '\0'),
                                                        CONCAT11(-(local_f8 == '\x01'),
                                                                 -(local_f8 == '\x01'))))));
            auVar29._0_8_ = CONCAT17(-(cStack_f5 == '\0'),CONCAT16(-(cStack_f5 == '\0'),uVar7));
            auVar12._0_10_ =
                 CONCAT19(-(cStack_f4 == '\0'),CONCAT18(-(cStack_f4 == '\0'),auVar29._0_8_));
            auVar12[10] = -(cStack_f3 == '\0');
            auVar12[0xb] = -(cStack_f3 == '\0');
            auVar28[0xc] = -(cStack_f2 == '\0');
            auVar28._0_12_ = auVar12;
            auVar28[0xd] = -(cStack_f2 == '\0');
            auVar28[0xe] = -(cStack_f1 == '\0');
            auVar28[0xf] = -(cStack_f1 == '\0');
            auVar33 = pshuflw(in_XMM1,auVar28,0x50);
            uVar32 = (undefined2)((ulonglong)auVar29._0_8_ >> 0x30);
            auVar31._12_2_ = uVar32;
            auVar31._0_12_ = auVar12;
            auVar31._14_2_ = uVar32;
            uVar32 = (undefined2)((uint6)uVar7 >> 0x20);
            auVar30._12_4_ = auVar31._12_4_;
            auVar30._10_2_ = uVar32;
            auVar30._0_10_ = auVar12._0_10_;
            auVar29._10_6_ = auVar30._10_6_;
            auVar29._8_2_ = uVar32;
            auVar34._0_8_ = auVar33._0_8_;
            auVar34._8_4_ = auVar29._8_4_;
            auVar34._12_4_ = auVar30._12_4_ ^ 0xffffffff;
            iVar2 = movmskps((int)uVar6,auVar34);
            uVar1 = 1;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 != '\x01') goto LAB_1406411ca;
            if ((iVar2 == 0xf && 4 < uVar3) && cStack_f4 == '\x01') goto LAB_1406411c8;
          }
        }
        else if (-1 < (int)uVar3) {
          uVar7 = CONCAT15(-(cStack_f6 == '\x03'),
                           CONCAT14(-(cStack_f6 == '\x03'),
                                    CONCAT13(-(cStack_f7 == '\0'),
                                             CONCAT12(-(cStack_f7 == '\0'),
                                                      CONCAT11(-(local_f8 == '\x01'),
                                                               -(local_f8 == '\x01'))))));
          auVar13._0_8_ = CONCAT17(-(cStack_f5 == '\0'),CONCAT16(-(cStack_f5 == '\0'),uVar7));
          auVar8._0_10_ =
               CONCAT19(-(cStack_f4 == '\0'),CONCAT18(-(cStack_f4 == '\0'),auVar13._0_8_));
          auVar8[10] = -(cStack_f3 == '\0');
          auVar8[0xb] = -(cStack_f3 == '\0');
          auVar33[0xc] = -(cStack_f2 == '\0');
          auVar33._0_12_ = auVar8;
          auVar33[0xd] = -(cStack_f2 == '\0');
          auVar33[0xe] = -(cStack_f1 == '\0');
          auVar33[0xf] = -(cStack_f1 == '\0');
          auVar33 = pshuflw(in_XMM1,auVar33,0x50);
          uVar32 = (undefined2)((ulonglong)auVar13._0_8_ >> 0x30);
          auVar15._12_2_ = uVar32;
          auVar15._0_12_ = auVar8;
          auVar15._14_2_ = uVar32;
          uVar32 = (undefined2)((uint6)uVar7 >> 0x20);
          auVar14._12_4_ = auVar15._12_4_;
          auVar14._10_2_ = uVar32;
          auVar14._0_10_ = auVar8._0_10_;
          auVar13._10_6_ = auVar14._10_6_;
          auVar13._8_2_ = uVar32;
          in_XMM1._0_8_ = auVar33._0_8_;
          in_XMM1._8_4_ = auVar13._8_4_;
          in_XMM1._12_4_ = auVar14._12_4_ ^ 0xffffffff;
          iVar2 = movmskps((int)uVar6,in_XMM1);
          uVar1 = 1;
          if ((iVar2 != 0xf || uVar3 < 5) || cStack_f4 == '\x01') {
            if ((iVar2 != 0xf || uVar3 < 5) || cStack_f4 != '\x01') goto LAB_140640f06;
LAB_1406411c8:
            uVar1 = 0;
          }
LAB_1406411ca:
          *(undefined1 *)(plVar5 + 1) = uVar1;
        }
LAB_1406411cd:
        parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_STEAM_PAIRING_ENABLED",FUN_140643060,plVar5);
        uVar6 = 1;
        if ((char)plVar5[1] != '\x01') goto LAB_1406411f5;
        goto LAB_1406411eb;
      }
    }
    uVar6 = FUN_1400fbed0("Failed to send ID_DONGLE_GET_WIRELESS_STATE request");
  }
  else {
    *(undefined1 *)(plVar5 + 1) = 1;
LAB_1406411eb:
    uVar6 = FUN_140440300(param_1,0);
  }
LAB_1406411f5:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_118);
  }
  return uVar6;
}


/**
 * Function: couldnt_start_usb_reports
 * Address:  140647ea0
 * Signature: undefined couldnt_start_usb_reports(void)
 * Body size: 3379 bytes
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 couldnt_start_usb_reports(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  byte *pbVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  uint uVar21;
  char *pcVar22;
  ushort uVar23;
  ushort uVar24;
  undefined8 uVar25;
  short sVar26;
  short sVar27;
  ushort uVar28;
  byte *pbVar29;
  uint uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  short sVar36;
  undefined2 *puVar37;
  ushort uVar38;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  plVar5 = *(longlong **)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  plVar5[1] = param_2;
  *(undefined1 *)(plVar5 + 3) = 1;
  if ((char)plVar5[2] == '\0') {
    if ((*(char *)((longlong)plVar5 + 0x24) == '\0') &&
       (iVar13 = FUN_140106170(*plVar5 + 0x88), iVar13 < 1)) {
      iVar13 = FUN_14017a630(*(undefined8 *)(*plVar5 + 0x80),plVar5 + 8,0x40,0);
      if ((0 < iVar13) &&
         (((char)plVar5[2] == '\0' && (*(char *)((longlong)plVar5 + 0x24) == '\0')))) {
        bVar1 = *(byte *)(plVar5 + 8);
        if (((ulonglong)bVar1 < 0x40) &&
           ((0x8003000000000000U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) {
          *(byte *)((longlong)plVar5 + 0x24) = bVar1;
        }
      }
    }
    *(undefined1 *)((longlong)plVar5 + 0x25) = *(undefined1 *)((longlong)plVar5 + 0x24);
    plVar5[7] = 0x4040010040400100;
    local_f8 = param_1;
    if (*(char *)(param_1 + 0x54) == '\0') {
      cVar9 = FUN_140649800(plVar5,2,1);
      if (cVar9 != '\0') {
        FUN_140649800(plVar5,3,1);
        FUN_140649800(plVar5,2,1);
        if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
          iVar13 = 0;
          do {
            uStack_be = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_ce = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_bf = 0;
            uStack_de = 0;
            uStack_dc = 0;
            uStack_d8 = 0;
            uStack_d6 = 0;
            uStack_d2 = 0;
            uStack_d0 = 0;
            local_e0 = 0x480;
            uVar25 = 0x31;
            puVar37 = &local_e0;
            if (*(char *)(*plVar5 + 0x54) == '\0') {
              local_78 = 0;
              uStack_a6 = 0;
              local_98 = 0;
              local_88 = ZEXT816(0);
              uStack_90 = 0;
              local_a8._0_1_ = 0x80;
              local_a8._1_1_ = 4;
              uStack_a0 = 0;
              local_9e = 0;
              local_9a = 0;
              uStack_6f = 0;
              local_77 = 0;
              uStack_70 = 0;
              uVar25 = 0x40;
              puVar37 = &local_a8;
            }
            if ((char)plVar5[3] == '\0') {
              cVar9 = hidapi_rumble();
              if (cVar9 != '\0') {
                iVar14 = FUN_14064f890(*plVar5,puVar37,uVar25);
                goto joined_r0x000140648155;
              }
            }
            else {
              iVar14 = FUN_14017a5d0(*(undefined8 *)(*plVar5 + 0x80),puVar37,uVar25);
joined_r0x000140648155:
              if (-1 < iVar14) goto LAB_140648027;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)((longlong)plVar5 + 0x1c));
        }
      }
      pcVar22 = "Couldn\'t setup USB mode";
    }
    else {
LAB_140648027:
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      uStack_a6 = 0;
      local_e0 = 0;
      uStack_de = 0;
      uStack_dc = 0;
      local_e8 = 0x8010;
      local_e4 = 0x16;
      local_108 = &local_a8;
      FUN_140649540(plVar5,0x10,&local_e8,5);
      local_f0 = 0x603d;
      local_ec = 0x12;
      local_108 = &local_e0;
      cVar9 = FUN_140649540(plVar5,0x10,&local_f0,5);
      lVar15 = local_f8;
      if (cVar9 == '\0') {
        pcVar22 = "Couldn\'t load stick calibration";
      }
      else {
        lVar6 = CONCAT62(uStack_a6,CONCAT11(local_a8._1_1_,(undefined1)local_a8));
        if (lVar6 == 0) {
          pbVar16 = (byte *)(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)) + 0x13);
LAB_1406482d6:
          pbVar29 = (byte *)(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)) + 0x1c);
        }
        else {
          if ((*(char *)(lVar6 + 0x13) != -0x4e) || (*(char *)(lVar6 + 0x14) != -0x5f)) {
            pbVar16 = (byte *)(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)) + 0x13);
            if (*(char *)(lVar6 + 0x1e) == -0x4e) goto LAB_1406482c0;
            goto LAB_1406482d6;
          }
          pbVar16 = (byte *)(lVar6 + 0x15);
          if (*(char *)(lVar6 + 0x1e) != -0x4e) goto LAB_1406482d6;
LAB_1406482c0:
          if (*(char *)(lVar6 + 0x1f) != -0x5f) goto LAB_1406482d6;
          pbVar29 = (byte *)(lVar6 + 0x20);
        }
        *(ushort *)(plVar5 + 0x23) = (ushort)*pbVar16 | (pbVar16[1] & 0xf) << 8;
        *(ushort *)((longlong)plVar5 + 0x11e) = (ushort)(pbVar16[1] >> 4) | (ushort)pbVar16[2] << 4;
        uVar17 = (pbVar16[4] & 0xf) << 8;
        bVar1 = pbVar16[3];
        uVar34 = bVar1 | uVar17;
        *(ushort *)((longlong)plVar5 + 0x114) = uVar34;
        uVar33 = (ushort)(pbVar16[4] >> 4) | (ushort)pbVar16[5] << 4;
        *(ushort *)((longlong)plVar5 + 0x11a) = uVar33;
        uVar18 = (pbVar16[7] & 0xf) << 8;
        bVar2 = pbVar16[6];
        uVar23 = bVar2 | uVar18;
        *(ushort *)((longlong)plVar5 + 0x116) = uVar23;
        uVar11 = (ushort)(pbVar16[7] >> 4) | (ushort)pbVar16[8] << 4;
        *(ushort *)((longlong)plVar5 + 0x11c) = uVar11;
        uVar19 = (pbVar29[1] & 0xf) << 8;
        uVar38 = (ushort)*pbVar29;
        *(ushort *)(plVar5 + 0x24) = *pbVar29 | uVar19;
        uVar32 = (ushort)(pbVar29[1] >> 4) | (ushort)pbVar29[2] << 4;
        *(ushort *)((longlong)plVar5 + 0x126) = uVar32;
        uVar21 = (pbVar29[4] & 0xf) << 8;
        bVar3 = pbVar29[3];
        uVar30 = bVar3 | uVar21;
        *(short *)((longlong)plVar5 + 0x122) = (short)uVar30;
        uVar20 = (ushort)(pbVar29[4] >> 4) | (ushort)pbVar29[5] << 4;
        *(ushort *)(plVar5 + 0x25) = uVar20;
        uVar24 = (pbVar29[7] & 0xf) << 8;
        bVar4 = pbVar29[6];
        uVar31 = bVar4 | uVar24;
        *(ushort *)((longlong)plVar5 + 0x124) = uVar31;
        uVar28 = (ushort)(pbVar29[7] >> 4) | (ushort)pbVar29[8] << 4;
        *(ushort *)((longlong)plVar5 + 0x12a) = uVar28;
        if (uVar34 == 0xfff) {
          *(undefined2 *)((longlong)plVar5 + 0x114) = 0x800;
          sVar27 = (short)plVar5[0x23];
          uVar17 = 0x800;
          if (sVar27 == 0xfff) goto LAB_1406487d0;
LAB_140648436:
          if ((ushort)(bVar2 | uVar18) != 0xfff) goto LAB_140648447;
LAB_1406487f8:
          uVar23 = (ushort)(int)((float)uVar17 * 0.7);
          *(ushort *)((longlong)plVar5 + 0x116) = uVar23;
          if (uVar33 == 0xfff) goto LAB_140648822;
LAB_140648457:
          sVar36 = *(short *)((longlong)plVar5 + 0x11e);
          if (sVar36 != 0xfff) goto LAB_140648470;
LAB_140648849:
          sVar36 = (short)(int)((float)uVar33 * 0.7);
          *(short *)((longlong)plVar5 + 0x11e) = sVar36;
          if (uVar11 == 0xfff) goto LAB_140648876;
LAB_140648481:
          if ((uVar38 | uVar19) != 0xfff) goto LAB_140648491;
LAB_1406488a0:
          *(undefined2 *)(plVar5 + 0x24) = 0x800;
          uVar38 = 0x800;
        }
        else {
          sVar27 = (short)plVar5[0x23];
          uVar17 = bVar1 | uVar17;
          if (sVar27 != 0xfff) goto LAB_140648436;
LAB_1406487d0:
          sVar27 = (short)(int)((float)uVar17 * 0.7);
          *(short *)(plVar5 + 0x23) = sVar27;
          if ((ushort)(bVar2 | uVar18) == 0xfff) goto LAB_1406487f8;
LAB_140648447:
          if (uVar33 != 0xfff) goto LAB_140648457;
LAB_140648822:
          *(undefined2 *)((longlong)plVar5 + 0x11a) = 0x800;
          sVar36 = *(short *)((longlong)plVar5 + 0x11e);
          uVar33 = 0x800;
          if (sVar36 == 0xfff) goto LAB_140648849;
LAB_140648470:
          if (uVar11 != 0xfff) goto LAB_140648481;
LAB_140648876:
          uVar11 = (ushort)(int)((float)uVar33 * 0.7);
          *(ushort *)((longlong)plVar5 + 0x11c) = uVar11;
          if ((uVar38 | uVar19) == 0xfff) goto LAB_1406488a0;
LAB_140648491:
          uVar38 = uVar38 | uVar19;
        }
        if ((ushort)(bVar4 | uVar24) == 0xfff) {
          uVar31 = (ushort)(int)((float)uVar38 * 0.7);
          *(ushort *)((longlong)plVar5 + 0x124) = uVar31;
        }
        if ((bVar3 | uVar21) == 0xfff) {
          uVar30 = (uint)((float)uVar38 * 0.7);
          *(short *)((longlong)plVar5 + 0x122) = (short)uVar30;
        }
        if (uVar32 == 0xfff) {
          *(undefined2 *)((longlong)plVar5 + 0x126) = 0x800;
          uVar32 = 0x800;
        }
        if (uVar28 == 0xfff) {
          uVar28 = (ushort)(int)((float)uVar32 * 0.7);
          *(ushort *)((longlong)plVar5 + 0x12a) = uVar28;
        }
        if (uVar20 == 0xfff) {
          uVar20 = (ushort)(int)((float)uVar32 * 0.7);
          *(ushort *)(plVar5 + 0x25) = uVar20;
        }
        *(short *)((longlong)plVar5 + 300) = -(short)(int)((float)(int)(short)uVar23 * 0.7);
        *(short *)((longlong)plVar5 + 0x12e) = (short)(int)((float)(int)sVar27 * 0.7);
        *(short *)(plVar5 + 0x26) = -(short)(int)((float)(int)(short)uVar11 * 0.7);
        *(short *)((longlong)plVar5 + 0x132) = (short)(int)((float)(int)sVar36 * 0.7);
        *(short *)((longlong)plVar5 + 0x134) = -(short)(int)((float)(int)(short)uVar30 * 0.7);
        *(short *)((longlong)plVar5 + 0x136) = (short)(int)((float)(int)(short)uVar31 * 0.7);
        *(short *)(plVar5 + 0x27) = -(short)(int)((float)(int)(short)uVar20 * 0.7);
        *(short *)((longlong)plVar5 + 0x13a) = (short)(int)((float)(int)(short)uVar28 * 0.7);
        *(undefined8 *)((longlong)plVar5 + 0x13c) = 0x3fffc0003fffc000;
        *(undefined8 *)((longlong)plVar5 + 0x144) = 0x3fffc0003fffc000;
        if (6 < (int)plVar5[4] - 7U) {
          local_a8._0_1_ = 0;
          local_a8._1_1_ = 0;
          uStack_a6 = 0;
          local_e0 = 0x6020;
          uStack_de = 0;
          uStack_dc = CONCAT31(uStack_dc._1_3_,0x18);
          local_108 = &local_a8;
          cVar9 = FUN_140649540(plVar5,0x10,&local_e0,CONCAT71((uint7)(uint3)(int3)(uVar30 >> 8),5))
          ;
          if (cVar9 == '\0') {
            *(undefined8 *)((longlong)plVar5 + 0x14c) = 0x3b1ce80a3b1ce80a;
            *(undefined8 *)((longlong)plVar5 + 0x154) = 0x3aa026d23b1ce80a;
            *(undefined4 *)((longlong)plVar5 + 0x15c) = 0x3aa026d2;
            fVar39 = 0.0012218601;
          }
          else {
            lVar15 = CONCAT62(uStack_a6,CONCAT11(local_a8._1_1_,(undefined1)local_a8));
            sVar27 = *(short *)(lVar15 + 0x13);
            sVar36 = *(short *)(lVar15 + 0x1f);
            uVar21 = *(uint *)(lVar15 + 0x15) & ((uint)DAT_14120f430 | 0xff00ff00);
            sVar35 = *(short *)(lVar15 + 0x21);
            sVar26 = *(short *)(lVar15 + 0x23);
            local_e0 = 0x8026;
            uStack_de = 0;
            uStack_dc = CONCAT31(uStack_dc._1_3_,0x14);
            local_108 = &local_a8;
            cVar9 = FUN_140649540(plVar5,0x10,&local_e0,5);
            auVar40._8_8_ = extraout_XMM0_Qb;
            auVar40._0_8_ = extraout_XMM0_Qa;
            if ((cVar9 != '\0') && (*(short *)(lVar15 + 0x13) == -0x5e4e)) {
              lVar15 = CONCAT62(uStack_a6,CONCAT11(local_a8._1_1_,(undefined1)local_a8));
              sVar27 = *(short *)(lVar15 + 0x15);
              sVar36 = *(short *)(lVar15 + 0x21);
              uVar21 = *(uint *)(lVar15 + 0x17);
              sVar35 = *(short *)(lVar15 + 0x23);
              sVar26 = *(short *)(lVar15 + 0x25);
            }
            auVar7._10_2_ = 0;
            auVar7._0_10_ = auVar40._0_10_;
            auVar7._12_2_ = (short)((ulonglong)extraout_XMM0_Qa >> 0x30);
            auVar8._8_2_ = (short)((ulonglong)extraout_XMM0_Qa >> 0x20);
            auVar8._0_8_ = extraout_XMM0_Qa;
            auVar8._10_4_ = auVar7._10_4_;
            auVar42._0_4_ = (float)(int)(short)uVar21;
            auVar42._4_4_ = auVar42._0_4_;
            auVar42._8_4_ = 13371.0 - (float)(int)sVar36;
            auVar42._12_4_ = 13371.0 - (float)(int)sVar36;
            auVar40 = divps(_DAT_14120f460,auVar42);
            auVar43._4_4_ = 16384.0 - auVar42._0_4_;
            auVar43._0_4_ = 16384.0 - (float)(int)sVar27;
            auVar43._8_4_ =
                 16384.0 - (float)((int)CONCAT82(CONCAT62(auVar8._8_6_,(short)(uVar21 >> 0x10)),
                                                 (short)((ulonglong)extraout_XMM0_Qa >> 0x10)) >>
                                  0x10);
            auVar43._12_4_ = 0;
            auVar43 = divps(_DAT_14120f470,auVar43);
            auVar41._0_4_ = auVar40._0_4_ * 0.0;
            auVar41._4_4_ = auVar40._4_4_ * 0.0;
            auVar41._8_4_ = auVar40._8_4_ * 0.0;
            auVar41._12_4_ = auVar40._12_4_ * 3.1415927;
            auVar40 = divps(auVar41,_DAT_14120f4a0);
            *(float *)((longlong)plVar5 + 0x14c) = auVar43._0_4_ * 9.80665;
            *(float *)(plVar5 + 0x2a) = auVar43._4_4_ * 9.80665;
            *(float *)((longlong)plVar5 + 0x154) = auVar43._8_4_ * 9.80665;
            *(int *)(plVar5 + 0x2b) = auVar40._12_4_;
            *(float *)((longlong)plVar5 + 0x15c) =
                 ((936.0 / (13371.0 - (float)(int)sVar35)) * 3.1415927) / 180.0;
            fVar39 = ((936.0 / (13371.0 - (float)(int)sVar26)) * 3.1415927) / 180.0;
            lVar15 = local_f8;
          }
          *(float *)(plVar5 + 0x2c) = fVar39;
          *(undefined1 *)(plVar5 + 0x13) = 1;
        }
        local_a8._0_1_ = 1;
        local_108 = (undefined2 *)0x0;
        FUN_140649540(plVar5,0x48,&local_a8,1);
        parameter_s_is_invalid("SDL_JOYSTICK_ENHANCED_REPORTS",FUN_14064a150,plVar5);
        if (*(char *)(lVar15 + 0x54) != '\0') {
LAB_1406489f0:
          param_1 = local_f8;
          sVar27 = *(short *)(*plVar5 + 0x20);
          sVar36 = *(short *)(*plVar5 + 0x22);
          if ((((sVar27 != 0 || sVar36 != 0) && (sVar36 != 0xf6 || sVar27 != 0xf0d)) &&
              (iVar13 = (int)plVar5[4], iVar13 != 0)) &&
             ((iVar13 != 6 && (sVar27 != 0x57e || iVar13 < 4)))) {
            pcVar22 = "SDL_JOYSTICK_HIDAPI_SWITCH_HOME_LED";
            if (iVar13 - 1U < 2) {
              pcVar22 = "SDL_JOYSTICK_HIDAPI_JOYCON_HOME_LED";
            }
            parameter_s_is_invalid(pcVar22,FUN_14064a2c0,plVar5);
          }
          goto LAB_140647eef;
        }
        if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
          iVar13 = 0;
          do {
            uStack_be = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_ce = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_bf = 0;
            uStack_de = 0;
            uStack_dc = 0;
            uStack_d8 = 0;
            uStack_d6 = 0;
            uStack_d2 = 0;
            uStack_d0 = 0;
            local_e0 = 0x480;
            uVar25 = 0x31;
            puVar37 = &local_e0;
            if (*(char *)(*plVar5 + 0x54) == '\0') {
              local_78 = 0;
              uStack_a6 = 0;
              local_98 = 0;
              local_88 = ZEXT216(0);
              uStack_90 = 0;
              local_a8._0_1_ = 0x80;
              local_a8._1_1_ = 4;
              uStack_a0 = 0;
              local_9e = 0;
              local_9a = 0;
              uStack_6f = 0;
              local_77 = 0;
              uStack_70 = 0;
              uVar25 = 0x40;
              puVar37 = &local_a8;
            }
            if ((char)plVar5[3] == '\0') {
              cVar9 = hidapi_rumble();
              if (cVar9 != '\0') {
                iVar14 = FUN_14064f890(*plVar5,puVar37,uVar25);
                goto joined_r0x000140648ab5;
              }
            }
            else {
              iVar14 = FUN_14017a5d0(*(undefined8 *)(*plVar5 + 0x80),puVar37,uVar25);
joined_r0x000140648ab5:
              if (-1 < iVar14) goto LAB_1406489f0;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)((longlong)plVar5 + 0x1c));
        }
        pcVar22 = "Couldn\'t start USB reports";
      }
    }
    FUN_1400fbed0(pcVar22);
    uVar25 = 0;
  }
  else {
LAB_140647eef:
    uVar21 = *(uint *)(plVar5 + 4);
    cVar9 = FUN_14012d100(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
    if ((cVar9 != '\0') || ((uVar21 < 0xe && ((0x3780U >> (uVar21 & 0x1f) & 1) != 0)))) {
      *(undefined1 *)((longlong)plVar5 + 0x11) = 1;
    }
    uVar12 = parameter_s_is_invalid(param_2);
    *(undefined4 *)((longlong)plVar5 + 0x14) = uVar12;
    uVar25 = CONCAT71((uint7)(uint3)(uVar21 >> 8),1);
    cVar9 = FUN_1401106d0("SDL_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED",1);
    *(char *)((longlong)plVar5 + 0x12) = cVar9;
    if ((char)plVar5[2] == '\0') {
      local_a8._0_1_ = 0;
      if ((cVar9 != '\0') && (-1 < *(int *)((longlong)plVar5 + 0x14))) {
        local_a8._0_1_ = (undefined1)(1 << ((byte)*(int *)((longlong)plVar5 + 0x14) & 3));
      }
      local_108 = (undefined2 *)0x0;
      FUN_140649540(plVar5,0x30,&local_a8,1);
    }
    parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED",FUN_14064a3e0,plVar5);
    *(undefined4 *)(param_2 + 0x70) = 0x10;
    *(undefined4 *)(param_2 + 0x40) = 6;
    *(undefined4 *)(param_2 + 0x60) = 1;
    *(undefined1 *)(plVar5 + 3) = 0;
    lVar15 = sdl_timer_resolution();
    plVar5[0x14] = lVar15;
    plVar5[0x15] = lVar15;
    plVar5[0x18] = 5000000;
    uVar10 = FUN_1401106d0("SDL_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS",0);
    *(undefined1 *)(plVar5 + 0x1a) = uVar10;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_128)) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_128);
}


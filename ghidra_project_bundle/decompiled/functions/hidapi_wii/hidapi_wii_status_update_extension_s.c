/**
 * Function: hidapi_wii_status_update_extension_s
 * Address:  14064a870
 * Signature: undefined hidapi_wii_status_update_extension_s(void)
 * Body size: 2596 bytes
 */


ulonglong hidapi_wii_status_update_extension_s(longlong param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  byte bVar18;
  byte bVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [32];
  char *local_b8;
  byte *local_b0;
  char *local_a8;
  byte *local_a0;
  char *local_98;
  undefined1 local_8f;
  byte local_8e;
  undefined4 local_8d;
  undefined1 local_89;
  undefined1 local_88;
  byte bStack_87;
  undefined2 uStack_86;
  byte bStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined2 uStack_7d;
  char cStack_7b;
  undefined2 uStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  uint uStack_74;
  undefined2 uStack_70;
  undefined1 auStack_6e [14];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  uVar20 = 0;
  if (*(int *)(param_1 + 0x8c) < 1) goto LAB_14064b251;
  plVar3 = *(longlong **)(param_1 + 0x70);
  lVar11 = FUN_14012a270(**(undefined4 **)(param_1 + 0x90));
  uVar12 = sdl_timer_resolution();
  iVar9 = FUN_140106170(*plVar3 + 0x88);
  if (iVar9 < 1) {
    pbVar1 = (byte *)((longlong)plVar3 + 0x2c);
    if (lVar11 == 0) {
      do {
        uVar10 = FUN_14017a630(*(undefined8 *)(*plVar3 + 0x80),pbVar1,0x16,0);
        if ((int)uVar10 < 1) goto LAB_14064b157;
        plVar3[9] = uVar12;
        iVar9 = FUN_140106170(*plVar3 + 0x88);
      } while (iVar9 < 1);
    }
    else {
      local_b8 = (char *)((longlong)plVar3 + 0x2d);
      local_b0 = (byte *)((longlong)plVar3 + 0x2f);
      local_a0 = (byte *)((longlong)plVar3 + 0x32);
      local_98 = (char *)((longlong)plVar3 + 0x39);
      local_a8 = (char *)((longlong)plVar3 + 0x3c);
      do {
        uVar10 = FUN_14017a630(*(undefined8 *)(*plVar3 + 0x80),pbVar1,0x16,0);
        if ((int)uVar10 < 1) goto LAB_14064b157;
        bVar18 = *(byte *)((longlong)plVar3 + 0x2c);
        lVar13 = sdl_timer_resolution();
        plVar3[2] = lVar13;
        if (bVar18 == 0x20) {
          iVar9 = *(int *)((longlong)plVar3 + 0x1c);
          bVar18 = *(byte *)((longlong)plVar3 + 0x2f);
          uStack_76 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          auStack_6e[1] = 0;
          auStack_6e[2] = 0;
          uStack_86 = 0;
          bStack_84 = 0;
          uStack_83 = 0;
          uStack_82 = 0;
          uStack_81 = 0;
          uStack_80 = 0;
          uStack_7f = 0;
          uStack_7e = 0;
          uStack_7d = 0;
          cStack_7b = '\0';
          uStack_7a = 0;
          uStack_78 = 0;
          uStack_77 = 0;
          local_88 = (undefined1)*(undefined2 *)((longlong)plVar3 + 0x2d);
          bStack_87 = (byte)((ushort)*(undefined2 *)((longlong)plVar3 + 0x2d) >> 8);
          auStack_6e[0] = 1;
          FUN_14064bc40(plVar3,lVar11,&local_88);
          uVar15 = 0x3d;
          if (*(int *)((longlong)plVar3 + 0x1c) != 0x83) {
            bVar19 = *local_a0;
            uVar16 = 100;
            if (((bVar19 < 0xb3) && (uVar16 = 0x46, bVar19 < 0x34)) && (uVar16 = 0x14, bVar19 < 0xe)
               ) {
              uVar16 = 5;
            }
            FUN_14012ea50(lVar11,1,uVar16);
            uVar7 = 0x32;
            if (1 < *(int *)((longlong)plVar3 + 0x1c) - 0x81U) {
              if (*(int *)((longlong)plVar3 + 0x1c) == 0x83) goto LAB_14064aa30;
              uVar7 = 0x30;
            }
            uVar15 = 0x35;
            if (*(char *)((longlong)plVar3 + 0x2b) == '\0') {
              uVar15 = uVar7;
            }
          }
LAB_14064aa30:
          local_8e = *(byte *)(plVar3 + 5) | 4;
          local_8f = 0x12;
          local_8d = CONCAT31(local_8d._1_3_,uVar15);
          cVar8 = hidapi_rumble();
          if (cVar8 != '\0') {
            FUN_14064f890(*plVar3,&local_8f,3);
          }
          pcVar17 = "DISCONNECTED";
          bVar18 = bVar18 & 2;
          if (bVar18 != 0) {
            pcVar17 = "CONNECTED";
          }
          FUN_1400fb830(7,"HIDAPI Wii: Status update, extension %s",pcVar17);
          if (*(char *)((longlong)plVar3 + 0x2a) == '\0') {
            if ((bool)(bVar18 >> 1) != (iVar9 != 0x80)) {
              *(undefined1 *)(plVar3 + 0xc) = 1;
            }
          }
          else if (*(int *)((longlong)plVar3 + 0x1c) != 0x83) {
            lVar13 = sdl_timer_resolution();
            plVar3[0xb] = lVar13;
          }
        }
        else {
          if ((byte)(bVar18 - 0x21) < 2) {
            uStack_76 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            auStack_6e[1] = 0;
            auStack_6e[2] = 0;
            uStack_86 = 0;
            bStack_84 = 0;
            uStack_83 = 0;
            uStack_82 = 0;
            uStack_81 = 0;
            uStack_80 = 0;
            uStack_7f = 0;
            uStack_7e = 0;
            uStack_7d = 0;
            cStack_7b = '\0';
            uStack_7a = 0;
            uStack_78 = 0;
            uStack_77 = 0;
            local_88 = (undefined1)*(undefined2 *)((longlong)plVar3 + 0x2d);
            bStack_87 = (byte)((ushort)*(undefined2 *)((longlong)plVar3 + 0x2d) >> 8);
            auStack_6e[0] = 1;
            FUN_14064bc40(plVar3,lVar11,&local_88);
            iVar9 = (int)plVar3[3];
            if (1 < iVar9 - 1U) goto LAB_14064a930;
            if (*pbVar1 == 0x21) {
              if (((char)plVar3[6] == '\0') && (*(char *)((longlong)plVar3 + 0x31) == -2)) {
                bVar18 = *local_b0;
                if (bVar18 == 0x10) {
                  if ((ushort)((*(byte *)((longlong)plVar3 + 0x32) & 0xfff0) << 8 |
                              (ushort)*(byte *)((longlong)plVar3 + 0x33)) == 5) {
                    FUN_1400fb830(7,"HIDAPI Wii: Motion Plus CONNECTED (stage %d)",
                                  (iVar9 != 1) + '\x01');
                    if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
LAB_14064ab63:
                      *(undefined1 *)(plVar3 + 0xc) = 1;
                    }
                  }
                  else {
LAB_14064b073:
                    if (iVar9 == 1) {
                      local_8f = 0x17;
                      local_8e = *(byte *)(plVar3 + 5) | 4;
                      local_8d = 0xfe00a6;
                      local_89 = 2;
                      cVar8 = hidapi_rumble();
                      if (cVar8 != '\0') {
                        FUN_14064f890(*plVar3,&local_8f,7);
                      }
                      *(undefined4 *)(plVar3 + 3) = 2;
                      goto LAB_14064a930;
                    }
                    FUN_1400fb830(7,"HIDAPI Wii: Motion Plus DISCONNECTED (stage %d)",2);
                    if (*(char *)((longlong)plVar3 + 0x29) == '\x01') goto LAB_14064ab63;
                  }
                  *(undefined4 *)(plVar3 + 3) = 0;
                }
                else if ((bVar18 & 0xf) == 0) {
                  FUN_1400fbed0("Unexpected read length when reading extension type: %d",
                                (bVar18 >> 4) + 1);
                }
                else {
                  if ((bVar18 & 0xf) == 7) goto LAB_14064b073;
                  FUN_1400fbed0("Failed to read extension type: %u");
                }
                goto LAB_14064a930;
              }
              pcVar17 = "Unexpected extension response address";
            }
            else {
              pcVar17 = "Unexpected extension response type";
            }
            FUN_1400fbed0(pcVar17);
            goto LAB_14064a930;
          }
          if ((bVar18 & 0xf0) != 0x30) {
            pcVar17 = "HIDAPI Wii: Unexpected input packet of type %x";
LAB_14064aca8:
            FUN_1400fb830(7,pcVar17,bVar18);
            goto LAB_14064a930;
          }
          bVar18 = 0x32;
          if (*(int *)((longlong)plVar3 + 0x1c) - 0x81U < 2) {
LAB_14064abb3:
            bVar19 = 0x35;
            if (*(char *)((longlong)plVar3 + 0x2b) == '\0') {
              bVar19 = bVar18;
            }
          }
          else {
            bVar19 = 0x3d;
            if (*(int *)((longlong)plVar3 + 0x1c) != 0x83) {
              bVar18 = 0x30;
              goto LAB_14064abb3;
            }
          }
          bVar18 = *pbVar1;
          if (bVar19 != bVar18) {
            FUN_1400fb830(7,"HIDAPI Wii: Resetting report mode to %d",bVar19);
            local_8e = *(byte *)(plVar3 + 5) | 4;
            local_8f = 0x12;
            local_8d = CONCAT31(local_8d._1_3_,bVar19);
            cVar8 = hidapi_rumble();
            if (cVar8 != '\0') {
              FUN_14064f890(*plVar3,&local_8f,3);
            }
            bVar18 = *pbVar1;
          }
          uStack_78 = 0;
          uStack_77 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          auStack_6e[0] = 0;
          auStack_6e[1] = 0;
          auStack_6e[2] = 0;
          local_88 = 0;
          bStack_87 = 0;
          uStack_86 = 0;
          bStack_84 = 0;
          uStack_83 = 0;
          uStack_82 = 0;
          uStack_81 = 0;
          uStack_80 = 0;
          uStack_7f = 0;
          uStack_7e = 0;
          uStack_7d = 0;
          cStack_7b = '\0';
          uStack_7a = 0;
          switch(bVar18) {
          case 0x30:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            uVar15 = 1;
            puVar14 = auStack_6e;
            break;
          case 0x31:
          case 0x33:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            bStack_84 = local_b0[2];
            uStack_86 = *(undefined2 *)local_b0;
            uVar15 = 1;
            puVar14 = auStack_6e + 1;
            break;
          case 0x32:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            if (((*local_b0 != 0xff) || ((char)plVar3[6] != -1)) ||
               (((*(char *)((longlong)plVar3 + 0x31) != -1 ||
                 (((*local_a0 != 0xff || (*(char *)((longlong)plVar3 + 0x33) != -1)) ||
                  (*(char *)((longlong)plVar3 + 0x34) != -1)))) ||
                ((*(char *)((longlong)plVar3 + 0x35) != -1 ||
                 (*(char *)((longlong)plVar3 + 0x36) != -1)))))) {
              uVar16 = *(undefined8 *)local_b0;
              uStack_83 = (undefined1)uVar16;
              uStack_82 = (undefined1)((ulonglong)uVar16 >> 8);
              uStack_81 = (undefined1)((ulonglong)uVar16 >> 0x10);
              uStack_80 = (undefined1)((ulonglong)uVar16 >> 0x18);
              uStack_7f = (undefined1)((ulonglong)uVar16 >> 0x20);
              uStack_7e = (undefined1)((ulonglong)uVar16 >> 0x28);
              uStack_7d = (undefined2)((ulonglong)uVar16 >> 0x30);
              uVar15 = 8;
              puVar14 = auStack_6e + 2;
              break;
            }
            goto LAB_14064b03d;
          case 0x34:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            if ((((((*local_b0 == 0xff) && ((char)plVar3[6] == -1)) &&
                  ((*(char *)((longlong)plVar3 + 0x31) == -1 &&
                   ((((*local_a0 == 0xff && (*(char *)((longlong)plVar3 + 0x33) == -1)) &&
                     (*(char *)((longlong)plVar3 + 0x34) == -1)) &&
                    ((*(char *)((longlong)plVar3 + 0x35) == -1 &&
                     (*(char *)((longlong)plVar3 + 0x36) == -1)))))))) &&
                 ((*(char *)((longlong)plVar3 + 0x37) == -1 &&
                  (((char)plVar3[7] == -1 && (*local_98 == -1)))))) &&
                (((*(char *)((longlong)plVar3 + 0x3a) == -1 &&
                  (((*(char *)((longlong)plVar3 + 0x3b) == -1 && (*local_a8 == -1)) &&
                   (*(char *)((longlong)plVar3 + 0x3d) == -1)))) &&
                 (((*(char *)((longlong)plVar3 + 0x3e) == -1 &&
                   (*(char *)((longlong)plVar3 + 0x3f) == -1)) && ((char)plVar3[8] == -1)))))) &&
               (*(char *)((longlong)plVar3 + 0x41) == -1)) goto LAB_14064b03d;
            puVar14 = auStack_6e + 2;
            uVar2 = *(undefined4 *)local_b0;
            uVar4 = *(undefined4 *)(local_b0 + 4);
            uVar5 = *(undefined4 *)(local_b0 + 8);
            uVar6 = *(undefined4 *)(local_b0 + 0xc);
            uStack_83 = (undefined1)uVar2;
            uStack_82 = (undefined1)((uint)uVar2 >> 8);
            uStack_81 = (undefined1)((uint)uVar2 >> 0x10);
            uStack_80 = (undefined1)((uint)uVar2 >> 0x18);
            uStack_7f = (undefined1)uVar4;
            uStack_7e = (undefined1)((uint)uVar4 >> 8);
            uStack_7d = (undefined2)((uint)uVar4 >> 0x10);
            cStack_7b = (char)uVar5;
            uStack_7a = (undefined2)((uint)uVar5 >> 8);
            uStack_78 = (undefined1)((uint)uVar5 >> 0x18);
            uStack_77 = (undefined1)uVar6;
            uStack_76 = (undefined2)((uint)uVar6 >> 8);
            uStack_74._1_3_ = (undefined3)((uint)*(undefined4 *)(local_b0 + 0xf) >> 8);
            uStack_74._0_1_ = (undefined1)((uint)uVar6 >> 0x18);
            uVar15 = 0x13;
            break;
          case 0x35:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            bStack_84 = local_b0[2];
            uStack_86 = *(undefined2 *)local_b0;
            auStack_6e[1] = 1;
            if (((((((*local_a0 == 0xff) && (*(char *)((longlong)plVar3 + 0x33) == -1)) &&
                   (*(char *)((longlong)plVar3 + 0x34) == -1)) &&
                  (((*(char *)((longlong)plVar3 + 0x35) == -1 &&
                    (*(char *)((longlong)plVar3 + 0x36) == -1)) &&
                   ((*(char *)((longlong)plVar3 + 0x37) == -1 &&
                    (((char)plVar3[7] == -1 && (*local_98 == -1)))))))) &&
                 (*(char *)((longlong)plVar3 + 0x3a) == -1)) &&
                (((*(char *)((longlong)plVar3 + 0x3b) == -1 && (*local_a8 == -1)) &&
                 (*(char *)((longlong)plVar3 + 0x3d) == -1)))) &&
               (((*(char *)((longlong)plVar3 + 0x3e) == -1 &&
                 (*(char *)((longlong)plVar3 + 0x3f) == -1)) &&
                (((char)plVar3[8] == -1 && (*(char *)((longlong)plVar3 + 0x41) == -1))))))
            goto LAB_14064b03d;
            uVar2 = *(undefined4 *)local_a0;
            uVar4 = *(undefined4 *)(local_a0 + 4);
            uVar5 = *(undefined4 *)(local_a0 + 8);
            uStack_74 = *(uint *)(local_a0 + 0xc);
            puVar14 = auStack_6e + 2;
            uStack_83 = (undefined1)uVar2;
            uStack_82 = (undefined1)((uint)uVar2 >> 8);
            uStack_81 = (undefined1)((uint)uVar2 >> 0x10);
            uStack_80 = (undefined1)((uint)uVar2 >> 0x18);
            uStack_7f = (undefined1)uVar4;
            uStack_7e = (undefined1)((uint)uVar4 >> 8);
            uStack_7d = (undefined2)((uint)uVar4 >> 0x10);
            cStack_7b = (char)uVar5;
            uStack_7a = (undefined2)((uint)uVar5 >> 8);
            uStack_78 = (undefined1)((uint)uVar5 >> 0x18);
            uStack_77 = (undefined1)uStack_74;
            uStack_76 = (undefined2)(uStack_74 >> 8);
            uStack_74 = uStack_74 >> 0x18;
            uVar15 = 0x10;
            break;
          case 0x36:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            if ((((((*local_98 == -1) && (*(char *)((longlong)plVar3 + 0x3a) == -1)) &&
                  (*(char *)((longlong)plVar3 + 0x3b) == -1)) &&
                 ((*local_a8 == -1 && (*(char *)((longlong)plVar3 + 0x3d) == -1)))) &&
                ((*(char *)((longlong)plVar3 + 0x3e) == -1 &&
                 ((*(char *)((longlong)plVar3 + 0x3f) == -1 && ((char)plVar3[8] == -1)))))) &&
               (*(char *)((longlong)plVar3 + 0x41) == -1)) goto LAB_14064b03d;
            cStack_7b = local_98[8];
            puVar14 = auStack_6e + 2;
            uVar16 = *(undefined8 *)local_98;
            uStack_83 = (undefined1)uVar16;
            uStack_82 = (undefined1)((ulonglong)uVar16 >> 8);
            uStack_81 = (undefined1)((ulonglong)uVar16 >> 0x10);
            uStack_80 = (undefined1)((ulonglong)uVar16 >> 0x18);
            uStack_7f = (undefined1)((ulonglong)uVar16 >> 0x20);
            uStack_7e = (undefined1)((ulonglong)uVar16 >> 0x28);
            uStack_7d = (undefined2)((ulonglong)uVar16 >> 0x30);
            uVar15 = 9;
            break;
          case 0x37:
            local_88 = (undefined1)*(undefined2 *)local_b8;
            bStack_87 = (byte)((ushort)*(undefined2 *)local_b8 >> 8);
            auStack_6e[0] = 1;
            if (((*local_a8 == -1) && (*(char *)((longlong)plVar3 + 0x3d) == -1)) &&
               (((*(char *)((longlong)plVar3 + 0x3e) == -1 &&
                 ((*(char *)((longlong)plVar3 + 0x3f) == -1 && ((char)plVar3[8] == -1)))) &&
                (*(char *)((longlong)plVar3 + 0x41) == -1)))) goto LAB_14064b03d;
            puVar14 = auStack_6e + 2;
            uStack_7f = (undefined1)*(undefined2 *)(local_a8 + 4);
            uStack_7e = (undefined1)((ushort)*(undefined2 *)(local_a8 + 4) >> 8);
            uVar2 = *(undefined4 *)local_a8;
            uStack_83 = (undefined1)uVar2;
            uStack_82 = (undefined1)((uint)uVar2 >> 8);
            uStack_81 = (undefined1)((uint)uVar2 >> 0x10);
            uStack_80 = (undefined1)((uint)uVar2 >> 0x18);
            uVar15 = 6;
            break;
          default:
            pcVar17 = "HIDAPI Wii: Unsupported button data type %02x";
            goto LAB_14064aca8;
          case 0x3d:
            if ((((((((*local_b8 == -1) && (*(char *)((longlong)plVar3 + 0x2e) == -1)) &&
                    (*local_b0 == 0xff)) &&
                   (((char)plVar3[6] == -1 && (*(char *)((longlong)plVar3 + 0x31) == -1)))) &&
                  (*local_a0 == 0xff)) &&
                 ((*(char *)((longlong)plVar3 + 0x33) == -1 &&
                  (*(char *)((longlong)plVar3 + 0x34) == -1)))) &&
                (((*(char *)((longlong)plVar3 + 0x35) == -1 &&
                  (((*(char *)((longlong)plVar3 + 0x36) == -1 &&
                    (*(char *)((longlong)plVar3 + 0x37) == -1)) && ((char)plVar3[7] == -1)))) &&
                 (((*local_98 == -1 && (*(char *)((longlong)plVar3 + 0x3a) == -1)) &&
                  (*(char *)((longlong)plVar3 + 0x3b) == -1)))))) &&
               (((*local_a8 == -1 && (*(char *)((longlong)plVar3 + 0x3d) == -1)) &&
                ((*(char *)((longlong)plVar3 + 0x3e) == -1 &&
                 (((*(char *)((longlong)plVar3 + 0x3f) == -1 && ((char)plVar3[8] == -1)) &&
                  (*(char *)((longlong)plVar3 + 0x41) == -1)))))))) goto LAB_14064b03d;
            puVar14 = auStack_6e + 2;
            uStack_70 = (undefined2)((ulonglong)*(undefined8 *)(local_b8 + 0xd) >> 0x30);
            uVar2 = *(undefined4 *)local_b8;
            uVar4 = *(undefined4 *)(local_b8 + 4);
            uVar5 = *(undefined4 *)(local_b8 + 8);
            uVar6 = *(undefined4 *)(local_b8 + 0xc);
            uStack_83 = (undefined1)uVar2;
            uStack_82 = (undefined1)((uint)uVar2 >> 8);
            uStack_81 = (undefined1)((uint)uVar2 >> 0x10);
            uStack_80 = (undefined1)((uint)uVar2 >> 0x18);
            uStack_7f = (undefined1)uVar4;
            uStack_7e = (undefined1)((uint)uVar4 >> 8);
            uStack_7d = (undefined2)((uint)uVar4 >> 0x10);
            cStack_7b = (char)uVar5;
            uStack_7a = (undefined2)((uint)uVar5 >> 8);
            uStack_78 = (undefined1)((uint)uVar5 >> 0x18);
            uStack_77 = (undefined1)uVar6;
            uStack_76 = (undefined2)((uint)uVar6 >> 8);
            uStack_74._1_3_ = (undefined3)((ulonglong)*(undefined8 *)(local_b8 + 0xd) >> 0x18);
            uStack_74._0_1_ = (undefined1)((uint)uVar6 >> 0x18);
            uVar15 = 0x15;
          }
          *puVar14 = uVar15;
LAB_14064b03d:
          FUN_14064bc40(plVar3,lVar11,&local_88);
        }
LAB_14064a930:
        plVar3[9] = uVar12;
        iVar9 = FUN_140106170(*plVar3 + 0x88);
      } while (iVar9 < 1);
    }
    uVar20 = 0;
  }
  goto LAB_14064b15a;
LAB_14064b157:
  uVar20 = (ulonglong)uVar10;
LAB_14064b15a:
  iVar9 = -1;
  if (uVar12 < plVar3[9] + 3000U) {
    iVar9 = (int)uVar20;
  }
  if ((lVar11 != 0) && (*(int *)((longlong)plVar3 + 0x1c) != 0x83)) {
    if (plVar3[0xb] - 1U < uVar12) {
      local_88 = 0x17;
      bStack_87 = *(byte *)(plVar3 + 5) | 4;
      uStack_86 = 0xa4;
      bStack_84 = 0xfe;
      uStack_83 = 0;
      uStack_82 = 2;
      cVar8 = hidapi_rumble();
      if (cVar8 != '\0') {
        FUN_14064f890(*plVar3,&local_88,7);
      }
      *(undefined4 *)(plVar3 + 3) = 1;
      if ((*(int *)((longlong)plVar3 + 0x1c) == 0x83) ||
         (*(char *)((longlong)plVar3 + 0x2a) != '\0')) {
        lVar11 = 0;
      }
      else {
        lVar11 = sdl_timer_resolution();
        lVar11 = lVar11 + 8000;
      }
      plVar3[0xb] = lVar11;
    }
    if (plVar3[10] == 0 || plVar3[10] + 900000U <= uVar12) {
      local_88 = 0x15;
      bStack_87 = *(byte *)(plVar3 + 5);
      cVar8 = hidapi_rumble();
      if (cVar8 != '\0') {
        FUN_14064f890(*plVar3,&local_88,2);
      }
      plVar3[10] = uVar12;
    }
  }
  if ((iVar9 < 0) || ((char)plVar3[0xc] == '\x01')) {
    FUN_1404400d0(param_1,**(undefined4 **)(param_1 + 0x90));
  }
  uVar20 = CONCAT71((int7)(uVar20 >> 8),-1 < iVar9);
LAB_14064b251:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_d8);
}


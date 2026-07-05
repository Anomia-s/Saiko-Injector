/**
 * Function: set_settings_failed_for_controller_pn
 * Address:  1406420d0
 * Signature: undefined set_settings_failed_for_controller_pn(void)
 * Body size: 2323 bytes
 */


undefined8 set_settings_failed_for_controller_pn(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  float fVar16;
  undefined1 auStack_1a8 [40];
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  char cStack_167;
  byte bStack_166;
  undefined1 auStack_165 [2];
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 local_118;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  uint local_84;
  byte local_80;
  undefined1 local_78;
  char cStack_77;
  byte bStack_76;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined2 uStack_6d;
  undefined3 uStack_6b;
  undefined3 uStack_68;
  undefined2 uStack_65;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_1a8;
  lVar3 = *(longlong *)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  *(undefined1 *)(lVar3 + 9) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xac) = 0;
  *(undefined8 *)(lVar3 + 0xb4) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(undefined8 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  *(undefined8 *)(lVar3 + 0xf0) = 0;
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  *(undefined8 *)(lVar3 + 0x100) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined8 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x118) = 0;
  *(undefined8 *)(lVar3 + 0x120) = 0;
  *(undefined8 *)(lVar3 + 0x128) = 0;
  *(undefined8 *)(lVar3 + 0x130) = 0;
  *(undefined8 *)(lVar3 + 0x138) = 0;
  *(undefined8 *)(lVar3 + 0x140) = 0;
  *(undefined8 *)(lVar3 + 0x148) = 0;
  *(undefined8 *)(lVar3 + 0x150) = 0;
  *(undefined8 *)(lVar3 + 0x158) = 0;
  *(undefined8 *)(lVar3 + 0x160) = 0;
  *(undefined8 *)(lVar3 + 0x168) = 0;
  local_168 = 0;
  cStack_167 = -0x7d;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar6 = 0x32;
    pcVar15 = "GET_ATTRIBUTES_VALUES failed for controller %p\n";
    do {
      iVar9 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_168,0x41);
      if (-1 < iVar9) goto LAB_140642202;
      setwaitabletimerex(500000);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    local_118._3_1_ = 0;
    local_118._4_4_ = 0;
    uStack_110 = 0;
    uStack_10e = 0;
    local_108 = local_108 & 0xffffffff00000000;
    local_118._0_2_ = 0xc003;
    local_118._2_1_ = 0x83;
    iVar6 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_118,0x14);
    if (iVar6 < 0) {
      pcVar15 = "GET_ATTRIBUTES_VALUES failed for controller %p\n";
    }
    else {
LAB_140642202:
      local_180 = (undefined8 *)(lVar3 + 0x20);
      iVar6 = 0;
      local_178 = param_2;
      local_170 = lVar3;
      do {
        if (*(char *)(param_1 + 0x54) == '\x01') {
          local_80 = 1;
          local_118._0_2_ = 0;
          local_118._2_1_ = 0;
          local_118._3_1_ = 0;
          local_118._4_4_ = 0;
          uStack_110 = 0;
          uStack_10e = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          local_84 = 0;
          iVar9 = 0;
          do {
            cStack_77 = '\0';
            bStack_76 = 0;
            uStack_75 = 0;
            uStack_70 = 0;
            uStack_6d = 0;
            uStack_6b = 0;
            uStack_68 = 0;
            uStack_65 = 0;
            local_78 = 3;
            iVar7 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_78,0x15);
            bVar5 = bStack_76;
            iVar11 = iVar9 + 1;
            iVar9 = 0;
            if (-1 < (char)bStack_76) {
              iVar9 = iVar11;
            }
            if (iVar7 < 3) {
              iVar9 = iVar11;
            }
            if (0 < iVar7) {
              uVar13 = iVar7 - 1;
              if ((local_80 & 1) == 0) {
                memcpy(&local_118,&cStack_77,(ulonglong)uVar13);
                uVar1 = iVar7 - 0x42;
joined_r0x0001406424b5:
                if (0xffffffbf < uVar1) {
                  local_168 = 0;
                  memcpy(&cStack_167,&local_118,(ulonglong)uVar13);
                  if (cStack_167 != -0x7d) goto LAB_14064224e;
                  goto LAB_14064254d;
                }
              }
              else if (cStack_77 == '\x03') {
                if (uVar13 == 0x14) {
                  if ((char)bStack_76 < '\0') {
                    uVar13 = bStack_76 & 7;
                    if (uVar13 != local_84) {
                      local_98 = 0;
                      uStack_90 = 0;
                      local_a8 = 0;
                      uStack_a0 = 0;
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_c8 = 0;
                      uStack_c0 = 0;
                      local_d8 = 0;
                      uStack_d0 = 0;
                      local_e8 = 0;
                      uStack_e0 = 0;
                      local_f8 = 0;
                      uStack_f0 = 0;
                      local_108 = 0;
                      uStack_100 = 0;
                      local_118._0_2_ = 0;
                      local_118._2_1_ = 0;
                      local_118._3_1_ = 0;
                      local_118._4_4_ = 0;
                      uStack_110 = 0;
                      uStack_10e = 0;
                      local_88 = 0;
                      local_84 = 0;
                      if ((bStack_76 & 7) != 0) goto LAB_1406422e0;
                    }
                    lVar3 = (ulonglong)(uVar13 * 2) * 9;
                    *(undefined2 *)((longlong)&local_108 + lVar3) = uStack_65;
                    uVar10 = CONCAT35(uStack_68,CONCAT32(uStack_6b,uStack_6d));
                    *(ulonglong *)((longlong)&local_118 + lVar3) = CONCAT35(uStack_70,uStack_75);
                    *(undefined8 *)((longlong)&uStack_110 + lVar3) = uVar10;
                    if ((bVar5 & 0x40) != 0) {
                      local_84 = 0;
                      uVar13 = (int)lVar3 + 0x12;
                      uVar1 = (int)lVar3 - 0x2f;
                      goto joined_r0x0001406424b5;
                    }
                    local_84 = uVar13 + 1;
                  }
                }
                else {
                  FUN_1400fb540("Bad segment size! %d\n",uVar13);
                  FUN_14043fc20("Data",&cStack_77,uVar13);
                  local_98 = 0;
                  uStack_90 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_118._0_2_ = 0;
                  local_118._2_1_ = 0;
                  local_118._3_1_ = 0;
                  local_118._4_4_ = 0;
                  uStack_110 = 0;
                  uStack_10e = 0;
                  local_88 = 0;
                  local_84 = 0;
                }
              }
            }
LAB_1406422e0:
          } while (iVar9 < 8);
          FUN_1400fb540("Could not get a full ble packet after %d retries\n",iVar9);
        }
        else {
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          cStack_167 = '\0';
          bStack_166 = 0;
          auStack_165 = (undefined1  [2])0x0;
          uStack_163 = 0;
          uStack_162 = 0;
          uStack_161 = 0;
          uStack_160 = 0;
          uStack_15f = 0;
          uStack_15d = 0;
          uStack_15c = 0;
          uStack_15b = 0;
          uStack_159 = 0;
          local_128 = 0;
          iVar9 = 0x32;
          do {
            uVar13 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_168,0x41);
            if (-1 < (int)uVar13) {
              if (cStack_167 == -0x7d) goto LAB_14064254d;
              break;
            }
            setwaitabletimerex(500000);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
LAB_14064224e:
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
      pcVar15 = "Bad GET_ATTRIBUTES_VALUES response for controller %p\n";
    }
  }
LAB_14064279d:
  FUN_1400fb540(pcVar15,param_1);
  FUN_1400fbed0("Couldn\'t reset controller");
  uVar10 = 0;
LAB_1406427b6:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_1a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_1a8);
  }
  return uVar10;
LAB_14064254d:
  lVar4 = local_170;
  lVar3 = local_178;
  pcVar15 = "Bad GET_ATTRIBUTES_VALUES response for controller %p\n";
  if (bStack_166 <= uVar13) {
    uVar8 = 9000;
    if (4 < bStack_166) {
      if ((byte)(bStack_166 - 5) < 5) {
        uVar8 = 9000;
        uVar12 = 0;
      }
      else {
        uVar8 = 9000;
        puVar14 = (undefined4 *)&uStack_15f;
        uVar12 = 0;
        do {
          if (*(char *)((longlong)puVar14 + -6) == '\v') {
            uVar8 = *(undefined4 *)((longlong)puVar14 + -5);
            cVar2 = *(char *)((longlong)puVar14 + -1);
          }
          else {
            cVar2 = *(char *)((longlong)puVar14 + -1);
          }
          if (cVar2 == '\v') {
            uVar8 = *puVar14;
          }
          uVar12 = uVar12 + 2;
          puVar14 = (undefined4 *)((longlong)puVar14 + 10);
        } while ((bStack_166 / 5 & 0xfffffffe) != uVar12);
      }
      if (((bStack_166 / 5 & 1) != 0) && (auStack_165[uVar12 * 5] == '\v')) {
        uVar8 = *(undefined4 *)(auStack_165 + uVar12 * 5 + 1);
      }
    }
    *(undefined4 *)(local_170 + 0xc) = uVar8;
    local_168 = 0;
    cStack_167 = -0x7f;
    if (*(char *)(param_1 + 0x54) == '\0') {
      iVar6 = 0x32;
      pcVar15 = "CLEAR_DIGITAL_MAPPINGS failed for controller %p\n";
      do {
        iVar9 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_168,0x41);
        if (-1 < iVar9) goto LAB_14064260d;
        setwaitabletimerex(500000);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else {
      local_118._3_1_ = 0;
      local_118._4_4_ = 0;
      uStack_110 = 0;
      uStack_10e = 0;
      local_108 = local_108 & 0xffffffff00000000;
      local_118._0_2_ = 0xc003;
      local_118._2_1_ = 0x81;
      iVar6 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_118,0x14);
      if (iVar6 < 0) {
        pcVar15 = "CLEAR_DIGITAL_MAPPINGS failed for controller %p\n";
      }
      else {
LAB_14064260d:
        local_168 = 0;
        bStack_166 = 0;
        auStack_165 = (undefined1  [2])0x0;
        uStack_163 = 0;
        uStack_162 = 0;
        uStack_161 = 0;
        uStack_160 = 0;
        uStack_15f = 0;
        uStack_15d = 0;
        uStack_15c = 0;
        uStack_15b = 0;
        uStack_159 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_128 = 0;
        cStack_167 = -0x72;
        if (*(char *)(param_1 + 0x54) == '\0') {
          iVar6 = 0x32;
          pcVar15 = "LOAD_DEFAULT_SETTINGS failed for controller %p\n";
          do {
            iVar9 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_168,0x41);
            if (-1 < iVar9) goto LAB_140642687;
            setwaitabletimerex(500000);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else {
          local_118._4_4_ = 0;
          uStack_110 = 0;
          uStack_10e = 0;
          local_108 = local_108 & 0xffffffff00000000;
          local_118._0_2_ = 0xc003;
          local_118._2_1_ = 0x8e;
          local_118._3_1_ = 0;
          iVar6 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_118,0x14);
          if (iVar6 < 0) {
            pcVar15 = "LOAD_DEFAULT_SETTINGS failed for controller %p\n";
          }
          else {
LAB_140642687:
            local_168 = 0;
            uStack_163 = 0;
            uStack_160 = 0;
            uStack_15d = 0;
            uStack_15b = 0;
            uStack_159 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_128 = 0;
            uStack_162 = 7;
            uStack_161 = 7;
            uStack_15f = 0x708;
            uStack_15c = 0x18;
            cStack_167 = -0x79;
            bStack_166 = 0xc;
            auStack_165 = (undefined1  [2])0x231;
            if (*(char *)(param_1 + 0x54) == '\0') {
              iVar6 = 0x32;
              pcVar15 = "SET_SETTINGS failed for controller %p\n";
              do {
                iVar9 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_168,0x41);
                if (-1 < iVar9) goto LAB_14064271e;
                setwaitabletimerex(500000);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            else {
              local_108 = local_108 & 0xffffffff00000000;
              local_118._0_2_ = 0xc003;
              local_118._2_1_ = 0x87;
              local_118._3_1_ = 0xc;
              local_118._4_4_ = 0x7000231;
              uStack_110 = 7;
              uStack_10e = 0x18000708;
              iVar6 = FUN_14017a740(*(undefined8 *)(param_1 + 0x80),&local_118,0x14);
              if (-1 < iVar6) {
LAB_14064271e:
                if (*(uint *)(lVar4 + 0xc) == 0) {
                  fVar16 = 0.0;
                }
                else {
                  fVar16 = 1e+06 / (float)*(uint *)(lVar4 + 0xc);
                }
                *(undefined1 *)(lVar4 + 0xb8) = *(undefined1 *)(param_1 + 0x54);
                local_180[0x10] = 0;
                local_180[0x11] = 0;
                local_180[0xe] = 0;
                local_180[0xf] = 0;
                local_180[0xc] = 0;
                local_180[0xd] = 0;
                local_180[10] = 0;
                local_180[0xb] = 0;
                local_180[8] = 0;
                local_180[9] = 0;
                local_180[6] = 0;
                local_180[7] = 0;
                local_180[4] = 0;
                local_180[5] = 0;
                local_180[2] = 0;
                local_180[3] = 0;
                *local_180 = 0;
                local_180[1] = 0;
                *(undefined1 *)(local_180 + 0x12) = 0;
                *(undefined4 *)(lVar4 + 0xb4) = 0;
                *(undefined4 *)(lVar3 + 0x70) = 0xd;
                *(undefined4 *)(lVar3 + 0x40) = 6;
                *(undefined4 *)(lVar3 + 0x60) = 1;
                if (*(short *)(param_1 + 0x22) == 0x1142) {
                  *(undefined4 *)(lVar3 + 0xdc) = 2;
                }
                FUN_14012b6e0(lVar3,2,fVar16);
                FUN_14012b6e0(lVar3,1,fVar16);
                parameter_s_is_invalid
                          ("SDL_JOYSTICK_HIDAPI_STEAM_HOME_LED",couldnt_write_feature_report,lVar4);
                uVar10 = 1;
                goto LAB_1406427b6;
              }
              pcVar15 = "SET_SETTINGS failed for controller %p\n";
            }
          }
        }
      }
    }
  }
  goto LAB_14064279d;
}


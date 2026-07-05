/**
 * Function: wrong_channel_count
 * Address:  140483260
 * Signature: undefined wrong_channel_count(void)
 * Body size: 10825 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * wrong_channel_count(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                          int *param_6,int param_7)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  undefined2 uVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined1 extraout_AH;
  longlong lVar28;
  undefined8 *puVar29;
  uint *puVar30;
  short *psVar31;
  uint *puVar32;
  uint *puVar33;
  ulonglong uVar34;
  byte bVar35;
  uint uVar36;
  uint uVar37;
  undefined1 *puVar38;
  ulonglong uVar39;
  bool bVar40;
  uint uVar41;
  uint *puVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint *puVar45;
  undefined8 *puVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auStack_8a08 [32];
  uint local_89e8;
  int *local_89e0;
  uint local_89d4;
  undefined8 *local_89d0;
  undefined8 local_89c8;
  uint local_89bc;
  undefined8 local_89b8;
  ulonglong local_89b0;
  undefined8 local_89a8;
  uint local_89a0;
  int local_899c;
  uint *local_8998;
  ulonglong local_8990;
  uint local_8984;
  uint *local_8980;
  uint *local_8978;
  uint *local_8970;
  int local_8964;
  uint local_8960;
  undefined4 local_895c;
  uint *local_8958;
  uint local_894c;
  int local_8948;
  int local_8944;
  int local_8940;
  int local_893c;
  int local_8938;
  int local_8934;
  int local_8930;
  int local_892c;
  ulonglong local_8928;
  ulonglong local_8920;
  ulonglong local_8918;
  ulonglong local_8910;
  ulonglong local_8908;
  int local_88fc;
  uint local_88f8;
  uint local_88f4;
  undefined4 local_88f0;
  undefined4 local_88ec;
  undefined4 local_88e8;
  int local_88e4;
  undefined4 local_88e0;
  int local_88dc;
  undefined8 local_88d8;
  void *local_88d0;
  void *local_88c8;
  uint *local_88c0;
  int local_88b8;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x140483276;
  local_89d4 = param_5;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_8a08;
  param_6[0] = 8;
  param_6[1] = 0;
  param_6[2] = 0;
  puVar25 = param_1 + 0xe;
  puVar1 = (uint *)((longlong)param_1 + 0x39);
  puVar24 = *(uint **)(param_1 + 0x30);
  puVar42 = *(uint **)(param_1 + 0x32);
  local_8980 = param_4;
  if (puVar24 < puVar42) {
    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar24 + 1);
    puVar45 = (uint *)((longlong)puVar24 + 1);
    if ((byte)*puVar24 != 0x89) goto LAB_1404837b8;
LAB_14048336c:
    if (puVar42 <= puVar45) {
      if (param_1[0xc] != 0) {
        iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVar18 == 0) {
          param_1[0xc] = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          bVar35 = 0;
          puVar42 = puVar1;
        }
        else {
          bVar35 = (byte)*puVar25;
          puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
        }
        *(uint **)(param_1 + 0x32) = puVar42;
        *(uint **)(param_1 + 0x30) = puVar1;
        puVar24 = puVar1;
        if (bVar35 == 0x50) goto LAB_1404833f4;
      }
      goto LAB_1404837b8;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar45 + 1);
    puVar24 = (uint *)((longlong)puVar45 + 1);
    if ((byte)*puVar45 != 0x50) goto LAB_1404837b8;
LAB_1404833f4:
    if (puVar42 <= puVar24) {
      if (param_1[0xc] != 0) {
        iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVar18 == 0) {
          param_1[0xc] = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          bVar35 = 0;
          puVar42 = puVar1;
        }
        else {
          bVar35 = (byte)*puVar25;
          puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
        }
        *(uint **)(param_1 + 0x32) = puVar42;
        *(uint **)(param_1 + 0x30) = puVar1;
        puVar45 = puVar1;
        if (bVar35 == 0x4e) goto LAB_14048347d;
      }
      goto LAB_1404837b8;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar24 + 1);
    puVar45 = (uint *)((longlong)puVar24 + 1);
    if ((byte)*puVar24 != 0x4e) goto LAB_1404837b8;
LAB_14048347d:
    if (puVar42 <= puVar45) {
      if (param_1[0xc] != 0) {
        iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVar18 == 0) {
          param_1[0xc] = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          bVar35 = 0;
          puVar42 = puVar1;
        }
        else {
          bVar35 = (byte)*puVar25;
          puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
        }
        *(uint **)(param_1 + 0x32) = puVar42;
        *(uint **)(param_1 + 0x30) = puVar1;
        puVar24 = puVar1;
        if (bVar35 == 0x47) goto LAB_140483505;
      }
      goto LAB_1404837b8;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar45 + 1);
    puVar24 = (uint *)((longlong)puVar45 + 1);
    if ((byte)*puVar45 != 0x47) goto LAB_1404837b8;
LAB_140483505:
    if (puVar24 < puVar42) {
      *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar24 + 1);
      bVar35 = (byte)*puVar24;
      puVar24 = (uint *)((longlong)puVar24 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1404837b8;
      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVar18 == 0) {
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        bVar35 = 0;
        puVar42 = puVar1;
      }
      else {
        bVar35 = (byte)*puVar25;
        puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
      }
      *(uint **)(param_1 + 0x32) = puVar42;
      *(uint **)(param_1 + 0x30) = puVar1;
      puVar24 = puVar1;
    }
    if (bVar35 != 0xd) goto LAB_1404837b8;
    if (puVar24 < puVar42) {
      *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar24 + 1);
      bVar35 = (byte)*puVar24;
      puVar24 = (uint *)((longlong)puVar24 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1404837b8;
      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVar18 == 0) {
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        bVar35 = 0;
        puVar42 = puVar1;
      }
      else {
        bVar35 = (byte)*puVar25;
        puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
      }
      *(uint **)(param_1 + 0x32) = puVar42;
      *(uint **)(param_1 + 0x30) = puVar1;
      puVar24 = puVar1;
    }
    if (bVar35 != 10) goto LAB_1404837b8;
    if (puVar24 < puVar42) {
      *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar24 + 1);
      bVar35 = (byte)*puVar24;
      puVar24 = (uint *)((longlong)puVar24 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1404837b8;
      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVar18 == 0) {
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        bVar35 = 0;
        puVar42 = puVar1;
      }
      else {
        bVar35 = (byte)*puVar25;
        puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
      }
      *(uint **)(param_1 + 0x32) = puVar42;
      *(uint **)(param_1 + 0x30) = puVar1;
      puVar24 = puVar1;
    }
    if (bVar35 != 0x1a) goto LAB_1404837b8;
    if (puVar42 <= puVar24) {
      if (param_1[0xc] != 0) {
        iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        puVar24 = puVar25;
        if (iVar18 != 0) goto LAB_1404836d3;
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_1404837b8;
    }
    *(byte **)(param_1 + 0x30) = (byte *)((longlong)puVar24 + 1);
LAB_1404836d3:
    if ((byte)*puVar24 != 10) goto LAB_1404837b8;
    param_1[0x30] = param_1[0x34];
    param_1[0x31] = param_1[0x35];
    param_1[0x32] = param_1[0x36];
    param_1[0x33] = param_1[0x37];
    local_88d8 = param_1;
    if (4 < local_89d4) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x220) = "bad req_comp";
      goto LAB_140484291;
    }
    iVar18 = bad_filter_method(&local_88d8,0);
    puVar25 = local_88d8;
    if (iVar18 == 0) {
      puVar24 = (uint *)0x0;
    }
    else {
      iVar18 = 8;
      if ((8 < local_88b8) && (iVar18 = 0x10, local_88b8 != 0x10)) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x220) = "bad bits_per_channel";
        goto LAB_140484291;
      }
      *param_6 = iVar18;
      puVar24 = local_88c0;
      if ((local_89d4 != 0) && (uVar19 = local_88d8[3], local_89d4 != uVar19)) {
        local_89e8 = local_88d8[1];
        if (local_88b8 < 9) {
          puVar24 = (uint *)FUN_14048d770(local_88c0,uVar19,local_89d4);
        }
        else {
          puVar24 = (uint *)FUN_14048f070(local_88c0,uVar19,local_89d4,*local_88d8);
        }
        puVar25[3] = local_89d4;
        if (puVar24 == (uint *)0x0) goto LAB_140484291;
      }
      *param_2 = *puVar25;
      *param_3 = puVar25[1];
      if (local_8980 != (uint *)0x0) {
        *local_8980 = puVar25[2];
      }
      local_88c0 = (uint *)0x0;
    }
    free(local_88c0);
    free(local_88c8);
    free(local_88d0);
  }
  else {
    if (param_1[0xc] != 0) {
      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVar18 == 0) {
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        bVar35 = 0;
        puVar42 = puVar1;
      }
      else {
        bVar35 = (byte)*puVar25;
        puVar42 = (uint *)((longlong)iVar18 + (longlong)puVar25);
      }
      *(uint **)(param_1 + 0x32) = puVar42;
      *(uint **)(param_1 + 0x30) = puVar1;
      puVar45 = puVar1;
      if (bVar35 == 0x89) goto LAB_14048336c;
    }
LAB_1404837b8:
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar46 = (undefined8 *)(lVar28 + 0x220);
    *(char **)(lVar28 + 0x220) = "bad png sig";
    puVar42 = *(uint **)(param_1 + 0x34);
    puVar24 = *(uint **)(param_1 + 0x36);
    *(uint **)(param_1 + 0x30) = puVar42;
    *(uint **)(param_1 + 0x32) = puVar24;
    local_8970 = param_2;
    if (puVar42 < puVar24) {
      *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
      puVar45 = (uint *)((longlong)puVar42 + 1);
      if ((byte)*puVar42 != 0x42) goto LAB_1404839dc;
LAB_14048388c:
      if (puVar24 <= puVar45) {
        if (param_1[0xc] != 0) {
          iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
          puVar42 = *(uint **)(param_1 + 0x34);
          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - (int)puVar42);
          if (iVar18 == 0) {
            param_1[0xc] = 0;
            *(undefined1 *)(param_1 + 0xe) = 0;
            puVar24 = puVar1;
          }
          else {
            puVar24 = (uint *)((longlong)iVar18 + (longlong)puVar25);
          }
          *(uint **)(param_1 + 0x32) = puVar24;
          *(uint **)(param_1 + 0x30) = puVar1;
          if ((byte)*puVar25 == 0x4d) goto LAB_140483910;
        }
        goto LAB_1404839dc;
      }
      *(byte **)(param_1 + 0x30) = (byte *)((longlong)puVar45 + 1);
      if ((byte)*puVar45 != 0x4d) goto LAB_1404839dc;
LAB_140483910:
      FUN_140492580(param_1);
      FUN_140492580(param_1);
      FUN_140492580(param_1);
      FUN_140492580(param_1);
      FUN_140492580(param_1);
      FUN_140492580(param_1);
      uVar19 = FUN_140492580(param_1);
      iVar18 = FUN_140492580(param_1);
      uVar19 = iVar18 << 0x10 | uVar19;
      if (((0x38 < uVar19) || ((0x100010000001000U >> ((ulonglong)uVar19 & 0x3f) & 1) == 0)) &&
         (uVar19 != 0x6c)) {
        param_1[0x30] = param_1[0x34];
        param_1[0x31] = param_1[0x35];
        param_1[0x32] = param_1[0x36];
        param_1[0x33] = param_1[0x37];
        if (uVar19 == 0x7c) goto LAB_140483987;
        goto LAB_1404839f1;
      }
      param_1[0x30] = param_1[0x34];
      param_1[0x31] = param_1[0x35];
      param_1[0x32] = param_1[0x36];
      param_1[0x33] = param_1[0x37];
LAB_140483987:
      local_88e0 = 0xff;
      lVar28 = FUN_1404926b0(param_1,&local_88fc);
      if (lVar28 != 0) {
        uVar19 = param_1[1];
        uVar20 = -uVar19;
        if ((int)-uVar19 < 0) {
          uVar20 = uVar19;
        }
        param_1[1] = uVar20;
        if ((0x1000000 < uVar20) || (0x1000000 < *param_1)) goto LAB_1404839d0;
        local_8998 = (uint *)CONCAT44(local_8998._4_4_,local_88e8);
        local_89b8 = CONCAT44(local_89b8._4_4_,local_88e4);
        if (local_88f4 != 0xc) {
          if (local_88fc < 0x10) {
            uVar20 = (int)(local_88f8 - (local_88dc + local_88f4)) >> 2;
            goto LAB_140483db7;
          }
LAB_140483ef0:
          if ((param_1[0x2e] + (param_1[0x30] - param_1[0x34])) - 0x401 < 0xfffffc00) {
            pcVar26 = "bad header";
          }
          else {
            iVar18 = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
            if ((iVar18 <= (int)local_88f8) && ((int)(local_88f8 - iVar18) < 0x401)) {
              local_89bc = local_88f4;
              local_8978 = (uint *)CONCAT44(local_8978._4_4_,local_88ec);
              local_89b0 = CONCAT44(local_89b0._4_4_,local_88f0);
              local_8990 = CONCAT44(local_8990._4_4_,local_88e0);
              local_89c8 = (undefined8 *)(ulonglong)local_88f8;
              FUN_14048fdb0(param_1);
              uVar36 = 0;
              bVar40 = true;
              uVar20 = 0;
              uVar22 = (uint)local_8990;
              local_88e4 = (uint)local_89b8;
              bVar13 = bVar40;
              bVar14 = (uint)local_89b8 == -0x1000000;
              if (local_88fc != 0x18 || (uint)local_89b8 != -0x1000000) goto LAB_140483dee;
              uVar20 = 3;
              local_89a8 = CONCAT44(local_89a8._4_4_,0x18);
              bVar13 = true;
              goto LAB_140483dff;
            }
            pcVar26 = "bad offset";
          }
          goto LAB_14048428e;
        }
        if (0x17 < local_88fc) goto LAB_140483ef0;
        uVar20 = (int)((local_88f8 - local_88dc) + -0x18) / 3;
LAB_140483db7:
        if (uVar20 == 0) goto LAB_140483ef0;
        local_89bc = local_88f4;
        local_8978 = (uint *)CONCAT44(local_8978._4_4_,local_88ec);
        local_89b0 = CONCAT44(local_89b0._4_4_,local_88f0);
        uVar22 = local_88e0;
        local_89c8 = (undefined8 *)(ulonglong)local_88f8;
        bVar13 = false;
        bVar14 = local_88e4 == -0x1000000;
LAB_140483dee:
        bVar40 = bVar14;
        uVar36 = uVar20;
        local_89a8 = CONCAT44(local_89a8._4_4_,local_88fc);
        uVar20 = 4 - (local_88e4 == 0);
LAB_140483dff:
        param_1[2] = uVar20;
        if (2 < (int)local_89d4) {
          uVar20 = local_89d4;
        }
        uVar50 = *param_1;
        local_8958 = param_3;
        if (((int)uVar50 < 0) ||
           ((((uVar41 = param_1[1], uVar50 != 0 && ((uint)(0x7fffffff / (ulonglong)uVar50) < uVar20)
              ) || (uVar47 = uVar50 * uVar20, (int)(uVar47 | uVar41) < 0)) ||
            ((uVar41 != 0 && ((uint)(0x7fffffff / (ulonglong)uVar41) < uVar47))))))
        goto LAB_1404839d0;
        local_8990 = CONCAT44(local_8990._4_4_,uVar22);
        local_894c = uVar19;
        if (((uVar50 == 0) || (uVar20 <= (uint)(0x7fffffff / (ulonglong)uVar50))) &&
           ((uVar41 == 0 || (uVar47 <= (uint)(0x7fffffff / (ulonglong)uVar41))))) {
          local_89d0 = (undefined8 *)CONCAT44(local_89d0._4_4_,uVar20);
          puVar24 = malloc((longlong)(int)(uVar47 * uVar41));
          puVar42 = local_8978;
          uVar19 = local_89bc;
          uVar34 = (ulonglong)local_89d0 & 0xffffffff;
          if (puVar24 == (uint *)0x0) goto LAB_140484287;
          if ((int)local_89a8 < 0x10) {
            if (!bVar13 && (int)uVar36 < 0x101) {
              if (0 < (int)uVar36) {
                local_89b8 = (ulonglong)uVar36;
                puVar42 = *(uint **)(param_1 + 0x30);
                puVar45 = *(uint **)(param_1 + 0x32);
                uVar34 = 0;
                do {
                  if (puVar42 < puVar45) {
                    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                    bVar35 = (byte)*puVar42;
                    puVar42 = (uint *)((longlong)puVar42 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    bVar35 = 0;
                  }
                  else {
                    iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVar18 == 0) {
                      param_1[0xc] = 0;
                      *(undefined1 *)(param_1 + 0xe) = 0;
                      bVar35 = 0;
                      puVar45 = puVar1;
                    }
                    else {
                      bVar35 = (byte)*puVar25;
                      puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                    }
                    *(uint **)(param_1 + 0x32) = puVar45;
                    *(uint **)(param_1 + 0x30) = puVar1;
                    puVar42 = puVar1;
                  }
                  *(byte *)((longlong)&local_88d8 + uVar34 * 4 + 2) = bVar35;
                  if (puVar42 < puVar45) {
                    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                    bVar35 = (byte)*puVar42;
                    puVar42 = (uint *)((longlong)puVar42 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    bVar35 = 0;
                  }
                  else {
                    iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVar18 == 0) {
                      param_1[0xc] = 0;
                      *(undefined1 *)(param_1 + 0xe) = 0;
                      bVar35 = 0;
                      puVar45 = puVar1;
                    }
                    else {
                      bVar35 = (byte)*puVar25;
                      puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                    }
                    *(uint **)(param_1 + 0x32) = puVar45;
                    *(uint **)(param_1 + 0x30) = puVar1;
                    puVar42 = puVar1;
                  }
                  *(byte *)((longlong)&local_88d8 + uVar34 * 4 + 1) = bVar35;
                  if (puVar42 < puVar45) {
                    *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                    bVar35 = (byte)*puVar42;
                    puVar42 = (uint *)((longlong)puVar42 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    bVar35 = 0;
                  }
                  else {
                    iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVar18 == 0) {
                      param_1[0xc] = 0;
                      *(undefined1 *)(param_1 + 0xe) = 0;
                      bVar35 = 0;
                      puVar45 = puVar1;
                    }
                    else {
                      bVar35 = (byte)*puVar25;
                      puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                    }
                    *(uint **)(param_1 + 0x32) = puVar45;
                    *(uint **)(param_1 + 0x30) = puVar1;
                    puVar42 = puVar1;
                  }
                  *(byte *)((longlong)&local_88d8 + uVar34 * 4) = bVar35;
                  if (uVar19 != 0xc) {
                    if (puVar42 < puVar45) {
                      puVar42 = (uint *)((longlong)puVar42 + 1);
                    }
                    else {
                      if (param_1[0xc] == 0) goto LAB_140484373;
                      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10));
                      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                      if (iVar18 == 0) {
                        param_1[0xc] = 0;
                        *(undefined1 *)(param_1 + 0xe) = 0;
                        puVar45 = puVar1;
                      }
                      else {
                        puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                      }
                      *(uint **)(param_1 + 0x32) = puVar45;
                      puVar42 = puVar1;
                    }
                    *(uint **)(param_1 + 0x30) = puVar42;
                  }
LAB_140484373:
                  *(undefined1 *)((longlong)&local_88d8 + uVar34 * 4 + 3) = 0xff;
                  uVar34 = uVar34 + 1;
                } while (local_89b8 != uVar34);
              }
              FUN_14048fdb0(param_1);
              if ((int)local_89a8 == 1) {
                uVar19 = param_1[1];
                if (0 < (int)uVar19) {
                  uVar19 = -(*param_1 + 7 >> 3);
                  local_89b8 = CONCAT44(local_89b8._4_4_,uVar19) & 0xffffffff00000003;
                  local_8998 = (uint *)(ulonglong)(uVar19 & 3);
                  uVar34 = 0;
                  iVar18 = 0;
                  do {
                    puVar42 = *(uint **)(param_1 + 0x30);
                    puVar45 = *(uint **)(param_1 + 0x32);
                    local_89a8 = CONCAT44(local_89a8._4_4_,iVar18);
                    if (puVar42 < puVar45) {
                      *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                      uVar19 = (uint)(byte)*puVar42;
                      puVar42 = (uint *)((longlong)puVar42 + 1);
                    }
                    else if (param_1[0xc] == 0) {
                      uVar19 = 0;
                    }
                    else {
                      iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25);
                      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                      if (iVar18 == 0) {
                        param_1[0xc] = 0;
                        *(undefined1 *)(param_1 + 0xe) = 0;
                        uVar19 = 0;
                        puVar45 = puVar1;
                      }
                      else {
                        uVar19 = (uint)(byte)*puVar25;
                        puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                      }
                      *(uint **)(param_1 + 0x32) = puVar45;
                      *(uint **)(param_1 + 0x30) = puVar1;
                      puVar42 = puVar1;
                    }
                    uVar20 = *param_1;
                    if (0 < (int)uVar20) {
                      uVar36 = 0;
                      uVar50 = 7;
                      uVar48 = uVar34 & 0xffffffff;
                      do {
                        while( true ) {
                          uVar49 = (ulonglong)((uVar19 >> (uVar50 & 0x1f) & 1) != 0);
                          lVar28 = (longlong)(int)uVar48;
                          uVar34 = lVar28 + 3;
                          *(undefined1 *)((longlong)puVar24 + lVar28) =
                               *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4);
                          *(undefined1 *)((longlong)puVar24 + lVar28 + 1) =
                               *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 1);
                          *(undefined1 *)((longlong)puVar24 + lVar28 + 2) =
                               *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 2);
                          if ((uint)local_89d0 == 4) {
                            *(undefined1 *)((longlong)puVar24 + uVar34) = 0xff;
                            uVar34 = (ulonglong)((int)uVar48 + 4);
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 == uVar20) goto LAB_140485142;
                          if (0 < (int)uVar50) break;
                          if (puVar42 < puVar45) {
                            *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                            bVar35 = (byte)*puVar42;
                            puVar42 = (uint *)((longlong)puVar42 + 1);
                          }
                          else if (param_1[0xc] == 0) {
                            bVar35 = 0;
                          }
                          else {
                            iVar18 = (**(code **)(param_1 + 4))
                                               (*(undefined8 *)(param_1 + 10),puVar25);
                            param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                            if (iVar18 == 0) {
                              param_1[0xc] = 0;
                              *(undefined1 *)(param_1 + 0xe) = 0;
                              bVar35 = 0;
                              puVar45 = puVar1;
                            }
                            else {
                              bVar35 = (byte)*puVar25;
                              puVar45 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                            }
                            *(uint **)(param_1 + 0x32) = puVar45;
                            *(uint **)(param_1 + 0x30) = puVar1;
                            uVar20 = *param_1;
                            puVar42 = puVar1;
                          }
                          uVar19 = (uint)bVar35;
                          uVar50 = 7;
                          uVar48 = uVar34 & 0xffffffff;
                          if ((int)uVar20 <= (int)uVar36) goto LAB_140485142;
                        }
                        uVar50 = uVar50 - 1;
                        uVar48 = uVar34 & 0xffffffff;
                      } while ((int)uVar36 < (int)uVar20);
                    }
LAB_140485142:
                    iVar18 = (int)local_89a8;
                    if ((uint)local_89b8 != 0) {
                      if ((*(longlong *)(param_1 + 4) == 0) ||
                         ((int)(uint)local_89b8 <= (int)puVar45 - (int)puVar42)) {
                        *(byte **)(param_1 + 0x30) =
                             (byte *)((longlong)puVar42 + (longlong)local_8998);
                      }
                      else {
                        *(uint **)(param_1 + 0x30) = puVar45;
                        (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10));
                      }
                    }
                    iVar18 = iVar18 + 1;
                    uVar19 = param_1[1];
                  } while (iVar18 < (int)uVar19);
                }
LAB_140485183:
                uVar20 = (uint)local_89d0;
              }
              else {
                if ((int)local_89a8 == 8) {
                  uVar20 = *param_1;
                }
                else {
                  if ((int)local_89a8 != 4) {
                    free(puVar24);
                    pcVar26 = "bad bpp";
                    goto LAB_14048428e;
                  }
                  uVar20 = *param_1 + 1 >> 1;
                }
                uVar19 = param_1[1];
                if ((int)uVar19 < 1) goto LAB_140485183;
                local_89b8 = CONCAT44(local_89b8._4_4_,-uVar20) & 0xffffffff00000003;
                local_8998 = (uint *)(ulonglong)(-uVar20 & 3);
                uVar34 = 0;
                iVar18 = 0;
                uVar48 = (ulonglong)local_89d0 & 0xffffffff;
                do {
                  if (0 < (int)*param_1) {
                    puVar42 = *(uint **)(param_1 + 0x30);
                    puVar45 = *(uint **)(param_1 + 0x32);
                    iVar21 = 0;
                    do {
                      if (puVar42 < puVar45) {
                        *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                        bVar35 = (byte)*puVar42;
                        puVar42 = (uint *)((longlong)puVar42 + 1);
                      }
                      else if (param_1[0xc] == 0) {
                        bVar35 = 0;
                      }
                      else {
                        iVar23 = (**(code **)(param_1 + 4))
                                           (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                        if (iVar23 == 0) {
                          param_1[0xc] = 0;
                          *(undefined1 *)(param_1 + 0xe) = 0;
                          bVar35 = 0;
                          puVar45 = puVar1;
                        }
                        else {
                          bVar35 = (byte)*puVar25;
                          puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                        }
                        uVar48 = (ulonglong)local_89d0 & 0xffffffff;
                        *(uint **)(param_1 + 0x32) = puVar45;
                        *(uint **)(param_1 + 0x30) = puVar1;
                        puVar42 = puVar1;
                      }
                      uVar20 = bVar35 & 0xf;
                      uVar19 = (uint)(bVar35 >> 4);
                      if ((int)local_89a8 != 4) {
                        uVar19 = (uint)bVar35;
                      }
                      uVar49 = (ulonglong)uVar19;
                      if ((int)local_89a8 != 4) {
                        uVar20 = 0;
                      }
                      lVar28 = (longlong)(int)uVar34;
                      uVar39 = lVar28 + 3;
                      *(undefined1 *)((longlong)puVar24 + lVar28) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4);
                      *(undefined1 *)((longlong)puVar24 + lVar28 + 1) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 1);
                      *(undefined1 *)((longlong)puVar24 + lVar28 + 2) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 2);
                      if ((int)uVar48 == 4) {
                        *(undefined1 *)((longlong)puVar24 + uVar39) = 0xff;
                        uVar39 = (ulonglong)((int)uVar34 + 4);
                      }
                      if (iVar21 + 1U == *param_1) {
                        uVar34 = uVar39 & 0xffffffff;
                        break;
                      }
                      if ((int)local_89a8 == 8) {
                        if (puVar42 < puVar45) {
                          *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                          bVar35 = (byte)*puVar42;
                          puVar42 = (uint *)((longlong)puVar42 + 1);
                        }
                        else if (param_1[0xc] == 0) {
                          bVar35 = 0;
                        }
                        else {
                          iVar23 = (**(code **)(param_1 + 4))
                                             (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVar23 == 0) {
                            param_1[0xc] = 0;
                            *(undefined1 *)(param_1 + 0xe) = 0;
                            bVar35 = 0;
                            puVar45 = puVar1;
                          }
                          else {
                            bVar35 = (byte)*puVar25;
                            puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                          }
                          uVar48 = (ulonglong)local_89d0 & 0xffffffff;
                          *(uint **)(param_1 + 0x32) = puVar45;
                          *(uint **)(param_1 + 0x30) = puVar1;
                          puVar42 = puVar1;
                        }
                        uVar20 = (uint)bVar35;
                      }
                      lVar28 = (longlong)(int)uVar39;
                      uVar34 = lVar28 + 3;
                      uVar49 = (ulonglong)uVar20;
                      *(undefined1 *)((longlong)puVar24 + lVar28) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4);
                      *(undefined1 *)((longlong)puVar24 + lVar28 + 1) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 1);
                      *(undefined1 *)((longlong)puVar24 + lVar28 + 2) =
                           *(undefined1 *)((longlong)&local_88d8 + uVar49 * 4 + 2);
                      if ((int)uVar48 == 4) {
                        *(undefined1 *)((longlong)puVar24 + uVar34) = 0xff;
                        uVar34 = (ulonglong)((int)uVar39 + 4);
                      }
                      iVar21 = iVar21 + 2;
                    } while (iVar21 < (int)*param_1);
                  }
                  if ((uint)local_89b8 != 0) {
                    if (*(longlong *)(param_1 + 4) == 0) {
                      lVar28 = *(longlong *)(param_1 + 0x30);
                    }
                    else {
                      lVar28 = *(longlong *)(param_1 + 0x30);
                      if ((int)*(undefined8 *)(param_1 + 0x32) - (int)lVar28 < (int)(uint)local_89b8
                         ) {
                        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                        (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10));
                        uVar48 = (ulonglong)local_89d0 & 0xffffffff;
                        goto LAB_140484cf5;
                      }
                    }
                    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar28 + (longlong)local_8998)
                    ;
                  }
LAB_140484cf5:
                  uVar20 = (uint)uVar48;
                  iVar18 = iVar18 + 1;
                  uVar19 = param_1[1];
                } while (iVar18 < (int)uVar19);
              }
              goto LAB_140485908;
            }
            free(puVar24);
            pcVar26 = "invalid";
            goto LAB_14048428e;
          }
          uVar19 = (int)local_89c8 - (local_89bc + local_88dc);
          local_89c8 = (undefined8 *)(ulonglong)uVar19;
          iVar18 = (uint)local_89b0;
          iVar21 = (uint)local_8978;
          if (uVar19 != 0) {
            if ((int)uVar19 < 0) {
              *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
            }
            else {
              if (*(longlong *)(param_1 + 4) == 0) {
                lVar28 = *(longlong *)(param_1 + 0x30);
LAB_1404851a9:
                *(undefined1 **)(param_1 + 0x30) = (undefined1 *)((longlong)local_89c8 + lVar28);
              }
              else {
                lVar28 = *(longlong *)(param_1 + 0x30);
                if ((int)uVar19 <= (int)*(undefined8 *)(param_1 + 0x32) - (int)lVar28)
                goto LAB_1404851a9;
                *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10));
              }
              uVar34 = (ulonglong)local_89d0 & 0xffffffff;
            }
          }
          iVar23 = (uint)local_8998;
          if ((int)local_89a8 != 0x10) {
            if ((int)local_89a8 == 0x20) {
              local_8978 = (uint *)CONCAT44(local_8978._4_4_,iVar21);
              local_89b0 = CONCAT44(local_89b0._4_4_,iVar18);
              local_8984 = 0;
              if ((bool)((iVar18 == 0xff0000 && (iVar21 == 0xff00 && (uint)local_8998 == 0xff)) &
                        bVar40)) {
                local_89c8 = (undefined8 *)CONCAT44(local_89c8._4_4_,1);
                goto LAB_14048524d;
              }
              iVar23 = (uint)local_8998;
              goto LAB_1404852ac;
            }
            local_8984 = 0;
            if ((int)local_89a8 != 0x18) goto LAB_1404852ac;
            local_8984 = *param_1 & 3;
            local_89c8 = (undefined8 *)((ulonglong)local_89c8._4_4_ << 0x20);
LAB_14048524d:
            local_8978 = (uint *)CONCAT44(local_8978._4_4_,iVar21);
            local_89b0 = CONCAT44(local_89b0._4_4_,iVar18);
            local_895c = 0;
            local_89bc = 0;
            local_899c = 0;
            local_89a0 = 0;
            local_8964 = 0;
            uVar36 = 0;
            uVar48 = 0;
            uVar50 = 0;
            uVar41 = 0;
LAB_1404853b4:
            uVar20 = (uint)uVar34;
            uVar19 = param_1[1];
            if (0 < (int)uVar19) {
              local_8960 = -local_89bc;
              local_892c = 8 - uVar36;
              local_8930 = -local_899c;
              local_8934 = 8 - (int)uVar48;
              local_8938 = -local_89a0;
              local_893c = 8 - uVar50;
              local_8918 = (ulonglong)uVar50;
              local_8944 = -local_8964;
              local_8940 = 8 - uVar41;
              local_8920 = (ulonglong)uVar41;
              local_8928 = (ulonglong)local_8984;
              uVar49 = 0;
              local_8908 = (ulonglong)(uVar36 << 2);
              iVar18 = 0;
              local_8910 = uVar48;
              do {
                local_8948 = iVar18;
                if ((char)local_895c == '\0') {
                  if (0 < (int)*param_1) {
                    puVar42 = *(uint **)(param_1 + 0x30);
                    puVar45 = *(uint **)(param_1 + 0x32);
                    iVar18 = 0;
                    do {
                      iVar21 = (int)uVar49;
                      if (puVar42 < puVar45) {
                        *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                        bVar35 = (byte)*puVar42;
                        puVar42 = (uint *)((longlong)puVar42 + 1);
                      }
                      else if (param_1[0xc] == 0) {
                        bVar35 = 0;
                      }
                      else {
                        iVar23 = (**(code **)(param_1 + 4))
                                           (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                        if (iVar23 == 0) {
                          param_1[0xc] = 0;
                          *(undefined1 *)(param_1 + 0xe) = 0;
                          bVar35 = 0;
                          puVar45 = puVar1;
                        }
                        else {
                          bVar35 = (byte)*puVar25;
                          puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                        }
                        *(uint **)(param_1 + 0x32) = puVar45;
                        *(uint **)(param_1 + 0x30) = puVar1;
                        uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                        puVar42 = puVar1;
                      }
                      lVar28 = (longlong)iVar21;
                      *(byte *)((longlong)puVar24 + lVar28 + 2) = bVar35;
                      if (puVar42 < puVar45) {
                        *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                        bVar35 = (byte)*puVar42;
                        puVar42 = (uint *)((longlong)puVar42 + 1);
                      }
                      else if (param_1[0xc] == 0) {
                        bVar35 = 0;
                      }
                      else {
                        iVar23 = (**(code **)(param_1 + 4))
                                           (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                        if (iVar23 == 0) {
                          param_1[0xc] = 0;
                          *(undefined1 *)(param_1 + 0xe) = 0;
                          bVar35 = 0;
                          puVar45 = puVar1;
                        }
                        else {
                          bVar35 = (byte)*puVar25;
                          puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                        }
                        uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                        *(uint **)(param_1 + 0x32) = puVar45;
                        *(uint **)(param_1 + 0x30) = puVar1;
                        puVar42 = puVar1;
                      }
                      *(byte *)((longlong)puVar24 + lVar28 + 1) = bVar35;
                      if (puVar42 < puVar45) {
                        *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                        bVar35 = (byte)*puVar42;
                        puVar42 = (uint *)((longlong)puVar42 + 1);
                      }
                      else if (param_1[0xc] == 0) {
                        bVar35 = 0;
                      }
                      else {
                        iVar23 = (**(code **)(param_1 + 4))
                                           (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                        if (iVar23 == 0) {
                          param_1[0xc] = 0;
                          *(undefined1 *)(param_1 + 0xe) = 0;
                          bVar35 = 0;
                          puVar45 = puVar1;
                        }
                        else {
                          bVar35 = (byte)*puVar25;
                          puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                        }
                        uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                        *(uint **)(param_1 + 0x32) = puVar45;
                        *(uint **)(param_1 + 0x30) = puVar1;
                        puVar42 = puVar1;
                      }
                      *(byte *)((longlong)puVar24 + lVar28) = bVar35;
                      bVar35 = 0xff;
                      if ((char)local_89c8 != '\0') {
                        if (puVar42 < puVar45) {
                          *(uint **)(param_1 + 0x30) = (uint *)((longlong)puVar42 + 1);
                          bVar35 = (byte)*puVar42;
                          puVar42 = (uint *)((longlong)puVar42 + 1);
                        }
                        else if (param_1[0xc] == 0) {
                          bVar35 = 0;
                        }
                        else {
                          iVar23 = (**(code **)(param_1 + 4))
                                             (*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVar23 == 0) {
                            param_1[0xc] = 0;
                            *(undefined1 *)(param_1 + 0xe) = 0;
                            bVar35 = 0;
                            puVar45 = puVar1;
                          }
                          else {
                            bVar35 = (byte)*puVar25;
                            puVar45 = (uint *)((longlong)iVar23 + (longlong)puVar25);
                          }
                          uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                          *(uint **)(param_1 + 0x32) = puVar45;
                          *(uint **)(param_1 + 0x30) = puVar1;
                          puVar42 = puVar1;
                        }
                      }
                      uVar49 = lVar28 + 3;
                      if ((int)uVar34 == 4) {
                        *(byte *)((longlong)puVar24 + uVar49) = bVar35;
                        uVar49 = (ulonglong)(iVar21 + 4);
                      }
                      local_8990 = CONCAT44(local_8990._4_4_,(uint)local_8990 | bVar35);
                      iVar18 = iVar18 + 1;
                    } while (iVar18 < (int)*param_1);
                  }
                }
                else if (0 < (int)*param_1) {
                  iVar18 = 0;
                  do {
                    iVar21 = (int)uVar49;
                    uVar19 = FUN_140492580(param_1);
                    if ((int)local_89a8 != 0x10) {
                      iVar23 = FUN_140492580(param_1);
                      uVar19 = uVar19 | iVar23 << 0x10;
                    }
                    uVar20 = (uVar19 & (uint)local_89b0) >> ((byte)local_89bc & 0x1f);
                    if ((int)local_89bc < 0) {
                      uVar20 = (uVar19 & (uint)local_89b0) << ((byte)local_8960 & 0x1f);
                    }
                    uVar36 = (uVar19 & (uint)local_8978) >> ((byte)local_899c & 0x1f);
                    if (local_899c < 0) {
                      uVar36 = (uVar19 & (uint)local_8978) << ((byte)local_8930 & 0x1f);
                    }
                    iVar23 = *(int *)(&DAT_140e1a770 + local_8910 * 4);
                    bVar35 = (&DAT_140e1a7a0)[local_8910 * 4];
                    uVar50 = (uVar19 & (uint)local_8998) >> ((byte)local_89a0 & 0x1f);
                    if ((int)local_89a0 < 0) {
                      uVar50 = (uVar19 & (uint)local_8998) << ((byte)local_8938 & 0x1f);
                    }
                    lVar28 = (longlong)iVar21;
                    iVar6 = *(int *)(&DAT_140e1a770 + local_8918 * 4);
                    bVar3 = (&DAT_140e1a7a0)[local_8918 * 4];
                    *(char *)((longlong)puVar24 + lVar28) =
                         (char)((int)((uVar20 >> ((byte)local_892c & 0x1f)) *
                                     *(int *)(&DAT_140e1a770 + local_8908)) >>
                               ((&DAT_140e1a7a0)[local_8908] & 0x1f));
                    *(char *)((longlong)puVar24 + lVar28 + 1) =
                         (char)((int)((uVar36 >> ((byte)local_8934 & 0x1f)) * iVar23) >>
                               (bVar35 & 0x1f));
                    *(char *)((longlong)puVar24 + lVar28 + 2) =
                         (char)((int)((uVar50 >> ((byte)local_893c & 0x1f)) * iVar6) >>
                               (bVar3 & 0x1f));
                    uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                    if ((uint)local_89b8 == 0) {
                      uVar19 = 0xff;
                    }
                    else {
                      uVar20 = (uVar19 & (uint)local_89b8) >> ((byte)local_8964 & 0x1f);
                      if (local_8964 < 0) {
                        uVar20 = (uVar19 & (uint)local_89b8) << ((byte)local_8944 & 0x1f);
                      }
                      uVar19 = (int)((uVar20 >> ((byte)local_8940 & 0x1f)) *
                                    *(int *)(&DAT_140e1a770 + local_8920 * 4)) >>
                               ((&DAT_140e1a7a0)[local_8920 * 4] & 0x1f);
                    }
                    uVar49 = lVar28 + 3;
                    if ((uint)local_89d0 == 4) {
                      *(char *)((longlong)puVar24 + uVar49) = (char)uVar19;
                      uVar49 = (ulonglong)(iVar21 + 4);
                    }
                    local_8990 = CONCAT44(local_8990._4_4_,(uint)local_8990 | uVar19);
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < (int)*param_1);
                }
                iVar18 = local_8948;
                if (local_8984 != 0) {
                  if (*(longlong *)(param_1 + 4) == 0) {
                    lVar28 = *(longlong *)(param_1 + 0x30);
                  }
                  else {
                    lVar28 = *(longlong *)(param_1 + 0x30);
                    if ((int)*(undefined8 *)(param_1 + 0x32) - (int)lVar28 < (int)local_8984) {
                      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                      (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10));
                      uVar34 = (ulonglong)local_89d0 & 0xffffffff;
                      goto LAB_140485498;
                    }
                  }
                  *(ulonglong *)(param_1 + 0x30) = lVar28 + local_8928;
                }
LAB_140485498:
                uVar20 = (uint)uVar34;
                iVar18 = iVar18 + 1;
                uVar19 = param_1[1];
              } while (iVar18 < (int)uVar19);
            }
LAB_140485908:
            if (((uVar20 == 4) && ((uint)local_8990 == 0)) &&
               (uVar36 = *param_1 * uVar19 * 4 - 1, -1 < (int)uVar36)) {
              uVar34 = (ulonglong)uVar36;
              if ((~uVar36 & 0x1c) != 0) {
                uVar48 = (ulonglong)((uVar36 >> 2) + 1 & 7);
                do {
                  *(undefined1 *)((longlong)puVar24 + uVar34) = 0xff;
                  uVar34 = uVar34 - 4;
                  uVar48 = uVar48 - 1;
                } while (uVar48 != 0);
              }
              uVar20 = (uint)local_89d0;
              if (0x1b < uVar36) {
                uVar34 = uVar34 + 4;
                do {
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 4)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 8)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0xc)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0x10)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0x14)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0x18)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0x1c)) = 0xff;
                  *(undefined1 *)((longlong)puVar24 + (uVar34 - 0x20)) = 0xff;
                  uVar34 = uVar34 - 0x20;
                } while (3 < uVar34);
              }
            }
            if ((int)local_894c < 1) {
              uVar36 = *param_1;
            }
            else {
              uVar36 = *param_1;
              if ((0 < (int)uVar19 >> 1) && (uVar50 = uVar36 * uVar20, 0 < (int)uVar50)) {
                local_8990 = (ulonglong)(uint)((int)uVar19 >> 1);
                uVar34 = (ulonglong)uVar50;
                local_8998 = (uint *)((longlong)puVar24 + uVar34);
                local_89b0 = (ulonglong)(uVar50 & 0x7fffffe0);
                uVar51 = uVar50 & 0x7ffffffc;
                local_89b8 = uVar34 - 1;
                local_8978 = puVar24 + 4;
                uVar41 = (uVar19 - 1) * uVar50;
                local_89c8 = (undefined8 *)((longlong)puVar24 + 1);
                uVar47 = 0;
                uVar48 = 0;
                local_89a8 = CONCAT44(local_89a8._4_4_,uVar50);
                do {
                  uVar49 = (ulonglong)uVar41;
                  uVar39 = (ulonglong)uVar47;
                  uVar20 = (uint)uVar48;
                  if (uVar50 < 4) {
                    uVar43 = 0;
LAB_140485b24:
                    uVar44 = uVar43;
                    if ((uVar50 & 1) != 0) {
                      uVar37 = (~uVar20 + uVar19) * uVar50;
                      uVar4 = *(undefined1 *)((longlong)puVar24 + uVar43 + uVar50 * uVar20);
                      *(undefined1 *)((longlong)puVar24 + uVar43 + uVar50 * uVar20) =
                           *(undefined1 *)((longlong)puVar24 + uVar43 + uVar37);
                      *(undefined1 *)((longlong)puVar24 + uVar43 + uVar37) = uVar4;
                      uVar44 = uVar43 | 1;
                    }
                    if (uVar43 != local_89b8) {
                      do {
                        uVar4 = *(undefined1 *)((longlong)local_89c8 + uVar44 + (uVar39 - 1));
                        *(undefined1 *)((longlong)local_89c8 + uVar44 + (uVar39 - 1)) =
                             *(undefined1 *)((longlong)local_89c8 + uVar44 + (uVar49 - 1));
                        *(undefined1 *)((longlong)local_89c8 + uVar44 + (uVar49 - 1)) = uVar4;
                        uVar4 = *(undefined1 *)((longlong)local_89c8 + uVar44 + uVar39);
                        *(undefined1 *)((longlong)local_89c8 + uVar44 + uVar39) =
                             *(undefined1 *)((longlong)local_89c8 + uVar44 + uVar49);
                        *(undefined1 *)((longlong)local_89c8 + uVar44 + uVar49) = uVar4;
                        uVar44 = uVar44 + 2;
                      } while (uVar34 != uVar44);
                    }
                  }
                  else {
                    uVar43 = (ulonglong)((~uVar20 + uVar19) * uVar50);
                    if (((undefined1 *)((longlong)puVar24 + (ulonglong)(uVar50 * uVar20)) <
                         (undefined1 *)((longlong)local_8998 + uVar43)) &&
                       ((undefined1 *)(uVar43 + (longlong)puVar24) <
                        (undefined1 *)((ulonglong)(uVar50 * uVar20) + (longlong)local_8998))) {
                      uVar43 = 0;
                      goto LAB_140485b24;
                    }
                    if (uVar50 < 0x20) {
                      uVar43 = 0;
LAB_140485afc:
                      do {
                        uVar22 = *(undefined4 *)((longlong)puVar24 + uVar43 + uVar39);
                        *(undefined4 *)((longlong)puVar24 + uVar43 + uVar39) =
                             *(undefined4 *)((longlong)puVar24 + uVar43 + uVar49);
                        *(undefined4 *)((longlong)puVar24 + uVar43 + uVar49) = uVar22;
                        uVar43 = uVar43 + 4;
                      } while (uVar51 != uVar43);
                      uVar43 = (ulonglong)uVar51;
                      if (uVar51 != uVar50) goto LAB_140485b24;
                    }
                    else {
                      uVar43 = 0;
                      do {
                        puVar2 = (undefined4 *)((longlong)local_8978 + uVar43 + (uVar39 - 0x10));
                        uVar22 = *puVar2;
                        uVar7 = puVar2[1];
                        uVar8 = puVar2[2];
                        uVar9 = puVar2[3];
                        puVar46 = (undefined8 *)((longlong)local_8978 + uVar43 + uVar39);
                        uVar27 = *puVar46;
                        uVar10 = puVar46[1];
                        puVar46 = (undefined8 *)((longlong)local_8978 + uVar43 + uVar49);
                        uVar11 = *puVar46;
                        uVar12 = puVar46[1];
                        *(undefined1 (*) [16])((longlong)local_8978 + uVar43 + (uVar39 - 0x10)) =
                             *(undefined1 (*) [16])((longlong)local_8978 + uVar43 + (uVar49 - 0x10))
                        ;
                        puVar46 = (undefined8 *)((longlong)local_8978 + uVar43 + uVar39);
                        *puVar46 = uVar11;
                        puVar46[1] = uVar12;
                        puVar2 = (undefined4 *)((longlong)local_8978 + uVar43 + (uVar49 - 0x10));
                        *puVar2 = uVar22;
                        puVar2[1] = uVar7;
                        puVar2[2] = uVar8;
                        puVar2[3] = uVar9;
                        puVar46 = (undefined8 *)((longlong)local_8978 + uVar43 + uVar49);
                        *puVar46 = uVar27;
                        puVar46[1] = uVar10;
                        uVar43 = uVar43 + 0x20;
                      } while (local_89b0 != uVar43);
                      if ((uVar50 & 0x7fffffe0) != uVar50) {
                        uVar43 = local_89b0;
                        if ((uVar50 & 0x1c) == 0) goto LAB_140485b24;
                        goto LAB_140485afc;
                      }
                    }
                  }
                  uVar48 = uVar48 + 1;
                  uVar41 = uVar41 - uVar50;
                  uVar47 = uVar47 + uVar50;
                  uVar20 = (uint)local_89d0;
                  local_89bc = uVar36;
                } while (uVar48 != local_8990);
              }
            }
            if ((local_89d4 != 0) && (local_89d4 != uVar20)) {
              local_89e8 = uVar19;
              puVar24 = (uint *)FUN_14048d770(puVar24,uVar20);
              if (puVar24 == (uint *)0x0) goto LAB_140484291;
              uVar36 = *param_1;
            }
            *local_8970 = uVar36;
            *local_8958 = param_1[1];
            if (local_8980 != (uint *)0x0) {
              *local_8980 = param_1[2];
            }
            goto LAB_140484294;
          }
          local_8984 = *param_1 * 2 & 2;
LAB_1404852ac:
          if ((iVar21 == 0 || iVar18 == 0) || iVar23 == 0) {
            free(puVar24);
            pcVar26 = "bad masks";
            goto LAB_14048428e;
          }
          local_89c8 = puVar46;
          local_89bc = FUN_140492c30(iVar18);
          local_89b0 = CONCAT44(local_89b0._4_4_,iVar18);
          uVar36 = FUN_140492ca0(iVar18);
          local_899c = FUN_140492c30((ulonglong)puVar42 & 0xffffffff);
          local_8978 = (uint *)CONCAT44(local_8978._4_4_,iVar21);
          uVar19 = FUN_140492ca0((ulonglong)puVar42 & 0xffffffff);
          uVar48 = (ulonglong)uVar19;
          local_89a0 = FUN_140492c30(iVar23);
          uVar50 = FUN_140492ca0(iVar23);
          uVar34 = local_89b8;
          local_8964 = FUN_140492c30(local_89b8 & 0xffffffff);
          uVar34 = uVar34 & 0xffffffff;
          uVar41 = FUN_140492ca0(uVar34);
          if ((uVar41 < 9 && uVar50 < 9) && (uVar19 < 9 && uVar36 < 9)) {
            local_89bc = local_89bc - 7;
            local_899c = local_899c + -7;
            local_89a0 = local_89a0 - 7;
            local_8964 = local_8964 + -7;
            local_895c = (undefined4)CONCAT71((int7)(uVar34 >> 8),1);
            local_89c8 = (undefined8 *)((ulonglong)local_89c8 & 0xffffffff00000000);
            uVar34 = (ulonglong)local_89d0 & 0xffffffff;
            goto LAB_1404853b4;
          }
          free(puVar24);
          pcVar26 = "bad masks";
          goto LAB_140483d86;
        }
LAB_140484287:
        pcVar26 = "outofmem";
        goto LAB_14048428e;
      }
    }
    else {
      if (param_1[0xc] != 0) {
        iVar18 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 10),puVar25,param_1[0xd]);
        puVar42 = *(uint **)(param_1 + 0x34);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - (int)puVar42);
        if (iVar18 == 0) {
          param_1[0xc] = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          puVar24 = puVar1;
        }
        else {
          puVar24 = (uint *)((longlong)iVar18 + (longlong)puVar25);
        }
        *(uint **)(param_1 + 0x32) = puVar24;
        *(uint **)(param_1 + 0x30) = puVar1;
        puVar45 = puVar1;
        if ((byte)*puVar25 == 0x42) goto LAB_14048388c;
      }
LAB_1404839dc:
      *(uint **)(param_1 + 0x30) = puVar42;
      *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_1 + 0x36);
LAB_1404839f1:
      iVar18 = FUN_140485cb0(param_1);
      if (iVar18 != 0) {
        memset(&local_88d8,0,0x8870);
        puVar24 = (uint *)bad_image_descriptor(param_1,&local_88d8,local_8980,0);
        if (puVar24 == (uint *)0x0 || puVar24 == param_1) {
          if (local_88d0 != (void *)0x0) {
            free(local_88d0);
          }
          puVar24 = (uint *)0x0;
        }
        else {
          *local_8970 = (uint)local_88d8;
          *param_3 = local_88d8._4_4_;
          if ((local_89d4 & 0xfffffffb) != 0) {
            local_89e8 = local_88d8._4_4_;
            puVar24 = (uint *)FUN_14048d770(puVar24,4);
          }
        }
        free(local_88c0);
        free(local_88c8);
        goto LAB_140484294;
      }
      iVar18 = FUN_14048fe40(param_1);
      uVar19 = FUN_14048fe40(param_1);
      param_1[0x30] = param_1[0x34];
      param_1[0x31] = param_1[0x35];
      param_1[0x32] = param_1[0x36];
      param_1[0x33] = param_1[0x37];
      if ((uVar19 | iVar18 << 0x10) != 0x38425053) {
        iVar18 = FUN_140485f50(param_1);
        if (iVar18 != 0) {
          if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_8a08)) {
            puVar25 = (uint *)FUN_140486020(param_1,local_8970,param_3,local_8980);
            return puVar25;
          }
          goto LAB_140485c99;
        }
        iVar18 = FUN_140486c30(param_1);
        if (iVar18 == 0) {
          iVar18 = FUN_1404894c0(param_1);
          if (iVar18 == 0) {
            iVar18 = FUN_1404804f0(param_1);
            puVar1 = local_8970;
            puVar25 = local_8980;
            uVar19 = local_89d4;
            if (iVar18 != 0) {
              local_89e8 = local_89d4;
              uVar27 = unsupported_data_layout(param_1,local_8970,param_3,local_8980);
              if (uVar19 == 0) {
                uVar19 = *puVar25;
              }
              if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_8a08)) {
                puVar25 = (uint *)FUN_14048a4a0(uVar27,*puVar1,*param_3,uVar19);
                return puVar25;
              }
              goto LAB_140485c99;
            }
            iVar18 = FUN_14048a7a0(param_1);
            if (iVar18 == 0) {
              pcVar26 = "unknown image type";
              goto LAB_14048428e;
            }
            local_89e8 = local_89d4;
            puVar25 = (uint *)FUN_14048aba0(param_1,local_8970,param_3,local_8980);
          }
          else {
            local_89e0 = param_6;
            local_89e8 = local_89d4;
            puVar25 = (uint *)FUN_140489600(param_1,local_8970,param_3,local_8980);
          }
        }
        else {
          local_89e8 = local_89d4;
          puVar25 = (uint *)bad_sos_component_count(param_1,local_8970,param_3,local_8980);
        }
        if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_8a08)) {
          return puVar25;
        }
        goto LAB_140485c99;
      }
      iVar18 = FUN_14048fe40();
      uVar19 = FUN_14048fe40(param_1);
      if ((uVar19 | iVar18 << 0x10) == 0x38425053) {
        iVar18 = FUN_14048fe40(param_1);
        if (iVar18 == 1) {
          if (*(longlong *)(param_1 + 4) == 0) {
            lVar28 = *(longlong *)(param_1 + 0x30);
LAB_140483d13:
            *(longlong *)(param_1 + 0x30) = lVar28 + 6;
          }
          else {
            lVar28 = *(longlong *)(param_1 + 0x30);
            iVar18 = (int)*(undefined8 *)(param_1 + 0x32) - (int)lVar28;
            if (5 < iVar18) goto LAB_140483d13;
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
            (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10),6 - iVar18);
          }
          uVar19 = FUN_14048fe40(param_1);
          if (uVar19 < 0x11) {
            local_89b8 = CONCAT44(local_89b8._4_4_,uVar19);
            local_89c8 = puVar46;
            iVar18 = FUN_14048fe40(param_1);
            uVar19 = FUN_14048fe40(param_1);
            uVar19 = uVar19 | iVar18 << 0x10;
            iVar18 = FUN_14048fe40(param_1);
            uVar20 = FUN_14048fe40(param_1);
            puVar46 = local_89c8;
            local_8990 = CONCAT44(local_8990._4_4_,uVar19);
            if (0x1000000 < (int)uVar19) {
              pcVar26 = "too large";
LAB_140483d86:
              *local_89c8 = pcVar26;
              goto LAB_140484291;
            }
            uVar20 = iVar18 << 0x10 | uVar20;
            if ((int)uVar20 < 0x1000001) {
              local_89b0 = CONCAT44(local_89b0._4_4_,uVar20);
              iVar18 = FUN_14048fe40(param_1);
              if ((iVar18 == 8) || (iVar18 == 0x10)) {
                iVar21 = FUN_14048fe40(param_1);
                if (iVar21 == 3) {
                  uVar22 = FUN_14048fe10(param_1);
                  FUN_14048fdb0(param_1,uVar22);
                  uVar22 = FUN_14048fe10(param_1);
                  FUN_14048fdb0(param_1,uVar22);
                  uVar22 = FUN_14048fe10(param_1);
                  FUN_14048fdb0(param_1,uVar22);
                  uVar19 = FUN_14048fe40(param_1);
                  if (uVar19 < 2) {
                    local_89d0 = (undefined8 *)CONCAT44(local_89d0._4_4_,uVar19);
                    iVar21 = FUN_1404924a0(4,local_89b0 & 0xffffffff,local_8990 & 0xffffffff,0);
                    if (iVar21 == 0) goto LAB_1404839d0;
                    local_899c = iVar18;
                    if (((param_7 == 0x10) && (iVar18 == 0x10)) && ((uint)local_89d0 == 0)) {
                      puVar24 = (uint *)FUN_140492440(8,local_89b0 & 0xffffffff,
                                                      local_8990 & 0xffffffff,0);
                      *param_6 = 0x10;
                    }
                    else {
                      puVar24 = malloc((longlong)(int)((uint)local_8990 * (uint)local_89b0 * 4));
                    }
                    if (puVar24 == (uint *)0x0) goto LAB_140484287;
                    uVar19 = (uint)local_89b0 * (uint)local_8990;
                    puVar29 = (undefined8 *)(ulonglong)uVar19;
                    iVar18 = (uint)local_89b8;
                    if ((uint)local_89d0 == 0) {
                      local_89bc = CONCAT31(local_89bc._1_3_,local_899c == 0x10 && param_7 == 0x10);
                      local_8978 = (uint *)(local_89b8 & 0xffffffff);
                      local_89a0 = uVar19 - 1;
                      local_8960 = uVar19 & 0x7ffffff8;
                      local_89a8 = (ulonglong)(uVar19 & 7);
                      puVar30 = (uint *)0x0;
                      puVar42 = puVar24;
                      puVar45 = puVar24;
                      local_89d0 = puVar29;
                      local_89c8 = puVar29;
                      local_8958 = param_3;
                      do {
                        local_8998 = puVar30;
                        if (puVar30 < local_8978) {
                          if (*param_6 == 0x10) {
                            if (0 < (int)local_89c8) {
                              lVar28 = 0;
                              do {
                                uVar16 = FUN_14048fe40(param_1);
                                *(undefined2 *)(puVar45 + lVar28 * 2) = uVar16;
                                lVar28 = lVar28 + 1;
                              } while ((uint)local_89d0 != (int)lVar28);
                            }
                          }
                          else if (local_899c == 0x10) {
                            if (0 < (int)local_89c8) {
                              lVar28 = 0;
                              do {
                                FUN_14048fe40(param_1);
                                *(undefined1 *)(puVar42 + lVar28) = extraout_AH;
                                lVar28 = lVar28 + 1;
                              } while ((uint)local_89d0 != (int)lVar28);
                            }
                          }
                          else if (0 < (int)local_89c8) {
                            puVar30 = *(uint **)(param_1 + 0x32);
                            lVar28 = 0;
                            puVar33 = *(uint **)(param_1 + 0x30);
                            do {
                              if (puVar33 < puVar30) {
                                puVar32 = (uint *)((longlong)puVar33 + 1);
                                *(uint **)(param_1 + 0x30) = puVar32;
                                bVar35 = (byte)*puVar33;
                              }
                              else if (param_1[0xc] == 0) {
                                bVar35 = 0;
                                puVar32 = puVar33;
                              }
                              else {
                                iVar18 = (**(code **)(param_1 + 4))
                                                   (*(undefined8 *)(param_1 + 10),puVar25,
                                                    param_1[0xd]);
                                param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                                if (iVar18 == 0) {
                                  param_1[0xc] = 0;
                                  *(undefined1 *)(param_1 + 0xe) = 0;
                                  bVar35 = 0;
                                  puVar30 = puVar1;
                                }
                                else {
                                  bVar35 = (byte)*puVar25;
                                  puVar30 = (uint *)((longlong)iVar18 + (longlong)puVar25);
                                }
                                *(uint **)(param_1 + 0x32) = puVar30;
                                *(uint **)(param_1 + 0x30) = puVar1;
                                puVar32 = puVar1;
                              }
                              *(byte *)(puVar42 + lVar28) = bVar35;
                              lVar28 = lVar28 + 1;
                              puVar33 = puVar32;
                            } while ((uint)local_89d0 != (int)lVar28);
                          }
                        }
                        else if ((char)local_89bc == '\0') {
                          if (0 < (int)local_89c8) {
                            cVar15 = -(puVar30 == (uint *)0x3);
                            pcVar26 = (char *)((longlong)puVar30 + (longlong)puVar24);
                            uVar19 = local_8960;
                            if (6 < local_89a0) {
                              do {
                                *pcVar26 = cVar15;
                                pcVar26[4] = cVar15;
                                pcVar26[8] = cVar15;
                                pcVar26[0xc] = cVar15;
                                pcVar26[0x10] = cVar15;
                                pcVar26[0x14] = cVar15;
                                pcVar26[0x18] = cVar15;
                                pcVar26[0x1c] = cVar15;
                                pcVar26 = pcVar26 + 0x20;
                                uVar19 = uVar19 - 8;
                              } while (uVar19 != 0);
                            }
                            if (((ulonglong)local_89c8 & 7) != 0) {
                              lVar28 = 0;
                              do {
                                pcVar26[lVar28 * 4] = cVar15;
                                lVar28 = lVar28 + 1;
                              } while ((int)local_89a8 != (int)lVar28);
                            }
                          }
                        }
                        else if (0 < (int)local_89c8) {
                          sVar17 = -(ushort)(puVar30 == (uint *)0x3);
                          psVar31 = (short *)((longlong)puVar24 + (longlong)puVar30 * 2);
                          uVar19 = local_8960;
                          if (6 < local_89a0) {
                            do {
                              *psVar31 = sVar17;
                              psVar31[4] = sVar17;
                              psVar31[8] = sVar17;
                              psVar31[0xc] = sVar17;
                              psVar31[0x10] = sVar17;
                              psVar31[0x14] = sVar17;
                              psVar31[0x18] = sVar17;
                              psVar31[0x1c] = sVar17;
                              psVar31 = psVar31 + 0x20;
                              uVar19 = uVar19 - 8;
                            } while (uVar19 != 0);
                          }
                          if (((ulonglong)local_89c8 & 7) != 0) {
                            lVar28 = 0;
                            do {
                              psVar31[lVar28 * 4] = sVar17;
                              lVar28 = lVar28 + 1;
                            } while ((int)local_89a8 != (int)lVar28);
                          }
                        }
                        puVar30 = (uint *)((longlong)local_8998 + 1);
                        puVar42 = (uint *)((longlong)puVar42 + 1);
                        puVar45 = (uint *)((longlong)puVar45 + 2);
                      } while (puVar30 != (uint *)0x4);
                      param_3 = local_8958;
                      puVar29 = local_89c8;
                      if (3 < (uint)local_89b8) {
LAB_14048486a:
                        if (*param_6 == 0x10) {
                          if (0 < (int)puVar29) {
                            uVar34 = 0;
                            do {
                              uVar5 = *(ushort *)((longlong)puVar24 + uVar34 * 8 + 6);
                              if ((uVar5 != 0) && (uVar5 != 0xffff)) {
                                fVar53 = 1.0 / ((float)uVar5 / 65535.0);
                                fVar52 = (1.0 - fVar53) * 65535.0;
                                auVar54._0_4_ =
                                     (int)(fVar52 + fVar53 * (float)(puVar24[uVar34 * 2] & 0xffff));
                                auVar54._4_4_ =
                                     (int)(fVar52 + fVar53 * (float)(puVar24[uVar34 * 2] >> 0x10));
                                auVar54._8_4_ = (int)(fVar52 + fVar53 * 0.0);
                                auVar54._12_4_ = (int)(fVar52 + fVar53 * 0.0);
                                auVar54 = pshuflw(auVar54,auVar54,0xe8);
                                puVar24[uVar34 * 2] = auVar54._0_4_;
                                *(short *)(puVar24 + uVar34 * 2 + 1) =
                                     (short)(int)((float)(ushort)puVar24[uVar34 * 2 + 1] * fVar53 +
                                                 fVar52);
                              }
                              uVar34 = uVar34 + 1;
                            } while (((ulonglong)puVar29 & 0xffffffff) != uVar34);
                          }
                        }
                        else if (0 < (int)puVar29) {
                          uVar34 = 0;
                          do {
                            bVar35 = *(byte *)((longlong)puVar24 + uVar34 * 4 + 3);
                            if ((bVar35 != 0) && (bVar35 != 0xff)) {
                              fVar53 = 1.0 / ((float)bVar35 / 255.0);
                              fVar52 = (1.0 - fVar53) * 255.0;
                              *(char *)(puVar24 + uVar34) =
                                   (char)(int)((float)(byte)puVar24[uVar34] * fVar53 + fVar52);
                              *(char *)((longlong)puVar24 + uVar34 * 4 + 1) =
                                   (char)(int)((float)*(byte *)((longlong)puVar24 + uVar34 * 4 + 1)
                                               * fVar53 + fVar52);
                              *(char *)((longlong)puVar24 + uVar34 * 4 + 2) =
                                   (char)(int)((float)*(byte *)((longlong)puVar24 + uVar34 * 4 + 2)
                                               * fVar53 + fVar52);
                            }
                            uVar34 = uVar34 + 1;
                          } while (((ulonglong)puVar29 & 0xffffffff) != uVar34);
                        }
                      }
                    }
                    else {
                      FUN_14048fdb0(param_1);
                      if ((int)uVar19 < 1) {
                        if (iVar18 != 0) {
                          iVar18 = FUN_1404943f0(param_1,puVar24,uVar19);
                          if (iVar18 == 0) goto LAB_1404849b1;
                          if ((uint)local_89b8 != 1) {
                            iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 1),
                                                   uVar19);
                            if (iVar18 == 0) goto LAB_1404849b1;
                            if (2 < (uint)local_89b8) {
                              iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 2),
                                                     uVar19);
                              if (iVar18 == 0) goto LAB_1404849b1;
                              if ((uint)local_89b8 != 3) {
                                iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 3)
                                                       ,uVar19);
                                goto joined_r0x0001404849ab;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar18 != 0) {
                          iVar18 = FUN_1404943f0(param_1,puVar24,uVar19);
                          if (iVar18 == 0) goto LAB_1404849b1;
                          if ((uint)local_89b8 == 1) goto LAB_140484a4a;
                          iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 1),
                                                 puVar29);
                          puVar46 = local_89c8;
                          if (iVar18 == 0) goto LAB_1404849b1;
                          if ((uint)local_89b8 < 3) goto joined_r0x000140485c8e;
                          iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 2),
                                                 puVar29);
                          puVar46 = local_89c8;
                          if (iVar18 != 0) {
                            if ((uint)local_89b8 == 3) goto LAB_140484afd;
                            iVar18 = FUN_1404943f0(param_1,(undefined1 *)((longlong)puVar24 + 3),
                                                   uVar19);
                            puVar46 = local_89c8;
joined_r0x0001404849ab:
                            if (iVar18 != 0) goto LAB_14048486a;
                          }
LAB_1404849b1:
                          free(puVar24);
                          pcVar26 = "corrupt";
                          goto LAB_14048428e;
                        }
                        puVar25 = puVar24;
                        if (6 < uVar19 - 1) {
                          uVar20 = uVar19 & 0x7ffffff8;
                          do {
                            *(undefined1 *)puVar25 = 0;
                            *(undefined1 *)(puVar25 + 1) = 0;
                            *(undefined1 *)(puVar25 + 2) = 0;
                            *(undefined1 *)(puVar25 + 3) = 0;
                            *(undefined1 *)(puVar25 + 4) = 0;
                            *(undefined1 *)(puVar25 + 5) = 0;
                            *(undefined1 *)(puVar25 + 6) = 0;
                            *(undefined1 *)(puVar25 + 7) = 0;
                            puVar25 = puVar25 + 8;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                        }
                        if ((uVar19 & 7) != 0) {
                          lVar28 = 0;
                          do {
                            *(undefined1 *)(puVar25 + lVar28) = 0;
                            lVar28 = lVar28 + 1;
                          } while ((uVar19 & 7) != (uint)lVar28);
                        }
LAB_140484a4a:
                        puVar38 = (undefined1 *)((longlong)puVar24 + 1);
                        if (6 < uVar19 - 1) {
                          uVar20 = uVar19 & 0x7ffffff8;
                          do {
                            *puVar38 = 0;
                            puVar38[4] = 0;
                            puVar38[8] = 0;
                            puVar38[0xc] = 0;
                            puVar38[0x10] = 0;
                            puVar38[0x14] = 0;
                            puVar38[0x18] = 0;
                            puVar38[0x1c] = 0;
                            puVar38 = puVar38 + 0x20;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                        }
                        if ((uVar19 & 7) != 0) {
                          lVar28 = 0;
                          do {
                            puVar38[lVar28 * 4] = 0;
                            lVar28 = lVar28 + 1;
                          } while ((uVar19 & 7) != (uint)lVar28);
                        }
joined_r0x000140485c8e:
                        puVar38 = (undefined1 *)((longlong)puVar24 + 2);
                        if (6 < uVar19 - 1) {
                          puVar38 = (undefined1 *)((longlong)puVar24 + 2);
                          uVar20 = uVar19 & 0x7ffffff8;
                          do {
                            *puVar38 = 0;
                            puVar38[4] = 0;
                            puVar38[8] = 0;
                            puVar38[0xc] = 0;
                            puVar38[0x10] = 0;
                            puVar38[0x14] = 0;
                            puVar38[0x18] = 0;
                            puVar38[0x1c] = 0;
                            puVar38 = puVar38 + 0x20;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                        }
                        if ((uVar19 & 7) != 0) {
                          lVar28 = 0;
                          do {
                            puVar38[lVar28 * 4] = 0;
                            lVar28 = lVar28 + 1;
                          } while ((uVar19 & 7) != (uint)lVar28);
                        }
LAB_140484afd:
                        puVar38 = (undefined1 *)((longlong)puVar24 + 3);
                        if (6 < uVar19 - 1) {
                          uVar20 = uVar19 & 0x7ffffff8;
                          do {
                            *puVar38 = 0xff;
                            puVar38[4] = 0xff;
                            puVar38[8] = 0xff;
                            puVar38[0xc] = 0xff;
                            puVar38[0x10] = 0xff;
                            puVar38[0x14] = 0xff;
                            puVar38[0x18] = 0xff;
                            puVar38[0x1c] = 0xff;
                            puVar38 = puVar38 + 0x20;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                        }
                        if ((uVar19 & 7) != 0) {
                          lVar28 = 0;
                          do {
                            puVar38[lVar28 * 4] = 0xff;
                            lVar28 = lVar28 + 1;
                          } while ((uVar19 & 7) != (uint)lVar28);
                        }
                      }
                    }
                    puVar1 = local_8970;
                    puVar25 = local_8980;
                    if ((local_89d4 & 0xfffffffb) != 0) {
                      if (*param_6 == 0x10) {
                        local_89e8 = (uint)local_8990;
                        puVar24 = (uint *)FUN_14048f070(puVar24,4,local_89d4,local_89b0 & 0xffffffff
                                                       );
                      }
                      else {
                        local_89e8 = (uint)local_8990;
                        puVar24 = (uint *)FUN_14048d770(puVar24,4,local_89d4,local_89b0 & 0xffffffff
                                                       );
                      }
                      if (puVar24 == (uint *)0x0) goto LAB_140484291;
                    }
                    if (puVar25 != (uint *)0x0) {
                      *puVar25 = 4;
                    }
                    *param_3 = (uint)local_8990;
                    *puVar1 = (uint)local_89b0;
                    goto LAB_140484294;
                  }
                  pcVar26 = "bad compression";
                }
                else {
                  pcVar26 = "wrong color format";
                }
              }
              else {
                pcVar26 = "unsupported bit depth";
              }
            }
            else {
LAB_1404839d0:
              pcVar26 = "too large";
            }
          }
          else {
            pcVar26 = "wrong channel count";
          }
        }
        else {
          pcVar26 = "wrong version";
        }
      }
      else {
        pcVar26 = "not PSD";
      }
LAB_14048428e:
      *puVar46 = pcVar26;
    }
LAB_140484291:
    puVar24 = (uint *)0x0;
  }
LAB_140484294:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_8a08)) {
    return puVar24;
  }
LAB_140485c99:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_8a08);
}


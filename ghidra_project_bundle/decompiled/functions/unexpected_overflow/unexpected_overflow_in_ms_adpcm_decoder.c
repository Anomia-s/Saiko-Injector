/**
 * Function: unexpected_overflow_in_ms_adpcm_decoder
 * Address:  1401670a0
 * Signature: undefined unexpected_overflow_in_ms_adpcm_decoder(void)
 * Body size: 1523 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 unexpected_overflow_in_ms_adpcm_decoder(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ushort *puVar26;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  int *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  ushort *local_70;
  longlong local_68;
  ulonglong local_60;
  ushort local_58;
  undefined1 auStack_56 [6];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  local_50 = 0;
  _local_58 = 0;
  if ((*(ulonglong *)(param_1 + 0x18) == (ulonglong)*(uint *)(param_1 + 4)) ||
     (cVar5 = truncated_ms_adpcm_block(param_1), cVar5 != '\0')) {
    uVar16 = *(ulonglong *)(param_1 + 0x58);
    if (uVar16 == 0) {
      *param_2 = 0;
      *param_3 = 0;
    }
    else {
      uVar14 = *(ushort *)(param_1 + 0x24);
      uVar13 = (ulonglong)((uint)uVar14 + (uint)uVar14);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar16;
      if ((SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar4,0) <= uVar13) ||
         (uVar13 * uVar16 >> 0x20 != 0)) {
        pcVar10 = "WAVE file too big";
LAB_14016713b:
        uVar8 = FUN_1400fbed0(pcVar10);
        if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_138)) {
          return uVar8;
        }
        goto LAB_140167693;
      }
      local_60 = (ulonglong)*(ushort *)(param_1 + 0x30);
      uVar18 = *(uint *)(param_1 + 0x38);
      local_70 = *(ushort **)(param_1 + 0x60);
      local_68 = *(longlong *)(param_1 + 0x10);
      uVar25 = *(ulonglong *)(param_1 + 0x18);
      local_f0 = uVar13 * uVar16;
      local_c8 = (ulonglong)uVar14;
      lVar9 = FUN_140160c70(1);
      if (lVar9 == 0) goto LAB_140167666;
      uVar21 = local_c8 * 7;
      if (uVar21 <= uVar25 && 0 < (longlong)uVar16) {
        local_90 = local_f0 >> 1;
        local_98 = local_c8 * 3;
        local_a0 = local_c8 * 5;
        local_88 = (ulonglong)uVar18 - 2;
        lVar19 = uVar13 + lVar9;
        local_78 = lVar9 - (ulonglong)(uint)((int)local_c8 * 4);
        local_80 = lVar9 - (ulonglong)(uint)((int)local_c8 * 2);
        uVar13 = 0;
        local_d0 = 0;
        uVar22 = uVar25;
        uVar24 = local_c8;
        local_110 = lVar9;
        local_108 = param_2;
        local_100 = param_3;
        local_e8 = uVar21;
        local_e0 = uVar25;
        local_a8 = (ulonglong)uVar18;
        do {
          local_b8 = uVar25;
          if (local_60 <= uVar25) {
            local_b8 = local_60;
          }
          if (local_90 - uVar13 < uVar16 * uVar24) {
            FUN_140160cf0(lVar9);
            pcVar10 = "Unexpected overflow in MS ADPCM decoder";
            goto LAB_14016713b;
          }
          lVar1 = local_68 + local_d0;
          uVar25 = uVar21;
          uVar17 = uVar24;
          if ((short)uVar24 != 0) {
            puVar20 = (undefined4 *)auStack_56;
            uVar25 = 0;
            do {
              local_f8 = uVar16;
              if (*local_70 < (ushort)*(byte *)(lVar1 + uVar25)) {
                cVar5 = FUN_1400fbed0("Invalid MS ADPCM coefficient index in block header");
                if (cVar5 != '\0') {
                  uVar13 = uVar13 + uVar25;
                  uVar25 = 0;
                  lVar9 = local_110;
                  uVar16 = local_f8;
                  uVar22 = local_e0;
                  uVar21 = local_e8;
                  goto LAB_1401673c3;
                }
                FUN_140160cf0(local_110);
                goto LAB_140167666;
              }
              *puVar20 = *(undefined4 *)
                          (*(longlong *)(local_70 + 4) +
                          (ulonglong)(ushort)*(byte *)(lVar1 + uVar25) * 4);
              *(undefined2 *)((longlong)puVar20 + 0xfffffffffffffffe) =
                   *(undefined2 *)(uVar24 + lVar1 + uVar25 * 2);
              *(undefined2 *)(lVar19 + uVar13 * 2 + uVar25 * 2) =
                   *(undefined2 *)(local_98 + lVar1 + uVar25 * 2);
              *(undefined2 *)(lVar9 + uVar13 * 2 + uVar25 * 2) =
                   *(undefined2 *)(local_a0 + lVar1 + uVar25 * 2);
              uVar25 = uVar25 + 1;
              puVar20 = (undefined4 *)((longlong)puVar20 + 6);
              uVar17 = local_c8;
            } while (local_c8 != uVar25);
            uVar13 = uVar13 + uVar25;
            uVar22 = local_e0;
            uVar25 = local_e8;
          }
          uVar13 = uVar13 + uVar17;
          uVar16 = uVar16 - 2;
          uVar21 = uVar25;
LAB_1401673c3:
          uVar12 = uVar16;
          if ((longlong)local_88 < (longlong)uVar16) {
            uVar12 = local_88;
          }
          uVar24 = uVar17;
          param_3 = local_100;
          param_2 = local_108;
          if ((0 < (longlong)uVar12) && (uVar16 = uVar16 - uVar12, (short)uVar17 != 0)) {
            uVar18 = 0;
            local_c0 = uVar12;
            do {
              local_d8 = uVar13;
              puVar26 = &local_58;
              uVar21 = 0;
              do {
                local_f8 = uVar16;
                local_b0 = lVar19;
                if ((uVar18 & 0x4000) == 0) {
                  if (local_b8 <= uVar25) {
                    if (*(int *)(param_1 + 0x6c) - 1U < 2) {
                      FUN_140160cf0(local_110);
                      pcVar10 = "Truncated data chunk";
                      goto LAB_14016713b;
                    }
                    iVar6 = (int)local_d8;
                    if (*(int *)(param_1 + 0x6c) != 3) {
                      uVar17 = local_a8 * uVar17;
                      if ((local_d8 | uVar17) >> 0x20 == 0) {
                        iVar7 = (int)((local_d8 & 0xffffffff) % (uVar17 & 0xffffffff));
                      }
                      else {
                        iVar7 = (int)(local_d8 % uVar17);
                      }
                      iVar6 = iVar6 - iVar7;
                    }
                    iVar6 = iVar6 * 2;
                    lVar9 = local_110;
                    goto LAB_14016763d;
                  }
                  pbVar2 = (byte *)(lVar1 + uVar25);
                  uVar25 = uVar25 + 1;
                  uVar18 = *pbVar2 | 0x4000;
                }
                else {
                  uVar18 = uVar18 << 4;
                }
                uVar13 = (ulonglong)(uVar18 >> 4) & 0xf;
                iVar11 = (int)(short)puVar26[1] *
                         (int)*(short *)(local_80 + local_d8 * 2 + uVar21 * 2);
                iVar6 = (int)(short)puVar26[2] *
                        (int)*(short *)(local_78 + local_d8 * 2 + uVar21 * 2);
                iVar7 = iVar6 + iVar11;
                iVar6 = iVar6 + iVar11 + 0xff;
                if (-1 < iVar7) {
                  iVar6 = iVar7;
                }
                iVar6 = ((uint)(-1 < (char)uVar18) * 0x10 + (int)uVar13 + -0x10) * (uint)*puVar26 +
                        (iVar6 >> 8);
                if (iVar6 < -0x7fff) {
                  iVar6 = -0x8000;
                }
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                uVar23 = (uint)*(ushort *)(&DAT_140decd20 + uVar13 * 2) * (uint)*puVar26;
                uVar15 = uVar23 >> 8;
                if (0xfffe < uVar15) {
                  uVar15 = 0xffff;
                }
                uVar14 = (ushort)uVar15;
                if (uVar23 < 0x1000) {
                  uVar14 = 0x10;
                }
                *puVar26 = uVar14;
                *(short *)(lVar9 + local_d8 * 2 + uVar21 * 2) = (short)iVar6;
                uVar21 = uVar21 + 1;
                puVar26 = puVar26 + 3;
                uVar17 = local_c8;
              } while (local_c8 != uVar21);
              uVar22 = local_c0 - 1;
              bVar3 = 1 < (longlong)local_c0;
              lVar9 = local_110;
              uVar13 = local_d8 + uVar21;
              local_c0 = uVar22;
            } while (bVar3);
            uVar13 = local_d8 + uVar21;
            uVar22 = local_e0;
            uVar21 = local_e8;
            uVar24 = local_c8;
          }
          if ((longlong)uVar16 < 1) break;
          local_d0 = local_d0 + local_b8;
          uVar25 = uVar22 - local_d0;
        } while (uVar21 <= uVar25);
      }
      iVar6 = (int)local_f0;
LAB_14016763d:
      *param_2 = lVar9;
      *param_3 = iVar6;
    }
    uVar8 = 1;
  }
  else {
LAB_140167666:
    uVar8 = 0;
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_138)) {
    return uVar8;
  }
LAB_140167693:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_138);
}


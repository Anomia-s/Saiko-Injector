/**
 * Function: bad_segment_size_dn
 * Address:  140641240
 * Signature: undefined bad_segment_size_dn(void)
 * Body size: 3713 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 bad_segment_size_dn(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  int iVar18;
  ushort *_Dst;
  ushort *puVar19;
  longlong *plVar20;
  char cVar21;
  int iVar22;
  float fVar23;
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  ushort *local_1e0;
  char *local_1d8;
  longlong *local_1d0;
  uint *local_1c8;
  undefined8 *local_1c0;
  undefined4 *local_1b8;
  longlong *local_1b0;
  ushort *local_1a8;
  ushort *local_1a0;
  longlong *local_198;
  longlong local_190;
  char local_188;
  uint uStack_187;
  undefined4 uStack_183;
  undefined1 uStack_17f;
  undefined6 uStack_17e;
  undefined1 local_178;
  undefined1 uStack_177;
  ushort uStack_176;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined7 uStack_11f;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined2 uVar30;
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_218;
  plVar3 = *(longlong **)(param_1 + 0x70);
  local_190 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    local_190 = FUN_14012a270(**(undefined4 **)(param_1 + 0x90));
  }
  if ((plVar3[3] != 0) && (uVar16 = sdl_timer_resolution(), plVar3[3] + 60000U <= uVar16)) {
    lVar4 = *plVar3;
    local_188 = '\0';
    uStack_183 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    local_158 = 0;
    uStack_157 = 0;
    uStack_150 = 0;
    uStack_14f = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15f = 0;
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    local_148 = 0;
    uStack_187 = 0x3c0102ad;
    if (*(char *)(lVar4 + 0x54) == '\0') {
      iVar22 = 0x32;
      do {
        iVar15 = FUN_14017a740(*(undefined8 *)(lVar4 + 0x80),&local_188,0x41);
        if (-1 < iVar15) break;
        setwaitabletimerex(500000);
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    else {
      uStack_100 = 0;
      local_f8 = 0;
      local_108 = 0x3c0102adc003;
      FUN_14017a740(*(undefined8 *)(lVar4 + 0x80),&local_108,0x14);
    }
    plVar3[3] = uVar16;
  }
  uStack_117 = 0;
  uStack_110 = 0;
  uStack_127 = 0;
  uStack_11f = 0;
  local_118 = 0;
  local_137 = 0;
  uStack_12f = 0;
  local_147 = 0;
  uStack_13f = 0;
  uStack_157 = 0;
  uStack_150 = 0;
  uStack_14f = 0;
  local_148 = 0;
  uStack_167 = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  local_158 = 0;
  uStack_177 = 0;
  uStack_176 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16f = 0;
  local_168 = 0;
  uStack_187 = 0;
  uStack_183 = 0;
  uStack_17f = 0;
  uStack_17e = 0;
  local_178 = 0;
  local_188 = '\x03';
  uVar14 = FUN_14017a690(*(undefined8 *)(param_1 + 0x80),&local_188,0x80);
  if (uVar14 != 0) {
    _Dst = (ushort *)(plVar3 + 4);
    plVar20 = plVar3 + 0x18;
    local_1e0 = (ushort *)((longlong)plVar3 + 0x22);
    local_1c8 = (uint *)(plVar3 + 0x19);
    local_1a8 = (ushort *)((longlong)plVar3 + 0x25);
    local_1b0 = plVar3 + 0x1d;
    local_1b8 = (undefined4 *)((longlong)plVar3 + 0xee);
    local_1c0 = (undefined8 *)((longlong)plVar3 + 0xf4);
    local_1d8 = (char *)((longlong)plVar3 + 0x24);
    local_198 = plVar3 + 0x23;
    local_1d0 = plVar20;
    local_1a0 = _Dst;
    do {
      if ((int)uVar14 < 0) {
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (*(undefined4 **)(param_1 + 0x90) != (undefined4 *)0x0) {
          FUN_1404400d0(param_1,**(undefined4 **)(param_1 + 0x90));
        }
        *(undefined1 *)(lVar4 + 8) = 0;
        uVar17 = 0;
        goto LAB_14064203b;
      }
      if ((char)plVar3[0x17] == '\x01') {
        if (local_188 == '\x03') {
          if (uVar14 == 0x14) {
            if ((char)uStack_187 < '\0') {
              uVar14 = uStack_187 & 7;
              if (uVar14 != *(uint *)((longlong)plVar3 + 0xb4)) {
                _Dst[0x40] = 0;
                _Dst[0x41] = 0;
                _Dst[0x42] = 0;
                _Dst[0x43] = 0;
                _Dst[0x44] = 0;
                _Dst[0x45] = 0;
                _Dst[0x46] = 0;
                _Dst[0x47] = 0;
                _Dst[0x38] = 0;
                _Dst[0x39] = 0;
                _Dst[0x3a] = 0;
                _Dst[0x3b] = 0;
                _Dst[0x3c] = 0;
                _Dst[0x3d] = 0;
                _Dst[0x3e] = 0;
                _Dst[0x3f] = 0;
                _Dst[0x30] = 0;
                _Dst[0x31] = 0;
                _Dst[0x32] = 0;
                _Dst[0x33] = 0;
                _Dst[0x34] = 0;
                _Dst[0x35] = 0;
                _Dst[0x36] = 0;
                _Dst[0x37] = 0;
                _Dst[0x28] = 0;
                _Dst[0x29] = 0;
                _Dst[0x2a] = 0;
                _Dst[0x2b] = 0;
                _Dst[0x2c] = 0;
                _Dst[0x2d] = 0;
                _Dst[0x2e] = 0;
                _Dst[0x2f] = 0;
                _Dst[0x20] = 0;
                _Dst[0x21] = 0;
                _Dst[0x22] = 0;
                _Dst[0x23] = 0;
                _Dst[0x24] = 0;
                _Dst[0x25] = 0;
                _Dst[0x26] = 0;
                _Dst[0x27] = 0;
                _Dst[0x18] = 0;
                _Dst[0x19] = 0;
                _Dst[0x1a] = 0;
                _Dst[0x1b] = 0;
                _Dst[0x1c] = 0;
                _Dst[0x1d] = 0;
                _Dst[0x1e] = 0;
                _Dst[0x1f] = 0;
                _Dst[0x10] = 0;
                _Dst[0x11] = 0;
                _Dst[0x12] = 0;
                _Dst[0x13] = 0;
                _Dst[0x14] = 0;
                _Dst[0x15] = 0;
                _Dst[0x16] = 0;
                _Dst[0x17] = 0;
                _Dst[8] = 0;
                _Dst[9] = 0;
                _Dst[10] = 0;
                _Dst[0xb] = 0;
                _Dst[0xc] = 0;
                _Dst[0xd] = 0;
                _Dst[0xe] = 0;
                _Dst[0xf] = 0;
                _Dst[0] = 0;
                _Dst[1] = 0;
                _Dst[2] = 0;
                _Dst[3] = 0;
                _Dst[4] = 0;
                _Dst[5] = 0;
                _Dst[6] = 0;
                _Dst[7] = 0;
                *(undefined1 *)(_Dst + 0x48) = 0;
                *(undefined4 *)((longlong)plVar3 + 0xb4) = 0;
                if ((uStack_187 & 7) != 0) goto LAB_140641550;
              }
              _Dst[(ulonglong)uVar14 * 9 + 8] = uStack_176;
              *(ulonglong *)(_Dst + (ulonglong)uVar14 * 9) =
                   CONCAT17(uStack_17f,CONCAT43(uStack_183,uStack_187._1_3_));
              *(ulonglong *)(_Dst + (ulonglong)uVar14 * 9 + 4) =
                   CONCAT17(uStack_177,CONCAT16(local_178,uStack_17e));
              if ((uStack_187 & 0x40) != 0) {
                *(undefined4 *)((longlong)plVar3 + 0xb4) = 0;
                bVar12 = true;
                uVar2 = *_Dst;
                bVar13 = true;
                if (uVar2 == 1) goto LAB_140641684;
                goto LAB_1406417f0;
              }
              *(uint *)((longlong)plVar3 + 0xb4) = uVar14 + 1;
            }
          }
          else {
            FUN_1400fb540("Bad segment size! %d\n",uVar14);
            FUN_14043fc20("Data",&local_188,uVar14);
            _Dst[0x40] = 0;
            _Dst[0x41] = 0;
            _Dst[0x42] = 0;
            _Dst[0x43] = 0;
            _Dst[0x44] = 0;
            _Dst[0x45] = 0;
            _Dst[0x46] = 0;
            _Dst[0x47] = 0;
            _Dst[0x38] = 0;
            _Dst[0x39] = 0;
            _Dst[0x3a] = 0;
            _Dst[0x3b] = 0;
            _Dst[0x3c] = 0;
            _Dst[0x3d] = 0;
            _Dst[0x3e] = 0;
            _Dst[0x3f] = 0;
            _Dst[0x30] = 0;
            _Dst[0x31] = 0;
            _Dst[0x32] = 0;
            _Dst[0x33] = 0;
            _Dst[0x34] = 0;
            _Dst[0x35] = 0;
            _Dst[0x36] = 0;
            _Dst[0x37] = 0;
            _Dst[0x28] = 0;
            _Dst[0x29] = 0;
            _Dst[0x2a] = 0;
            _Dst[0x2b] = 0;
            _Dst[0x2c] = 0;
            _Dst[0x2d] = 0;
            _Dst[0x2e] = 0;
            _Dst[0x2f] = 0;
            _Dst[0x20] = 0;
            _Dst[0x21] = 0;
            _Dst[0x22] = 0;
            _Dst[0x23] = 0;
            _Dst[0x24] = 0;
            _Dst[0x25] = 0;
            _Dst[0x26] = 0;
            _Dst[0x27] = 0;
            _Dst[0x18] = 0;
            _Dst[0x19] = 0;
            _Dst[0x1a] = 0;
            _Dst[0x1b] = 0;
            _Dst[0x1c] = 0;
            _Dst[0x1d] = 0;
            _Dst[0x1e] = 0;
            _Dst[0x1f] = 0;
            _Dst[0x10] = 0;
            _Dst[0x11] = 0;
            _Dst[0x12] = 0;
            _Dst[0x13] = 0;
            _Dst[0x14] = 0;
            _Dst[0x15] = 0;
            _Dst[0x16] = 0;
            _Dst[0x17] = 0;
            _Dst[8] = 0;
            _Dst[9] = 0;
            _Dst[10] = 0;
            _Dst[0xb] = 0;
            _Dst[0xc] = 0;
            _Dst[0xd] = 0;
            _Dst[0xe] = 0;
            _Dst[0xf] = 0;
            _Dst[0] = 0;
            _Dst[1] = 0;
            _Dst[2] = 0;
            _Dst[3] = 0;
            _Dst[4] = 0;
            _Dst[5] = 0;
            _Dst[6] = 0;
            _Dst[7] = 0;
            *(undefined1 *)(_Dst + 0x48) = 0;
            *(undefined4 *)((longlong)plVar3 + 0xb4) = 0;
          }
        }
      }
      else {
        memcpy(_Dst,&local_188,(ulonglong)uVar14);
        bVar12 = 4 < uVar14;
        uVar2 = *_Dst;
        bVar13 = bVar12;
        if (uVar2 == 1) {
LAB_140641684:
          if ((byte)*local_1e0 == 7) {
            if (*(int *)((longlong)plVar3 + 0xc4) != *(int *)((longlong)plVar3 + 0x24)) {
              FUN_140643310(plVar20,local_1d8);
              cVar21 = (char)plVar3[7];
              if (cVar21 == '\x03') {
                *(undefined4 *)((longlong)plVar3 + 0xee) = *(undefined4 *)((longlong)plVar3 + 0x39);
                *(undefined2 *)((longlong)plVar3 + 0xf2) = *(undefined2 *)((longlong)plVar3 + 0x3d);
              }
              else if (cVar21 == '\x02') {
                *(undefined4 *)(plVar3 + 0x1d) = *(undefined4 *)((longlong)plVar3 + 0x39);
                *(undefined2 *)((longlong)plVar3 + 0xec) = *(undefined2 *)((longlong)plVar3 + 0x3d);
              }
              else if (cVar21 == '\x01') {
                uVar16 = *(ulonglong *)((longlong)plVar3 + 0x39);
                uVar30 = (undefined2)(uVar16 >> 0x30);
                auVar29._8_4_ = 0;
                auVar29._0_8_ = uVar16;
                auVar29._12_2_ = uVar30;
                auVar29._14_2_ = uVar30;
                uVar30 = (undefined2)(uVar16 >> 0x20);
                auVar28._12_4_ = auVar29._12_4_;
                auVar28._8_2_ = 0;
                auVar28._0_8_ = uVar16;
                auVar28._10_2_ = uVar30;
                auVar27._10_6_ = auVar28._10_6_;
                auVar27._8_2_ = uVar30;
                auVar27._0_8_ = uVar16;
                uVar30 = (undefined2)(uVar16 >> 0x10);
                auVar10._4_8_ = auVar27._8_8_;
                auVar10._2_2_ = uVar30;
                auVar10._0_2_ = uVar30;
                *(float *)((longlong)plVar3 + 0xf4) = (float)(int)(short)uVar16;
                *(float *)(plVar3 + 0x1f) = (float)(auVar10._0_4_ >> 0x10);
                *(float *)((longlong)plVar3 + 0xfc) = (float)(auVar27._8_4_ >> 0x10);
                *(float *)(plVar3 + 0x20) = (float)(auVar28._12_4_ >> 0x10);
              }
            }
          }
          else {
            if ((byte)*local_1e0 != 1) {
              if ((bVar12 & (*(byte *)(plVar3 + 1) ^ 1)) == 0) {
                if ((bVar12 & *(byte *)(plVar3 + 1)) != 1) goto LAB_140641550;
                goto LAB_140641f88;
              }
LAB_1406418b3:
              if ((((byte)*local_1e0 == 3) && (*(char *)((longlong)plVar3 + 0x23) != '\0')) &&
                 (*local_1d8 != '\x01')) {
                FUN_1406431e0(param_1,&local_190);
              }
              goto LAB_140641550;
            }
            if (*(int *)((longlong)plVar3 + 0xc4) != *(int *)((longlong)plVar3 + 0x24)) {
              FUN_140643310(plVar20,local_1d8);
              uVar16 = plVar3[9];
              uVar30 = (undefined2)(uVar16 >> 0x30);
              auVar26._8_4_ = 0;
              auVar26._0_8_ = uVar16;
              auVar26._12_2_ = uVar30;
              auVar26._14_2_ = uVar30;
              uVar30 = (undefined2)(uVar16 >> 0x20);
              auVar25._12_4_ = auVar26._12_4_;
              auVar25._8_2_ = 0;
              auVar25._0_8_ = uVar16;
              auVar25._10_2_ = uVar30;
              auVar24._10_6_ = auVar25._10_6_;
              auVar24._8_2_ = uVar30;
              auVar24._0_8_ = uVar16;
              uVar30 = (undefined2)(uVar16 >> 0x10);
              auVar9._4_8_ = auVar24._8_8_;
              auVar9._2_2_ = uVar30;
              auVar9._0_2_ = uVar30;
              *(float *)((longlong)plVar3 + 0xf4) = (float)(int)(short)uVar16;
              *(float *)(plVar3 + 0x1f) = (float)(auVar9._0_4_ >> 0x10);
              *(float *)((longlong)plVar3 + 0xfc) = (float)(auVar24._8_4_ >> 0x10);
              *(float *)(plVar3 + 0x20) = (float)(auVar25._12_4_ >> 0x10);
              plVar3[0x1d] = *(longlong *)((longlong)plVar3 + 0x3c);
              *(undefined4 *)(plVar3 + 0x1e) = *(undefined4 *)((longlong)plVar3 + 0x44);
            }
          }
        }
        else {
LAB_1406417f0:
          cVar21 = (char)uVar2;
          if ((uVar2 & 0xf) != 4) {
            if ((bVar13 & (*(byte *)(plVar3 + 1) ^ 1)) == 0) {
              if (((uVar2 < 0x100 && cVar21 == '\x01') & *(byte *)(plVar3 + 1) & bVar13) != 0) {
LAB_140641f88:
                if ((((byte)*local_1e0 == 3) && (*(char *)((longlong)plVar3 + 0x23) != '\0')) &&
                   (*local_1d8 == '\x01')) {
                  lVar4 = *(longlong *)(param_1 + 0x70);
                  if (*(undefined4 **)(param_1 + 0x90) != (undefined4 *)0x0) {
                    FUN_1404400d0(param_1,**(undefined4 **)(param_1 + 0x90));
                  }
                  *(undefined1 *)(lVar4 + 8) = 0;
                  local_190 = 0;
                }
              }
            }
            else if (uVar2 < 0x100 && cVar21 == '\x01') goto LAB_1406418b3;
            goto LAB_140641550;
          }
          *(int *)((longlong)plVar3 + 0xc4) = *(int *)((longlong)plVar3 + 0xc4) + 1;
          puVar19 = local_1e0;
          if ((uVar2 & 0x10) != 0) {
            *(byte *)((longlong)local_1c8 + 2) = (byte)local_1e0[1];
            *(ushort *)local_1c8 = *local_1e0;
            puVar19 = local_1a8;
          }
          if ((uVar2 & 0x20) != 0) {
            fVar23 = (float)((uint)*(byte *)puVar19 << 7 | (uint)*(byte *)puVar19) / 26000.0;
            uVar14 = -(uint)(1.0 < fVar23);
            *(short *)((longlong)plVar3 + 0xe4) =
                 (short)(int)(float)(uVar14 & 0x46fffe00 | ~uVar14 & (uint)(fVar23 * 32767.0 + 0.0))
            ;
            fVar23 = (float)((uint)*(byte *)((longlong)puVar19 + 1) << 7 |
                            (uint)*(byte *)((longlong)puVar19 + 1)) / 26000.0;
            uVar14 = -(uint)(1.0 < fVar23);
            *(short *)((longlong)plVar3 + 0xe6) =
                 (short)(int)(float)(uVar14 & 0x46fffe00 | ~uVar14 & (uint)(fVar23 * 32767.0 + 0.0))
            ;
            puVar19 = (ushort *)((longlong)puVar19 + 2);
          }
          if ((uVar2 & 0x40) != 0) {
            *(byte *)((longlong)plVar3 + 0xcd) = *(byte *)puVar19;
            *(byte *)((longlong)plVar3 + 0xce) = *(byte *)((longlong)puVar19 + 1);
            puVar1 = (ushort *)((longlong)puVar19 + 2);
            puVar19 = (ushort *)((longlong)puVar19 + 3);
            *(byte *)((longlong)plVar3 + 0xcf) = *(byte *)puVar1;
          }
          if (cVar21 < '\0') {
            *(undefined4 *)((longlong)plVar3 + 0xdc) = *(undefined4 *)puVar19;
            puVar19 = (ushort *)((longlong)puVar19 + 4);
          }
          if ((uVar2 >> 8 & 1) != 0) {
            iVar22 = *(int *)puVar19;
            *(int *)(plVar3 + 0x1a) = iVar22;
            iVar15 = 1000;
            if ((*(uint *)(plVar3 + 0x19) & 0x80000) == 0) {
              iVar15 = 0;
            }
            fVar23 = cosf(-0.261799);
            fVar31 = sinf(-0.261799);
            *(short *)(plVar3 + 0x1a) =
                 (short)(int)(fVar23 * (float)(int)(short)iVar22 - fVar31 * (float)(iVar22 >> 0x10))
            ;
            fVar23 = sinf(-0.261799);
            fVar31 = cosf(-0.261799);
            iVar18 = (short)plVar3[0x1a] + iVar15;
            uVar30 = (undefined2)iVar18;
            if (0x7ffe < iVar18) {
              uVar30 = 0x7fff;
            }
            *(undefined2 *)(plVar3 + 0x1a) = uVar30;
            iVar15 = (short)(int)(fVar23 * (float)(int)(short)iVar22 +
                                 fVar31 * (float)(iVar22 >> 0x10)) + iVar15;
            uVar30 = (undefined2)iVar15;
            if (0x7ffe < iVar15) {
              uVar30 = 0x7fff;
            }
            *(undefined2 *)((longlong)plVar3 + 0xd2) = uVar30;
            puVar19 = (ushort *)((longlong)puVar19 + 4);
          }
          plVar20 = local_1d0;
          if ((uVar2 >> 8 & 2) != 0) {
            iVar22 = *(int *)puVar19;
            *(int *)((longlong)plVar3 + 0xd4) = iVar22;
            iVar15 = 1000;
            if ((*(uint *)(plVar3 + 0x19) & 0x100000) == 0) {
              iVar15 = 0;
            }
            fVar23 = cosf(0.261799);
            fVar31 = sinf(0.261799);
            *(short *)((longlong)plVar3 + 0xd4) =
                 (short)(int)(fVar23 * (float)(int)(short)iVar22 - fVar31 * (float)(iVar22 >> 0x10))
            ;
            fVar23 = sinf(0.261799);
            fVar31 = cosf(0.261799);
            iVar18 = *(short *)((longlong)plVar3 + 0xd4) + iVar15;
            uVar30 = (undefined2)iVar18;
            if (0x7ffe < iVar18) {
              uVar30 = 0x7fff;
            }
            *(undefined2 *)((longlong)plVar3 + 0xd4) = uVar30;
            iVar15 = (short)(int)(fVar23 * (float)(int)(short)iVar22 +
                                 fVar31 * (float)(iVar22 >> 0x10)) + iVar15;
            uVar30 = (undefined2)iVar15;
            if (0x7ffe < iVar15) {
              uVar30 = 0x7fff;
            }
            *(undefined2 *)((longlong)plVar3 + 0xd6) = uVar30;
            puVar19 = (ushort *)((longlong)puVar19 + 4);
            plVar20 = local_1d0;
          }
          if ((uVar2 >> 8 & 4) != 0) {
            *(ushort *)((longlong)local_1b0 + 4) = puVar19[2];
            *(undefined4 *)local_1b0 = *(undefined4 *)puVar19;
            puVar19 = puVar19 + 3;
          }
          if ((uVar2 >> 8 & 8) != 0) {
            *(ushort *)(local_1b8 + 1) = puVar19[2];
            *local_1b8 = *(undefined4 *)puVar19;
            puVar19 = puVar19 + 3;
          }
          local_1d0 = plVar20;
          if ((uVar2 >> 8 & 0x10) != 0) {
            uVar17 = *(undefined8 *)(puVar19 + 4);
            *local_1c0 = *(undefined8 *)puVar19;
            local_1c0[1] = uVar17;
          }
        }
        uVar17 = sdl_timer_resolution();
        if ((char)plVar3[1] == '\0') {
          FUN_1406431e0(param_1,&local_190);
        }
        lVar4 = local_190;
        if (local_190 != 0) {
          lVar5 = plVar3[0x19];
          if (lVar5 != plVar3[0x24]) {
            FUN_14012be10(uVar17,local_190,0,
                          CONCAT71((int7)((ulonglong)lVar5 >> 8),(byte)lVar5 >> 7));
            puVar11 = local_1c8;
            FUN_14012be10(uVar17,lVar4,1,(*local_1c8 & 0x20) >> 5);
            FUN_14012be10(uVar17,lVar4,2,(*puVar11 & 0x40) >> 6);
            FUN_14012be10(uVar17,lVar4,3,(*puVar11 & 0x10) >> 4);
            FUN_14012be10(uVar17,lVar4,9,(*puVar11 & 8) >> 3);
            FUN_14012be10(uVar17,lVar4,10,(*puVar11 & 4) >> 2);
            FUN_14012be10(uVar17,lVar4,4,*puVar11 >> 0xc & 1);
            FUN_14012be10(uVar17,lVar4,6,*puVar11 >> 0xe & 1);
            FUN_14012be10(uVar17,lVar4,5,*puVar11 >> 0xd & 1);
            FUN_14012be10(uVar17,lVar4,7,*puVar11 >> 0x16 & 1);
            FUN_14012be10(uVar17,lVar4,0xc,(ushort)*puVar11 >> 0xf);
            FUN_14012be10(uVar17,lVar4,0xb,*puVar11 >> 0x10 & 1);
            FUN_14012be10(uVar17,lVar4,8,*puVar11 >> 0x12 & 1);
            uVar14 = *puVar11;
            uVar16 = (ulonglong)(uVar14 >> 8) & 0xffffffffffffff02;
            FUN_14012bf00(uVar17,lVar4,0,
                          CONCAT71((int7)(uVar16 >> 8),
                                   (byte)uVar16 |
                                   (byte)(uVar14 >> 7) & 8 |
                                   (byte)(uVar14 >> 9) & 4 | (byte)(uVar14 >> 8) & 1));
          }
          FUN_14012bc60(uVar17,lVar4,4,*(int *)((longlong)plVar3 + 0xe4) * 2 ^ 0x8000);
          FUN_14012bc60(uVar17,lVar4,5,(uint)*(ushort *)((longlong)plVar3 + 0xe6) * 2 ^ 0x8000);
          FUN_14012bc60(uVar17,lVar4,0,*(undefined2 *)((longlong)plVar3 + 0xdc));
          FUN_14012bc60(uVar17,lVar4,1,~(uint)*(ushort *)((longlong)plVar3 + 0xde));
          FUN_14012bc60(uVar17,lVar4,2,*(undefined2 *)((longlong)plVar3 + 0xd4));
          FUN_14012bc60(uVar17,lVar4,3,~(uint)*(ushort *)((longlong)plVar3 + 0xd6));
          if (*(char *)((longlong)plVar3 + 9) == '\x01') {
            plVar3[2] = (ulonglong)*(uint *)((longlong)plVar3 + 0xc) * 1000 + plVar3[2];
            local_108 = CONCAT44((float)(int)((longlong)
                                              ((ulonglong)*(ushort *)((longlong)plVar3 + 0xf2) <<
                                              0x30) >> 0x30) * 3.0517578e-05 * 34.906586,
                                 (float)(int)*(short *)((longlong)plVar3 + 0xee) * 3.0517578e-05 *
                                 34.906586);
            local_1f0 = 3;
            local_1f8 = &local_108;
            uStack_100._0_4_ = (float)(int)(short)plVar3[0x1e] * 3.0517578e-05 * 34.906586;
            FUN_14012ede0(uVar17,lVar4,2);
            _Dst = local_1a0;
            fVar23 = (float)(int)(short)plVar3[0x1d] * 3.0517578e-05;
            fVar31 = (float)(int)((longlong)
                                  ((ulonglong)*(ushort *)((longlong)plVar3 + 0xec) << 0x30) >> 0x30)
                     * 3.0517578e-05;
            local_108 = CONCAT44((fVar31 + fVar31) * 9.80665,(fVar23 + fVar23) * 9.80665);
            fVar23 = (float)-(int)*(short *)((longlong)plVar3 + 0xea) * 3.0517578e-05;
            uStack_100 = CONCAT44(uStack_100._4_4_,(fVar23 + fVar23) * 9.80665);
            local_1f0 = 3;
            local_1f8 = &local_108;
            FUN_14012ede0(uVar17,lVar4,1,plVar3[2]);
          }
          local_198[10] = plVar20[10];
          lVar4 = plVar20[9];
          local_198[8] = plVar20[8];
          local_198[9] = lVar4;
          lVar4 = *plVar20;
          lVar5 = plVar20[1];
          auVar27 = *(undefined1 (*) [16])(plVar20 + 2);
          lVar6 = plVar20[4];
          lVar7 = plVar20[5];
          lVar8 = plVar20[7];
          local_198[6] = plVar20[6];
          local_198[7] = lVar8;
          local_198[4] = lVar6;
          local_198[5] = lVar7;
          *(undefined1 (*) [16])(local_198 + 2) = auVar27;
          *local_198 = lVar4;
          local_198[1] = lVar5;
        }
      }
LAB_140641550:
      uStack_117 = 0;
      uStack_110 = 0;
      uStack_127 = 0;
      uStack_11f = 0;
      local_118 = 0;
      local_137 = 0;
      uStack_12f = 0;
      local_147 = 0;
      uStack_13f = 0;
      uStack_157 = 0;
      uStack_150 = 0;
      uStack_14f = 0;
      local_148 = 0;
      uStack_167 = 0;
      uStack_160 = 0;
      uStack_15f = 0;
      local_158 = 0;
      uStack_177 = 0;
      uStack_176 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16f = 0;
      local_168 = 0;
      uStack_187 = 0;
      uStack_183 = 0;
      uStack_17f = 0;
      uStack_17e = 0;
      local_178 = 0;
      local_188 = '\x03';
      uVar14 = FUN_14017a690(*(undefined8 *)(param_1 + 0x80),&local_188,0x80);
    } while (uVar14 != 0);
  }
  uVar17 = 1;
LAB_14064203b:
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_218)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_218);
  }
  return uVar17;
}


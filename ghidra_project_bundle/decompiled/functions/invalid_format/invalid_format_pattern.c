/**
 * Function: invalid_format_pattern
 * Address:  1400344f0
 * Signature: undefined __thiscall invalid_format_pattern(void * this)
 * Body size: 4879 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong * __thiscall
invalid_format_pattern(void *this,longlong *param_2,uint *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  size_t sVar9;
  ulonglong uVar10;
  uint ******ppppppuVar11;
  ulonglong uVar12;
  char **ppcVar13;
  undefined8 *puVar14;
  void *_Dst;
  ulonglong uVar15;
  longlong *plVar16;
  uint *******pppppppuVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *******pppppppuVar20;
  QuillError local_338;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined8 local_238;
  void *pvStack_230;
  uint *local_228;
  ulonglong local_220;
  uint *******local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  char *local_1f0;
  undefined8 local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  char *pcStack_1c0;
  undefined8 local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  char *pcStack_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint *******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  uint *******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  uint *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  cVar2 = *(char *)((longlong)this + 0x6b);
  local_228 = param_3;
  local_68 = param_4;
  if (cVar2 != -1) {
    uVar15 = param_4[2];
    if (uVar15 < (ulonglong)param_4[3]) {
      param_4[2] = uVar15 + 1;
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (longlong *)*param_4;
      }
      *(char *)((longlong)param_4 + uVar15) = cVar2;
      *(undefined1 *)((longlong)param_4 + uVar15 + 1) = 0;
    }
    else {
      FUN_140006670(param_4,1);
    }
  }
  plVar19 = local_68;
  local_338.exception_data.offset_0x78._0_4_ = 0xf;
  local_338.exception_data.offset_0x78._4_4_ = 0;
  uStack_2b0 = 0xf;
  uStack_2ac = 0;
  local_338.exception_data.offset_0x68._0_4_ = 0xf;
  local_338.exception_data.offset_0x68._4_4_ = 0;
  local_338.exception_data.offset_0x70._0_4_ = 0xf;
  local_338.exception_data.offset_0x70._4_4_ = 0;
  local_298 = 0xf;
  uStack_294 = 0;
  uStack_290 = 0xf;
  uStack_28c = 0;
  local_2a8 = 0xf;
  uStack_2a4 = 0;
  uStack_2a0 = 0xf;
  uStack_29c = 0;
  local_278 = 0xf;
  uStack_274 = 0;
  uStack_270 = 0xf;
  uStack_26c = 0;
  local_288 = 0xf;
  uStack_284 = 0;
  uStack_280 = 0xf;
  uStack_27c = 0;
  local_258 = 0xf;
  uStack_254 = 0;
  uStack_250 = 0xf;
  uStack_24c = 0;
  local_268 = 0xf;
  uStack_264 = 0;
  uStack_260 = 0xf;
  uStack_25c = 0;
  local_1e8 = 0;
  local_1f0 = "time";
  pcStack_1e0 = "file_name";
  local_1d8 = 1;
  pcStack_1d0 = "caller_function";
  local_1c8 = 2;
  pcStack_1c0 = "log_level";
  local_1b8 = 3;
  pcStack_1b0 = "log_level_short_code";
  local_1a8 = 4;
  pcStack_1a0 = "line_number";
  local_198 = 5;
  pcStack_190 = "logger";
  local_188 = 6;
  pcStack_180 = "full_path";
  local_178 = 7;
  pcStack_170 = "thread_id";
  local_168 = 8;
  pcStack_160 = "thread_name";
  local_158 = 9;
  pcStack_150 = "process_id";
  local_148 = 10;
  pcStack_140 = "source_location";
  local_138 = 0xb;
  pcStack_130 = "short_source_location";
  local_128 = 0xc;
  pcStack_120 = "message";
  local_118 = 0xd;
  pcStack_110 = "tags";
  local_108 = 0xe;
  pcStack_100 = "named_args";
  local_f8 = 0xf;
  uVar15 = 0xffffffffffffffff;
  if (local_68[2] != 0) {
    plVar16 = local_68;
    if (0xf < (ulonglong)local_68[3]) {
      plVar16 = (longlong *)*local_68;
    }
    lVar18 = local_68[2] + (longlong)plVar16;
    lVar6 = thunk_FUN_140b66da0(plVar16,lVar18,0x25);
    uVar15 = 0xffffffffffffffff;
    if (lVar6 != lVar18) {
      uVar15 = lVar6 - (longlong)plVar16;
    }
  }
  local_f0 = 0;
  while (uVar15 != 0xffffffffffffffff) {
    uVar8 = plVar19[2];
    if (uVar15 < uVar8) {
      plVar16 = plVar19;
      if (0xf < (ulonglong)plVar19[3]) {
        plVar16 = (longlong *)*plVar19;
      }
      lVar6 = thunk_FUN_140b66da0((longlong)plVar16 + uVar15,uVar8 + (longlong)plVar16,0x28);
      uVar12 = lVar6 - (longlong)plVar16;
      if (lVar6 == uVar8 + (longlong)plVar16) {
        uVar12 = 0xffffffffffffffff;
      }
      uVar8 = plVar19[2];
      if ((uVar12 == 0xffffffffffffffff) || (uVar12 - uVar15 != 1)) goto LAB_140034863;
      if (uVar8 <= uVar12) {
LAB_140035713:
        quill::v11::QuillError::QuillError(&local_338,"Invalid format pattern");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_338,(ThrowInfo *)&DAT_14140fa50);
      }
      plVar16 = plVar19;
      if (0xf < (ulonglong)plVar19[3]) {
        plVar16 = (longlong *)*plVar19;
      }
      lVar6 = thunk_FUN_140b66da0(uVar12 + (longlong)plVar16,uVar8 + (longlong)plVar16,0x29);
      if ((lVar6 == uVar8 + (longlong)plVar16) || (lVar6 - (longlong)plVar16 == -1))
      goto LAB_140035713;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (uint *******)0x0;
      uStack_a0 = 0;
      uVar8 = plVar19[2] - uVar15;
      if ((ulonglong)plVar19[2] < uVar15) {
                    /* WARNING: Subroutine does not return */
        invalid_string_position();
      }
      uVar12 = ((lVar6 - (longlong)plVar16) - uVar15) + 1;
      if (uVar8 < uVar12) {
        uVar12 = uVar8;
      }
      if (0xf < (ulonglong)plVar19[3]) {
        plVar19 = (longlong *)*plVar19;
      }
      if ((longlong)uVar12 < 0) goto LAB_1400357df;
      if (uVar12 < 0x10) {
        uStack_90 = 0xf;
        local_98 = uVar12;
        memcpy(&local_a8,(void *)((longlong)plVar19 + uVar15),uVar12);
        *(undefined1 *)((longlong)&local_a8 + uVar12) = 0;
        if (local_98 != 0) goto LAB_140034953;
LAB_140034aaf:
        uVar8 = 0;
LAB_140034acf:
        uStack_b0 = 0xf;
        local_b8 = 0;
        uStack_c0 = 0;
        local_c8 = (uint *******)0x0;
        FUN_140032d00(local_68,uVar15,uVar8,"{}",2);
        pppppppuVar17 = (uint *******)&local_a8;
        if (0xf < uStack_90) {
          pppppppuVar17 = local_a8;
        }
        lVar6 = local_98 - 1;
        local_98 = local_98 - 1;
        *(undefined1 *)((longlong)pppppppuVar17 + lVar6) = 0;
        uVar15 = local_98;
        local_88 = (uint *******)0x0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if (local_98 < 2) {
                    /* WARNING: Subroutine does not return */
          invalid_string_position();
        }
        pppppppuVar17 = (uint *******)&local_a8;
        if (0xf < uStack_90) {
          pppppppuVar17 = local_a8;
        }
        uVar8 = local_98 - 2;
        if ((longlong)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          string_too_long();
        }
        if (uVar8 < 0x10) {
          uStack_70 = 0xf;
          local_78 = uVar8;
          memcpy(&local_88,(void *)((longlong)pppppppuVar17 + 2),uVar8);
          *(undefined1 *)((longlong)&uStack_90 + uVar15 + 6) = 0;
        }
        else {
          uVar12 = uVar8 | 0xf;
          uVar15 = 0x16;
          if (0x16 < uVar12) {
            uVar15 = uVar12;
          }
          if (uVar12 < 0xfff) {
            pppppppuVar20 = (uint *******)FUN_140b65d30(uVar15 + 1);
          }
          else {
            ppppppuVar11 = (uint ******)FUN_140b65d30(uVar15 + 0x28);
            pppppppuVar20 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar20[-1] = ppppppuVar11;
          }
          local_88 = pppppppuVar20;
          local_78 = uVar8;
          uStack_70 = uVar15;
          memcpy(pppppppuVar20,(void *)((longlong)pppppppuVar17 + 2),uVar8);
          *(undefined1 *)((longlong)pppppppuVar20 + uVar8) = 0;
        }
        if (0xf < uStack_b0) {
          uVar15 = uStack_b0 + 1;
          pppppppuVar17 = local_c8;
          if (0xfff < uVar15) {
            pppppppuVar17 = (uint *******)local_c8[-1];
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar17)))
            goto LAB_140035738;
            uVar15 = uStack_b0 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar17,uVar15);
        }
        local_b8 = local_78;
        uStack_b0 = uStack_70;
        local_c8 = local_88;
        uStack_c0 = uStack_80;
      }
      else {
        uVar10 = uVar12 | 0xf;
        uVar8 = 0x16;
        if (0x16 < uVar10) {
          uVar8 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar17 = (uint *******)FUN_140b65d30(uVar8 + 1);
        }
        else {
          ppppppuVar11 = (uint ******)FUN_140b65d30(uVar8 + 0x28);
          pppppppuVar17 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar17[-1] = ppppppuVar11;
        }
        local_a8 = pppppppuVar17;
        local_98 = uVar12;
        uStack_90 = uVar8;
        memcpy(pppppppuVar17,(void *)((longlong)plVar19 + uVar15),uVar12);
        *(undefined1 *)((longlong)pppppppuVar17 + uVar12) = 0;
        if (local_98 == 0) goto LAB_140034aaf;
LAB_140034953:
        pppppppuVar17 = (uint *******)&local_a8;
        if (0xf < uStack_90) {
          pppppppuVar17 = local_a8;
        }
        lVar18 = local_98 + (longlong)pppppppuVar17;
        lVar6 = thunk_FUN_140b66da0(pppppppuVar17,lVar18,0x3a);
        uVar8 = local_98;
        if (lVar6 == lVar18) goto LAB_140034acf;
        uVar12 = lVar6 - (longlong)pppppppuVar17;
        local_c8 = (uint *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0xf;
        if (uVar12 == 0xffffffffffffffff) goto LAB_140034acf;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = (uint *******)0x0;
        uStack_80 = 0;
        if (local_98 < uVar12) {
                    /* WARNING: Subroutine does not return */
          invalid_string_position();
        }
        pppppppuVar17 = (uint *******)&local_a8;
        if (0xf < uStack_90) {
          pppppppuVar17 = local_a8;
        }
        uVar8 = local_98 - uVar12;
        if ((longlong)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          string_too_long();
        }
        if (uVar8 < 0x10) {
          uStack_70 = 0xf;
          local_78 = uVar8;
          memcpy(&local_88,(void *)((longlong)pppppppuVar17 + uVar12),uVar8);
          *(undefined1 *)((longlong)&local_88 + uVar8) = 0;
        }
        else {
          uVar10 = uVar8 | 0xf;
          local_220 = 0x16;
          if (0x16 < uVar10) {
            local_220 = uVar10;
          }
          if (uVar10 < 0xfff) {
            pppppppuVar20 = (uint *******)FUN_140b65d30(local_220 + 1);
          }
          else {
            ppppppuVar11 = (uint ******)FUN_140b65d30(local_220 + 0x28);
            pppppppuVar20 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar20[-1] = ppppppuVar11;
          }
          uStack_70 = local_220;
          local_88 = pppppppuVar20;
          local_78 = uVar8;
          memcpy(pppppppuVar20,(void *)((longlong)pppppppuVar17 + uVar12),uVar8);
          *(undefined1 *)((longlong)pppppppuVar20 + uVar8) = 0;
        }
        pppppppuVar17 = (uint *******)&local_88;
        if (0xf < uStack_70) {
          pppppppuVar17 = local_88;
        }
        lVar6 = local_78 - 1;
        local_78 = local_78 - 1;
        *(undefined1 *)((longlong)pppppppuVar17 + lVar6) = 0;
        uVar8 = local_78;
        uStack_e0 = 0;
        local_d0 = 0xf;
        local_d8 = 1;
        local_e8 = (undefined8 *)0x7b;
        pppppppuVar17 = (uint *******)&local_88;
        if (0xf < uStack_70) {
          pppppppuVar17 = local_88;
        }
        if (local_78 < 0xf) {
          local_d8 = local_78 + 1;
          memmove((void *)((longlong)&local_e8 + 1),pppppppuVar17,local_78);
          *(undefined1 *)((longlong)&local_e8 + uVar8 + 1) = 0;
          if (local_d0 != local_d8) goto LAB_14003535b;
LAB_1400352ff:
          FUN_140006210(&local_e8,1);
        }
        else {
          FUN_140006210(&local_e8,local_78);
          if (local_d0 == local_d8) goto LAB_1400352ff;
LAB_14003535b:
          puVar14 = &local_e8;
          if (0xf < local_d0) {
            puVar14 = local_e8;
          }
          puVar1 = (undefined2 *)((longlong)puVar14 + local_d8);
          local_d8 = local_d8 + 1;
          *puVar1 = 0x7d;
        }
        puVar14 = &local_e8;
        if (0xf < local_d0) {
          puVar14 = local_e8;
        }
        FUN_140032d00(local_68,uVar15,local_98,puVar14,local_d8);
        local_208 = 0;
        uStack_200 = 0;
        local_218 = (uint *******)0x0;
        uStack_210 = 0;
        if (local_98 < 2) {
                    /* WARNING: Subroutine does not return */
          invalid_string_position();
        }
        uVar15 = local_98 - 2;
        if (uVar12 - 2 <= local_98 - 2) {
          uVar15 = uVar12 - 2;
        }
        pppppppuVar17 = (uint *******)&local_a8;
        if (0xf < uStack_90) {
          pppppppuVar17 = local_a8;
        }
        if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          string_too_long();
        }
        if (uVar15 < 0x10) {
          uStack_200 = 0xf;
          local_208 = uVar15;
          memcpy(&local_218,(void *)((longlong)pppppppuVar17 + 2),uVar15);
          *(undefined1 *)((longlong)&local_218 + uVar15) = 0;
        }
        else {
          uVar12 = uVar15 | 0xf;
          uVar8 = 0x16;
          if (0x16 < uVar12) {
            uVar8 = uVar12;
          }
          if (uVar12 < 0xfff) {
            pppppppuVar20 = (uint *******)FUN_140b65d30(uVar8 + 1);
          }
          else {
            ppppppuVar11 = (uint ******)FUN_140b65d30(uVar8 + 0x28);
            pppppppuVar20 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar20[-1] = ppppppuVar11;
          }
          local_218 = pppppppuVar20;
          local_208 = uVar15;
          uStack_200 = uVar8;
          memcpy(pppppppuVar20,(void *)((longlong)pppppppuVar17 + 2),uVar15);
          *(undefined1 *)((longlong)pppppppuVar20 + uVar15) = 0;
        }
        if (0xf < uStack_b0) {
          uVar15 = uStack_b0 + 1;
          pppppppuVar17 = local_c8;
          if (0xfff < uVar15) {
            pppppppuVar17 = (uint *******)local_c8[-1];
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar17)))
            goto LAB_140035738;
            uVar15 = uStack_b0 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar17,uVar15);
        }
        local_b8 = local_208;
        uStack_b0 = uStack_200;
        local_c8 = local_218;
        uStack_c0 = uStack_210;
        if (0xf < local_d0) {
          uVar15 = local_d0 + 1;
          puVar14 = local_e8;
          if (0xfff < uVar15) {
            puVar14 = (undefined8 *)local_e8[-1];
            if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)puVar14)))
            goto LAB_140035738;
            uVar15 = local_d0 + 0x28;
          }
          thunk_FUN_140b68ba8(puVar14,uVar15);
        }
        if (0xf < uStack_70) {
          uVar15 = uStack_70 + 1;
          pppppppuVar17 = local_88;
          if (0xfff < uVar15) {
            pppppppuVar17 = (uint *******)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar17)))
            goto LAB_140035738;
            uVar15 = uStack_70 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar17,uVar15);
        }
      }
      uVar15 = local_b8;
      pcVar3 = local_1f0;
      pppppppuVar17 = (uint *******)&local_c8;
      if (0xf < uStack_b0) {
        pppppppuVar17 = local_c8;
      }
      sVar9 = strlen(local_1f0);
      if (uVar15 == sVar9) {
        ppcVar13 = &local_1f0;
        if (uVar15 != 0) {
          iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
          ppcVar13 = &local_1f0;
          if (iVar5 != 0) goto LAB_140034cda;
        }
      }
      else {
LAB_140034cda:
        pcVar3 = pcStack_1e0;
        sVar9 = strlen(pcStack_1e0);
        if (uVar15 == sVar9) {
          ppcVar13 = &pcStack_1e0;
          if (uVar15 != 0) {
            iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
            ppcVar13 = &pcStack_1e0;
            if (iVar5 != 0) goto LAB_140034d1b;
          }
        }
        else {
LAB_140034d1b:
          pcVar3 = pcStack_1d0;
          sVar9 = strlen(pcStack_1d0);
          if (uVar15 == sVar9) {
            ppcVar13 = &pcStack_1d0;
            if (uVar15 != 0) {
              iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
              ppcVar13 = &pcStack_1d0;
              if (iVar5 != 0) goto LAB_140034d5c;
            }
          }
          else {
LAB_140034d5c:
            pcVar3 = pcStack_1c0;
            sVar9 = strlen(pcStack_1c0);
            if (uVar15 == sVar9) {
              ppcVar13 = &pcStack_1c0;
              if (uVar15 != 0) {
                iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                ppcVar13 = &pcStack_1c0;
                if (iVar5 != 0) goto LAB_140034d9d;
              }
            }
            else {
LAB_140034d9d:
              pcVar3 = pcStack_1b0;
              sVar9 = strlen(pcStack_1b0);
              if (uVar15 == sVar9) {
                ppcVar13 = &pcStack_1b0;
                if (uVar15 != 0) {
                  iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                  ppcVar13 = &pcStack_1b0;
                  if (iVar5 != 0) goto LAB_140034dde;
                }
              }
              else {
LAB_140034dde:
                pcVar3 = pcStack_1a0;
                sVar9 = strlen(pcStack_1a0);
                if (uVar15 == sVar9) {
                  ppcVar13 = &pcStack_1a0;
                  if (uVar15 != 0) {
                    iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                    ppcVar13 = &pcStack_1a0;
                    if (iVar5 != 0) goto LAB_140034e1f;
                  }
                }
                else {
LAB_140034e1f:
                  pcVar3 = pcStack_190;
                  sVar9 = strlen(pcStack_190);
                  if (uVar15 == sVar9) {
                    ppcVar13 = &pcStack_190;
                    if (uVar15 != 0) {
                      iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                      ppcVar13 = &pcStack_190;
                      if (iVar5 != 0) goto LAB_140034e60;
                    }
                  }
                  else {
LAB_140034e60:
                    pcVar3 = pcStack_180;
                    sVar9 = strlen(pcStack_180);
                    if (uVar15 == sVar9) {
                      ppcVar13 = &pcStack_180;
                      if (uVar15 != 0) {
                        iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                        ppcVar13 = &pcStack_180;
                        if (iVar5 != 0) goto LAB_140034ea1;
                      }
                    }
                    else {
LAB_140034ea1:
                      pcVar3 = pcStack_170;
                      sVar9 = strlen(pcStack_170);
                      if (uVar15 == sVar9) {
                        ppcVar13 = &pcStack_170;
                        if (uVar15 != 0) {
                          iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                          ppcVar13 = &pcStack_170;
                          if (iVar5 != 0) goto LAB_140034ee2;
                        }
                      }
                      else {
LAB_140034ee2:
                        pcVar3 = pcStack_160;
                        sVar9 = strlen(pcStack_160);
                        if (uVar15 == sVar9) {
                          ppcVar13 = &pcStack_160;
                          if (uVar15 != 0) {
                            iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                            ppcVar13 = &pcStack_160;
                            if (iVar5 != 0) goto LAB_140034f23;
                          }
                        }
                        else {
LAB_140034f23:
                          pcVar3 = pcStack_150;
                          sVar9 = strlen(pcStack_150);
                          if (uVar15 == sVar9) {
                            ppcVar13 = &pcStack_150;
                            if (uVar15 != 0) {
                              iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                              ppcVar13 = &pcStack_150;
                              if (iVar5 != 0) goto LAB_140034f64;
                            }
                          }
                          else {
LAB_140034f64:
                            pcVar3 = pcStack_140;
                            sVar9 = strlen(pcStack_140);
                            if (uVar15 == sVar9) {
                              ppcVar13 = &pcStack_140;
                              if (uVar15 != 0) {
                                iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                                ppcVar13 = &pcStack_140;
                                if (iVar5 != 0) goto LAB_140034fa5;
                              }
                            }
                            else {
LAB_140034fa5:
                              pcVar3 = pcStack_130;
                              sVar9 = strlen(pcStack_130);
                              if (uVar15 == sVar9) {
                                ppcVar13 = &pcStack_130;
                                if (uVar15 != 0) {
                                  iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                                  ppcVar13 = &pcStack_130;
                                  if (iVar5 != 0) goto LAB_140034fe6;
                                }
                              }
                              else {
LAB_140034fe6:
                                pcVar3 = pcStack_120;
                                sVar9 = strlen(pcStack_120);
                                if (uVar15 == sVar9) {
                                  ppcVar13 = &pcStack_120;
                                  if (uVar15 != 0) {
                                    iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                                    ppcVar13 = &pcStack_120;
                                    if (iVar5 != 0) goto LAB_140035023;
                                  }
                                }
                                else {
LAB_140035023:
                                  pcVar3 = pcStack_110;
                                  sVar9 = strlen(pcStack_110);
                                  if (uVar15 == sVar9) {
                                    ppcVar13 = &pcStack_110;
                                    if (uVar15 != 0) {
                                      iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                                      ppcVar13 = &pcStack_110;
                                      if (iVar5 != 0) goto LAB_14003505c;
                                    }
                                  }
                                  else {
LAB_14003505c:
                                    pcVar3 = pcStack_100;
                                    sVar9 = strlen(pcStack_100);
                                    if (uVar15 != sVar9) goto LAB_140035751;
                                    ppcVar13 = &pcStack_100;
                                    if (uVar15 != 0) {
                                      iVar5 = memcmp(pppppppuVar17,pcVar3,uVar15);
                                      ppcVar13 = &pcStack_100;
                                      if (iVar5 != 0) goto LAB_140035751;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((longlong)*(int *)(ppcVar13 + 1) < 0) {
LAB_140035751:
        FUN_1400119b0(&local_88,"Invalid format pattern, attribute with name \"",&local_c8);
        FUN_140008840(local_248,&local_88,"\" is invalid");
        local_338.exception_data.offset_0x38 = 0;
        local_338.exception_data._64_8_ = 0;
                    /* inlined constructor or destructor (approx location) for
                       quill::v11::QuillError */
        local_338.exception_data.offset_0x30 = (ulonglong)&quill::v11::QuillError::vftable;
        local_338.exception_data._80_8_ = local_248._8_8_;
        local_338.exception_data._88_8_ = local_238;
        local_338.exception_data.offset_0x60 = pvStack_230;
        local_238 = 0;
        pvStack_230 = (void *)0xf;
        local_248[0] = 0;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_338.exception_data.offset_0x30,(ThrowInfo *)&DAT_14140fa50);
      }
      (&local_338.exception_data.offset_0x68)[*(int *)(ppcVar13 + 1)] = local_f0 & 0xff;
      bVar4 = attribute_enum_value_does_not_exist_for_attri(&local_c8);
      if (0xf < bVar4) {
        invalid_bitset_position();
LAB_1400357df:
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      *local_228 = *local_228 | 1 << (bVar4 & 0x1f);
      if (local_68[2] == 0) {
        uVar15 = 0xffffffffffffffff;
        plVar19 = local_68;
      }
      else {
        plVar19 = local_68;
        if (0xf < (ulonglong)local_68[3]) {
          plVar19 = (longlong *)*local_68;
        }
        lVar18 = local_68[2] + (longlong)plVar19;
        lVar6 = thunk_FUN_140b66da0(plVar19,lVar18,0x25);
        uVar15 = lVar6 - (longlong)plVar19;
        plVar19 = local_68;
        if (lVar6 == lVar18) {
          uVar15 = 0xffffffffffffffff;
        }
      }
      local_68 = plVar19;
      if (0xf < uStack_b0) {
        uVar8 = uStack_b0 + 1;
        pppppppuVar17 = local_c8;
        if (0xfff < uVar8) {
          pppppppuVar17 = *(uint ********)((longlong)local_c8 + 0xfffffffffffffff8);
          if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar17)))
          goto LAB_140035738;
          uVar8 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar17,uVar8);
      }
      if (0xf < uStack_90) {
        uVar8 = uStack_90 + 1;
        pppppppuVar17 = local_a8;
        if (0xfff < uVar8) {
          pppppppuVar17 = (uint *******)local_a8[-1];
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppuVar17)))
          goto LAB_140035738;
          uVar8 = uStack_90 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar17,uVar8);
      }
      local_f0 = CONCAT71((int7)(local_f0 >> 8),(char)local_f0 + '\x01');
    }
    else {
LAB_140034863:
      uVar12 = uVar15 + 1;
      uVar15 = 0xffffffffffffffff;
      if (uVar12 < uVar8) {
        plVar16 = plVar19;
        if (0xf < (ulonglong)plVar19[3]) {
          plVar16 = (longlong *)*plVar19;
        }
        puVar7 = (undefined1 *)
                 thunk_FUN_140b66da0((undefined1 *)(uVar12 + (longlong)plVar16),
                                     (undefined1 *)(uVar8 + (longlong)plVar16),0x25);
        uVar15 = (longlong)puVar7 - (longlong)plVar16;
        if (puVar7 == (undefined1 *)(uVar8 + (longlong)plVar16)) {
          uVar15 = 0xffffffffffffffff;
        }
      }
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar15 = plVar19[2];
  uVar8 = plVar19[3];
  plVar16 = plVar19;
  if (0xf < uVar8) {
    plVar16 = (longlong *)*plVar19;
  }
  if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar15 < 0x10) {
    param_2[2] = uVar15;
    param_2[3] = 0xf;
    lVar6 = plVar16[1];
    *param_2 = *plVar16;
    param_2[1] = lVar6;
  }
  else {
    uVar12 = uVar15 | 0xf;
    uVar8 = 0x16;
    if (0x16 < uVar12) {
      uVar8 = uVar12;
    }
    if (uVar12 < 0xfff) {
      _Dst = (void *)FUN_140b65d30(uVar8 + 1);
    }
    else {
      lVar6 = FUN_140b65d30(uVar8 + 0x28);
      _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar6;
    }
    *param_2 = (longlong)_Dst;
    param_2[2] = uVar15;
    param_2[3] = uVar8;
    memcpy(_Dst,plVar16,uVar15 + 1);
    uVar8 = local_68[3];
    plVar19 = local_68;
  }
  param_2[0x12] = CONCAT44(uStack_254,local_258);
  param_2[0x13] = CONCAT44(uStack_24c,uStack_250);
  param_2[0x10] = CONCAT44(uStack_264,local_268);
  param_2[0x11] = CONCAT44(uStack_25c,uStack_260);
  param_2[0xe] = CONCAT44(uStack_274,local_278);
  param_2[0xf] = CONCAT44(uStack_26c,uStack_270);
  param_2[0xc] = CONCAT44(uStack_284,local_288);
  param_2[0xd] = CONCAT44(uStack_27c,uStack_280);
  *(undefined4 *)(param_2 + 10) = local_298;
  *(undefined4 *)((longlong)param_2 + 0x54) = uStack_294;
  *(undefined4 *)(param_2 + 0xb) = uStack_290;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_28c;
  *(undefined4 *)(param_2 + 8) = local_2a8;
  *(undefined4 *)((longlong)param_2 + 0x44) = uStack_2a4;
  *(undefined4 *)(param_2 + 9) = uStack_2a0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_29c;
  *(undefined4 *)(param_2 + 6) = (undefined4)local_338.exception_data.offset_0x78;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_338.exception_data.offset_0x78._4_4_;
  *(undefined4 *)(param_2 + 7) = uStack_2b0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_2ac;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_338.exception_data.offset_0x68;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_338.exception_data.offset_0x68._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_338.exception_data.offset_0x70;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_338.exception_data.offset_0x70._4_4_;
  if (0xf < uVar8) {
    lVar6 = *plVar19;
    uVar15 = uVar8 + 1;
    lVar18 = lVar6;
    if (0xfff < uVar15) {
      lVar18 = *(longlong *)(lVar6 + -8);
      if (0x1f < (ulonglong)((lVar6 + -8) - lVar18)) {
LAB_140035738:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar15 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar18,uVar15);
  }
  plVar19[2] = 0;
  plVar19[3] = 0xf;
  *(undefined1 *)plVar19 = 0;
  return param_2;
}


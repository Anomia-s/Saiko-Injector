/**
 * Function: unknown_format_specifier
 * Address:  140012fb0
 * Signature: undefined unknown_format_specifier(void)
 * Body size: 2060 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001400131d2) */
/* WARNING: Removing unreachable block (ram,0x00014001318d) */
/* WARNING: Removing unreachable block (ram,0x000140013170) */
/* WARNING: Removing unreachable block (ram,0x000140013722) */

void unknown_format_specifier(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  code cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  size_t sVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  uint uVar13;
  code *_Str;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  code *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  uint *local_c0;
  longlong local_b0;
  uint local_a8;
  longlong *local_a0;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  void *local_80;
  uint local_78 [6];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  _Str = (code *)*param_1;
  pcVar1 = _Str + param_1[1];
  if (param_1[1] != 0) {
    pcVar17 = _Str;
    do {
      pcVar4 = pcVar17 + 1;
      puVar8 = &local_98;
      if (*pcVar17 == (code)0x7d) {
        if ((pcVar4 == pcVar1) || (*pcVar4 != (code)0x7d)) {
          local_78[0] = CONCAT31(local_78[0]._1_3_,1);
          pcVar12 = "unmatched \'}\' in format string";
          goto LAB_140013792;
        }
        plVar14 = *(longlong **)(param_2 + 0x18);
        goto LAB_1400130cd;
      }
      if (*pcVar17 != (code)0x7b) goto LAB_140013036;
      FUN_140013ff0(&local_98,_Str,pcVar17,*(undefined8 *)(param_2 + 0x18));
      if (pcVar4 == pcVar1) {
        local_78[0] = CONCAT31(local_78[0]._1_3_,1);
        pcVar12 = "invalid format string";
        goto LAB_140013792;
      }
      cVar2 = *pcVar4;
      if (cVar2 == (code)0x3a) {
        uVar15 = *(uint *)(param_2 + 0x10);
        uVar11 = (ulonglong)uVar15;
        if ((int)uVar15 < 0) {
LAB_140013779:
          local_78[0] = CONCAT31(local_78[0]._1_3_,1);
          pcVar12 = "cannot switch from manual to automatic argument indexing";
          goto LAB_140013792;
        }
        *(uint *)(param_2 + 0x10) = uVar15 + 1;
LAB_14001318f:
        pcVar4 = (code *)argument_not_found(param_2,uVar11,pcVar4 + 1,pcVar1);
        if ((pcVar4 == pcVar1) || (*pcVar4 != (code)0x7d)) {
          local_78[0] = CONCAT31(local_78[0]._1_3_,1);
          pcVar12 = "unknown format specifier";
          goto LAB_140013792;
        }
        goto LAB_1400131b5;
      }
      if (cVar2 == (code)0x7b) {
        FUN_140013ff0(&local_98,pcVar4,pcVar17 + 2,*(undefined8 *)(param_2 + 0x18));
        goto LAB_140013030;
      }
      if (cVar2 != (code)0x7d) {
        local_a8 = 0;
        local_b0 = param_2;
        pcVar4 = (code *)invalid_format_string(pcVar4,pcVar1,&local_b0);
        if (pcVar4 == pcVar1) {
LAB_14001315e:
          local_78[0] = CONCAT31(local_78[0]._1_3_,1);
          pcVar12 = "missing \'}\' in format string";
          goto LAB_140013792;
        }
        uVar11 = (ulonglong)local_a8;
        if (*pcVar4 == (code)0x3a) goto LAB_14001318f;
        if (*pcVar4 != (code)0x7d) goto LAB_14001315e;
        uVar16 = *(ulonglong *)(param_2 + 0x20);
        if ((longlong)uVar16 < 0) {
          if ((int)uVar16 <= (int)local_a8) goto LAB_1400132c8;
          puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x28) + (longlong)(int)local_a8 * 0x18);
          uVar15 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x10 + (longlong)(int)local_a8 * 0x18);
LAB_14001328a:
          uVar11 = *puVar10;
          local_a0 = *(longlong **)(param_2 + 0x18);
          switch(uVar15) {
          case 1:
            FUN_140013cd0(&local_98,local_a0,uVar11);
            break;
          case 2:
            FUN_1400137c0(&local_a0,uVar11 & 0xffffffff);
            break;
          case 3:
            FUN_140014090(&local_98,local_a0);
            break;
          case 4:
            FUN_1400138f0(&local_a0,uVar11);
            break;
          default:
            goto switchD_1400132b6_caseD_5;
          case 7:
            FUN_140013a90(&local_a0,uVar11 & 0xffffff01);
            break;
          case 8:
            FUN_140013b10(&local_a0,uVar11 & 0xffffffff);
            break;
          case 9:
            FUN_140018600(&local_98,local_a0,uVar11 & 0xffffffff);
            break;
          case 10:
            FUN_140019c00(&local_98,local_a0);
            break;
          case 0xb:
            FUN_140019c00(&local_98,local_a0);
            break;
          case 0xc:
            string_pointer_is_null(&local_a0,uVar11);
            break;
          case 0xd:
            FUN_140013ff0(&local_98,uVar11,(code *)puVar10[1] + uVar11);
            break;
          case 0xe:
            FUN_140013c10(&local_a0,uVar11);
            break;
          case 0xf:
            local_78[0] = 0;
            local_78[1] = 0;
            local_78[2] = 0;
            local_78[3] = 0;
            local_78[4] = 0;
            iStack_90 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            local_98 = (uint)local_a0;
            uStack_94 = (undefined4)((ulonglong)local_a0 >> 0x20);
            local_80 = (void *)0x0;
            (*(code *)puVar10[1])(uVar11,local_78,&local_98);
          }
        }
        else {
          if ((local_a8 < 0xf) &&
             (uVar16 = uVar16 >> ((char)local_a8 * '\x04' & 0x3fU), uVar15 = (uint)uVar16 & 0xf,
             (uVar16 & 0xf) != 0)) {
            puVar10 = (ulonglong *)(uVar11 * 0x10 + *(longlong *)(param_2 + 0x28));
            goto LAB_14001328a;
          }
LAB_1400132c8:
          local_a0 = *(longlong **)(param_2 + 0x18);
switchD_1400132b6_caseD_5:
          argument_not_found(&local_a0);
        }
LAB_1400131b5:
        _Str = pcVar4 + 1;
        pcVar4 = _Str;
        goto LAB_140013036;
      }
      uVar15 = *(uint *)(param_2 + 0x10);
      if ((int)uVar15 < 0) goto LAB_140013779;
      *(uint *)(param_2 + 0x10) = uVar15 + 1;
      uVar11 = *(ulonglong *)(param_2 + 0x20);
      if (-1 < (longlong)uVar11) {
        if ((uVar15 < 0xf) &&
           (uVar11 = uVar11 >> ((char)uVar15 * '\x04' & 0x3fU), uVar9 = (uint)uVar11 & 0xf,
           (uVar11 & 0xf) != 0)) {
          puVar5 = (undefined8 *)((ulonglong)uVar15 * 0x10 + *(longlong *)(param_2 + 0x28));
          goto LAB_14001320e;
        }
LAB_140013251:
        local_a0 = *(longlong **)(param_2 + 0x18);
LAB_140013782:
        local_78[0] = CONCAT31(local_78[0]._1_3_,1);
        pcVar12 = "argument not found";
LAB_140013792:
        fmtquill::v12::format_error::format_error((format_error *)&local_98,pcVar12);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((format_error *)&local_98,(ThrowInfo *)&DAT_141412540);
      }
      if ((int)uVar11 <= (int)uVar15) goto LAB_140013251;
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar15 * 0x18);
      uVar9 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x10 + (ulonglong)uVar15 * 0x18);
LAB_14001320e:
      _Str = (code *)*puVar5;
      plVar14 = *(longlong **)(param_2 + 0x18);
      uVar15 = (uint)_Str;
      local_a0 = plVar14;
      switch(uVar9) {
      case 1:
        FUN_140013cd0(&local_98,plVar14,(ulonglong)_Str & 0xffffffff);
        break;
      case 2:
        uVar9 = 0x1f;
        if ((uVar15 | 1) != 0) {
          for (; (uVar15 | 1) >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        uVar18 = ((ulonglong)_Str & 0xffffffff) +
                 *(longlong *)(&DAT_140dc23d0 + (ulonglong)uVar9 * 8);
        lVar7 = plVar14[1];
        uVar16 = plVar14[2];
        uVar11 = ((longlong)uVar18 >> 0x20) + lVar7;
        if (uVar16 < uVar11) {
          (*(code *)plVar14[3])(plVar14);
          lVar7 = plVar14[1];
          uVar16 = plVar14[2];
          uVar11 = ((longlong)uVar18 >> 0x20) + lVar7;
        }
        uVar19 = uVar18 >> 0x20;
        uVar9 = (uint)(uVar18 >> 0x20);
        if (uVar16 < uVar11) {
LAB_14001356d:
          FUN_140013e40(&local_98,plVar14,(ulonglong)_Str & 0xffffffff,uVar19);
        }
        else {
          plVar14[1] = uVar11;
          if (*plVar14 == 0) goto LAB_14001356d;
          lVar7 = *plVar14 + lVar7;
          if (99 < uVar15) {
            do {
              uVar9 = (int)uVar19 - 2;
              uVar19 = (ulonglong)uVar9;
              uVar13 = (uint)_Str;
              uVar15 = (uint)(((ulonglong)_Str & 0xffffffff) / 100);
              _Str = (code *)(((ulonglong)_Str & 0xffffffff) / 100);
              *(undefined2 *)(lVar7 + uVar19) =
                   *(undefined2 *)(&DAT_140dc24d0 + (ulonglong)(uVar13 + (int)_Str * -100) * 2);
            } while (9999 < uVar13);
          }
          if (uVar15 < 10) {
            *(byte *)(lVar7 + (ulonglong)(uVar9 - 1)) = (byte)uVar15 | 0x30;
          }
          else {
            *(undefined2 *)(lVar7 + (ulonglong)(uVar9 - 2)) =
                 *(undefined2 *)(&DAT_140dc24d0 + (ulonglong)uVar15 * 2);
          }
        }
        _Str = pcVar17 + 2;
        pcVar4 = _Str;
        goto LAB_140013036;
      case 3:
        FUN_140014090(&local_98,plVar14,_Str);
        break;
      case 4:
        FUN_1400138f0(&local_a0,_Str);
        break;
      default:
        goto LAB_140013782;
      case 7:
        local_98 = 0x8000;
        uStack_94 = 0x20;
        iStack_90 = 0;
        uStack_8c = 0xffffffff;
        local_c8 = 0;
        FUN_140014510(local_78,plVar14,uVar15 & 0xffffff01,&local_98);
        break;
      case 8:
        lVar7 = plVar14[1];
        uVar16 = plVar14[2];
        uVar11 = lVar7 + 1;
        if (uVar16 < uVar11) {
          (*(code *)plVar14[3])(plVar14);
          lVar7 = plVar14[1];
          uVar16 = plVar14[2];
          uVar11 = lVar7 + 1;
        }
        if (uVar16 < uVar11) {
          (*(code *)plVar14[3])(plVar14);
          lVar7 = plVar14[1];
          uVar11 = lVar7 + 1;
        }
        plVar14[1] = uVar11;
        *(char *)(*plVar14 + lVar7) = (char)_Str;
        break;
      case 9:
        FUN_140018600(&local_98,plVar14,(ulonglong)_Str & 0xffffffff);
        break;
      case 10:
        FUN_140019c00(&local_98,plVar14);
        break;
      case 0xb:
        FUN_140019c00(&local_98,plVar14);
        break;
      case 0xc:
        if (_Str == (code *)0x0) {
          local_b0 = CONCAT71(local_b0._1_7_,1);
          pcVar12 = "string pointer is null";
          goto LAB_140013792;
        }
        sVar6 = strlen((char *)_Str);
        pcVar4 = _Str + sVar6;
        puVar8 = local_78;
        goto LAB_1400130cd;
      case 0xd:
        pcVar4 = (code *)puVar5[1] + (longlong)_Str;
LAB_1400130cd:
        FUN_140013ff0(puVar8,_Str,pcVar4,plVar14);
        break;
      case 0xe:
        local_78[0] = 0x8000;
        local_78[1] = 0x20;
        local_78[2] = 0;
        local_78[3] = 0xffffffff;
        pcVar4 = _Str;
        local_c8 = 2;
        do {
          lVar7 = local_c8;
          local_c8 = lVar7 + 1;
          bVar3 = (code *)0xf < pcVar4;
          pcVar4 = (code *)((ulonglong)pcVar4 >> 4);
        } while (bVar3);
        uStack_94 = (undefined4)((ulonglong)_Str >> 0x20);
        iStack_90 = (int)lVar7 + -1;
        local_c0 = &local_98;
        local_98 = uVar15;
        FUN_14001b230(&local_b0,plVar14,local_78);
        break;
      case 0xf:
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        local_78[3] = 0;
        local_78[4] = 0;
        iStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_98 = (uint)plVar14;
        uStack_94 = (undefined4)((ulonglong)plVar14 >> 0x20);
        local_80 = (void *)0x0;
        (*(code *)puVar5[1])(_Str,local_78,&local_98);
      }
LAB_140013030:
      _Str = pcVar17 + 2;
      pcVar4 = _Str;
LAB_140013036:
      pcVar17 = pcVar4;
    } while (pcVar4 != pcVar1);
  }
  FUN_140013ff0(&local_98,_Str,pcVar1,*(undefined8 *)(param_2 + 0x18));
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_e8);
}


/**
 * Function: tion_establishedconnection_estab
 * Address:  1401eb700
 * Signature: undefined tion_establishedconnection_estab(void)
 * Body size: 2596 bytes
 */


ulonglong tion_establishedconnection_estab
                    (longlong *param_1,longlong *param_2,undefined1 *param_3,longlong *param_4,
                    undefined1 param_5,undefined4 *param_6)

{
  SOCKET *pSVar1;
  size_t _Size;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 *_Dst;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong unaff_R15;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_8d8 [32];
  undefined8 ****local_8b8 [2];
  ulonglong local_8a8;
  ulonglong local_8a0;
  undefined8 local_598 [2];
  longlong local_588;
  ulonglong local_580;
  longlong local_578;
  longlong local_570;
  longlong lStack_568;
  ulonglong local_560;
  undefined1 local_548 [744];
  longlong local_260;
  undefined1 local_258 [32];
  undefined1 local_238 [16];
  ulonglong local_228;
  ulonglong local_220;
  undefined1 local_a0 [8];
  longlong *local_98;
  ulonglong local_90;
  undefined1 local_88 [16];
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 0x30) == 0) {
    *param_6 = 2;
    uVar8 = 0;
    goto LAB_1401ec0ca;
  }
  FUN_1401ec490(local_8d8,param_3);
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (((cVar5 == '\0') && (param_1[0x67] != 0)) && ((int)param_1[0x69] != -1)) {
    FUN_1401ec490(local_598,param_3);
    _Size = param_1[8];
    if (0x7ffffffffffffff8 < (longlong)_Size) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    plVar10 = (longlong *)param_1[6];
    uVar9 = param_1[9];
    local_238 = (undefined1  [16])0x0;
    uVar8 = _Size + 7;
    local_98 = param_4;
    local_70 = param_2;
    if (uVar8 < 0x10) {
      puVar18 = (undefined4 *)local_238;
      uVar17 = 0xf;
    }
    else {
      local_90 = uVar9;
      local_68 = plVar10;
      if ((longlong)_Size < -7) {
        uVar17 = 0x7fffffffffffffff;
LAB_1401eba8a:
        lVar12 = FUN_140b65d30(uVar17 + 0x28);
        puVar18 = (undefined4 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar18 + -2) = lVar12;
      }
      else {
        uVar9 = uVar8 | 0xf;
        uVar17 = 0x16;
        if (0x16 < uVar9) {
          uVar17 = uVar9;
        }
        if (0xffe < uVar9) goto LAB_1401eba8a;
        puVar18 = (undefined4 *)FUN_140b65d30(uVar17 + 1);
      }
      local_238._0_8_ = puVar18;
      plVar10 = local_68;
      uVar9 = local_90;
    }
    plVar11 = (longlong *)(param_3 + 0x20);
    plVar15 = param_1 + 6;
    if (0xf < uVar9) {
      plVar15 = plVar10;
    }
    local_228 = uVar8;
    local_220 = uVar17;
    *(undefined4 *)((longlong)puVar18 + 3) = 0x2f2f3a70;
    *puVar18 = 0x70747468;
    memcpy((void *)((longlong)puVar18 + 7),plVar15,_Size);
    *(undefined1 *)((longlong)puVar18 + _Size + 7) = 0;
    uVar8 = *(ulonglong *)(param_3 + 0x30);
    plVar10 = plVar11;
    if (0xf < *(ulonglong *)(param_3 + 0x38)) {
      plVar10 = *(longlong **)(param_3 + 0x20);
    }
    local_68 = plVar11;
    if (local_220 - local_228 < uVar8) {
      plVar11 = (longlong *)FUN_140006210(local_238,uVar8,uVar8,plVar10,uVar8);
    }
    else {
      uVar9 = local_228 + uVar8;
      plVar11 = (longlong *)local_238;
      plVar15 = plVar11;
      if (0xf < local_220) {
        plVar15 = (longlong *)local_238._0_8_;
      }
      _Dst = (undefined1 *)(local_228 + (longlong)plVar15);
      local_228 = uVar9;
      memmove(_Dst,plVar10,uVar8);
      *(undefined1 *)((longlong)plVar15 + uVar9) = 0;
    }
    lVar12 = *plVar11;
    lVar2 = plVar11[1];
    lVar3 = plVar11[2];
    unaff_R15 = plVar11[3];
    plVar11[2] = 0;
    plVar11[3] = 0xf;
    *(undefined1 *)plVar11 = 0;
    if (0xf < local_560) {
      uVar8 = local_560 + 1;
      lVar13 = local_578;
      if (0xfff < uVar8) {
        lVar13 = *(longlong *)(local_578 + -8);
        if (0x1f < (ulonglong)((local_578 + -8) - lVar13)) goto LAB_1401ec0e8;
        uVar8 = local_560 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar13,uVar8);
    }
    param_4 = local_98;
    local_578 = lVar12;
    local_570 = lVar2;
    lStack_568 = lVar3;
    local_560 = unaff_R15;
    if (0xf < local_220) {
      uVar8 = local_220 + 1;
      lVar12 = local_238._0_8_;
      if (0xfff < uVar8) {
        lVar12 = *(longlong *)(local_238._0_8_ + -8);
        if (0x1f < (ulonglong)((local_238._0_8_ + -8) - lVar12)) goto LAB_1401ec0e8;
        uVar8 = local_220 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar8);
    }
    cVar5 = FUN_1401ca370(param_1,local_70,local_598,param_4,param_5,param_6);
    FUN_1401ed400(param_3,local_598);
    if (param_3 != local_8d8) {
      if (local_8a0 < 0x10) {
        local_8b8[0] = local_8b8;
        uVar8 = *(ulonglong *)(param_3 + 0x38);
      }
      else {
        uVar8 = *(ulonglong *)(param_3 + 0x38);
      }
      unaff_R15 = local_8a8;
      if (uVar8 < local_8a8) {
        FUN_1400069b0(local_68,local_8a8);
      }
      else {
        if (0xf < uVar8) {
          local_68 = *(longlong **)(param_3 + 0x20);
        }
        plVar10 = local_68;
        *(ulonglong *)(param_3 + 0x30) = local_8a8;
        memmove(local_68,local_8b8[0],local_8a8);
        *(undefined1 *)((longlong)plVar10 + local_8a8) = 0;
      }
    }
    FUN_1401c5810(local_598);
    if (cVar5 == '\0') goto LAB_1401ebd24;
LAB_1401eb798:
    local_228 = 10;
    local_220 = 0xf;
    local_238._8_2_ = 0x6e6f;
    local_238._0_8_ = 0x697463656e6e6f43;
    local_238._10_6_ = 0;
    FUN_1401ddfa0(param_4,local_598,local_238,&DAT_1413a2ad6,0);
    piVar4 = (int *)CONCAT71(local_598[0]._1_7_,(undefined1)local_598[0]);
    if (local_588 == 5) {
      piVar14 = (int *)local_598;
      if (0xf < local_580) {
        piVar14 = piVar4;
      }
      if ((char)piVar14[1] != 'e' || *piVar14 != 0x736f6c63) goto LAB_1401eb835;
      if (0xf < local_580) {
        uVar8 = local_580 + 1;
        piVar14 = piVar4;
        if (0xfff < uVar8) {
          piVar14 = *(int **)(piVar4 + -2);
          if (0x1f < (ulonglong)((longlong)piVar4 + (-8 - (longlong)piVar14))) goto LAB_1401ec0e8;
          uVar8 = local_580 + 0x28;
        }
        thunk_FUN_140b68ba8(piVar14,uVar8);
      }
      local_588 = 0;
      local_580 = 0xf;
      local_598[0]._0_1_ = 0;
      if (0xf < local_220) {
        uVar8 = local_220 + 1;
        lVar12 = local_238._0_8_;
        if (0xfff < uVar8) {
          lVar12 = *(longlong *)(local_238._0_8_ + -8);
          if (0x1f < (ulonglong)(local_238._0_8_ + (-8 - lVar12))) goto LAB_1401ec0e8;
          uVar8 = local_220 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar12,uVar8);
      }
LAB_1401ebdf9:
      plVar10 = param_1 + 0xc;
      iVar6 = _Mtx_lock(plVar10);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      local_70 = plVar10;
      if (*(int *)((longlong)param_1 + 0xac) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      pSVar1 = (SOCKET *)(param_1 + 10);
      (**(code **)(*param_1 + 0x18))(param_1,pSVar1,1);
      if (*pSVar1 != 0xffffffffffffffff) {
        shutdown(*pSVar1,2);
        if (*pSVar1 != 0xffffffffffffffff) {
          closesocket(*pSVar1);
          *pSVar1 = 0xffffffffffffffff;
        }
      }
      _Mtx_unlock(local_70);
    }
    else {
LAB_1401eb835:
      if (param_4[2] == 8) {
        plVar10 = param_4;
        if (0xf < (ulonglong)param_4[3]) {
          plVar10 = (longlong *)*param_4;
        }
        if (*plVar10 == 0x302e312f50545448) {
          if (param_4[7] == 0x16) {
            if ((ulonglong)param_4[8] < 0x10) {
              plVar10 = param_4 + 5;
            }
            else {
              plVar10 = (longlong *)param_4[5];
            }
            auVar21[0] = -(*(char *)((longlong)plVar10 + 6) == 't');
            auVar21[1] = -(*(char *)((longlong)plVar10 + 7) == 'i');
            auVar21[2] = -((char)plVar10[1] == 'o');
            auVar21[3] = -(*(char *)((longlong)plVar10 + 9) == 'n');
            auVar21[4] = -(*(char *)((longlong)plVar10 + 10) == ' ');
            auVar21[5] = -(*(char *)((longlong)plVar10 + 0xb) == 'e');
            auVar21[6] = -(*(char *)((longlong)plVar10 + 0xc) == 's');
            auVar21[7] = -(*(char *)((longlong)plVar10 + 0xd) == 't');
            auVar21[8] = -(*(char *)((longlong)plVar10 + 0xe) == 'a');
            auVar21[9] = -(*(char *)((longlong)plVar10 + 0xf) == 'b');
            auVar21[10] = -((char)plVar10[2] == 'l');
            auVar21[0xb] = -(*(char *)((longlong)plVar10 + 0x11) == 'i');
            auVar21[0xc] = -(*(char *)((longlong)plVar10 + 0x12) == 's');
            auVar21[0xd] = -(*(char *)((longlong)plVar10 + 0x13) == 'h');
            auVar21[0xe] = -(*(char *)((longlong)plVar10 + 0x14) == 'e');
            auVar21[0xf] = -(*(char *)((longlong)plVar10 + 0x15) == 'd');
            auVar20[0] = -((char)*plVar10 == 'C');
            auVar20[1] = -(*(char *)((longlong)plVar10 + 1) == 'o');
            auVar20[2] = -(*(char *)((longlong)plVar10 + 2) == 'n');
            auVar20[3] = -(*(char *)((longlong)plVar10 + 3) == 'n');
            auVar20[4] = -(*(char *)((longlong)plVar10 + 4) == 'e');
            auVar20[5] = -(*(char *)((longlong)plVar10 + 5) == 'c');
            auVar20[6] = -(*(char *)((longlong)plVar10 + 6) == 't');
            auVar20[7] = -(*(char *)((longlong)plVar10 + 7) == 'i');
            auVar20[8] = -((char)plVar10[1] == 'o');
            auVar20[9] = -(*(char *)((longlong)plVar10 + 9) == 'n');
            auVar20[10] = -(*(char *)((longlong)plVar10 + 10) == ' ');
            auVar20[0xb] = -(*(char *)((longlong)plVar10 + 0xb) == 'e');
            auVar20[0xc] = -(*(char *)((longlong)plVar10 + 0xc) == 's');
            auVar20[0xd] = -(*(char *)((longlong)plVar10 + 0xd) == 't');
            auVar20[0xe] = -(*(char *)((longlong)plVar10 + 0xe) == 'a');
            auVar20[0xf] = -(*(char *)((longlong)plVar10 + 0xf) == 'b');
            auVar20 = auVar20 & auVar21;
            bVar19 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff;
          }
          else {
            bVar19 = false;
          }
          if (0xf < local_580) {
            uVar8 = local_580 + 1;
            piVar14 = piVar4;
            if (0xfff < uVar8) {
              piVar14 = *(int **)(piVar4 + -2);
              if (0x1f < (ulonglong)((longlong)piVar4 + (-8 - (longlong)piVar14)))
              goto LAB_1401ec0e8;
              uVar8 = local_580 + 0x28;
            }
            thunk_FUN_140b68ba8(piVar14,uVar8);
          }
          local_588 = 0;
          local_580 = 0xf;
          local_598[0]._0_1_ = 0;
          if (0xf < local_220) {
            uVar8 = local_220 + 1;
            lVar12 = local_238._0_8_;
            if (0xfff < uVar8) {
              lVar12 = *(longlong *)(local_238._0_8_ + -8);
              if (0x1f < (ulonglong)(local_238._0_8_ + (-8 - lVar12))) goto LAB_1401ec0e8;
              uVar8 = local_220 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar12,uVar8);
          }
          if (!bVar19) goto LAB_1401ebdf9;
          goto LAB_1401ebe6d;
        }
      }
      if (0xf < local_580) {
        uVar8 = local_580 + 1;
        piVar14 = piVar4;
        if (0xfff < uVar8) {
          piVar14 = *(int **)(piVar4 + -2);
          if (0x1f < (ulonglong)((longlong)piVar4 + (-8 - (longlong)piVar14))) goto LAB_1401ec0e8;
          uVar8 = local_580 + 0x28;
        }
        thunk_FUN_140b68ba8(piVar14,uVar8);
      }
      local_588 = 0;
      local_580 = 0xf;
      local_598[0]._0_1_ = 0;
      if (0xf < local_220) {
        uVar8 = local_220 + 1;
        lVar12 = local_238._0_8_;
        if (0xfff < uVar8) {
          lVar12 = *(longlong *)(local_238._0_8_ + -8);
          if (0x1f < (ulonglong)(local_238._0_8_ + (-8 - lVar12))) {
LAB_1401ec0e8:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar8 = local_220 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar12,uVar8);
      }
    }
LAB_1401ebe6d:
    iVar6 = (int)param_4[4];
    uVar8 = CONCAT71((int7)(unaff_R15 >> 8),1);
    if ((iVar6 - 0x12dU < 99) && (*(char *)((longlong)param_1 + 0x2b1) != '\0')) {
      FUN_1401ed400(param_3,local_8d8);
      uVar7 = invalid_stoi_argument(param_1,param_3,param_4,param_6);
      uVar8 = (ulonglong)uVar7;
      iVar6 = (int)param_4[4];
    }
    if (((iVar6 == 0x197) || (iVar6 == 0x191)) && (*(ulonglong *)(param_3 + 0x338) < 5)) {
      plVar10 = param_1 + 0x76;
      plVar11 = param_1 + 0x7a;
      if (iVar6 != 0x197) {
        plVar11 = param_1 + 0x52;
        plVar10 = param_1 + 0x4e;
      }
      if ((plVar10[2] != 0) && (plVar11[2] != 0)) {
        local_88 = (undefined1  [16])0x0;
        lVar12 = FUN_140b65d30(0x60);
        *(longlong *)lVar12 = lVar12;
        *(longlong *)(lVar12 + 8) = lVar12;
        *(longlong *)(lVar12 + 0x10) = lVar12;
        *(undefined2 *)(lVar12 + 0x18) = 0x101;
        local_88._0_8_ = lVar12;
        cVar5 = proxy_authenticate(param_4,local_88,iVar6 == 0x197);
        if (cVar5 != '\0') {
          FUN_1401ec490(local_598,param_3);
          local_260 = local_260 + 1;
          pcVar16 = "Authorization";
          if (iVar6 == 0x197) {
            pcVar16 = "Proxy-Authorization";
          }
          FUN_140004940(local_238,pcVar16);
          FUN_1401ef5d0(local_548,local_238);
          FUN_140004b30(local_238);
          FUN_1401e8550(local_258,10);
          proxy_authorization(local_238,param_3,local_88,local_260,local_258,plVar10,plVar11,
                              iVar6 == 0x197);
          unordered_map_set_too_long(local_548,local_a0,local_238);
          FUN_140016fe0(local_238);
          FUN_140004b30(local_258);
          FUN_1401c6b20(local_238);
          uVar7 = FUN_1401c6a10(param_1,local_598,local_238,param_6);
          uVar8 = (ulonglong)uVar7;
          if ((char)uVar7 != '\0') {
            FUN_1401ef720(param_4,local_238);
          }
          FUN_1401c9470(local_238);
          FUN_1401c5810(local_598);
        }
        FUN_1401c60b0(local_88,local_88,*(undefined8 *)(local_88._0_8_ + 8));
        thunk_FUN_140b68ba8(local_88._0_8_,0x60);
      }
    }
  }
  else {
    cVar5 = FUN_1401ca370(param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar5 != '\0') goto LAB_1401eb798;
LAB_1401ebd24:
    uVar8 = 0;
  }
  FUN_1401c5810(local_8d8);
LAB_1401ec0ca:
  return uVar8 & 0xffffffff;
}


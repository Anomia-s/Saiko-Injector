/**
 * Function: exceeded_function_instruction_limit_split_the
 * Address:  1406c5e50
 * Signature: undefined4 __fastcall exceeded_function_instruction_limit_split_the(undefined8 * param_1, ulonglong param_2, byte * param_3)
 * Body size: 2215 bytes
 */


undefined4
exceeded_function_instruction_limit_split_the(undefined8 *param_1,ulonglong param_2,byte *param_3)

{
  undefined8 *puVar1;
  ReturnVisitor_vftable *pRVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  void *_Src;
  void *_Dst;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  void *pvVar17;
  size_t _Size;
  byte bVar18;
  uint uVar19;
  undefined8 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong in_stack_ffffffffffffff28;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a0;
  size_t local_98;
  char *local_90;
  size_t local_88;
  byte *local_80;
  ReturnVisitor_vftable *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 local_48;
  ReturnVisitor_vftable **ppRVar20;
  
  local_48 = 0xfffffffffffffffe;
  local_54 = *(undefined4 *)((longlong)param_1 + 0x4fc);
  lVar27 = *(longlong *)(param_2 + 0x50);
  local_80 = param_3;
  local_60 = param_2;
  local_50 = param_1;
  local_58 = FUN_1407a7a20(*param_1,*(int *)(param_2 + 0x60) + (uint)(lVar27 != 0),
                           *(undefined1 *)(param_2 + 0x70));
  if (0 < *(int *)((longlong)local_50 + 0xc)) {
    FUN_1407ab600(*local_50,*(int *)(param_2 + 0xc) + 1);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
    FUN_1407aacf0(*local_50,0x41,(uint)(lVar27 != 0) + *(int *)(param_2 + 0x60),0,
                  in_stack_ffffffffffffff28);
  }
  uVar19 = *(int *)(param_2 + 0x60) + (uint)(lVar27 != 0);
  ppRVar20 = (ReturnVisitor_vftable **)(ulonglong)uVar19;
  iVar11 = *(int *)((longlong)local_50 + 0x4fc);
  uVar19 = uVar19 + iVar11;
  if (0xff < uVar19) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(param_2 + 0xc),
               "Out of registers when trying to allocate %d registers: exceeded limit %d",ppRVar20,
               0xff);
  }
  *(uint *)((longlong)local_50 + 0x4fc) = uVar19;
  if (uVar19 < *(uint *)(local_50 + 0xa0)) {
    uVar19 = *(uint *)(local_50 + 0xa0);
  }
  *(uint *)(local_50 + 0xa0) = uVar19;
  pRVar2 = *(ReturnVisitor_vftable **)(param_2 + 0x50);
  cVar9 = (char)iVar11;
  if (pRVar2 != (ReturnVisitor_vftable *)0x0) {
    plVar3 = (longlong *)local_50[0xa4];
    local_78 = pRVar2;
    if (0x638 < (ulonglong)((longlong)plVar3 - local_50[0xa3])) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                (&pRVar2->vfunction2,
                 "Out of local registers when trying to allocate %s: exceeded limit %d",
                 pRVar2->vfunction1,200);
    }
    if (plVar3 == (longlong *)local_50[0xa5]) {
      ppRVar20 = &local_78;
      FUN_140029790(local_50 + 0xa3);
    }
    else {
      *plVar3 = (longlong)pRVar2;
      local_50[0xa4] = local_50[0xa4] + 8;
    }
    pcVar12 = (char *)FUN_1406c8ca0(local_50 + 0x11,&local_78);
    *pcVar12 = cVar9;
    pcVar12[1] = '\x01';
    uVar10 = FUN_1407ab870(*local_50);
    *(undefined4 *)(pcVar12 + 4) = uVar10;
    *(undefined4 *)(pcVar12 + 8) = uVar10;
  }
  puVar1 = local_50 + 0xa3;
  puVar4 = local_50 + 0x11;
  uVar16 = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    do {
      local_78 = *(ReturnVisitor_vftable **)(*(longlong *)(param_2 + 0x58) + uVar16 * 8);
      plVar3 = (longlong *)local_50[0xa4];
      if (0x638 < (ulonglong)((longlong)plVar3 - local_50[0xa3])) {
                    /* WARNING: Subroutine does not return */
        Luau::CompileError::CompileError_Constructor_or_Destructor
                  (&local_78->vfunction2,
                   "Out of local registers when trying to allocate %s: exceeded limit %d",
                   local_78->vfunction1,200);
      }
      if (plVar3 == (longlong *)local_50[0xa5]) {
        ppRVar20 = &local_78;
        FUN_140029790(puVar1);
      }
      else {
        *plVar3 = (longlong)local_78;
        local_50[0xa4] = local_50[0xa4] + 8;
      }
      pcVar12 = (char *)FUN_1406c8ca0(puVar4,&local_78);
      *pcVar12 = (char)uVar16 + cVar9 + (lVar27 != 0);
      pcVar12[1] = '\x01';
      uVar10 = FUN_1407ab870(*local_50);
      *(undefined4 *)(pcVar12 + 4) = uVar10;
      *(undefined4 *)(pcVar12 + 8) = uVar10;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ulonglong *)(param_2 + 0x60));
  }
  local_50[0xa1] = (longlong)(local_50[0xa4] - local_50[0xa3]) >> 3;
  puVar4 = *(undefined8 **)(param_2 + 0x90);
  puVar1 = local_50 + 0x20;
  uVar16 = 0;
  puVar21 = local_50;
  do {
    if ((ulonglong)puVar4[6] <= uVar16) {
      if (0 < *(int *)((longlong)local_50 + 0xc)) {
        FUN_1407ab600(*local_50,*(int *)((longlong)puVar4 + 0x14) + 1);
      }
      lVar27 = local_50[0xa4] - local_50[0xa3];
      if (lVar27 == 0) goto LAB_1406c61ca;
      lVar27 = lVar27 >> 3;
      lVar5 = local_50[0x11];
      puVar21 = (undefined8 *)(local_50[0x12] + -1);
      bVar18 = 0xff;
      bVar24 = false;
      lVar23 = 0;
      goto LAB_1406c6120;
    }
    uVar14 = *(undefined8 *)(puVar4[5] + uVar16 * 8);
    FUN_1406c80b0(local_50,uVar14);
    cVar9 = FUN_1406d8bc0(puVar1,uVar14);
    uVar16 = uVar16 + 1;
  } while (cVar9 == '\0');
  goto LAB_1406c61e6;
LAB_1406c6120:
  do {
    uVar16 = *(ulonglong *)(local_50[0xa3] + lVar23 * 8);
    uVar22 = (uVar16 >> 9 ^ uVar16 >> 4) & (ulonglong)puVar21;
    if (*(ulonglong *)(lVar5 + uVar22 * 0x18) == uVar16) {
      lVar26 = lVar5 + uVar22 * 0x18;
      if (*(char *)(lVar26 + 10) != '\0') goto LAB_1406c618a;
LAB_1406c616d:
      lVar23 = lVar23 + 1;
      if (lVar23 == lVar27) {
        if (!bVar24) goto LAB_1406c61ca;
        break;
      }
      goto LAB_1406c6120;
    }
    lVar26 = 1;
    do {
      uVar22 = uVar22 + lVar26 & (ulonglong)puVar21;
      lVar26 = lVar26 + 1;
    } while (*(ulonglong *)(lVar5 + uVar22 * 0x18) != uVar16);
    lVar26 = lVar5 + uVar22 * 0x18;
    if (*(char *)(lVar26 + 10) == '\0') goto LAB_1406c616d;
LAB_1406c618a:
    if (*(byte *)(lVar26 + 8) < bVar18) {
      bVar18 = *(byte *)(lVar26 + 8);
    }
    lVar23 = lVar23 + 1;
    bVar24 = true;
  } while (lVar23 != lVar27);
  in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
  puVar21 = (undefined8 *)0x0;
  FUN_1407aacf0(*local_50,0xb,bVar18,0,in_stack_ffffffffffffff28);
LAB_1406c61ca:
  ppRVar20 = (ReturnVisitor_vftable **)0x0;
  puVar21 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
  FUN_1407aacf0(*local_50,0x16,0,puVar21,in_stack_ffffffffffffff28 & 0xffffffffffffff00);
LAB_1406c61e6:
  if ((0 < *(int *)(local_50 + 1)) && (1 < *(int *)((longlong)local_50 + 0xc))) {
    Luau::Compiler::ConstUpvalueVisitor::ConstUpvalueVisitor_Constructor_or_Destructor
              (local_50,param_2);
  }
  FUN_1407ab5e0(*local_50,*(int *)(param_2 + 0xc) + 1);
  iVar11 = *(int *)((longlong)local_50 + 0xc);
  if (0 < iVar11) {
    pcVar12 = *(char **)(param_2 + 0xa0);
    if (pcVar12 != (char *)0x0) {
      uVar14 = *local_50;
      local_a0 = pcVar12;
      local_98 = strlen(pcVar12);
      FUN_1407ab3d0(uVar14,&local_a0);
      iVar11 = *(int *)((longlong)local_50 + 0xc);
    }
    if (1 < iVar11) {
      puVar25 = (undefined8 *)local_50[0xa6];
      puVar6 = (undefined8 *)local_50[0xa7];
      if (puVar25 != puVar6) {
        for (; puVar25 != puVar6; puVar25 = puVar25 + 1) {
          uVar14 = *local_50;
          local_90 = *(char **)*puVar25;
          local_88 = strlen(local_90);
          FUN_1407ab750(uVar14,&local_90);
        }
      }
    }
  }
  if (0 < *(int *)(local_50 + 2)) {
    puVar7 = (ulonglong *)local_50[0xa7];
    for (puVar15 = (ulonglong *)local_50[0xa6]; puVar15 != puVar7; puVar15 = puVar15 + 1) {
      uVar10 = 0xf;
      puVar21 = local_50;
      if (local_50[0x40] != 0) {
        pRVar2 = (ReturnVisitor_vftable *)*puVar15;
        if (pRVar2 != (ReturnVisitor_vftable *)local_50[0x41]) {
          ppRVar20 = (ReturnVisitor_vftable **)local_50[0x3e];
          puVar21 = (undefined8 *)(local_50[0x3f] + -1);
          uVar16 = (ulonglong)pRVar2 >> 9 ^ (ulonglong)pRVar2 >> 4;
          puVar25 = (undefined8 *)0x0;
          do {
            uVar16 = uVar16 & (ulonglong)puVar21;
            if (ppRVar20[uVar16 * 2] == pRVar2) {
              ppRVar20 = ppRVar20 + uVar16 * 2;
              uVar10 = *(undefined4 *)(ppRVar20 + 1);
              break;
            }
            if (ppRVar20[uVar16 * 2] == (ReturnVisitor_vftable *)local_50[0x41]) break;
            uVar16 = (longlong)puVar25 + uVar16 + 1;
            puVar25 = (undefined8 *)((longlong)puVar25 + 1);
          } while (puVar25 <= puVar21);
        }
      }
      FUN_1407ab1a0(*local_50,uVar10);
    }
  }
  if (0 < *(int *)(local_50 + 1)) {
    FUN_1407ace10(*local_50);
  }
  FUN_1407acee0(*local_50);
  FUN_1406c88e0(local_50,0);
  uVar16 = FUN_1407aaf10(*local_50);
  if (1000000000 < uVar16) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(param_2 + 0xc),
               "Exceeded function instruction limit; split the function into parts to compile",
               ppRVar20,puVar21);
  }
  if ((local_50[0x3b] != 0) && (param_2 != local_50[0x3c])) {
    uVar16 = param_2 >> 9 ^ param_2 >> 4;
    uVar22 = 0;
    do {
      uVar16 = uVar16 & local_50[0x3a] - 1;
      uVar8 = *(ulonglong *)(local_50[0x39] + uVar16 * 0x28);
      if (uVar8 == param_2) {
        lVar27 = local_50[0x39] + uVar16 * 0x28;
        uVar14 = *local_50;
        local_c8 = *(undefined4 *)(lVar27 + 8);
        uStack_c4 = *(undefined4 *)(lVar27 + 0xc);
        uStack_c0 = *(undefined4 *)(lVar27 + 0x10);
        uStack_bc = *(undefined4 *)(lVar27 + 0x14);
        local_b8 = *(undefined4 *)(lVar27 + 0x18);
        uStack_b4 = *(undefined4 *)(lVar27 + 0x1c);
        uStack_b0 = *(undefined4 *)(lVar27 + 0x20);
        uStack_ac = *(undefined4 *)(lVar27 + 0x24);
        *(undefined8 *)(lVar27 + 0x18) = 0;
        *(undefined8 *)(lVar27 + 0x20) = 0xf;
        *(undefined1 *)(lVar27 + 8) = 0;
        FUN_1407ab010(uVar14,&local_c8);
        break;
      }
      if (uVar8 == local_50[0x3c]) break;
      uVar16 = uVar16 + uVar22 + 1;
      uVar22 = uVar22 + 1;
    } while (uVar22 <= local_50[0x3a] - 1);
  }
  if ((*(longlong *)(param_2 + 0x98) == 0) && (*(char *)(local_50 + 0xa2) == '\0')) {
    *local_80 = *local_80 | 2;
  }
  cVar9 = FUN_1406c2940(param_2);
  if (cVar9 != '\0') {
    *local_80 = *local_80 | 4;
  }
  FUN_1407a7b50(*local_50,*(undefined1 *)(local_50 + 0xa0),
                (uint)(*(int *)(local_50 + 0xa7) - *(int *)(local_50 + 0xa6)) >> 3);
  puVar13 = (undefined4 *)FUN_1406c8ba0(local_50 + 0xc,&local_60);
  *puVar13 = local_58;
  puVar21 = (undefined8 *)(puVar13 + 2);
  if (puVar21 != local_50 + 0xa6) {
    _Src = (void *)local_50[0xa6];
    uVar16 = local_50[0xa7] - (longlong)_Src;
    uVar22 = (longlong)uVar16 >> 3;
    _Dst = *(void **)(puVar13 + 2);
    if ((ulonglong)(*(longlong *)(puVar13 + 6) - (longlong)_Dst) < uVar16) {
      FUN_140094620(puVar21,uVar22);
      pvVar17 = (void *)*puVar21;
      memmove(pvVar17,_Src,uVar16);
      pvVar17 = (void *)((longlong)pvVar17 + uVar16);
    }
    else {
      _Size = *(longlong *)(puVar13 + 4) - (longlong)_Dst;
      lVar27 = uVar22 - ((longlong)_Size >> 3);
      if (uVar22 < (ulonglong)((longlong)_Size >> 3) || lVar27 == 0) {
        pvVar17 = (void *)((longlong)_Dst + uVar16);
        memmove(_Dst,_Src,uVar16);
      }
      else {
        memmove(_Dst,_Src,_Size);
        pvVar17 = *(void **)(puVar13 + 4);
        memmove(pvVar17,(void *)((longlong)_Src + _Size),lVar27 * 8);
        pvVar17 = (void *)((longlong)pvVar17 + lVar27 * 8);
      }
    }
    *(void **)(puVar13 + 4) = pvVar17;
  }
  if ((((1 < *(int *)(local_50 + 1)) && (*(char *)(local_60 + 0x70) == '\0')) &&
      (*(longlong *)(local_60 + 0x50) == 0)) &&
     ((*(char *)((longlong)local_50 + 0x511) == '\0' &&
      (*(char *)((longlong)local_50 + 0x512) == '\0')))) {
    *(undefined1 *)(puVar13 + 0xb) = 1;
    puVar13[10] = *(undefined4 *)(local_50 + 0xa0);
    uVar14 = Luau::Compile::CostVisitor::CostVisitor_Constructor_or_Destructor
                       (*(undefined8 **)(local_60 + 0x90),*(longlong *)(local_60 + 0x58),
                        *(ulonglong *)(local_60 + 0x60),local_50 + 0x2f,puVar1);
    *(undefined8 *)(puVar13 + 8) = uVar14;
    cVar9 = FUN_1406d8bc0(puVar1,*(undefined8 *)(local_60 + 0x90));
    if (cVar9 != '\0') {
      local_78 = &Luau::Compiler::ReturnVisitor::vftable;
      local_70 = local_50;
      local_68 = 1;
      (**(code **)*puVar4)(puVar4,&local_78);
      *(undefined1 *)((longlong)puVar13 + 0x2d) = local_68;
    }
  }
  if (local_50[0xa6] != local_50[0xa7]) {
    local_50[0xa7] = local_50[0xa6];
  }
  *(undefined4 *)(local_50 + 0xa0) = 0;
  local_50[0xa1] = 0;
  *(undefined1 *)(local_50 + 0xa2) = 0;
  *(undefined4 *)((longlong)local_50 + 0x4fc) = local_54;
  return local_58;
}


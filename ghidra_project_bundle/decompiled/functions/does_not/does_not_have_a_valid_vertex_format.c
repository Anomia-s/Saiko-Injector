/**
 * Function: does_not_have_a_valid_vertex_format
 * Address:  140521eb0
 * Signature: undefined does_not_have_a_valid_vertex_format(void)
 * Body size: 8689 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong does_not_have_a_valid_vertex_format(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  size_t sVar6;
  uint *******pppppppuVar7;
  uint ******ppppppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint ******ppppppuVar11;
  uint *****pppppuVar12;
  undefined8 *******pppppppuVar13;
  uint *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  uint *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  longlong lVar18;
  uint *******pppppppuVar19;
  uint ******ppppppuVar20;
  undefined8 *******pppppppuVar21;
  char *pcVar22;
  uint *****pppppuVar23;
  uint ******ppppppuVar24;
  uint ******ppppppuVar25;
  undefined8 unaff_R14;
  char *pcVar26;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint ******local_d8;
  uint ******ppppppuStack_d0;
  uint *******local_c8;
  undefined8 uStack_c0;
  size_t local_b8;
  ulonglong uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint ******local_98;
  uint ******ppppppuStack_90;
  uint *******local_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******local_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *******local_68;
  uint *****pppppuStack_60;
  uint *****local_58;
  uint *****pppppuStack_50;
  undefined8 local_48;
  
  ppppppuVar20 = (uint ******)&local_a8;
  local_48 = 0xfffffffffffffffe;
  bVar1 = *(byte *)(param_2 + 4);
  if ((ulonglong)bVar1 < 5) {
    pcVar26 = (&PTR_s_Move_141349cdd_6_140e4d9d0)[bVar1];
    bVar2 = *(byte *)(param_2 + 5);
  }
  else {
    pcVar26 = "Unknown";
    bVar2 = *(byte *)(param_2 + 5);
  }
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),bVar2 < 3);
  if (bVar2 >= 3) {
    local_58 = (uint *****)0x0;
    pppppuStack_50 = (uint *****)0x0;
    local_68 = (undefined8 *******)0x0;
    pppppuStack_60 = (uint *****)0x0;
    pppppuVar12 = (uint *****)strlen(pcVar26);
    if ((longlong)pppppuVar12 < 0) goto LAB_140524088;
    if (pppppuVar12 < (uint *****)0x10) {
      pppppuStack_50 = (uint *****)0xf;
      local_58 = pppppuVar12;
      memcpy(&local_68,pcVar26,(size_t)pppppuVar12);
      *(undefined1 *)((longlong)&local_68 + (longlong)pppppuVar12) = 0;
    }
    else {
      pppppuVar14 = (uint *****)((ulonglong)pppppuVar12 | 0xf);
      pppppuVar23 = (uint *****)0x16;
      if ((uint *****)0x16 < pppppuVar14) {
        pppppuVar23 = pppppuVar14;
      }
      if (pppppuVar14 < (uint *****)0xfff) {
        pppppppuVar13 = (undefined8 *******)FUN_140b65d30((longlong)pppppuVar23 + 1);
      }
      else {
        ppppppuVar15 = (undefined8 ******)FUN_140b65d30(pppppuVar23 + 5);
        pppppppuVar13 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar13[-1] = ppppppuVar15;
      }
      local_68 = pppppppuVar13;
      local_58 = pppppuVar12;
      pppppuStack_50 = pppppuVar23;
      memcpy(pppppppuVar13,pcVar26,(size_t)pppppuVar12);
      *(char *)((longlong)pppppppuVar13 + (longlong)pppppuVar12) = '\0';
    }
    if ((ulonglong)((longlong)pppppuStack_50 - (longlong)local_58) < 0x19) {
      pppppppuVar13 =
           (undefined8 *******)
           FUN_140008af0(&local_68,0x19,local_58,0,"cluster::OperationParams ",0x19);
    }
    else {
      pppppppuVar13 = &local_68;
      pppppppuVar21 = pppppppuVar13;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppppuVar21 = local_68;
      }
      pcVar22 = (char *)0x19;
      if (("" < (char *)((longlong)pppppppuVar21 + (longlong)local_58) &&
           pppppppuVar21 < (undefined8 *******)0x1413a04e6) &&
         (pcVar22 = (char *)((longlong)pppppppuVar21 + -0x1413a04cd),
         pppppppuVar21 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
        pcVar22 = (char *)0x0;
      }
      sVar6 = (longlong)local_58 + 1;
      pppppppuVar17 = local_68;
      if (pppppuStack_50 < (uint *****)0x10) {
        pppppppuVar17 = pppppppuVar13;
      }
      local_58 = (uint *****)((longlong)local_58 + 0x19);
      memmove((char *)((longlong)pppppppuVar17 + 0x19),pppppppuVar21,sVar6);
      memcpy(pppppppuVar21,"cluster::OperationParams ",(size_t)pcVar22);
      memcpy((char *)((longlong)pppppppuVar21 + (longlong)pcVar22),pcVar22 + 0x1413a04e6,
             0x19 - (longlong)pcVar22);
    }
    ppppppuVar15 = pppppppuVar13[2];
    ppppppuStack_70 = pppppppuVar13[3];
    local_88 = (uint *******)*pppppppuVar13;
    ppppppuStack_80 = pppppppuVar13[1];
    pppppppuVar13[2] = (undefined8 ******)0x0;
    pppppppuVar13[3] = (undefined8 ******)0xf;
    *(char *)pppppppuVar13 = '\0';
    if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)ppppppuVar15) < 0x1f) {
      local_78 = ppppppuVar15;
      pppppppuVar7 = (uint *******)FUN_140006210(&local_88,0x1f);
    }
    else {
      local_78 = (undefined8 ******)((longlong)ppppppuVar15 + 0x1f);
      pppppppuVar7 = (uint *******)&local_88;
      pppppppuVar19 = pppppppuVar7;
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        pppppppuVar19 = local_88;
      }
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0xf),
                      "r::OperationMode",0x10);
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15)," unknown cluster",
                      0x10);
      *(undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x1f) = 0;
    }
    local_a8 = *(uint *)pppppppuVar7;
    uStack_a4 = *(undefined4 *)((longlong)pppppppuVar7 + 4);
    ppppppuVar11 = *pppppppuVar7;
    uStack_a0 = *(undefined4 *)(pppppppuVar7 + 1);
    uStack_9c = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
    local_98 = pppppppuVar7[2];
    ppppppuStack_90 = pppppppuVar7[3];
    pppppppuVar7[2] = (uint ******)0x0;
    pppppppuVar7[3] = (uint ******)0xf;
    *(undefined1 *)pppppppuVar7 = 0;
    ppppppuVar25 = ppppppuVar20;
    if ((uint ******)0xf < ppppppuStack_90) {
      ppppppuVar25 = ppppppuVar11;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
              (*(longlong **)(param_1 + 0x18),2,ppppppuVar25);
    if ((uint ******)0xf < ppppppuStack_90) {
      lVar5 = CONCAT44(uStack_a4,local_a8);
      ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
      lVar18 = lVar5;
      if ((uint ******)0xfff < ppppppuVar11) {
        lVar18 = *(longlong *)(lVar5 + -8);
        if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
        ppppppuVar11 = ppppppuStack_90 + 5;
      }
      thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
    }
    local_98 = (uint ******)0x0;
    ppppppuStack_90 = (uint ******)0xf;
    local_a8 = local_a8 & 0xffffff00;
    if ((undefined8 ******)0xf < ppppppuStack_70) {
      ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
      pppppppuVar7 = local_88;
      if ((undefined8 ******)0xfff < ppppppuVar15) {
        pppppppuVar7 = (uint *******)local_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
        goto LAB_14052406f;
        ppppppuVar15 = ppppppuStack_70 + 5;
      }
      thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
    }
    local_78 = (undefined8 ******)0x0;
    ppppppuStack_70 = (undefined8 ******)0xf;
    local_88 = (uint *******)((ulonglong)local_88 & 0xffffffffffffff00);
    if ((uint *****)0xf < pppppuStack_50) {
      pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
      pppppppuVar13 = local_68;
      if ((uint *****)0xfff < pppppuVar12) {
        pppppppuVar13 = (undefined8 *******)local_68[-1];
        if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
        goto LAB_14052406f;
        pppppuVar12 = pppppuStack_50 + 5;
      }
      thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
    }
    bVar1 = *(byte *)(param_2 + 4);
  }
  if ((byte)(bVar1 - 1) < 3) {
    if (((ulonglong)*(byte *)(param_2 + 0x10) < 0x32) &&
       ((0x249c1c4180180U >> ((ulonglong)*(byte *)(param_2 + 0x10) & 0x3f) & 1) != 0)) {
      uVar3 = *(uint *)(param_2 + 0x14);
    }
    else {
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0x0;
      local_68 = (undefined8 *******)0x0;
      pppppuStack_60 = (uint *****)0x0;
      pppppuVar12 = (uint *****)strlen(pcVar26);
      if ((longlong)pppppuVar12 < 0) goto LAB_140524088;
      if (pppppuVar12 < (uint *****)0x10) {
        pppppuStack_50 = (uint *****)0xf;
        local_58 = pppppuVar12;
        memcpy(&local_68,pcVar26,(size_t)pppppuVar12);
        *(undefined1 *)((longlong)&local_68 + (longlong)pppppuVar12) = 0;
      }
      else {
        pppppuVar14 = (uint *****)((ulonglong)pppppuVar12 | 0xf);
        pppppuVar23 = (uint *****)0x16;
        if ((uint *****)0x16 < pppppuVar14) {
          pppppuVar23 = pppppuVar14;
        }
        if (pppppuVar14 < (uint *****)0xfff) {
          pppppppuVar13 = (undefined8 *******)FUN_140b65d30((longlong)pppppuVar23 + 1);
        }
        else {
          ppppppuVar15 = (undefined8 ******)FUN_140b65d30(pppppuVar23 + 5);
          pppppppuVar13 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar13[-1] = ppppppuVar15;
        }
        local_68 = pppppppuVar13;
        local_58 = pppppuVar12;
        pppppuStack_50 = pppppuVar23;
        memcpy(pppppppuVar13,pcVar26,(size_t)pppppuVar12);
        *(char *)((longlong)pppppppuVar13 + (longlong)pppppuVar12) = '\0';
      }
      if ((ulonglong)((longlong)pppppuStack_50 - (longlong)local_58) < 0x19) {
        pppppppuVar13 =
             (undefined8 *******)
             FUN_140008af0(&local_68,0x19,local_58,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar13 = &local_68;
        pppppppuVar21 = pppppppuVar13;
        if ((uint *****)0xf < pppppuStack_50) {
          pppppppuVar21 = local_68;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar21 + (longlong)local_58) &&
             pppppppuVar21 < (undefined8 *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar21 + -0x1413a04cd),
           pppppppuVar21 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = (longlong)local_58 + 1;
        pppppppuVar17 = local_68;
        if (pppppuStack_50 < (uint *****)0x10) {
          pppppppuVar17 = pppppppuVar13;
        }
        local_58 = (uint *****)((longlong)local_58 + 0x19);
        memmove((char *)((longlong)pppppppuVar17 + 0x19),pppppppuVar21,sVar6);
        memcpy(pppppppuVar21,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar21 + (longlong)pcVar22),pcVar22 + 0x1413a04e6,
               0x19 - (longlong)pcVar22);
      }
      ppppppuVar15 = pppppppuVar13[2];
      ppppppuStack_70 = pppppppuVar13[3];
      local_88 = (uint *******)*pppppppuVar13;
      ppppppuStack_80 = pppppppuVar13[1];
      pppppppuVar13[2] = (undefined8 ******)0x0;
      pppppppuVar13[3] = (undefined8 ******)0xf;
      *(char *)pppppppuVar13 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)ppppppuVar15) < 0x24) {
        local_78 = ppppppuVar15;
        pppppppuVar7 = (uint *******)FUN_140006210(&local_88,0x24);
      }
      else {
        local_78 = (undefined8 ******)((longlong)ppppppuVar15 + 0x24);
        pppppppuVar7 = (uint *******)&local_88;
        pppppppuVar19 = pppppppuVar7;
        if ((undefined8 ******)0xf < ppppppuStack_70) {
          pppppppuVar19 = local_88;
        }
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 2)),
                        " valid vertex fo",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15),
                        " does not have a",0x10);
        *(undefined4 *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 4)) = 0x74616d72;
        *(undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x24) = 0;
      }
      local_a8 = *(uint *)pppppppuVar7;
      uStack_a4 = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      ppppppuVar11 = *pppppppuVar7;
      uStack_a0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_9c = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      local_98 = pppppppuVar7[2];
      ppppppuStack_90 = pppppppuVar7[3];
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(undefined1 *)pppppppuVar7 = 0;
      ppppppuVar25 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar25 = ppppppuVar11;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar25);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      local_78 = (undefined8 ******)0x0;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)((ulonglong)local_88 & 0xffffffffffffff00);
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      uVar9 = 0;
      uVar3 = *(uint *)(param_2 + 0x14);
    }
    if (0xffffff < uVar3) {
      ppppppuStack_80 = (undefined8 ******)0x0;
      local_78 = (undefined8 ******)0x8;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)0x3531323737373631;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (uint *******)0x0;
      uStack_c0 = 0;
      sVar6 = strlen(pcVar26);
      if ((longlong)sVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar6 < 0x10) {
        uStack_b0 = 0xf;
        local_b8 = sVar6;
        memcpy(&local_c8,pcVar26,sVar6);
        *(undefined1 *)((longlong)&local_c8 + sVar6) = 0;
      }
      else {
        uVar10 = sVar6 | 0xf;
        uVar9 = 0x16;
        if (0x16 < uVar10) {
          uVar9 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar7 = (uint *******)FUN_140b65d30(uVar9 + 1);
        }
        else {
          ppppppuVar11 = (uint ******)FUN_140b65d30(uVar9 + 0x28);
          pppppppuVar7 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar7[-1] = ppppppuVar11;
        }
        local_c8 = pppppppuVar7;
        local_b8 = sVar6;
        uStack_b0 = uVar9;
        memcpy(pppppppuVar7,pcVar26,sVar6);
        *(char *)((longlong)pppppppuVar7 + sVar6) = '\0';
      }
      if (uStack_b0 - local_b8 < 0x19) {
        pppppppuVar7 = (uint *******)
                       FUN_140008af0(&local_c8,0x19,local_b8,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar7 = (uint *******)&local_c8;
        pppppppuVar19 = pppppppuVar7;
        if (0xf < uStack_b0) {
          pppppppuVar19 = local_c8;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar19 + local_b8) &&
             pppppppuVar19 < (uint *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar19 + -0x1413a04cd),
           pppppppuVar19 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = local_b8 + 1;
        pppppppuVar16 = local_c8;
        if (uStack_b0 < 0x10) {
          pppppppuVar16 = pppppppuVar7;
        }
        local_b8 = local_b8 + 0x19;
        memmove((char *)((longlong)pppppppuVar16 + 0x19),pppppppuVar19,sVar6);
        memcpy(pppppppuVar19,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar19 + (longlong)pcVar22),
               "cluster::OperationParams " + (longlong)(pcVar22 + 0x19),0x19 - (longlong)pcVar22);
      }
      ppppppuVar25 = *pppppppuVar7;
      ppppppuVar11 = pppppppuVar7[2];
      ppppppuStack_d0 = pppppppuVar7[3];
      local_e8._0_4_ = *(uint *)pppppppuVar7;
      local_e8._4_4_ = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      uStack_e0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_dc = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(char *)pppppppuVar7 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_d0 - (longlong)ppppppuVar11) < 0x1d) {
        local_d8 = ppppppuVar11;
        ppppppuVar8 = (uint ******)FUN_140006210(&local_e8,0x1d);
      }
      else {
        local_d8 = (uint ******)((longlong)ppppppuVar11 + 0x1d);
        ppppppuVar8 = (uint ******)&local_e8;
        ppppppuVar24 = ppppppuVar8;
        if ((uint ******)0xf < ppppppuStack_d0) {
          ppppppuVar24 = ppppppuVar25;
        }
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0xd),
                        "metryIndex over ",0x10);
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11)," has a maxGeomet"
                        ,0x10);
        *(undefined1 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0x1d) = 0;
      }
      local_68 = (undefined8 *******)*ppppppuVar8;
      pppppuStack_60 = ppppppuVar8[1];
      uVar4 = *(undefined4 *)(ppppppuVar8 + 2);
      local_58 = ppppppuVar8[2];
      pppppuStack_50 = ppppppuVar8[3];
      ppppppuVar8[2] = (uint *****)0x0;
      ppppppuVar8[3] = (uint *****)0xf;
      *(undefined1 *)ppppppuVar8 = 0;
      FUN_140007770(ppppppuVar20,uVar4,&local_68);
      ppppppuVar11 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar11 = (uint ******)CONCAT44(uStack_a4,local_a8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar11);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0xf;
      local_68 = (undefined8 *******)((ulonglong)local_68 & 0xffffffffffffff00);
      if ((uint ******)0xf < ppppppuStack_d0) {
        lVar5 = CONCAT44(local_e8._4_4_,(uint)local_e8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_d0 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_d0 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_d8 = (uint ******)0x0;
      ppppppuStack_d0 = (uint ******)0xf;
      local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
      if (0xf < uStack_b0) {
        uVar9 = uStack_b0 + 1;
        pppppppuVar7 = local_c8;
        if (0xfff < uVar9) {
          pppppppuVar7 = (uint *******)local_c8[-1];
          if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          uVar9 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,uVar9);
      }
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      uVar9 = 0;
    }
    if (0x20 < *(uint *)(param_2 + 0x2c)) {
      ppppppuStack_80 = (undefined8 ******)0x0;
      local_78 = (undefined8 ******)0x2;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)0x3233;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (uint *******)0x0;
      uStack_c0 = 0;
      sVar6 = strlen(pcVar26);
      if ((longlong)sVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar6 < 0x10) {
        uStack_b0 = 0xf;
        local_b8 = sVar6;
        memcpy(&local_c8,pcVar26,sVar6);
        *(undefined1 *)((longlong)&local_c8 + sVar6) = 0;
      }
      else {
        uVar10 = sVar6 | 0xf;
        uVar9 = 0x16;
        if (0x16 < uVar10) {
          uVar9 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar7 = (uint *******)FUN_140b65d30(uVar9 + 1);
        }
        else {
          ppppppuVar11 = (uint ******)FUN_140b65d30(uVar9 + 0x28);
          pppppppuVar7 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar7[-1] = ppppppuVar11;
        }
        local_c8 = pppppppuVar7;
        local_b8 = sVar6;
        uStack_b0 = uVar9;
        memcpy(pppppppuVar7,pcVar26,sVar6);
        *(char *)((longlong)pppppppuVar7 + sVar6) = '\0';
      }
      if (uStack_b0 - local_b8 < 0x19) {
        pppppppuVar7 = (uint *******)
                       FUN_140008af0(&local_c8,0x19,local_b8,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar7 = (uint *******)&local_c8;
        pppppppuVar19 = pppppppuVar7;
        if (0xf < uStack_b0) {
          pppppppuVar19 = local_c8;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar19 + local_b8) &&
             pppppppuVar19 < (uint *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar19 + -0x1413a04cd),
           pppppppuVar19 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = local_b8 + 1;
        pppppppuVar16 = local_c8;
        if (uStack_b0 < 0x10) {
          pppppppuVar16 = pppppppuVar7;
        }
        local_b8 = local_b8 + 0x19;
        memmove((char *)((longlong)pppppppuVar16 + 0x19),pppppppuVar19,sVar6);
        memcpy(pppppppuVar19,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar19 + (longlong)pcVar22),
               "cluster::OperationParams " + (longlong)(pcVar22 + 0x19),0x19 - (longlong)pcVar22);
      }
      ppppppuVar25 = *pppppppuVar7;
      ppppppuVar11 = pppppppuVar7[2];
      ppppppuStack_d0 = pppppppuVar7[3];
      local_e8._0_4_ = *(uint *)pppppppuVar7;
      local_e8._4_4_ = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      uStack_e0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_dc = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(char *)pppppppuVar7 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_d0 - (longlong)ppppppuVar11) < 0x22) {
        local_d8 = ppppppuVar11;
        ppppppuVar8 = (uint ******)FUN_140006210(&local_e8,0x22);
      }
      else {
        local_d8 = (uint ******)((longlong)ppppppuVar11 + 0x22);
        ppppppuVar8 = (uint ******)&local_e8;
        ppppppuVar24 = ppppppuVar8;
        if ((uint ******)0xf < ppppppuStack_d0) {
          ppppppuVar24 = ppppppuVar25;
        }
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)(ppppppuVar11 + 2)),
                        "cateBitCount ove",0x10);
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11)," minPositionTrun"
                        ,0x10);
        *(undefined2 *)((longlong)ppppppuVar24 + (longlong)(ppppppuVar11 + 4)) = 0x2072;
        *(undefined1 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0x22) = 0;
      }
      local_68 = (undefined8 *******)*ppppppuVar8;
      pppppuStack_60 = ppppppuVar8[1];
      uVar4 = *(undefined4 *)(ppppppuVar8 + 2);
      local_58 = ppppppuVar8[2];
      pppppuStack_50 = ppppppuVar8[3];
      ppppppuVar8[2] = (uint *****)0x0;
      ppppppuVar8[3] = (uint *****)0xf;
      *(undefined1 *)ppppppuVar8 = 0;
      FUN_140007770(ppppppuVar20,uVar4,&local_68);
      ppppppuVar11 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar11 = (uint ******)CONCAT44(uStack_a4,local_a8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar11);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0xf;
      local_68 = (undefined8 *******)((ulonglong)local_68 & 0xffffffffffffff00);
      if ((uint ******)0xf < ppppppuStack_d0) {
        lVar5 = CONCAT44(local_e8._4_4_,(uint)local_e8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_d0 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_d0 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_d8 = (uint ******)0x0;
      ppppppuStack_d0 = (uint ******)0xf;
      local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
      if (0xf < uStack_b0) {
        uVar9 = uStack_b0 + 1;
        pppppppuVar7 = local_c8;
        if (0xfff < uVar9) {
          pppppppuVar7 = (uint *******)local_c8[-1];
          if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          uVar9 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,uVar9);
      }
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      uVar9 = 0;
    }
    if (0x100 < *(uint *)(param_2 + 0x1c)) {
      ppppppuStack_80 = (undefined8 ******)0x0;
      local_78 = (undefined8 ******)0x3;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)0x363532;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (uint *******)0x0;
      uStack_c0 = 0;
      sVar6 = strlen(pcVar26);
      if ((longlong)sVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar6 < 0x10) {
        uStack_b0 = 0xf;
        local_b8 = sVar6;
        memcpy(&local_c8,pcVar26,sVar6);
        *(undefined1 *)((longlong)&local_c8 + sVar6) = 0;
      }
      else {
        uVar10 = sVar6 | 0xf;
        uVar9 = 0x16;
        if (0x16 < uVar10) {
          uVar9 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar7 = (uint *******)FUN_140b65d30(uVar9 + 1);
        }
        else {
          ppppppuVar11 = (uint ******)FUN_140b65d30(uVar9 + 0x28);
          pppppppuVar7 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar7[-1] = ppppppuVar11;
        }
        local_c8 = pppppppuVar7;
        local_b8 = sVar6;
        uStack_b0 = uVar9;
        memcpy(pppppppuVar7,pcVar26,sVar6);
        *(char *)((longlong)pppppppuVar7 + sVar6) = '\0';
      }
      if (uStack_b0 - local_b8 < 0x19) {
        pppppppuVar7 = (uint *******)
                       FUN_140008af0(&local_c8,0x19,local_b8,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar7 = (uint *******)&local_c8;
        pppppppuVar19 = pppppppuVar7;
        if (0xf < uStack_b0) {
          pppppppuVar19 = local_c8;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar19 + local_b8) &&
             pppppppuVar19 < (uint *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar19 + -0x1413a04cd),
           pppppppuVar19 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = local_b8 + 1;
        pppppppuVar16 = local_c8;
        if (uStack_b0 < 0x10) {
          pppppppuVar16 = pppppppuVar7;
        }
        local_b8 = local_b8 + 0x19;
        memmove((char *)((longlong)pppppppuVar16 + 0x19),pppppppuVar19,sVar6);
        memcpy(pppppppuVar19,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar19 + (longlong)pcVar22),
               "cluster::OperationParams " + (longlong)(pcVar22 + 0x19),0x19 - (longlong)pcVar22);
      }
      ppppppuVar25 = *pppppppuVar7;
      ppppppuVar11 = pppppppuVar7[2];
      ppppppuStack_d0 = pppppppuVar7[3];
      local_e8._0_4_ = *(uint *)pppppppuVar7;
      local_e8._4_4_ = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      uStack_e0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_dc = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(char *)pppppppuVar7 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_d0 - (longlong)ppppppuVar11) < 0x17) {
        local_d8 = ppppppuVar11;
        ppppppuVar8 = (uint ******)FUN_140006210(&local_e8,0x17);
      }
      else {
        local_d8 = (uint ******)((longlong)ppppppuVar11 + 0x17);
        ppppppuVar8 = (uint ******)&local_e8;
        ppppppuVar24 = ppppppuVar8;
        if ((uint ******)0xf < ppppppuStack_d0) {
          ppppppuVar24 = ppppppuVar25;
        }
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11)," maxTriangleCoun"
                        ,0x10);
        *(undefined8 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0xf) = 0x207265766f20746e;
        *(undefined1 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0x17) = 0;
      }
      local_68 = (undefined8 *******)*ppppppuVar8;
      pppppuStack_60 = ppppppuVar8[1];
      uVar4 = *(undefined4 *)(ppppppuVar8 + 2);
      local_58 = ppppppuVar8[2];
      pppppuStack_50 = ppppppuVar8[3];
      ppppppuVar8[2] = (uint *****)0x0;
      ppppppuVar8[3] = (uint *****)0xf;
      *(undefined1 *)ppppppuVar8 = 0;
      FUN_140007770(ppppppuVar20,uVar4,&local_68);
      ppppppuVar11 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar11 = (uint ******)CONCAT44(uStack_a4,local_a8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar11);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0xf;
      local_68 = (undefined8 *******)((ulonglong)local_68 & 0xffffffffffffff00);
      if ((uint ******)0xf < ppppppuStack_d0) {
        lVar5 = CONCAT44(local_e8._4_4_,(uint)local_e8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_d0 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_d0 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_d8 = (uint ******)0x0;
      ppppppuStack_d0 = (uint ******)0xf;
      local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
      if (0xf < uStack_b0) {
        uVar9 = uStack_b0 + 1;
        pppppppuVar7 = local_c8;
        if (0xfff < uVar9) {
          pppppppuVar7 = (uint *******)local_c8[-1];
          if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          uVar9 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,uVar9);
      }
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      uVar9 = 0;
    }
    if (0x100 < *(uint *)(param_2 + 0x20)) {
      ppppppuStack_80 = (undefined8 ******)0x0;
      local_78 = (undefined8 ******)0x3;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)0x363532;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (uint *******)0x0;
      uStack_c0 = 0;
      sVar6 = strlen(pcVar26);
      if ((longlong)sVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar6 < 0x10) {
        uStack_b0 = 0xf;
        local_b8 = sVar6;
        memcpy(&local_c8,pcVar26,sVar6);
        *(undefined1 *)((longlong)&local_c8 + sVar6) = 0;
      }
      else {
        uVar10 = sVar6 | 0xf;
        uVar9 = 0x16;
        if (0x16 < uVar10) {
          uVar9 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar7 = (uint *******)FUN_140b65d30(uVar9 + 1);
        }
        else {
          ppppppuVar11 = (uint ******)FUN_140b65d30(uVar9 + 0x28);
          pppppppuVar7 = (uint *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar7[-1] = ppppppuVar11;
        }
        local_c8 = pppppppuVar7;
        local_b8 = sVar6;
        uStack_b0 = uVar9;
        memcpy(pppppppuVar7,pcVar26,sVar6);
        *(char *)((longlong)pppppppuVar7 + sVar6) = '\0';
      }
      if (uStack_b0 - local_b8 < 0x19) {
        pppppppuVar7 = (uint *******)
                       FUN_140008af0(&local_c8,0x19,local_b8,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar7 = (uint *******)&local_c8;
        pppppppuVar19 = pppppppuVar7;
        if (0xf < uStack_b0) {
          pppppppuVar19 = local_c8;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar19 + local_b8) &&
             pppppppuVar19 < (uint *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar19 + -0x1413a04cd),
           pppppppuVar19 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = local_b8 + 1;
        pppppppuVar16 = local_c8;
        if (uStack_b0 < 0x10) {
          pppppppuVar16 = pppppppuVar7;
        }
        local_b8 = local_b8 + 0x19;
        memmove((char *)((longlong)pppppppuVar16 + 0x19),pppppppuVar19,sVar6);
        memcpy(pppppppuVar19,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar19 + (longlong)pcVar22),
               "cluster::OperationParams " + (longlong)(pcVar22 + 0x19),0x19 - (longlong)pcVar22);
      }
      ppppppuVar25 = *pppppppuVar7;
      ppppppuVar11 = pppppppuVar7[2];
      ppppppuStack_d0 = pppppppuVar7[3];
      local_e8._0_4_ = *(uint *)pppppppuVar7;
      local_e8._4_4_ = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      uStack_e0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_dc = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(char *)pppppppuVar7 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_d0 - (longlong)ppppppuVar11) < 0x15) {
        local_d8 = ppppppuVar11;
        ppppppuVar8 = (uint ******)FUN_140006210(&local_e8,0x15);
      }
      else {
        local_d8 = (uint ******)((longlong)ppppppuVar11 + 0x15);
        ppppppuVar8 = (uint ******)&local_e8;
        ppppppuVar24 = ppppppuVar8;
        if ((uint ******)0xf < ppppppuStack_d0) {
          ppppppuVar24 = ppppppuVar25;
        }
        builtin_strncpy((char *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11)," maxVertexCount "
                        ,0x10);
        *(undefined8 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0xd) = 0x207265766f20746e;
        *(undefined1 *)((longlong)ppppppuVar24 + (longlong)ppppppuVar11 + 0x15) = 0;
      }
      local_68 = (undefined8 *******)*ppppppuVar8;
      pppppuStack_60 = ppppppuVar8[1];
      uVar4 = *(undefined4 *)(ppppppuVar8 + 2);
      local_58 = ppppppuVar8[2];
      pppppuStack_50 = ppppppuVar8[3];
      ppppppuVar8[2] = (uint *****)0x0;
      ppppppuVar8[3] = (uint *****)0xf;
      *(undefined1 *)ppppppuVar8 = 0;
      FUN_140007770(ppppppuVar20,uVar4,&local_68);
      ppppppuVar11 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar11 = (uint ******)CONCAT44(uStack_a4,local_a8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar11);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0xf;
      local_68 = (undefined8 *******)((ulonglong)local_68 & 0xffffffffffffff00);
      if ((uint ******)0xf < ppppppuStack_d0) {
        lVar5 = CONCAT44(local_e8._4_4_,(uint)local_e8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_d0 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_d0 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_d8 = (uint ******)0x0;
      ppppppuStack_d0 = (uint ******)0xf;
      local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
      if (0xf < uStack_b0) {
        uVar9 = uStack_b0 + 1;
        pppppppuVar7 = local_c8;
        if (0xfff < uVar9) {
          pppppppuVar7 = (uint *******)local_c8[-1];
          if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          uVar9 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,uVar9);
      }
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      uVar9 = 0;
    }
    if (*(uint *)(param_2 + 0x24) < *(uint *)(param_2 + 0x1c)) {
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0x0;
      local_68 = (undefined8 *******)0x0;
      pppppuStack_60 = (uint *****)0x0;
      pppppuVar12 = (uint *****)strlen(pcVar26);
      if ((longlong)pppppuVar12 < 0) goto LAB_140524088;
      if (pppppuVar12 < (uint *****)0x10) {
        pppppuStack_50 = (uint *****)0xf;
        local_58 = pppppuVar12;
        memcpy(&local_68,pcVar26,(size_t)pppppuVar12);
        *(undefined1 *)((longlong)&local_68 + (longlong)pppppuVar12) = 0;
      }
      else {
        pppppuVar14 = (uint *****)((ulonglong)pppppuVar12 | 0xf);
        pppppuVar23 = (uint *****)0x16;
        if ((uint *****)0x16 < pppppuVar14) {
          pppppuVar23 = pppppuVar14;
        }
        if (pppppuVar14 < (uint *****)0xfff) {
          pppppppuVar13 = (undefined8 *******)FUN_140b65d30((longlong)pppppuVar23 + 1);
        }
        else {
          ppppppuVar15 = (undefined8 ******)FUN_140b65d30(pppppuVar23 + 5);
          pppppppuVar13 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar13[-1] = ppppppuVar15;
        }
        local_68 = pppppppuVar13;
        local_58 = pppppuVar12;
        pppppuStack_50 = pppppuVar23;
        memcpy(pppppppuVar13,pcVar26,(size_t)pppppuVar12);
        *(char *)((longlong)pppppppuVar13 + (longlong)pppppuVar12) = '\0';
      }
      if ((ulonglong)((longlong)pppppuStack_50 - (longlong)local_58) < 0x19) {
        pppppppuVar13 =
             (undefined8 *******)
             FUN_140008af0(&local_68,0x19,local_58,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar13 = &local_68;
        pppppppuVar21 = pppppppuVar13;
        if ((uint *****)0xf < pppppuStack_50) {
          pppppppuVar21 = local_68;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar21 + (longlong)local_58) &&
             pppppppuVar21 < (undefined8 *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar21 + -0x1413a04cd),
           pppppppuVar21 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = (longlong)local_58 + 1;
        pppppppuVar17 = local_68;
        if (pppppuStack_50 < (uint *****)0x10) {
          pppppppuVar17 = pppppppuVar13;
        }
        local_58 = (uint *****)((longlong)local_58 + 0x19);
        memmove((char *)((longlong)pppppppuVar17 + 0x19),pppppppuVar21,sVar6);
        memcpy(pppppppuVar21,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar21 + (longlong)pcVar22),pcVar22 + 0x1413a04e6,
               0x19 - (longlong)pcVar22);
      }
      local_88 = (uint *******)*pppppppuVar13;
      ppppppuStack_80 = pppppppuVar13[1];
      ppppppuVar15 = pppppppuVar13[2];
      ppppppuStack_70 = pppppppuVar13[3];
      pppppppuVar13[2] = (undefined8 ******)0x0;
      pppppppuVar13[3] = (undefined8 ******)0xf;
      *(char *)pppppppuVar13 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)ppppppuVar15) < 0x82) {
        local_78 = ppppppuVar15;
        pppppppuVar7 = (uint *******)FUN_140006210(&local_88,0x82);
      }
      else {
        local_78 = (undefined8 ******)((longlong)ppppppuVar15 + 0x82);
        pppppppuVar7 = (uint *******)&local_88;
        pppppppuVar19 = pppppppuVar7;
        if ((undefined8 ******)0xf < ppppppuStack_70) {
          pppppppuVar19 = local_88;
        }
        memcpy((undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15),
               " maxTriangleCount over maxTotalTriangleCount. maxTotalTriangleCount must be greater than the sum of all triangles in the operation"
               ,0x82);
        *(undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x82) = 0;
      }
      local_a8 = *(uint *)pppppppuVar7;
      uStack_a4 = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      ppppppuVar11 = *pppppppuVar7;
      uStack_a0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_9c = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      local_98 = pppppppuVar7[2];
      ppppppuStack_90 = pppppppuVar7[3];
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(undefined1 *)pppppppuVar7 = 0;
      ppppppuVar25 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar25 = ppppppuVar11;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar25);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      local_78 = (undefined8 ******)0x0;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)((ulonglong)local_88 & 0xffffffffffffff00);
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      uVar9 = 0;
    }
    if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x20)) {
      local_58 = (uint *****)0x0;
      pppppuStack_50 = (uint *****)0x0;
      local_68 = (undefined8 *******)0x0;
      pppppuStack_60 = (uint *****)0x0;
      pppppuVar12 = (uint *****)strlen(pcVar26);
      if ((longlong)pppppuVar12 < 0) goto LAB_140524088;
      if (pppppuVar12 < (uint *****)0x10) {
        pppppuStack_50 = (uint *****)0xf;
        local_58 = pppppuVar12;
        memcpy(&local_68,pcVar26,(size_t)pppppuVar12);
        *(undefined1 *)((longlong)&local_68 + (longlong)pppppuVar12) = 0;
      }
      else {
        pppppuVar14 = (uint *****)((ulonglong)pppppuVar12 | 0xf);
        pppppuVar23 = (uint *****)0x16;
        if ((uint *****)0x16 < pppppuVar14) {
          pppppuVar23 = pppppuVar14;
        }
        if (pppppuVar14 < (uint *****)0xfff) {
          pppppppuVar13 = (undefined8 *******)FUN_140b65d30((longlong)pppppuVar23 + 1);
        }
        else {
          ppppppuVar15 = (undefined8 ******)FUN_140b65d30(pppppuVar23 + 5);
          pppppppuVar13 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar13[-1] = ppppppuVar15;
        }
        local_68 = pppppppuVar13;
        local_58 = pppppuVar12;
        pppppuStack_50 = pppppuVar23;
        memcpy(pppppppuVar13,pcVar26,(size_t)pppppuVar12);
        *(char *)((longlong)pppppppuVar13 + (longlong)pppppuVar12) = '\0';
      }
      if ((ulonglong)((longlong)pppppuStack_50 - (longlong)local_58) < 0x19) {
        pppppppuVar13 =
             (undefined8 *******)
             FUN_140008af0(&local_68,0x19,local_58,0,"cluster::OperationParams ",0x19);
      }
      else {
        pppppppuVar13 = &local_68;
        pppppppuVar21 = pppppppuVar13;
        if ((uint *****)0xf < pppppuStack_50) {
          pppppppuVar21 = local_68;
        }
        pcVar22 = (char *)0x19;
        if (("" < (char *)((longlong)pppppppuVar21 + (longlong)local_58) &&
             pppppppuVar21 < (undefined8 *******)0x1413a04e6) &&
           (pcVar22 = (char *)((longlong)pppppppuVar21 + -0x1413a04cd),
           pppppppuVar21 < "cluster::OperationParams " || pcVar22 == (char *)0x0)) {
          pcVar22 = (char *)0x0;
        }
        sVar6 = (longlong)local_58 + 1;
        pppppppuVar17 = local_68;
        if (pppppuStack_50 < (uint *****)0x10) {
          pppppppuVar17 = pppppppuVar13;
        }
        local_58 = (uint *****)((longlong)local_58 + 0x19);
        memmove((char *)((longlong)pppppppuVar17 + 0x19),pppppppuVar21,sVar6);
        memcpy(pppppppuVar21,"cluster::OperationParams ",(size_t)pcVar22);
        memcpy((char *)((longlong)pppppppuVar21 + (longlong)pcVar22),pcVar22 + 0x1413a04e6,
               0x19 - (longlong)pcVar22);
      }
      ppppppuVar15 = pppppppuVar13[2];
      ppppppuStack_70 = pppppppuVar13[3];
      local_88 = (uint *******)*pppppppuVar13;
      ppppppuStack_80 = pppppppuVar13[1];
      pppppppuVar13[2] = (undefined8 ******)0x0;
      pppppppuVar13[3] = (undefined8 ******)0xf;
      *(char *)pppppppuVar13 = '\0';
      if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)ppppppuVar15) < 0x7b) {
        local_78 = ppppppuVar15;
        pppppppuVar7 = (uint *******)
                       FUN_140006210(&local_88,0x7b,ppppppuStack_70,
                                     " maxVertexCount over maxTotalVertexCount. maxTotalVertexCount must be greater than the sum of all vertices in the operation"
                                     ,0x7b);
      }
      else {
        local_78 = (undefined8 ******)((longlong)ppppppuVar15 + 0x7b);
        pppppppuVar7 = (uint *******)&local_88;
        pppppppuVar19 = pppppppuVar7;
        if ((undefined8 ******)0xf < ppppppuStack_70) {
          pppppppuVar19 = local_88;
        }
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x6b),
                        "in the operation",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 0xc)),
                        "l vertices in th",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 10)),
                        "an the sum of al",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 8)),
                        "st be greater th",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 6)),
                        "alVertexCount mu",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 4)),
                        "texCount. maxTot",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 2)),
                        "over maxTotalVer",0x10);
        builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15),
                        " maxVertexCount ",0x10);
        *(undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x7b) = 0;
      }
      local_a8 = *(uint *)pppppppuVar7;
      uStack_a4 = *(undefined4 *)((longlong)pppppppuVar7 + 4);
      ppppppuVar11 = *pppppppuVar7;
      uStack_a0 = *(undefined4 *)(pppppppuVar7 + 1);
      uStack_9c = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
      local_98 = pppppppuVar7[2];
      ppppppuStack_90 = pppppppuVar7[3];
      pppppppuVar7[2] = (uint ******)0x0;
      pppppppuVar7[3] = (uint ******)0xf;
      *(undefined1 *)pppppppuVar7 = 0;
      ppppppuVar25 = ppppppuVar20;
      if ((uint ******)0xf < ppppppuStack_90) {
        ppppppuVar25 = ppppppuVar11;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                (*(longlong **)(param_1 + 0x18),2,ppppppuVar25);
      if ((uint ******)0xf < ppppppuStack_90) {
        lVar5 = CONCAT44(uStack_a4,local_a8);
        ppppppuVar11 = (uint ******)((longlong)ppppppuStack_90 + 1);
        lVar18 = lVar5;
        if ((uint ******)0xfff < ppppppuVar11) {
          lVar18 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
          ppppppuVar11 = ppppppuStack_90 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar11);
      }
      local_98 = (uint ******)0x0;
      ppppppuStack_90 = (uint ******)0xf;
      local_a8 = local_a8 & 0xffffff00;
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
        pppppppuVar7 = local_88;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar7 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
          goto LAB_14052406f;
          ppppppuVar15 = ppppppuStack_70 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
      }
      local_78 = (undefined8 ******)0x0;
      ppppppuStack_70 = (undefined8 ******)0xf;
      local_88 = (uint *******)((ulonglong)local_88 & 0xffffffffffffff00);
      if ((uint *****)0xf < pppppuStack_50) {
        pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
        pppppppuVar13 = local_68;
        if ((uint *****)0xfff < pppppuVar12) {
          pppppppuVar13 = (undefined8 *******)local_68[-1];
          if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14052406f;
          pppppuVar12 = pppppuStack_50 + 5;
        }
        thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
      }
      uVar9 = 0;
    }
    if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) goto LAB_140523d09;
    local_58 = (uint *****)0x0;
    pppppuStack_50 = (uint *****)0x0;
    local_68 = (undefined8 *******)0x0;
    pppppuStack_60 = (uint *****)0x0;
    pppppuVar12 = (uint *****)strlen(pcVar26);
    if ((longlong)pppppuVar12 < 0) {
LAB_140524088:
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (pppppuVar12 < (uint *****)0x10) {
      pppppuStack_50 = (uint *****)0xf;
      local_58 = pppppuVar12;
      memcpy(&local_68,pcVar26,(size_t)pppppuVar12);
      *(undefined1 *)((longlong)&local_68 + (longlong)pppppuVar12) = 0;
    }
    else {
      pppppuVar14 = (uint *****)((ulonglong)pppppuVar12 | 0xf);
      pppppuVar23 = (uint *****)0x16;
      if ((uint *****)0x16 < pppppuVar14) {
        pppppuVar23 = pppppuVar14;
      }
      if (pppppuVar14 < (uint *****)0xfff) {
        pppppppuVar13 = (undefined8 *******)FUN_140b65d30((longlong)pppppuVar23 + 1);
      }
      else {
        ppppppuVar15 = (undefined8 ******)FUN_140b65d30(pppppuVar23 + 5);
        pppppppuVar13 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar13[-1] = ppppppuVar15;
      }
      local_68 = pppppppuVar13;
      local_58 = pppppuVar12;
      pppppuStack_50 = pppppuVar23;
      memcpy(pppppppuVar13,pcVar26,(size_t)pppppuVar12);
      *(char *)((longlong)pppppppuVar13 + (longlong)pppppuVar12) = '\0';
    }
    if ((ulonglong)((longlong)pppppuStack_50 - (longlong)local_58) < 0x19) {
      pppppppuVar13 =
           (undefined8 *******)
           FUN_140008af0(&local_68,0x19,local_58,0,"cluster::OperationParams ",0x19);
    }
    else {
      pppppppuVar13 = &local_68;
      pppppppuVar21 = pppppppuVar13;
      if ((uint *****)0xf < pppppuStack_50) {
        pppppppuVar21 = local_68;
      }
      pcVar26 = (char *)0x19;
      if (("" < (char *)((longlong)pppppppuVar21 + (longlong)local_58) &&
           pppppppuVar21 < (undefined8 *******)0x1413a04e6) &&
         (pcVar26 = (char *)((longlong)pppppppuVar21 + -0x1413a04cd),
         pppppppuVar21 < "cluster::OperationParams " || pcVar26 == (char *)0x0)) {
        pcVar26 = (char *)0x0;
      }
      sVar6 = (longlong)local_58 + 1;
      pppppppuVar17 = local_68;
      if (pppppuStack_50 < (uint *****)0x10) {
        pppppppuVar17 = pppppppuVar13;
      }
      local_58 = (uint *****)((longlong)local_58 + 0x19);
      memmove((char *)((longlong)pppppppuVar17 + 0x19),pppppppuVar21,sVar6);
      memcpy(pppppppuVar21,"cluster::OperationParams ",(size_t)pcVar26);
      memcpy((char *)((longlong)pppppppuVar21 + (longlong)pcVar26),pcVar26 + 0x1413a04e6,
             0x19 - (longlong)pcVar26);
    }
    ppppppuVar15 = pppppppuVar13[2];
    ppppppuStack_70 = pppppppuVar13[3];
    local_88 = (uint *******)*pppppppuVar13;
    ppppppuStack_80 = pppppppuVar13[1];
    pppppppuVar13[2] = (undefined8 ******)0x0;
    pppppppuVar13[3] = (undefined8 ******)0xf;
    *(char *)pppppppuVar13 = '\0';
    if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)ppppppuVar15) < 0x4e) {
      local_78 = ppppppuVar15;
      pppppppuVar7 = (uint *******)
                     FUN_140006210(&local_88,0x4e,ppppppuStack_70,
                                   " maxUniqueGeometryCount over maxTriangleCount. Maximum 1 geometry per triangle"
                                   ,0x4e);
    }
    else {
      local_78 = (undefined8 ******)((longlong)ppppppuVar15 + 0x4e);
      pppppppuVar7 = (uint *******)&local_88;
      pppppppuVar19 = pppppppuVar7;
      if ((undefined8 ******)0xf < ppppppuStack_70) {
        pppppppuVar19 = local_88;
      }
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x3e),
                      "try per triangle",0x10);
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 6)),
                      "aximum 1 geometr",0x10);
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 4)),
                      "TriangleCount. M",0x10);
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)(ppppppuVar15 + 2)),
                      "ryCount over max",0x10);
      builtin_strncpy((char *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15)," maxUniqueGeomet",
                      0x10);
      *(undefined1 *)((longlong)pppppppuVar19 + (longlong)ppppppuVar15 + 0x4e) = 0;
    }
    local_a8 = *(uint *)pppppppuVar7;
    uStack_a4 = *(undefined4 *)((longlong)pppppppuVar7 + 4);
    ppppppuVar11 = *pppppppuVar7;
    uStack_a0 = *(undefined4 *)(pppppppuVar7 + 1);
    uStack_9c = *(undefined4 *)((longlong)pppppppuVar7 + 0xc);
    local_98 = pppppppuVar7[2];
    ppppppuStack_90 = pppppppuVar7[3];
    pppppppuVar7[2] = (uint ******)0x0;
    pppppppuVar7[3] = (uint ******)0xf;
    *(undefined1 *)pppppppuVar7 = 0;
    if ((uint ******)0xf < ppppppuStack_90) {
      ppppppuVar20 = ppppppuVar11;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
              (*(longlong **)(param_1 + 0x18),2,ppppppuVar20);
    if ((uint ******)0xf < ppppppuStack_90) {
      lVar5 = CONCAT44(uStack_a4,local_a8);
      ppppppuVar20 = (uint ******)((longlong)ppppppuStack_90 + 1);
      lVar18 = lVar5;
      if ((uint ******)0xfff < ppppppuVar20) {
        lVar18 = *(longlong *)(lVar5 + -8);
        if (0x1f < (ulonglong)((lVar5 + -8) - lVar18)) goto LAB_14052406f;
        ppppppuVar20 = ppppppuStack_90 + 5;
      }
      thunk_FUN_140b68ba8(lVar18,ppppppuVar20);
    }
    local_98 = (uint ******)0x0;
    ppppppuStack_90 = (uint ******)0xf;
    local_a8 = local_a8 & 0xffffff00;
    if ((undefined8 ******)0xf < ppppppuStack_70) {
      ppppppuVar15 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
      pppppppuVar7 = local_88;
      if ((undefined8 ******)0xfff < ppppppuVar15) {
        pppppppuVar7 = (uint *******)local_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
        goto LAB_14052406f;
        ppppppuVar15 = ppppppuStack_70 + 5;
      }
      thunk_FUN_140b68ba8(pppppppuVar7,ppppppuVar15);
    }
    local_78 = (undefined8 ******)0x0;
    ppppppuStack_70 = (undefined8 ******)0xf;
    local_88 = (uint *******)((ulonglong)local_88 & 0xffffffffffffff00);
    if ((uint *****)0xf < pppppuStack_50) {
      pppppuVar12 = (uint *****)((longlong)pppppuStack_50 + 1);
      pppppppuVar13 = local_68;
      if ((uint *****)0xfff < pppppuVar12) {
        pppppppuVar13 = (undefined8 *******)local_68[-1];
        if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppuVar13))) {
LAB_14052406f:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pppppuVar12 = pppppuStack_50 + 5;
      }
      thunk_FUN_140b68ba8(pppppppuVar13,pppppuVar12);
    }
    uVar9 = 0;
  }
LAB_140523d09:
  return uVar9 & 0xffffffff;
}


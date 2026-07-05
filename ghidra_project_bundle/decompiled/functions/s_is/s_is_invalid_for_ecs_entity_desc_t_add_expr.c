/**
 * Function: s_is_invalid_for_ecs_entity_desc_t_add_expr
 * Address:  1400b8ae0
 * Signature: undefined s_is_invalid_for_ecs_entity_desc_t_add_expr(void)
 * Body size: 3917 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001400b8dee) */
/* WARNING: Removing unreachable block (ram,0x0001400b8e62) */
/* WARNING: Removing unreachable block (ram,0x0001400b9309) */
/* WARNING: Removing unreachable block (ram,0x0001400b9310) */
/* WARNING: Removing unreachable block (ram,0x0001400b9320) */

vfunction1 * s_is_invalid_for_ecs_entity_desc_t_add_expr(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  vfunction1 *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  size_t sVar13;
  int *piVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  SetComponentCmd<Position>_vftable *pSVar20;
  vfunction1 *pvVar21;
  SetComponentCmd<Position> *pSVar22;
  longlong lVar23;
  SetComponentCmd<Position> *pSVar24;
  char *pcVar25;
  longlong *plVar26;
  ulonglong uVar27;
  char *pcVar28;
  bool bVar29;
  undefined1 auStack_218 [32];
  vfunction1 *local_1f8;
  char *local_1f0;
  ulonglong uStack_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  SetComponentCmd<Position> *local_1c8;
  char *local_1c0;
  char *local_1b8;
  vfunction1 *local_1b0;
  char *local_1a8;
  uint local_19c;
  longlong local_198;
  char *local_190;
  longlong local_188;
  longlong local_180 [5];
  Decoration<__int64> local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_218;
  local_188 = param_1;
  lVar6 = FUN_1400bd860(&local_188);
  pSVar24 = *(SetComponentCmd<Position> **)(lVar6 + 0x120);
  local_198 = FUN_1400bee00(local_188);
  pvVar21 = *(vfunction1 **)(param_2 + 8);
  pcVar28 = *(char **)(param_2 + 0x18);
  pcVar15 = ".";
  if (*(char **)(param_2 + 0x20) != (char *)0x0) {
    pcVar15 = *(char **)(param_2 + 0x20);
  }
  if ((pcVar28 == (char *)0x0) || (*pcVar28 == '\0')) {
    local_1c8 = pSVar24;
    if (*(SetComponentCmd<Position> **)(param_2 + 0x10) != (SetComponentCmd<Position> *)0x0) {
      local_1c8 = *(SetComponentCmd<Position> **)(param_2 + 0x10);
    }
    pcVar28 = (char *)0x0;
    if (pvVar21 == (vfunction1 *)0x0) {
      local_1b8 = (char *)((ulonglong)local_1b8 & 0xffffffff00000000);
LAB_1400b8c07:
      local_1c0 = pcVar28;
      if (*(char *)(param_2 + 0x38) == '\x01') {
        pvVar21 = (vfunction1 *)FUN_1400b8760();
      }
      else {
        local_148 = local_188;
        FUN_1400bd860(&local_148);
        pvVar21 = (vfunction1 *)FUN_1403a95a0(local_148 + 2000);
        lVar12 = local_148;
        plVar9 = (longlong *)FUN_1403a9030(local_148 + 2000,pvVar21);
        pcVar28 = (char *)(lVar12 + 0x878);
        uVar5 = FUN_1403a04c0(pcVar28);
        local_1f8 = (vfunction1 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        FUN_1403a0130(lVar12,pcVar28,pvVar21,0);
        *plVar9 = (longlong)pcVar28;
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) & 0xf0000000 | uVar5;
      }
      uVar19 = CONCAT71((int7)((ulonglong)pcVar28 >> 8),1);
      cVar2 = FUN_140396b90(local_188);
      lVar12 = local_188;
    }
    else {
      local_1c0 = (char *)0x0;
      local_1b0 = *(vfunction1 **)(param_2 + 0x28);
      pSVar22 = (SetComponentCmd<Position> *)local_188;
      local_1a8 = pcVar15;
LAB_1400b8d94:
      FUN_1400b9a50(pSVar22,pvVar21);
      lVar8 = FUN_1403963b0(local_188);
      plVar9 = (longlong *)FUN_1403a9030(lVar8 + 2000,pvVar21);
      lVar12 = *plVar9;
      lVar10 = FUN_1403a6e90(lVar8,0x8000000200000129);
      if (lVar10 == 0) {
LAB_1400b93b8:
        local_1b8 = (char *)((ulonglong)local_1b8 & 0xffffffff00000000);
      }
      else {
        lVar23 = lVar10;
        lVar11 = thunk_FUN_1403d1150(lVar10,lVar12);
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(int)CONCAT71((int7)((ulonglong)lVar23 >> 8),1)
                                    );
        if (lVar11 == 0) {
          if ((*(uint *)(lVar10 + 0x38) & 0xc00000) == 0) {
            if ((-1 < (char)*(uint *)(lVar10 + 0x38)) || ((*(uint *)(lVar12 + 8) & 4) == 0))
            goto LAB_1400b93b8;
            local_1d8 = &local_148;
            local_1f0 = (char *)0x0;
            uStack_1e8 = 0;
            local_1f8 = (vfunction1 *)0x127;
            local_1e0 = 0;
            lVar12 = FUN_1403b1fd0(lVar8,lVar12,0,0x8000000200000129);
            bVar29 = (int)lVar12 == -1;
          }
          else {
            cVar2 = FUN_1403a5d30(lVar10,pvVar21);
            if (cVar2 != '\0') goto LAB_1400b8e76;
            local_1f8 = (vfunction1 *)((ulonglong)local_1f8 & 0xffffffff00000000);
            lVar12 = FUN_1400b7430(lVar8,lVar12,0x8000000200000129,lVar10);
            bVar29 = lVar12 == 0;
          }
          local_1b8 = (char *)CONCAT44(local_1b8._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)lVar12 >> 8),!bVar29));
        }
LAB_1400b8e76:
        pvVar7 = local_1b0;
        pcVar28 = local_1c0;
        if (local_1c0 != (char *)0x0) {
          if ((char)local_1b8 == '\0') goto LAB_1400b8fbd;
          if (local_1b0 == (vfunction1 *)0x0) {
LAB_1400b8ebd:
            pcVar15 = local_1a8;
            if (*local_1a8 != '\0') {
              local_1f8 = (vfunction1 *)&DAT_1413a2ad6;
              pSVar24 = local_1c8;
              goto LAB_1400b8f4c;
            }
            pvVar7 = (vfunction1 *)FUN_1403af230(local_188,pvVar21);
          }
          else {
            sVar13 = strlen((char *)local_1b0);
            iVar3 = strncmp(pcVar28,(char *)pvVar7,(longlong)(int)sVar13);
            if (iVar3 != 0) goto LAB_1400b8ebd;
            local_1f8 = pvVar7;
            pSVar24 = (SetComponentCmd<Position> *)0x0;
LAB_1400b8f4c:
            pcVar15 = local_1a8;
            pvVar7 = (vfunction1 *)FUN_1403ae340(local_188,pSVar24,pvVar21,local_1a8);
          }
          if (pvVar7 != (vfunction1 *)0x0) {
            iVar3 = strcmp((char *)pvVar7,pcVar28);
            if (iVar3 != 0) {
              local_1f0 = pcVar28;
              local_1f8 = pvVar7;
              FUN_140399630(0xfffffffd,
                            "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/entity.c"
                            ,0x55c,
                            "existing entity \'%s\' is initialized with conflicting name \'%s\'");
              if (*pcVar15 != '\0') {
                (*DAT_1415033b0)(pvVar7);
              }
              goto LAB_1400b99f0;
            }
            if (*pcVar15 != '\0') {
              (*DAT_1415033b0)(pvVar7);
            }
          }
          goto LAB_1400b8fbd;
        }
      }
      cVar2 = FUN_140396b90(local_188);
joined_r0x0001400b93d5:
      uVar19 = 0;
      lVar12 = local_188;
    }
    local_188 = lVar12;
    if (cVar2 != '\0') {
      pvVar7 = *(vfunction1 **)(param_2 + 0x20);
      pcVar28 = *(char **)(param_2 + 0x28);
      if ((char)uVar19 != '\0') {
        if (((local_1c8 != (SetComponentCmd<Position> *)0x0) && (local_1c0 == (char *)0x0)) &&
           ((char)local_1b8 == '\0')) {
          FUN_1400b7e20(lVar6,pvVar21,(ulonglong)local_1c8 & 0xffffffff | 0x8000012600000000);
        }
        if (local_198 != 0) {
          FUN_1400b7e20(lVar6,pvVar21,local_198);
        }
      }
      puVar18 = *(ulonglong **)(param_2 + 0x40);
      if ((puVar18 != (ulonglong *)0x0) && (uVar19 = *puVar18, uVar19 != 0)) {
        if (local_1c0 == (char *)0x0) {
          lVar12 = 8;
          do {
            if (((uVar19 & 0x8000000000000000) != 0) &&
               (((uint)(uVar19 >> 0x20) & 0xfffffff) == 0x126)) {
              local_1c8 = (SetComponentCmd<Position> *)(uVar19 & 0xffffffff);
            }
            FUN_1400b7e20(lVar6,pvVar21);
            uVar19 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + lVar12);
            lVar12 = lVar12 + 8;
          } while (uVar19 != 0);
        }
        else if ((char)local_1b8 == '\0') {
          lVar12 = 8;
          do {
            while (((uVar19 & 0x8000000000000000) == 0 ||
                   (((uint)(uVar19 >> 0x20) & 0xfffffff) != 0x126))) {
              FUN_1400b7e20(lVar6,pvVar21);
              puVar18 = *(ulonglong **)(param_2 + 0x40);
              uVar19 = *(ulonglong *)((longlong)puVar18 + lVar12);
              lVar12 = lVar12 + 8;
              if (uVar19 == 0) goto LAB_1400b9168;
            }
            local_1c8 = (SetComponentCmd<Position> *)(uVar19 & 0xffffffff);
            uVar19 = *(ulonglong *)((longlong)puVar18 + lVar12);
            lVar12 = lVar12 + 8;
          } while (uVar19 != 0);
        }
        else {
          lVar12 = 8;
          do {
            if ((((uVar19 & 0x8000000000000000) == 0) ||
                (((uint)(uVar19 >> 0x20) & 0xfffffff) != 0x126)) ||
               (local_1c8 = (SetComponentCmd<Position> *)(uVar19 & 0xffffffff),
               *(longlong *)(param_2 + 8) != 0)) {
              FUN_1400b7e20(lVar6,pvVar21);
              puVar18 = *(ulonglong **)(param_2 + 0x40);
            }
            uVar19 = *(ulonglong *)((longlong)puVar18 + lVar12);
            lVar12 = lVar12 + 8;
          } while (uVar19 != 0);
        }
      }
LAB_1400b9168:
      plVar9 = *(longlong **)(param_2 + 0x48);
      if ((plVar9 != (longlong *)0x0) && (lVar12 = *plVar9, lVar12 != 0)) {
        lVar8 = 0x10;
        do {
          if (plVar9[1] == 0) {
            FUN_1400b7e20(lVar6,pvVar21);
          }
          else {
            piVar14 = (int *)FUN_1403a5610(lVar6,lVar12);
            local_1f8 = (vfunction1 *)plVar9[1];
            FUN_1400bb430(lVar6,pvVar21,*plVar9,(longlong)*piVar14);
          }
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x48) + lVar8);
          plVar9 = (longlong *)(*(longlong *)(param_2 + 0x48) + lVar8);
          lVar8 = lVar8 + 0x10;
        } while (lVar12 != 0);
      }
      pcVar25 = local_1c0;
      pcVar15 = *(char **)(param_2 + 0x50);
      if ((pcVar15 != (char *)0x0) && (local_148 = 0, *pcVar15 != '\0')) {
        do {
          pcVar15 = (char *)invalid_operator_for_add_expression(lVar6,pcVar25,pcVar15,&local_148);
          if ((pcVar15 == (char *)0x0) || (local_148 == 0)) break;
          FUN_1400b7e20(lVar6,pvVar21);
        } while (*pcVar15 != '\0');
      }
      iVar3 = FUN_1403967e0(lVar6);
      if ((*(longlong *)(param_2 + 0x30) != 0) &&
         ((pcVar15 = (char *)FUN_1403af270(lVar6,pvVar21), pcVar15 == (char *)0x0 ||
          (iVar4 = strcmp(pcVar15,*(char **)(param_2 + 0x30)), iVar4 != 0)))) {
        if (iVar3 < 2) {
          uVar16 = FUN_140396810(lVar6,&local_148);
          FUN_1403af490(lVar6,pvVar21,*(undefined8 *)(param_2 + 0x30));
          pcVar25 = local_1c0;
          FUN_1403969b0(uVar16,&local_148);
        }
        else {
          FUN_1403af490(lVar6,pvVar21,*(undefined8 *)(param_2 + 0x30));
        }
      }
      if ((pcVar25 != (char *)0x0) && ((char)local_1b8 == '\0')) {
        local_1f8 = pvVar7;
        local_1f0 = pcVar28;
        invalid_identifier_s(lVar6,pvVar21,local_1c8,pcVar25);
      }
      goto LAB_1400b99f2;
    }
    pvVar7 = *(vfunction1 **)(param_2 + 0x20);
    pcVar28 = *(char **)(param_2 + 0x28);
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_128 = 0;
    FUN_1403ab560(lVar12,&local_148);
    local_1a8 = (char *)(lVar12 + 0xcc0);
    local_1f8 = (vfunction1 *)0x14136befd;
    FUN_1403b2710(local_1a8,local_158,8,0);
    pcVar15 = *(char **)(param_2 + 0x50);
    local_19c = (uint)uVar19;
    pcVar25 = local_1c0;
    if (pcVar15 != (char *)0x0) {
      if (*pcVar15 == '0') {
        if (pcVar15[1] == '\0') goto LAB_1400b9550;
LAB_1400b94b2:
        local_180[0] = 0;
        pcVar17 = pcVar15;
        local_1b0 = pvVar7;
        local_190 = pcVar28;
        do {
          pcVar25 = local_1c0;
          pcVar17 = (char *)invalid_operator_for_add_expression(lVar12,local_1c0,pcVar17,local_180);
          if ((pcVar17 == (char *)0x0) || (local_180[0] == 0)) {
            if (pcVar17 == (char *)0x0) goto LAB_1400b99c8;
            break;
          }
          cVar2 = FUN_1403b3430(lVar12);
          lVar6 = local_180[0];
          if (cVar2 == '\0') {
            pvVar21 = (vfunction1 *)FUN_1403b36e0(lVar12,local_180[0]);
            local_1f8 = pvVar21;
            FUN_140399a50(local_1c0,pcVar15,(longlong)pcVar17 - (longlong)pcVar15,
                          "\'%s\' is invalid for ecs_entity_desc_t::add_expr");
            (*DAT_1415033b0)(pvVar21);
            goto LAB_1400b99c8;
          }
          plVar9 = (longlong *)FUN_1403b2f60(local_1a8,local_158,8);
          *plVar9 = lVar6;
          pcVar25 = local_1c0;
        } while (*pcVar17 != '\0');
      }
      else {
        local_180[0] = 0;
        local_1b0 = pvVar7;
        local_190 = pcVar28;
        if (*pcVar15 != '\0') goto LAB_1400b94b2;
      }
      uVar19 = (ulonglong)local_19c;
      pvVar7 = local_1b0;
      pcVar28 = local_190;
    }
LAB_1400b9550:
    if (((*(char **)(param_2 + 0x30) != (char *)0x0) && (**(char **)(param_2 + 0x30) != '\0')) &&
       (lVar6 = FUN_1403af270(lVar12,pvVar21), lVar6 == 0)) {
      FUN_1403af490(lVar12,pvVar21,*(undefined8 *)(param_2 + 0x30));
    }
    if ((pcVar25 == (char *)0x0) || ((char)local_1b8 != '\0')) {
      if ((char)uVar19 == '\x01' && local_1c8 != (SetComponentCmd<Position> *)0x0) {
        FUN_1400b7e20(lVar12,pvVar21,(ulonglong)local_1c8 & 0xffffffff | 0x8000012600000000);
      }
    }
    else {
      local_1f8 = pvVar7;
      local_1f0 = pcVar28;
      lVar6 = invalid_identifier_s(lVar12,pvVar21,local_1c8,pcVar25);
      if ((lVar6 == 0) && (*pcVar25 == '#')) {
LAB_1400b99c8:
        FUN_1403ab5d0(lVar12,&local_148);
        FUN_1403b2770(local_1a8,local_158,8);
        goto LAB_1400b99f0;
      }
    }
    local_1b0 = pvVar21;
    puVar18 = (ulonglong *)FUN_1403a9030(lVar12 + 2000,pvVar21);
    uVar19 = *puVar18;
    if ((*(longlong **)(param_2 + 0x40) != (longlong *)0x0) &&
       (lVar6 = **(longlong **)(param_2 + 0x40), lVar6 != 0)) {
      lVar8 = 8;
      do {
        uVar19 = FUN_1403accc0(lVar12,uVar19,lVar6,&local_148);
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar6 != 0);
    }
    if ((*(longlong **)(param_2 + 0x48) != (longlong *)0x0) &&
       (lVar6 = **(longlong **)(param_2 + 0x48), lVar6 != 0)) {
      lVar8 = 0x10;
      do {
        uVar19 = FUN_1403accc0(lVar12,uVar19,lVar6,&local_148);
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x48) + lVar8);
        lVar8 = lVar8 + 0x10;
      } while (lVar6 != 0);
    }
    uVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3(local_158);
    lVar6 = FUN_140106180(local_158);
    if (0 < (int)uVar5) {
      uVar27 = 0;
      do {
        uVar19 = FUN_1403accc0(lVar12,uVar19,*(undefined8 *)(lVar6 + uVar27 * 8),&local_148);
        uVar27 = uVar27 + 1;
      } while (uVar5 != uVar27);
    }
    lVar6 = local_198;
    if ((char)local_19c != '\0') {
      if (((local_1c8 != (SetComponentCmd<Position> *)0x0) && (local_1c0 == (char *)0x0)) &&
         ((char)local_1b8 == '\0')) {
        uVar19 = FUN_1403accc0(lVar12,uVar19,(ulonglong)local_1c8 & 0xffffffff | 0x8000012600000000,
                               &local_148);
      }
      if (lVar6 != 0) {
        uVar19 = FUN_1403accc0(lVar12,uVar19,lVar6,&local_148);
      }
    }
    if (uVar19 != 0) {
      FUN_140396bb0(lVar12,**(undefined8 **)(lVar12 + 0x9d0));
      FUN_1403ab710(&local_148,local_180);
      uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
      local_1f0 = (char *)CONCAT71(local_1f0._1_7_,1);
      local_1f8 = (vfunction1 *)local_180;
      FUN_1400b7690(lVar12,local_1b0,puVar18,uVar19);
      FUN_1403ab5d0(lVar12,&local_148);
      FUN_1403978c0(lVar12,**(undefined8 **)(lVar12 + 0x9d0));
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      local_1c8 = (SetComponentCmd<Position> *)*puVar18;
      uVar19 = puVar18[1];
      FUN_140396bb0(lVar12,**(undefined8 **)(lVar12 + 0x9d0));
      plVar9 = *(longlong **)(param_2 + 0x48);
      if (*plVar9 != 0) {
        local_1c0 = (char *)(ulonglong)((uint)uVar19 & 0xfffffff);
        lVar6 = 0x10;
        plVar26 = plVar9;
        local_1b8 = local_1c0;
        do {
          if (plVar26[1] != 0) {
            lVar8 = FUN_1403a6e90(lVar12);
            pSVar24 = local_1c8;
            if (lVar8 == 0) {
LAB_1400b9910:
              pvVar21 = (vfunction1 *)0x0;
            }
            else if ((*(byte *)(lVar8 + 0x3a) & 0x60) == 0) {
              lVar10 = thunk_FUN_1403d1150(lVar8,local_1c8);
              if ((lVar10 == 0) || (lVar10 = (longlong)*(short *)(lVar10 + 0x24), lVar10 == -1))
              goto LAB_1400b9910;
              pvVar21 = (&(local_1c8[7].vftablePtr)->vfunction1)[lVar10 * 2] +
                        (longlong)*(int *)(&(local_1c8[7].vftablePtr)->vfunction2)[lVar10 * 2] *
                        (longlong)local_1b8;
            }
            else {
              pSVar20 = ldv::editor::SetComponentCmd<Position>::vfunction4(local_1c8);
              pvVar21 = (vfunction1 *)
                        FUN_1403a5e50(lVar12,lVar8,pSVar24,
                                      (&pSVar20->vfunction1)[(longlong)local_1c0]);
            }
            uVar19 = *(ulonglong *)(lVar8 + 0x40);
            lVar8 = *plVar26;
            pcVar28 = (char *)plVar26[1];
            if (*(longlong *)(uVar19 + 0x78) != 0) {
              local_1f8 = pvVar21;
              local_1f0 = pcVar28;
              uStack_1e8 = uVar19;
              FUN_1403a9aa0(lVar12,*puVar18,local_1b0,lVar8);
            }
            FUN_1403a4850(pvVar21,pcVar28,1,uVar19);
            FUN_14039ffc0(lVar12,*puVar18,lVar8);
            local_1f8 = (vfunction1 *)CONCAT71(local_1f8._1_7_,1);
            FUN_1403aabf0(lVar12,*puVar18,(uint)puVar18[1] & 0xfffffff,lVar8);
            plVar9 = *(longlong **)(param_2 + 0x48);
          }
          plVar26 = (longlong *)((longlong)plVar9 + lVar6);
          plVar1 = (longlong *)((longlong)plVar9 + lVar6);
          lVar6 = lVar6 + 0x10;
        } while (*plVar1 != 0);
      }
      FUN_1403978c0(lVar12,**(undefined8 **)(lVar12 + 0x9d0));
    }
    FUN_1403ab5d0(lVar12,&local_148);
    FUN_1403b2770(local_1a8,local_158,8);
    pvVar21 = local_1b0;
  }
  else {
    cVar2 = FUN_1403ad8f0(pcVar28);
    if (cVar2 == '\0') {
      local_1b0 = *(vfunction1 **)(param_2 + 0x28);
      pcVar25 = *(char **)(local_188 + 0xbb0);
      pSVar22 = (SetComponentCmd<Position> *)local_188;
      local_1a8 = pcVar15;
      if (pcVar25 != (char *)0x0) {
        local_1c8 = (SetComponentCmd<Position> *)local_188;
        sVar13 = strlen(pcVar25);
        sVar13 = (size_t)(int)sVar13;
        iVar3 = strncmp(pcVar28,pcVar25,sVar13);
        pSVar22 = local_1c8;
        if (iVar3 == 0) {
          cVar2 = pcVar28[sVar13];
          iVar3 = isupper((int)cVar2);
          pSVar22 = local_1c8;
          if ((cVar2 == 0x5f) || (iVar3 != 0)) {
            pcVar28 = pcVar28 + (cVar2 == '_') + sVar13;
          }
        }
      }
      local_1c8 = pSVar24;
      if (*(SetComponentCmd<Position> **)(param_2 + 0x10) != (SetComponentCmd<Position> *)0x0) {
        local_1c8 = *(SetComponentCmd<Position> **)(param_2 + 0x10);
      }
      local_1c0 = pcVar28;
      if (pvVar21 != (vfunction1 *)0x0) goto LAB_1400b8d94;
      local_1f8 = local_1b0;
      local_1f0 = (char *)((ulonglong)local_1f0 & 0xffffffffffffff00);
      pvVar21 = (vfunction1 *)FUN_1403ae520(pSVar22,local_1c8,pcVar28,local_1a8);
      local_1b8 = (char *)CONCAT44(local_1b8._4_4_,
                                   (int)CONCAT71((int7)((ulonglong)pvVar21 >> 8),
                                                 pvVar21 != (vfunction1 *)0x0));
      if (pvVar21 == (vfunction1 *)0x0) goto LAB_1400b8c07;
LAB_1400b8fbd:
      cVar2 = FUN_140396b90(local_188);
      goto joined_r0x0001400b93d5;
    }
    pvVar7 = (vfunction1 *)FUN_1403ad920(pcVar28);
    if (pvVar7 != (vfunction1 *)0x0) {
      if (pvVar21 == (vfunction1 *)0x0 || pvVar7 == pvVar21) {
        local_1b0 = *(vfunction1 **)(param_2 + 0x28);
        local_1c8 = pSVar24;
        if (*(SetComponentCmd<Position> **)(param_2 + 0x10) != (SetComponentCmd<Position> *)0x0) {
          local_1c8 = *(SetComponentCmd<Position> **)(param_2 + 0x10);
        }
        local_1c0 = (char *)0x0;
        pSVar22 = (SetComponentCmd<Position> *)local_188;
        local_1a8 = pcVar15;
        pvVar21 = pvVar7;
        goto LAB_1400b8d94;
      }
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/entity.c",
                    0x4fe,
                    "the \'#xxx\' string provided to ecs_entity_desc_t::name does not match the id provided to ecs_entity_desc_t::id"
                   );
    }
LAB_1400b99f0:
    pvVar21 = (vfunction1 *)0x0;
  }
LAB_1400b99f2:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_218)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_218);
  }
  return pvVar21;
}


/**
 * Function: greencomponentreset_s_registered
 * Address:  1400b9fa0
 * Signature: undefined greencomponentreset_s_registered(void)
 * Body size: 1346 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001400ba3fc) */
/* WARNING: Removing unreachable block (ram,0x0001400ba403) */
/* WARNING: Removing unreachable block (ram,0x0001400ba412) */

ulonglong greencomponentreset_s_registered(undefined8 param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_148 [8];
  undefined1 local_140 [248];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1f8;
  uVar9 = *(ulonglong *)(param_2 + 8);
  if (uVar9 == 0) {
    lVar4 = FUN_140396810(param_1,local_140);
    uVar9 = FUN_1400b8760(lVar4);
    bVar14 = true;
  }
  else {
    lVar4 = FUN_1403963b0(param_1);
    cVar2 = FUN_1403a9450(lVar4 + 2000,uVar9);
    if (cVar2 != '\0') {
      lVar5 = FUN_1403963b0(param_1);
      plVar6 = (longlong *)FUN_1403a9030(lVar5 + 2000,uVar9);
      lVar4 = *plVar6;
      if (*(char *)(lVar5 + 0x5cd) == '\0') {
        sVar1 = *(short *)(*(longlong *)(lVar4 + 0x80) + 2);
        if (0 < sVar1) {
          lVar5 = (ulonglong)((int)sVar1 - 1) * 0x10;
          lVar8 = (ulonglong)(*(uint *)(plVar6 + 1) & 0xfffffff) *
                  (longlong)**(int **)(*(longlong *)(lVar4 + 0x38) + 8 + lVar5) +
                  *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5);
joined_r0x0001400ba46e:
          if (lVar8 != 0) goto LAB_1400ba3c3;
        }
      }
      else {
        lVar7 = FUN_1403a6e90(lVar5,1);
        if (lVar7 != 0) {
          if (((*(byte *)(lVar7 + 0x3a) & 0x40) == 0) ||
             (lVar8 = FUN_1403a5e50(lVar5,lVar7,lVar4,uVar9), lVar8 == 0)) {
            lVar8 = thunk_FUN_1403d1150(lVar7,lVar4);
            if (lVar8 != 0) {
              if ((*(byte *)(lVar7 + 0x3a) & 0x20) == 0) {
                lVar5 = (longlong)*(short *)(lVar8 + 0x24) * 0x10;
                lVar8 = (longlong)**(int **)(*(longlong *)(lVar4 + 0x38) + 8 + lVar5) *
                        (ulonglong)(*(uint *)(plVar6 + 1) & 0xfffffff) +
                        *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5);
              }
              else {
                lVar8 = FUN_1403a5e50(lVar5,lVar7,lVar4,uVar9);
              }
              goto joined_r0x0001400ba46e;
            }
            local_1d8 = local_1d8 & 0xffffffff00000000;
            lVar8 = FUN_1400b7430(lVar5,lVar4,1,lVar7);
            if (lVar8 == 0) goto LAB_1400ba129;
          }
LAB_1400ba3c3:
          local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_2 + 0x14));
          FUN_1400ba630(param_1,uVar9,lVar8,*(undefined4 *)(param_2 + 0x10));
          goto LAB_1400ba36f;
        }
      }
    }
LAB_1400ba129:
    lVar4 = FUN_140396810(param_1,local_140);
    FUN_1400b9a50(lVar4,uVar9);
    lVar7 = FUN_1403963b0(lVar4);
    plVar6 = (longlong *)FUN_1403a9030(lVar7 + 2000,uVar9);
    lVar5 = *plVar6;
    if (*(char *)(lVar7 + 0x5cd) == '\0') {
      bVar14 = *(short *)(*(longlong *)(lVar5 + 0x80) + 2) == 0;
      goto LAB_1400ba1f7;
    }
    lVar8 = FUN_1403a6e90(lVar7,1);
    if (lVar8 == 0) {
      bVar14 = false;
    }
    else {
      lVar10 = thunk_FUN_1403d1150(lVar8,lVar5);
      bVar14 = true;
      if (lVar10 == 0) {
        local_1b0 = lVar5;
        if ((*(uint *)(lVar8 + 0x38) & 0xc00000) == 0) {
          bVar14 = false;
          if (((char)*(uint *)(lVar8 + 0x38) < '\0') && ((*(uint *)(lVar5 + 8) & 4) != 0)) {
            local_1b8 = local_148;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1d8 = 0x127;
            local_1c0 = 0;
            iVar3 = FUN_1403b1fd0(lVar7,lVar5,0,1);
            bVar14 = iVar3 == -1;
            goto LAB_1400ba1f7;
          }
        }
        else {
          cVar2 = FUN_1403a5d30(lVar8,uVar9);
          if (cVar2 == '\0') {
            local_1d8 = local_1d8 & 0xffffffff00000000;
            lVar5 = FUN_1400b7430(lVar7,local_1b0,1,lVar8);
            bVar14 = lVar5 == 0;
LAB_1400ba1f7:
            bVar14 = !bVar14;
          }
        }
      }
    }
  }
  piVar11 = (int *)FUN_1400ba6e0(lVar4,uVar9,1,8);
  if (*piVar11 == 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    *piVar11 = iVar3;
    piVar11[1] = *(int *)(param_2 + 0x14);
    if ((!bVar14) || (iVar3 != *(int *)(param_2 + 0x10))) {
      local_1d8 = FUN_1403af230(lVar4,uVar9);
      if (iVar3 == 0) {
        pcVar13 = "#[green]tag#[reset] %s registered";
        uVar12 = 0x62e;
      }
      else {
        pcVar13 = "#[green]component#[reset] %s registered";
        uVar12 = 0x631;
      }
      FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/entity.c",
                    uVar12,pcVar13);
    }
  }
  else {
    local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_2 + 0x14));
    FUN_1400ba630(lVar4,uVar9,piVar11,*(undefined4 *)(param_2 + 0x10));
  }
  if ((bool)(*(longlong *)(param_2 + 200) != 0 & bVar14)) {
    local_1a8 = 0;
    local_198 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_158 = 0;
    uStack_1a0 = uVar9;
    lStack_190 = *(longlong *)(param_2 + 200);
    s_is_invalid_for_ecs_entity_desc_t_add_expr(lVar4,&local_1a8);
  }
  FUN_1400ba7b0(lVar4,uVar9,1);
  if (((*(int *)(param_2 + 0x10) != 0) && (cVar2 = FUN_1403b38e0(lVar4,uVar9), cVar2 == '\0')) &&
     (cVar2 = FUN_1403b38e0(lVar4,uVar9 << 0x20 | 0x800000000000010e), cVar2 == '\0')) {
    FUN_1403a4930(lVar4,uVar9,param_2 + 0x18);
  }
  if ((uVar9 < 0x100) && (*(ulonglong *)(lVar4 + 0xa88) <= uVar9)) {
    *(ulonglong *)(lVar4 + 0xa88) = uVar9 + 1;
  }
  FUN_1403969b0(lVar4,local_140);
LAB_1400ba36f:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_1f8);
  }
  return uVar9;
}


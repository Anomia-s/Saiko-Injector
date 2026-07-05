/**
 * Function: invalid_instruction_sequence_unconstrained_tr
 * Address:  1405de510
 * Signature: undefined invalid_instruction_sequence_unconstrained_tr(void)
 * Body size: 1648 bytes
 */


ulonglong invalid_instruction_sequence_unconstrained_tr
                    (longlong param_1,uint param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  vfunction1 *pvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  SetComponentCmd<Position>_vftable *pSVar15;
  int iVar16;
  undefined8 uVar17;
  SetComponentCmd<Position> *pSVar18;
  char cVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  SetComponentCmd<Position> **local_78;
  longlong local_70;
  SetComponentCmd<Position> *local_68;
  undefined4 local_60;
  int local_5c;
  SetComponentCmd<Position> *local_58;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  plVar20 = (longlong *)(ulonglong)param_2;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  uVar17 = *(undefined8 *)(*param_3 + (longlong)(short)param_3[1] * 8);
  pbVar1 = (byte *)(param_1 + 0x10);
  cVar3 = FUN_14039ba10(param_1,pbVar1,0,uVar17);
  lVar21 = param_1 + 0x20;
  cVar4 = FUN_14039ba10(param_1,lVar21,4,uVar17);
  cVar19 = (char)param_2;
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      redabortreset_bluesreset
                (7,
                 "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/engine/eval_trav.c"
                 ,0x116,"invalid instruction sequence: unconstrained traversal");
      (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),2);
    uVar7 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),4);
    plVar9 = (longlong *)FUN_1403b9880(param_1 + 0x18,uVar6,param_3);
    pvVar10 = (vfunction1 *)FUN_1403b9880(lVar21,uVar7,param_3);
    puVar11 = (undefined8 *)FUN_1403b92a0(param_3);
    if (cVar19 == '\0') {
      lVar21 = FUN_1403a9030(param_3[5] + 2000,pvVar10);
      if (((lVar21 == 0) || ((*(byte *)(lVar21 + 0xb) & 0x20) == 0)) &&
         ((*(ushort *)(param_1 + 10) & 8) == 0)) {
        puVar11[7] = 0;
        if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
          uVar17 = 0;
          goto LAB_1405de8a3;
        }
        goto LAB_1405deb49;
      }
      FUN_1403bdea0(param_3,puVar11 + 7,plVar9,pvVar10);
      *(undefined4 *)(puVar11 + 5) = 0;
      if ((*(byte *)(param_1 + 10) & 8) != 0) {
        *(undefined4 *)(puVar11 + 5) = 0xffffffff;
        bVar2 = *(byte *)(param_1 + 0x10);
        FUN_1403b96d0(param_1,(ulonglong)bVar2,pvVar10,param_3);
        FUN_1403b93c0(bVar2,param_3);
        lVar21 = *(longlong *)(param_3[2] + (ulonglong)bVar2 * 0x18);
        if ((lVar21 == 0) ||
           (cVar3 = FUN_1403b9be0(lVar21,*(undefined2 *)(param_1 + 8),0x602), cVar3 == '\0')) {
          pSVar18 = (SetComponentCmd<Position> *)0x0;
          goto LAB_1405deae0;
        }
      }
    }
    else if (puVar11[7] == 0) {
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
        uVar17 = 1;
LAB_1405de8a3:
        uVar13 = FUN_1403b9dc0(param_1,uVar17,param_3);
        return uVar13;
      }
      goto LAB_1405deb49;
    }
    if (*(int *)(puVar11 + 5) == -1) {
      *(undefined4 *)(puVar11 + 5) = 0;
      plVar20 = (longlong *)0x0;
    }
    iVar8 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(puVar11 + 9));
    lVar21 = FUN_140106180((Decoration<__int64> *)(puVar11 + 9));
    iVar16 = *(int *)(puVar11 + 5);
    if (iVar8 <= iVar16) goto LAB_1405deaf1;
    *puVar11 = *(undefined8 *)(lVar21 + 8 + (longlong)iVar16 * 0x18);
    local_98 = (longlong *)CONCAT44(local_98._4_4_,0x602);
    cVar3 = FUN_1403b9bf0(param_1,plVar20,param_3,
                          (ulonglong)*(uint *)(lVar21 + (longlong)iVar16 * 0x18) |
                          (longlong)plVar9 << 0x20 | 0x8000000000000000);
    uVar13 = CONCAT71((int7)((ulonglong)plVar20 >> 8),1);
    if (cVar3 == '\0') {
      iVar16 = *(int *)(puVar11 + 5) + 1;
      *(int *)(puVar11 + 5) = iVar16;
      if (iVar8 <= iVar16) goto LAB_1405deaf1;
      do {
        *puVar11 = *(undefined8 *)(lVar21 + 8 + (longlong)iVar16 * 0x18);
        local_98 = (longlong *)CONCAT44(local_98._4_4_,0x602);
        uVar5 = FUN_1403b9bf0(param_1,0,param_3,
                              (ulonglong)*(uint *)(lVar21 + (longlong)iVar16 * 0x18) |
                              (longlong)plVar9 << 0x20 | 0x8000000000000000U);
        uVar13 = (ulonglong)uVar5;
        if ((char)uVar5 != '\0') break;
        iVar16 = *(int *)(puVar11 + 5) + 1;
        *(int *)(puVar11 + 5) = iVar16;
      } while (iVar16 < iVar8);
    }
  }
  else {
    if (cVar4 == '\0') {
      uVar6 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),2);
      uVar7 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),0);
      plVar9 = (longlong *)FUN_1403b9880(param_1 + 0x18,uVar6,param_3);
      FUN_1403b97d0(&local_68,pbVar1,uVar7,param_3);
      pSVar18 = local_68;
      lVar21 = FUN_1403b92a0(param_3);
      if (cVar19 == '\0') {
        FUN_1403be090(param_3,lVar21 + 0x38,plVar9,pSVar18);
        *(undefined4 *)(lVar21 + 0x28) = 0;
        if ((*(byte *)(param_1 + 10) & 8) != 0) {
          *(undefined1 *)(lVar21 + 0x60) = 1;
          *(undefined4 *)(lVar21 + 0x28) = local_60;
          *(undefined4 *)(lVar21 + 0x2c) = local_60;
          if (local_5c == 0) {
            local_5c = FUN_1403a04c0(pSVar18);
          }
          *(int *)(lVar21 + 0x30) = local_5c;
        }
      }
      else {
        *(int *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + 1;
      }
      if (*(char *)(lVar21 + 0x60) == '\0') {
        iVar16 = *(int *)(lVar21 + 0x28);
      }
      else {
        local_70 = param_3[2];
        lVar12 = FUN_1403b92a0(param_3);
        iVar16 = *(int *)(lVar12 + 0x30);
        bVar2 = *(byte *)(param_1 + 1);
        if (*(int *)(lVar12 + 0x28) < iVar16 + *(int *)(lVar12 + 0x2c)) {
          pSVar15 = ldv::editor::SetComponentCmd<Position>::vfunction4(local_68);
          pvVar10 = (&pSVar15->vfunction1)[*(int *)(lVar12 + 0x28)];
          local_98 = param_3;
          FUN_1403b9b90(param_1,0,plVar9,pvVar10);
          lVar21 = local_70;
          uVar13 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
          if ((bVar2 & 2) != 0) {
            bVar2 = *pbVar1;
            *(vfunction1 **)(local_70 + 0x10 + (ulonglong)bVar2 * 0x18) = pvVar10;
            FUN_1400bcc80(&local_58,param_3[5],pvVar10);
            puVar11 = (undefined8 *)(lVar21 + (ulonglong)bVar2 * 0x18);
            *puVar11 = local_58;
            puVar11[1] = CONCAT44(iStack_4c,iStack_50);
          }
          goto LAB_1405deaf3;
        }
        if ((bVar2 & 2) != 0) {
          uVar13 = (ulonglong)*pbVar1;
          *(int *)(local_70 + 8 + uVar13 * 0x18) = *(int *)(lVar12 + 0x2c);
          *(int *)(local_70 + 0xc + uVar13 * 0x18) = iVar16;
          *(undefined8 *)(local_70 + 0x10 + uVar13 * 0x18) = 0;
        }
        *(undefined1 *)(lVar21 + 0x60) = 0;
        *(undefined4 *)(lVar21 + 0x28) = 0;
        iVar16 = 0;
        plVar20 = plVar9;
      }
      iVar8 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                        ((Decoration<__int64> *)(lVar21 + 0x48));
      if (iVar16 < iVar8) {
        puVar14 = (ulonglong *)
                  FUN_1403b30a0((Decoration<__int64> *)(lVar21 + 0x48),0x18,
                                *(undefined4 *)(lVar21 + 0x28));
        pvVar10 = (vfunction1 *)*puVar14;
        pSVar18 = (SetComponentCmd<Position> *)puVar14[2];
        goto LAB_1405deae0;
      }
    }
    else if (cVar19 == '\0') {
      uVar5 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),2);
      plVar20 = (longlong *)(ulonglong)uVar5;
      uVar6 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),4);
      uVar7 = FUN_14039b9a0(*(undefined1 *)(param_1 + 1),0);
      plVar9 = (longlong *)FUN_1403b9880(param_1 + 0x18,plVar20,param_3);
      pvVar10 = (vfunction1 *)FUN_1403b9880(lVar21,uVar6,param_3);
      FUN_1403b97d0(&local_58,pbVar1,uVar7,param_3);
      local_68 = (SetComponentCmd<Position> *)0x0;
      local_78 = &local_68;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = 0xc000000000000000;
      local_98 = plVar9;
      FUN_1403b1fd0(param_3[5],local_58,0,
                    (ulonglong)pvVar10 & 0xffffffff | (longlong)plVar9 << 0x20 | 0x8000000000000000)
      ;
      pSVar18 = local_68;
      if (local_68 != (SetComponentCmd<Position> *)0x0) {
LAB_1405deae0:
        local_98 = param_3;
        FUN_1403b9b90(param_1,pSVar18,plVar9,pvVar10);
        uVar13 = CONCAT71((int7)((ulonglong)plVar20 >> 8),1);
        goto LAB_1405deaf3;
      }
      if ((*(byte *)(param_1 + 10) & 8) != 0) {
        pSVar15 = ldv::editor::SetComponentCmd<Position>::vfunction4(local_58);
        if (iStack_4c == 0) {
          iStack_4c = FUN_1403a04c0(local_58);
        }
        iVar16 = iStack_50 + iStack_4c;
        if (0 < iStack_4c) {
          lVar21 = (longlong)iStack_50;
          iStack_50 = iStack_50 + 1;
          if (iStack_50 < iVar16) {
            iStack_50 = iVar16;
          }
          do {
            if ((&pSVar15->vfunction1)[lVar21] == pvVar10) {
              iStack_50 = (int)lVar21;
              break;
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 < iVar16);
        }
        if (iStack_50 != iVar16) {
          if (1 < iStack_4c) {
            lVar21 = param_3[2];
            uVar13 = (ulonglong)*pbVar1;
            *(int *)(lVar21 + 8 + uVar13 * 0x18) = iStack_50;
            *(undefined4 *)(lVar21 + 0xc + uVar13 * 0x18) = 1;
            *(vfunction1 **)(lVar21 + 0x10 + uVar13 * 0x18) = (&pSVar15->vfunction1)[iStack_50];
          }
          pSVar18 = (SetComponentCmd<Position> *)0x0;
          goto LAB_1405deae0;
        }
      }
    }
LAB_1405deaf1:
    uVar13 = 0;
  }
LAB_1405deaf3:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar13 & 0xffffffff;
  }
LAB_1405deb49:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
}


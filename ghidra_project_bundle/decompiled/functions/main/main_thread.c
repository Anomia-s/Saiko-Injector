/**
 * Function: main_thread
 * Address:  1401afad0
 * Signature: undefined main_thread(void)
 * Body size: 1584 bytes
 */


undefined8 main_thread(longlong param_1)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  byte local_3d;
  char *local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  iVar13 = 0xd;
  pbVar16 = &local_3d;
  do {
    while (iVar3 = FUN_1401b6f50(uVar7,pbVar16,iVar13,10), iVar3 == -1) {
      iVar3 = WSAGetLastError();
      if (0xfffffffd < iVar3 - 0x2747U) goto switchD_1401afb6b_caseD_0;
      if (iVar13 < 1) goto LAB_1401afb49;
    }
    if (iVar3 == 0) goto switchD_1401afb6b_caseD_0;
    iVar13 = iVar13 - iVar3;
    pbVar16 = pbVar16 + iVar3;
  } while (0 < iVar13);
LAB_1401afb49:
  iVar13 = (int)local_3c;
  pcVar14 = local_3c;
  switch(local_3d) {
  case 0:
switchD_1401afb6b_caseD_0:
    uVar7 = 0;
    goto LAB_1401aff95;
  case 1:
    sVar5 = strlen(local_3c);
    local_58 = CONCAT31(local_58._1_3_,0x68);
    goto LAB_1401aff1c;
  case 2:
    piVar2 = DAT_1416b46b0;
    if (local_3c != (char *)(ulonglong)*(uint *)(param_1 + 0x18)) {
      for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if (*piVar2 == iVar13) {
          pcVar14 = *(char **)(piVar2 + 2);
          sVar5 = strlen(pcVar14);
          local_58 = CONCAT31(local_58._1_3_,0x69);
          FUN_1401b2280(param_1,local_3c,pcVar14,sVar5);
          if (piVar2[1] != 0) {
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x169
                         ) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar11 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x180);
            uVar15 = *(ulonglong *)(lVar11 + 0x28);
            if ((uVar15 & 0xffff) == 0) {
              FUN_1400637c0(lVar11,uVar15);
            }
            lVar6 = *(longlong *)(lVar11 + 0x48);
            uVar17 = (ulonglong)(uint)((int)(uVar15 & 0xffff) << 5);
            *(undefined1 *)(lVar6 + uVar17) = 0x66;
            *(int *)(lVar6 + 1 + uVar17) = iVar13;
            *(int *)(lVar6 + 5 + uVar17) = piVar2[1];
            *(ulonglong *)(lVar11 + 0x28) = uVar15 + 1;
          }
          goto switchD_1401afb6b_caseD_7;
        }
      }
      pcVar14 = (char *)getthreaddescription((ulonglong)local_3c & 0xffffffff);
      sVar5 = strlen(pcVar14);
      local_58 = CONCAT31(local_58._1_3_,0x69);
      goto LAB_1401aff1c;
    }
    local_58 = CONCAT31(local_58._1_3_,0x69);
    FUN_1401b2280(param_1,local_3c,"Main thread",0xb);
    break;
  case 3:
    FUN_1401b2710(param_1,local_3c);
    break;
  case 4:
    sVar5 = strlen(local_3c);
    local_58 = CONCAT31(local_58._1_3_,0x6a);
    goto LAB_1401aff1c;
  case 5:
    sVar5 = strlen(local_3c);
    local_58 = CONCAT31(local_58._1_3_,0x6e);
LAB_1401aff1c:
    FUN_1401b2280(param_1,local_3c,pcVar14,sVar5);
    break;
  case 6:
    FUN_1401b4ed0(param_1,local_3c);
    break;
  case 8:
    lVar11 = *(longlong *)(param_1 + 0x180) + 1;
    lVar6 = 0;
    if (lVar11 != *(longlong *)(param_1 + 0x140)) {
      lVar6 = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    while (lVar6 == lVar11) {
      lVar11 = *(longlong *)(param_1 + 0x200);
      *(longlong *)(param_1 + 0x1c0) = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x148);
    lVar10 = *(longlong *)(param_1 + 0x180) * 0x20;
    *(undefined4 *)(lVar11 + 0x40 + lVar10) = 2;
    goto LAB_1401aff76;
  case 9:
    FUN_1401b4670(param_1);
    uVar7 = 0;
    goto LAB_1401aff95;
  case 10:
    lVar11 = *(longlong *)(param_1 + 0x180) + 1;
    lVar6 = 0;
    if (lVar11 != *(longlong *)(param_1 + 0x140)) {
      lVar6 = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    while (lVar6 == lVar11) {
      lVar11 = *(longlong *)(param_1 + 0x200);
      *(longlong *)(param_1 + 0x1c0) = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x148);
    lVar10 = *(longlong *)(param_1 + 0x180) * 0x20;
    *(undefined4 *)(lVar11 + 0x40 + lVar10) = 0;
LAB_1401aff76:
    *(char **)(lVar11 + 0x48 + lVar10) = local_3c;
    *(undefined8 *)(lVar11 + 0x50 + lVar10) = 0;
    *(undefined4 *)(lVar11 + 0x58 + lVar10) = 0;
    *(longlong *)(param_1 + 0x180) = lVar6;
    break;
  case 0xb:
    FUN_1401b2990(param_1,local_3c);
    break;
  case 0xc:
    FUN_1401b4fd0(param_1,local_3c,local_34);
    break;
  case 0xd:
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x2f8);
    lVar11 = *(longlong *)(param_1 + 0x180) + 1;
    lVar6 = 0;
    if (lVar11 != *(longlong *)(param_1 + 0x140)) {
      lVar6 = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    while (lVar6 == lVar11) {
      lVar11 = *(longlong *)(param_1 + 0x200);
      *(longlong *)(param_1 + 0x1c0) = lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x148);
    lVar10 = *(longlong *)(param_1 + 0x180) * 0x20;
    *(undefined4 *)(lVar11 + 0x40 + lVar10) = 4;
    auVar18._0_8_ = auVar1._8_8_;
    auVar18._8_4_ = auVar1._0_4_;
    auVar18._12_4_ = auVar1._4_4_;
    *(undefined1 (*) [16])(lVar11 + 0x48 + lVar10) = auVar18;
    *(int *)(lVar11 + 0x58 + lVar10) = iVar13;
    *(longlong *)(param_1 + 0x180) = lVar6;
    *(undefined1 (*) [16])(param_1 + 0x2f8) = (undefined1  [16])0x0;
    break;
  case 0xe:
    if (*(longlong *)(param_1 + 0x300) != 0) {
      *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_1 + 0x300);
    }
    pcVar14 = local_3c + 0xb;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x18c) == '\0') {
      FUN_1401b83e0();
    }
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x1a0);
    if (pcVar14 < (char *)0x401) {
      uVar15 = (ulonglong)(local_3c + 0x1a) >> 4;
      puVar9 = (undefined8 *)(lVar11 + uVar15 * 0x18 + 8);
      puVar8 = *(undefined8 **)(lVar11 + 8 + uVar15 * 0x18);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_1401b9c30(lVar11,puVar9,uVar15 & 0xffffffff);
      }
      else {
        *puVar9 = *puVar8;
      }
    }
    else {
      pcVar12 = (char *)0x7e00;
      if (DAT_1416b4510 == '\0') {
        pcVar12 = (char *)0x0;
      }
      if (pcVar12 < pcVar14) {
        if (pcVar14 < (char *)0x3eff81) {
          puVar8 = (undefined8 *)FUN_1401b9ae0();
        }
        else {
          puVar8 = (undefined8 *)FUN_1401b9b30(lVar11,pcVar14);
        }
      }
      else {
        puVar8 = (undefined8 *)FUN_1401b9a90(lVar11,pcVar14);
      }
    }
    *(undefined8 **)(param_1 + 0x300) = puVar8;
    *(undefined8 **)(param_1 + 0x308) = puVar8;
    iVar13 = *(int *)(param_1 + 0x98);
    if (0x3ffff < iVar13 - *(int *)(param_1 + 0x9c)) {
      local_50 = 1;
      local_58 = 0x40414;
      iVar3 = FUN_1401a5c60(*(undefined8 *)(param_1 + 0x88),
                            (longlong)*(int *)(param_1 + 0x9c) + *(longlong *)(param_1 + 0x90),
                            *(longlong *)(param_1 + 0xa0) + 4);
      **(int **)(param_1 + 0xa0) = iVar3;
      iVar3 = iVar3 + 4;
      pcVar14 = *(char **)(param_1 + 0xa0);
      iVar13 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
      do {
        if (iVar3 < 1) break;
        iVar4 = send((longlong)iVar13,pcVar14,iVar3,0);
        iVar3 = iVar3 - iVar4;
        pcVar14 = pcVar14 + iVar4;
      } while (iVar4 != -1);
LAB_1401afebf:
      iVar13 = *(int *)(param_1 + 0x98);
      if (0x80000 < iVar13) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        iVar13 = 0;
      }
      *(int *)(param_1 + 0x9c) = iVar13;
    }
    goto LAB_1401afede;
  case 0xf:
    **(undefined8 **)(param_1 + 0x308) = local_3c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x308) + 8) = local_34;
    *(longlong *)(param_1 + 0x308) = *(longlong *)(param_1 + 0x308) + 0xc;
    iVar13 = *(int *)(param_1 + 0x98);
    if (0x3ffff < iVar13 - *(int *)(param_1 + 0x9c)) {
      local_50 = 1;
      local_58 = 0x40414;
      iVar3 = FUN_1401a5c60(*(undefined8 *)(param_1 + 0x88),
                            (longlong)*(int *)(param_1 + 0x9c) + *(longlong *)(param_1 + 0x90),
                            *(longlong *)(param_1 + 0xa0) + 4);
      **(int **)(param_1 + 0xa0) = iVar3;
      iVar3 = iVar3 + 4;
      pcVar14 = *(char **)(param_1 + 0xa0);
      iVar13 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
      do {
        if (iVar3 < 1) break;
        iVar4 = send((longlong)iVar13,pcVar14,iVar3,0);
        iVar3 = iVar3 - iVar4;
        pcVar14 = pcVar14 + iVar4;
      } while (iVar4 != -1);
      goto LAB_1401afebf;
    }
LAB_1401afede:
    *(undefined1 *)((longlong)iVar13 + *(longlong *)(param_1 + 0x90)) = 0x5f;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
switchD_1401afb6b_caseD_7:
  uVar7 = 1;
LAB_1401aff95:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar7;
}


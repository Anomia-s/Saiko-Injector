/**
 * Function: soptimized_out_trivial_queryn
 * Address:  1405fd2e0
 * Signature: undefined soptimized_out_trivial_queryn(void)
 * Body size: 2345 bytes
 */


undefined8 soptimized_out_trivial_queryn(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  undefined8 *local_d50;
  longlong local_d40;
  longlong local_d38;
  int local_d2c;
  undefined8 *local_d28;
  longlong local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined1 local_d00 [16];
  undefined8 auStack_cf0 [254];
  undefined1 local_500 [24];
  undefined1 local_4e8 [20];
  int local_4d4;
  char local_45c;
  ulonglong local_d0;
  
  local_d0 = DAT_1414ef3c0 ^ (ulonglong)auStack_d78;
  lVar13 = *(longlong *)(param_1 + 8);
  memset(local_d00,0,0x818);
  local_d10 = FUN_1403a6e90(lVar13,0x8000017300000129);
  local_d08 = FUN_1403a6e90(lVar13,0x8000017300000177);
  FUN_1405fc360(param_2);
  if (param_3 == 0) {
    FUN_1405fc4e0(param_2,"results",7);
    FUN_1405fc330(param_2);
  }
  else {
    if (*(char *)(param_3 + 8) == '\x01') {
      FUN_1405fc4e0(param_2,"type_info",9);
      FUN_1405fc360(param_2);
      lVar19 = (longlong)*(char *)(param_1 + 0x8c);
      if (((lVar19 != 0) && ('\0' < *(char *)(param_1 + 0x8c))) &&
         ((*(uint *)(param_1 + 0xcc) & 2) == 0)) {
        lVar20 = 0;
        do {
          while( true ) {
            thunk_FUN_1403b8d70(param_2);
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
            if (*(short *)(lVar12 + 0x40 + lVar20) != 1) break;
LAB_1405fd42e:
            FUN_1405fdc30(lVar13,*(undefined8 *)(lVar12 + lVar20),param_2);
            FUN_1403b7a10(param_2,&DAT_1413791f9,2);
            lVar20 = lVar20 + 0x48;
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) goto LAB_1405fd4b5;
          }
          lVar12 = FUN_1403b38b0(lVar13,*(undefined8 *)(lVar12 + lVar20));
          if (lVar12 == 0) {
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
            goto LAB_1405fd42e;
          }
          FUN_1405fdc30(lVar13,lVar12,param_2);
          FUN_1403b7ad0(param_2,0x3a);
          FUN_1405fb690(lVar13,lVar12,param_2);
          lVar20 = lVar20 + 0x48;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
LAB_1405fd4b5:
      FUN_1405fc380(param_2);
    }
    if (*(char *)(param_3 + 9) == '\x01') {
      cVar8 = *(char *)(param_1 + 0x8c);
      if ((cVar8 != '\0') && (lVar19 = *(longlong *)(param_1 + 0x90), lVar19 != 0)) {
        FUN_1405fc4e0(param_2,"field_info",10);
        FUN_1405fc330(param_2);
        if ('\0' < cVar8) {
          iVar17 = 0;
          do {
            thunk_FUN_1403b8d70(param_2);
            local_d58 = param_2;
            local_d50 = &local_d10;
            FUN_14076ce10(lVar13,param_1,lVar19,iVar17);
            iVar17 = iVar17 + 1;
          } while (cVar8 != iVar17);
        }
        FUN_1405fc350(param_2);
      }
    }
    if ((*(char *)(param_3 + 10) == '\x01') && (lVar19 = *(longlong *)(param_1 + 0x90), lVar19 != 0)
       ) {
      FUN_1405fc4e0(param_2,"query_info",10);
      FUN_14076d080(lVar13,lVar19,param_2);
    }
    local_d40 = param_3;
    local_d38 = lVar13;
    if ((*(char *)(param_3 + 0xb) == '\x01') &&
       (lVar13 = *(longlong *)(param_3 + 0x28), lVar13 != 0)) {
      lVar19 = FUN_1400b37f0(lVar13);
      FUN_1405fc4e0(param_2,"query_plan",10);
      uVar11 = FUN_140398e40(1);
      lVar20 = FUN_14039bf80(lVar13);
      if (lVar19 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = FUN_14039bf80(lVar19);
      }
      memset(local_4e8,0,0x418);
      if (lVar20 == 0) {
        if (*(char *)(lVar13 + 0x35) != '\0') {
          FUN_1403b79b0(local_4e8,"   %sOptimized out (trivial query)\n",&DAT_14134273e);
        }
      }
      else {
        FUN_1403b8780(local_4e8,lVar20);
      }
      if (lVar19 != 0) {
        FUN_1403b8780(local_4e8,"\n\n");
        FUN_1403b8780(local_4e8,"   Cache plan\n");
        FUN_1403b8780(local_4e8,"   ---\n");
        if (lVar12 == 0) {
          FUN_1403b79b0(local_4e8,"   %sOptimized out (trivial query)\n",&DAT_14134273e);
        }
        else {
          FUN_1403b8780(local_4e8,lVar12);
        }
      }
      lVar13 = FUN_1403b89b0(local_4e8);
      if (lVar13 == 0) {
        FUN_1405fc310(param_2);
      }
      else {
        FUN_1405fc3c0(param_2,lVar13);
        (*DAT_1415033b0)(lVar13);
      }
      param_3 = local_d40;
      (*DAT_1415033b0)(lVar20);
      (*DAT_1415033b0)(lVar12);
      FUN_140398e40(uVar11);
    }
    if ((*(char *)(param_3 + 0xc) == '\x01') && (*(longlong *)(param_3 + 0x28) != 0)) {
      local_d18 = 0;
      FUN_1403d24d0(&local_d18);
      uVar25 = 0;
      uVar26 = 0;
      iVar17 = 0;
      uVar11 = 0;
      uVar24 = 0;
      dVar3 = 0.0;
      lVar13 = local_d38;
      local_d28 = param_2;
      local_d20 = param_1;
      do {
        FUN_1400bd7b0(local_4e8,lVar13,*(undefined8 *)(param_3 + 0x28));
        cVar8 = FUN_1400bcfa0(local_4e8);
        dVar5 = 0.0;
        dVar4 = 0.0;
        dVar6 = 0.0;
        dVar7 = 0.0;
        if (cVar8 != '\0') {
          iVar15 = 0;
          iVar18 = 0;
          iVar22 = 0;
          iVar21 = 0;
          local_d2c = iVar17;
          do {
            cVar8 = local_45c;
            iVar18 = iVar18 + local_4d4;
            if ('\0' < local_45c) {
              cVar16 = '\0';
              do {
                lVar13 = FUN_1400c4700(local_4e8,cVar16);
                bVar9 = FUN_1400c46b0(local_4e8,cVar16);
                if ((lVar13 != 0 & bVar9) == 1) {
                  cVar10 = FUN_1400c46d0(local_4e8,cVar16);
                  if (cVar10 == '\0') {
                    iVar22 = iVar22 + (int)lVar13;
                  }
                  else {
                    iVar21 = (int)lVar13 * local_4d4 + iVar21;
                  }
                }
                cVar16 = cVar16 + '\x01';
              } while (cVar8 != cVar16);
            }
            iVar15 = iVar15 + 1;
            cVar8 = FUN_1400bcfa0(local_4e8);
          } while (cVar8 != '\0');
          dVar7 = (double)iVar15;
          dVar6 = (double)iVar18;
          dVar5 = (double)iVar21;
          dVar4 = (double)iVar22;
          param_1 = local_d20;
          lVar13 = local_d38;
          param_3 = local_d40;
          param_2 = local_d28;
          iVar17 = local_d2c;
        }
        dVar23 = (double)FUN_1403d24d0(&local_d18);
        if ((iVar17 == 0) ||
           (dVar23 <= (double)CONCAT44(uVar24,uVar11) && (double)CONCAT44(uVar24,uVar11) != dVar23))
        {
          uVar11 = SUB84(dVar23,0);
          uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar3 = dVar3 + dVar23;
        if (dVar23 <= (double)CONCAT44(uVar26,uVar25)) {
          dVar23 = (double)CONCAT44(uVar26,uVar25);
        }
        iVar17 = iVar17 + 1;
        uVar25 = SUB84(dVar23,0);
        uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (0.001 < dVar3) goto LAB_1405fd8c8;
      } while (iVar17 != 100);
      iVar17 = 100;
LAB_1405fd8c8:
      FUN_1405fc4e0(param_2,"query_profile",0xd);
      FUN_1405fc360(param_2);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 0x90);
        *piVar1 = *piVar1 - iVar17;
        FUN_1405fc4e0(param_2,"eval_count",10);
        thunk_FUN_1403b7ce0(param_2,(double)*(int *)(*(longlong *)(param_1 + 0x90) + 0x90));
      }
      FUN_1405fc4e0(param_2,"result_count",0xc);
      thunk_FUN_1403b7ce0(param_2,dVar7);
      FUN_1405fc4e0(param_2,"entity_count",0xc);
      thunk_FUN_1403b7ce0(param_2,dVar6);
      FUN_1405fc4e0(param_2,"eval_time_avg_us",0x10);
      thunk_FUN_1403b7ce0(param_2,(dVar3 / (double)iVar17) * 1000.0 * 1000.0);
      FUN_1405fc4e0(param_2,"eval_time_min_us",0x10);
      thunk_FUN_1403b7ce0(param_2,(double)CONCAT44(uVar24,uVar11) * 1000.0 * 1000.0);
      FUN_1405fc4e0(param_2,"eval_time_max_us",0x10);
      thunk_FUN_1403b7ce0(param_2,dVar23 * 1000.0 * 1000.0);
      FUN_1405fc4e0(param_2,"component_bytes",0xf);
      thunk_FUN_1403b7ce0(param_2,dVar5);
      FUN_1405fc4e0(param_2,"shared_component_bytes",0x16);
      thunk_FUN_1403b7ce0(param_2,dVar4);
      FUN_1405fc380(param_2);
    }
    if (*(char *)(param_3 + 0xd) != '\0') {
      FUN_1400c44f0(param_1);
      lVar13 = (longlong)*(char *)(param_1 + 0x8c);
      if (0 < lVar13) {
LAB_1405fdb71:
        lVar19 = 0;
        do {
          (*DAT_1415033b0)(*(undefined8 *)((longlong)auStack_cf0 + lVar19));
          lVar19 = lVar19 + 0x20;
        } while (lVar13 * 0x20 != lVar19);
      }
LAB_1405fdb97:
      FUN_1405fc380(param_2);
      uVar14 = 0;
      goto LAB_1405fdba1;
    }
    FUN_1405fc4e0(param_2,"results",7);
    FUN_1405fc330(param_2);
    lVar13 = local_d38;
    if (*(char *)(param_3 + 7) == '\x01') {
      *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 2;
    }
    if (*(char *)(param_3 + 0x19) == '\x01') {
      FUN_1403b61c0(local_500,local_d38 + 0xcc0);
    }
  }
  pcVar2 = *(code **)(param_1 + 0x148);
  do {
    cVar8 = (*pcVar2)(param_1);
    if (cVar8 == '\0') {
      if ((param_3 != 0) && (*(char *)(param_3 + 0x19) == '\x01')) {
        FUN_1403b6370(local_500);
      }
      FUN_1405fc350(param_2);
      lVar13 = (longlong)*(char *)(param_1 + 0x8c);
      if (lVar13 < 1) goto LAB_1405fdb97;
      goto LAB_1405fdb71;
    }
    local_d58 = &local_d10;
    iVar17 = FUN_14076ca50(lVar13,param_1,param_2,param_3);
  } while (iVar17 == 0);
  FUN_1403b8960(param_2);
  cVar8 = *(char *)(param_1 + 0x8c);
  if (0 < (longlong)cVar8) {
    lVar13 = 0;
    do {
      (*DAT_1415033b0)(*(undefined8 *)((longlong)auStack_cf0 + lVar13));
      lVar13 = lVar13 + 0x20;
    } while ((longlong)cVar8 * 0x20 != lVar13);
  }
  FUN_1400c44f0(param_1);
  FUN_1403b6370(local_500);
  uVar14 = 0xffffffff;
LAB_1405fdba1:
  if (DAT_1414ef3c0 != (local_d0 ^ (ulonglong)auStack_d78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_d0 ^ (ulonglong)auStack_d78);
  }
  return uVar14;
}


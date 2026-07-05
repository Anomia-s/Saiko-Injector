/**
 * Function: string_length_overflow
 * Address:  1406bc9a0
 * Signature: undefined string_length_overflow(void)
 * Body size: 870 bytes
 */


void string_length_overflow(longlong param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 auStack_288 [36];
  int local_264;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  do {
    lVar9 = *(longlong *)(param_1 + 0x10);
    lVar13 = (longlong)param_3 * 0x10;
    plVar14 = (longlong *)(lVar13 + lVar9);
    plVar18 = (longlong *)(lVar13 + lVar9 + -0x10);
    iVar17 = *(int *)(lVar9 + -4 + lVar13);
    if ((iVar17 == 5) || (iVar17 == 3)) {
      if (*(int *)((longlong)plVar14 + 0xc) != 5) {
        if (*(int *)((longlong)plVar14 + 0xc) != 3) goto LAB_1406bcb40;
        lVar7 = FUN_1407847e0(local_248,*plVar14);
        lVar7 = FUN_1406c0530(param_1,local_248,lVar7 - (longlong)local_248);
        *plVar14 = lVar7;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 5;
      }
      uVar16 = (ulonglong)*(uint *)(*plVar14 + 0x14);
      iVar17 = 1;
      local_264 = param_3;
      if (uVar16 == 0) {
        if (*(int *)((longlong)plVar14 + -4) == 3) {
          lVar9 = FUN_1407847e0(local_248,plVar14[-2]);
          lVar9 = FUN_1406c0530(param_1,local_248,lVar9 - (longlong)local_248);
          plVar14[-2] = lVar9;
          *(undefined4 *)((longlong)plVar14 + -4) = 5;
        }
      }
      else {
        uVar12 = 1;
        if (1 < (int)param_2) {
          uVar11 = 1;
          do {
            if (*(int *)((longlong)plVar18 + 0xc) != 5) {
              uVar12 = uVar11;
              if (*(int *)((longlong)plVar18 + 0xc) != 3) break;
              lVar7 = FUN_1407847e0(local_248,*plVar18);
              lVar7 = FUN_1406c0530(param_1,local_248,lVar7 - (longlong)local_248);
              *plVar18 = lVar7;
              *(undefined4 *)((longlong)plVar18 + 0xc) = 5;
            }
            if (0x40000000 - uVar16 < (ulonglong)*(uint *)(*plVar18 + 0x14)) {
                    /* WARNING: Subroutine does not return */
              FUN_1406c1000(param_1,"string length overflow");
            }
            uVar16 = uVar16 + *(uint *)(*plVar18 + 0x14);
            uVar11 = uVar11 + 1;
            plVar18 = plVar18 + -2;
            uVar12 = (ulonglong)param_2;
          } while (param_2 != uVar11);
        }
        if (uVar16 < 0x200) {
          puVar15 = local_248;
          local_260 = 0;
        }
        else {
          local_260 = FUN_1406c02f0(param_1,uVar16);
          puVar15 = (undefined1 *)(local_260 + 0x18);
        }
        local_250 = lVar13 + lVar9 + 0x10;
        iVar17 = (int)uVar12 + 1;
        local_258 = (uVar12 & 0xffffffff) * 0x10;
        plVar14 = (longlong *)(lVar13 + (uVar12 & 0xffffffff) * -0x10 + lVar9);
        uVar16 = 0;
        do {
          plVar14 = plVar14 + 2;
          uVar11 = (ulonglong)*(uint *)(*plVar14 + 0x14);
          memcpy(puVar15 + uVar16,(void *)(*plVar14 + 0x18),uVar11);
          uVar16 = uVar16 + uVar11;
          iVar17 = iVar17 + -1;
        } while (1 < iVar17);
        if (uVar16 < 0x200) {
          uVar10 = FUN_1406c0530(param_1,puVar15,uVar16);
        }
        else {
          uVar10 = FUN_1406c0360(param_1,local_260);
        }
        *(undefined8 *)(local_250 - local_258) = uVar10;
        *(undefined4 *)((local_250 - local_258) + 0xc) = 5;
        iVar17 = (int)uVar12 + -1;
        param_3 = local_264;
      }
    }
    else {
LAB_1406bcb40:
      puVar8 = (undefined8 *)FUN_1406bbd20(param_1,plVar18,0x12);
      if ((*(int *)((longlong)puVar8 + 0xc) == 0) &&
         (puVar8 = (undefined8 *)FUN_1406bbd20(param_1,plVar14,0x12),
         *(int *)((longlong)puVar8 + 0xc) == 0)) {
        attempt_to_concatenate_s_with_s(param_1,plVar18,plVar14);
        goto LAB_1406bcd01;
      }
      puVar2 = *(undefined8 **)(param_1 + 8);
      lVar7 = *(longlong *)(param_1 + 0x30);
      uVar10 = puVar8[1];
      *puVar2 = *puVar8;
      puVar2[1] = uVar10;
      lVar3 = *(longlong *)(param_1 + 8);
      uVar10 = *(undefined8 *)(lVar13 + lVar9 + -8);
      *(longlong *)(lVar3 + 0x10) = *plVar18;
      *(undefined8 *)(lVar3 + 0x18) = uVar10;
      lVar9 = *(longlong *)(param_1 + 8);
      uVar4 = *(undefined4 *)((longlong)plVar14 + 4);
      lVar13 = plVar14[1];
      uVar5 = *(undefined4 *)((longlong)plVar14 + 0xc);
      *(int *)(lVar9 + 0x20) = (int)*plVar14;
      *(undefined4 *)(lVar9 + 0x24) = uVar4;
      *(int *)(lVar9 + 0x28) = (int)lVar13;
      *(undefined4 *)(lVar9 + 0x2c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 0x28) - lVar9 < 0x31) {
        FUN_1406b9200(param_1,3);
        lVar9 = *(longlong *)(param_1 + 8);
      }
      *(longlong *)(param_1 + 8) = lVar9 + 0x30;
      iVar17 = 1;
      FUN_1406b94f0(param_1,lVar9,1);
      lVar9 = *(longlong *)(param_1 + 8);
      *(longlong *)(param_1 + 8) = lVar9 + -0x10;
      uVar4 = *(undefined4 *)(lVar9 + -0xc);
      uVar5 = *(undefined4 *)(lVar9 + -8);
      uVar6 = *(undefined4 *)(lVar9 + -4);
      puVar1 = (undefined4 *)((longlong)plVar18 + (*(longlong *)(param_1 + 0x30) - lVar7));
      *puVar1 = *(undefined4 *)(lVar9 + -0x10);
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
    }
    param_2 = param_2 - iVar17;
    param_3 = param_3 - iVar17;
    if ((int)param_2 < 2) {
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_288)) {
        return;
      }
LAB_1406bcd01:
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_48 ^ (ulonglong)auStack_288);
    }
  } while( true );
}


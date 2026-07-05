/**
 * Function: index_chain_too_long_possible_loop
 * Address:  1406bc020
 * Signature: undefined index_chain_too_long_possible_loop(void)
 * Body size: 358 bytes
 */


void index_chain_too_long_possible_loop
               (longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  
  iVar11 = *(int *)((longlong)param_2 + 0xc);
  iVar13 = 100;
  do {
    if (iVar11 == 6) {
      lVar1 = *param_2;
      puVar9 = (undefined8 *)FUN_1406bf260(lVar1,param_3);
      if (puVar9 != &DAT_1412193a0) {
        *(int *)(param_1 + 0x54) =
             (int)((ulonglong)((longlong)puVar9 - *(longlong *)(lVar1 + 0x20)) >> 5);
      }
      if ((((*(int *)((longlong)puVar9 + 0xc) != 0) ||
           (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 == 0)) || ((*(byte *)(lVar1 + 3) & 1) != 0))
         || (plVar10 = (longlong *)FUN_1406bbce0(lVar1,0), plVar10 == (longlong *)0x0)) {
        uVar7 = puVar9[1];
        *param_4 = *puVar9;
        param_4[1] = uVar7;
        return;
      }
      iVar11 = *(int *)((longlong)plVar10 + 0xc);
    }
    else {
      plVar10 = (longlong *)FUN_1406bbd20(param_1,param_2,0);
      iVar11 = *(int *)((longlong)plVar10 + 0xc);
      if (iVar11 == 0) {
        attempt_to_index_s_with_s(param_1,param_2,param_3);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar11 == 7) {
      plVar2 = *(longlong **)(param_1 + 8);
      lVar1 = *(longlong *)(param_1 + 0x30);
      lVar12 = plVar10[1];
      *plVar2 = *plVar10;
      plVar2[1] = lVar12;
      lVar12 = *(longlong *)(param_1 + 8);
      lVar8 = param_2[1];
      *(longlong *)(lVar12 + 0x10) = *param_2;
      *(longlong *)(lVar12 + 0x18) = lVar8;
      lVar12 = *(longlong *)(param_1 + 8);
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar12 + 0x20) = *param_3;
      *(undefined4 *)(lVar12 + 0x24) = uVar4;
      *(undefined4 *)(lVar12 + 0x28) = uVar5;
      *(undefined4 *)(lVar12 + 0x2c) = uVar6;
      lVar12 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 0x28) - lVar12 < 0x31) {
        FUN_1406b9200(param_1,3);
        lVar12 = *(longlong *)(param_1 + 8);
      }
      *(longlong *)(param_1 + 8) = lVar12 + 0x30;
      FUN_1406b94f0(param_1,lVar12,1);
      lVar12 = *(longlong *)(param_1 + 8);
      *(longlong *)(param_1 + 8) = lVar12 + -0x10;
      uVar7 = *(undefined8 *)(lVar12 + -8);
      param_4 = (undefined8 *)((longlong)param_4 + (*(longlong *)(param_1 + 0x30) - lVar1));
      *param_4 = *(undefined8 *)(lVar12 + -0x10);
      param_4[1] = uVar7;
      return;
    }
    iVar13 = iVar13 + -1;
    param_2 = plVar10;
  } while (iVar13 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"\'__index\' chain too long; possible loop");
}


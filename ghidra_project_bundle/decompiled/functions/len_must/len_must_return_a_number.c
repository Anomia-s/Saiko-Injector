/**
 * Function: len_must_return_a_number
 * Address:  1406be200
 * Signature: undefined len_must_return_a_number(void)
 * Body size: 319 bytes
 */


void len_must_return_a_number(longlong param_1,double *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (*(int *)((longlong)param_3 + 0xc) == 5) {
    dVar5 = (double)*(uint *)(*param_3 + 0x14);
LAB_1406be265:
    *param_2 = dVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = 3;
    return;
  }
  if (*(int *)((longlong)param_3 + 0xc) == 6) {
    lVar2 = *param_3;
    lVar12 = *(longlong *)(lVar2 + 0x10);
    if (((lVar12 == 0) || ((*(byte *)(lVar12 + 3) & 0x40) != 0)) ||
       (puVar11 = (undefined8 *)
                  FUN_1406bbce0(lVar12,6,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x408)),
       puVar11 == (undefined8 *)0x0)) {
      iVar10 = FUN_1406bfaa0(lVar2);
      dVar5 = (double)iVar10;
      goto LAB_1406be265;
    }
  }
  else {
    puVar11 = (undefined8 *)FUN_1406bbd20(param_1,param_3,6);
  }
  if (*(int *)((longlong)puVar11 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    attempt_to_s_a_s_value(param_1,param_3,"get length of");
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar9 = puVar11[1];
  *puVar3 = *puVar11;
  puVar3[1] = uVar9;
  lVar12 = *(longlong *)(param_1 + 8);
  lVar4 = param_3[1];
  *(longlong *)(lVar12 + 0x10) = *param_3;
  *(longlong *)(lVar12 + 0x18) = lVar4;
  lVar12 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  *(undefined4 *)(lVar12 + 0x28) = 0;
  *(undefined4 *)(lVar12 + 0x2c) = 0;
  lVar12 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x28) - lVar12 < 0x31) {
    FUN_1406b9200(param_1,3);
    lVar12 = *(longlong *)(param_1 + 8);
  }
  *(longlong *)(param_1 + 8) = lVar12 + 0x30;
  FUN_1406b94f0(param_1,lVar12,1);
  lVar12 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 8) = lVar12 + -0x10;
  uVar6 = *(undefined4 *)(lVar12 + -0xc);
  uVar7 = *(undefined4 *)(lVar12 + -8);
  uVar8 = *(undefined4 *)(lVar12 + -4);
  puVar1 = (undefined4 *)((longlong)param_2 + (lVar4 - lVar2));
  *puVar1 = *(undefined4 *)(lVar12 + -0x10);
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  if (*(int *)((longlong)param_2 + ((lVar4 + 0xc) - lVar2)) == 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"\'__len\' must return a number");
}


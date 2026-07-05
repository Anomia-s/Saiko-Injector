/**
 * Function: Catch_All@1409171c0
 * Address:  1409171c0
 * Signature: undefined Catch_All@1409171c0(void)
 * Body size: 175 bytes
 */


void Catch_All_1409171c0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x60);
  *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x50);
  lVar13 = *(longlong *)(lVar2 + 8);
  if (*(longlong *)(param_2 + 0x70) != lVar13) {
    puVar12 = *(undefined4 **)(param_2 + 0x78);
    lVar3 = *(longlong *)(param_2 + 0x68);
    do {
      puVar1 = (undefined4 *)((longlong)puVar12 + lVar3);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = (undefined4 *)((longlong)puVar12 + lVar3 + 0x10);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar12[4] = *puVar1;
      puVar12[5] = uVar8;
      puVar12[6] = uVar9;
      puVar12[7] = uVar10;
      *puVar12 = uVar4;
      puVar12[1] = uVar5;
      puVar12[2] = uVar6;
      puVar12[3] = uVar7;
      *(undefined8 *)((longlong)puVar12 + lVar3 + 0x10) = 0;
      *(undefined8 *)((longlong)puVar12 + lVar3 + 0x18) = 0xf;
      *(undefined1 *)((longlong)puVar12 + lVar3) = 0;
      lVar11 = (longlong)puVar12 + lVar3 + 0x20;
      puVar12 = puVar12 + 8;
    } while (lVar11 != lVar13);
    lVar13 = *(longlong *)(lVar2 + 8);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_140916510(*(undefined8 *)(param_2 + 0x70),lVar13,lVar2);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x60);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


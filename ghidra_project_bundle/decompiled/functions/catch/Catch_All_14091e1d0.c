/**
 * Function: Catch_All@14091e1d0
 * Address:  14091e1d0
 * Signature: undefined Catch_All@14091e1d0(void)
 * Body size: 195 bytes
 */


void Catch_All_14091e1d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x78);
  puVar13 = *(undefined8 **)(param_2 + 0x80);
  *(undefined8 **)(param_2 + 0x50) = puVar13;
  lVar3 = *(longlong *)(param_2 + 0x70);
  puVar12 = *(undefined8 **)(lVar3 + 8);
  if (puVar13 != puVar12) {
    puVar13 = *(undefined8 **)(param_2 + 0x88);
    do {
      *puVar13 = puVar13[lVar2 * 5];
      puVar11 = puVar13 + lVar2 * 5 + 1;
      uVar4 = *(undefined4 *)((longlong)puVar11 + 4);
      uVar5 = *(undefined4 *)(puVar11 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar11 + 0xc);
      puVar1 = puVar13 + lVar2 * 5 + 3;
      uVar7 = *(undefined4 *)puVar1;
      uVar8 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar9 = *(undefined4 *)(puVar1 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar4;
      *(undefined4 *)(puVar13 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar13 + 0x14) = uVar6;
      *(undefined4 *)(puVar13 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar8;
      *(undefined4 *)(puVar13 + 4) = uVar9;
      *(undefined4 *)((longlong)puVar13 + 0x24) = uVar10;
      puVar13[lVar2 * 5 + 3] = 0;
      puVar13[lVar2 * 5 + 4] = 0xf;
      *(undefined1 *)(puVar13 + lVar2 * 5 + 1) = 0;
      puVar11 = puVar13 + lVar2 * 5 + 5;
      puVar13 = puVar13 + 5;
    } while (puVar11 != puVar12);
    puVar12 = *(undefined8 **)(lVar3 + 8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_1409165b0(*(longlong *)(param_2 + 0x80),puVar12,lVar3);
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x78);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


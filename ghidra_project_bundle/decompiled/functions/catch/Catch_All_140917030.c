/**
 * Function: Catch_All@140917030
 * Address:  140917030
 * Signature: undefined Catch_All@140917030(void)
 * Body size: 322 bytes
 */


void Catch_All_140917030(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  
  lVar4 = *(longlong *)(param_2 + 0x50);
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x70);
  lVar17 = *(longlong *)(param_2 + 0x58) * 0x40;
  puVar19 = (undefined1 *)(*(longlong *)(param_2 + 0x78) + lVar17);
  if (*(longlong *)(param_2 + 0x68) != lVar17) {
    uVar21 = *(longlong *)(param_2 + 0x68) - 0x20;
    puVar18 = *(undefined4 **)(param_2 + 0x70);
    if ((uVar21 & 0x20) == 0) {
      puVar18 = *(undefined4 **)(param_2 + 0x70);
      uVar7 = *puVar18;
      uVar8 = puVar18[1];
      uVar9 = puVar18[2];
      uVar10 = puVar18[3];
      uVar11 = puVar18[5];
      uVar12 = puVar18[6];
      uVar13 = puVar18[7];
      puVar5 = *(undefined4 **)(param_2 + 0x78);
      puVar5[4] = puVar18[4];
      puVar5[5] = uVar11;
      puVar5[6] = uVar12;
      puVar5[7] = uVar13;
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 6) = 0xf;
      *(undefined1 *)puVar18 = 0;
      *(undefined4 **)(param_2 + 0x78) = puVar5 + 8;
      puVar18 = puVar18 + 8;
    }
    lVar17 = *(longlong *)(param_2 + 0x78);
    if (uVar21 != 0) {
      lVar20 = 0;
      do {
        uVar6 = *(undefined8 *)((longlong)puVar18 + lVar20);
        uVar14 = ((undefined8 *)((longlong)puVar18 + lVar20))[1];
        puVar1 = (undefined8 *)((longlong)puVar18 + lVar20 + 0x10);
        uVar15 = puVar1[1];
        puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        *(undefined8 *)(lVar17 + lVar20) = uVar6;
        ((undefined8 *)(lVar17 + lVar20))[1] = uVar14;
        *(undefined8 *)((longlong)puVar18 + lVar20 + 0x10) = 0;
        *(undefined8 *)((longlong)puVar18 + lVar20 + 0x18) = 0xf;
        *(undefined1 *)((longlong)puVar18 + lVar20) = 0;
        puVar5 = (undefined4 *)((longlong)puVar18 + lVar20 + 0x20);
        uVar7 = *puVar5;
        uVar8 = puVar5[1];
        uVar9 = puVar5[2];
        uVar10 = puVar5[3];
        puVar5 = (undefined4 *)((longlong)puVar18 + lVar20 + 0x30);
        uVar11 = puVar5[1];
        uVar12 = puVar5[2];
        uVar13 = puVar5[3];
        puVar3 = (undefined4 *)(lVar17 + 0x30 + lVar20);
        *puVar3 = *puVar5;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        puVar5 = (undefined4 *)(lVar17 + 0x20 + lVar20);
        *puVar5 = uVar7;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        *(undefined8 *)((longlong)puVar18 + lVar20 + 0x30) = 0;
        *(undefined8 *)((longlong)puVar18 + lVar20 + 0x38) = 0xf;
        *(undefined1 *)((longlong)puVar18 + lVar20 + 0x20) = 0;
        lVar16 = lVar20 + 0x40;
        lVar20 = lVar20 + 0x40;
      } while ((undefined1 *)((longlong)puVar18 + lVar16) != puVar19);
    }
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_1409166b0(puVar19,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(param_2 + 0x70));
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  FUN_140916510(uVar6,*(undefined8 *)(lVar4 + 8),lVar4);
  *(undefined8 *)(lVar4 + 8) = uVar6;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


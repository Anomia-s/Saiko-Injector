/**
 * Function: Catch_All@14091e010
 * Address:  14091e010
 * Signature: undefined Catch_All@14091e010(void)
 * Body size: 370 bytes
 */


void Catch_All_14091e010(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  
  lVar4 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x68);
  lVar6 = *(longlong *)(param_2 + 0x30) * 0x50;
  lVar21 = *(longlong *)(param_2 + 0x88) + lVar6;
  if (*(longlong *)(param_2 + 0x80) != lVar6) {
    uVar19 = *(longlong *)(param_2 + 0x80) - 0x28;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    puVar20 = *(undefined8 **)(param_2 + 0x68);
    if ((SUB164(auVar8 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
      puVar20 = *(undefined8 **)(param_2 + 0x68);
      puVar5 = *(undefined8 **)(param_2 + 0x88);
      *puVar5 = *puVar20;
      uVar9 = *(undefined4 *)(puVar20 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar20 + 0xc);
      uVar11 = *(undefined4 *)(puVar20 + 2);
      uVar12 = *(undefined4 *)((longlong)puVar20 + 0x14);
      uVar13 = *(undefined4 *)((longlong)puVar20 + 0x1c);
      uVar14 = *(undefined4 *)(puVar20 + 4);
      uVar15 = *(undefined4 *)((longlong)puVar20 + 0x24);
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar20 + 3);
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar13;
      *(undefined4 *)(puVar5 + 4) = uVar14;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar15;
      *(undefined4 *)(puVar5 + 1) = uVar9;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar10;
      *(undefined4 *)(puVar5 + 2) = uVar11;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar12;
      puVar20[3] = 0;
      puVar20[4] = 0xf;
      *(undefined1 *)(puVar20 + 1) = 0;
      *(undefined8 **)(param_2 + 0x88) = puVar5 + 5;
      puVar20 = puVar20 + 5;
    }
    lVar6 = *(longlong *)(param_2 + 0x88);
    if (0x27 < uVar19) {
      lVar22 = 0;
      do {
        *(undefined8 *)(lVar6 + lVar22) = *(undefined8 *)((longlong)puVar20 + lVar22);
        puVar5 = (undefined8 *)((longlong)puVar20 + lVar22 + 8);
        uVar7 = puVar5[1];
        puVar1 = (undefined8 *)((longlong)puVar20 + lVar22 + 0x18);
        uVar16 = *puVar1;
        uVar17 = puVar1[1];
        puVar1 = (undefined8 *)(lVar6 + 8 + lVar22);
        *puVar1 = *puVar5;
        puVar1[1] = uVar7;
        puVar5 = (undefined8 *)(lVar6 + 0x18 + lVar22);
        *puVar5 = uVar16;
        puVar5[1] = uVar17;
        *(undefined8 *)((longlong)puVar20 + lVar22 + 0x18) = 0;
        *(undefined8 *)((longlong)puVar20 + lVar22 + 0x20) = 0xf;
        *(undefined1 *)((longlong)puVar20 + lVar22 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x28 + lVar22) = *(undefined8 *)((longlong)puVar20 + lVar22 + 0x28);
        puVar2 = (undefined4 *)((longlong)puVar20 + lVar22 + 0x30);
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)puVar20 + lVar22 + 0x40);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        uVar14 = puVar3[2];
        uVar15 = puVar3[3];
        puVar3 = (undefined4 *)(lVar6 + 0x30 + lVar22);
        *puVar3 = *puVar2;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar2 = (undefined4 *)(lVar6 + 0x40 + lVar22);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2[2] = uVar14;
        puVar2[3] = uVar15;
        *(undefined8 *)((longlong)puVar20 + lVar22 + 0x40) = 0;
        *(undefined8 *)((longlong)puVar20 + lVar22 + 0x48) = 0xf;
        *(undefined1 *)((longlong)puVar20 + lVar22 + 0x30) = 0;
        lVar18 = lVar22 + 0x50;
        lVar22 = lVar22 + 0x50;
      } while ((longlong)puVar20 + lVar18 != lVar21);
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_14091d570(lVar21,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(param_2 + 0x68));
  uVar7 = *(undefined8 *)(param_2 + 0x78);
  FUN_1409165b0(uVar7,*(undefined8 *)(lVar4 + 8),lVar4);
  *(undefined8 *)(lVar4 + 8) = uVar7;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


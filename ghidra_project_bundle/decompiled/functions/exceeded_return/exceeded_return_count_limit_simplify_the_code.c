/**
 * Function: exceeded_return_count_limit_simplify_the_code
 * Address:  1406ca760
 * Signature: undefined exceeded_return_count_limit_simplify_the_code(void)
 * Body size: 1164 bytes
 */


void exceeded_return_count_limit_simplify_the_code
               (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  char cVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint local_4c;
  
  uVar12 = *(ulonglong *)(param_2 + 0x30);
  if (0xfe < uVar12) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(param_2 + 0xc),
               "Exceeded return count limit; simplify the code to compile",uVar12,param_4);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x4fc);
  if (uVar12 == 0) {
    uVar6 = 0;
    local_4c = 0;
  }
  else {
    lVar8 = **(longlong **)(param_2 + 0x28);
    iVar18 = *(int *)(lVar8 + 8);
    if (lVar8 == 0 || iVar18 != DAT_1416f23d8) {
      do {
        if ((iVar18 != DAT_1416f23c4) && (iVar18 != DAT_1416f2400)) goto LAB_1406ca9f0;
        lVar8 = *(longlong *)(lVar8 + 0x20);
        iVar18 = *(int *)(lVar8 + 8);
      } while (lVar8 == 0 || iVar18 != DAT_1416f23d8);
    }
    if (param_1[0x13] != 0) {
      uVar21 = *(ulonglong *)(lVar8 + 0x20);
      uVar1 = param_1[0x14];
      if (uVar21 != uVar1) {
        lVar8 = param_1[0x11];
        uVar15 = param_1[0x12] - 1;
        uVar11 = uVar21 >> 9 ^ uVar21 >> 4;
        uVar9 = 0;
        do {
          uVar11 = uVar11 & uVar15;
          uVar7 = *(ulonglong *)(lVar8 + uVar11 * 0x18);
          if (uVar7 == uVar21) {
            lVar10 = lVar8 + uVar11 * 0x18;
            if (*(char *)(lVar10 + 9) == '\x01') {
              bVar13 = *(byte *)(lVar10 + 8);
              local_4c = (uint)bVar13;
              if (uVar12 == 1) {
                uVar6 = 0;
                goto LAB_1406caaae;
              }
              uVar21 = 2;
              if (2 < uVar12) {
                uVar21 = uVar12;
              }
              uVar9 = 1;
              goto LAB_1406ca8e0;
            }
            break;
          }
          if (uVar7 == uVar1) break;
          uVar11 = uVar11 + uVar9 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar15);
      }
    }
LAB_1406ca9f0:
    uVar6 = uVar2 + (int)uVar12;
    if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(param_2 + 0xc),
                 "Out of registers when trying to allocate %d registers: exceeded limit %d",uVar12,
                 0xff);
    }
    *(uint *)((longlong)param_1 + 0x4fc) = uVar6;
    if (uVar6 < *(uint *)(param_1 + 0xa0)) {
      uVar6 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa0) = uVar6;
    uVar6 = 0;
    for (uVar12 = 0; uVar21 = *(ulonglong *)(param_2 + 0x30), local_4c = uVar2, uVar12 < uVar21;
        uVar12 = uVar12 + 1) {
      while( true ) {
        uVar1 = uVar12 + 1;
        uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + uVar12 * 8);
        if (uVar1 == uVar21) break;
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x4fc);
        *(uint *)((longlong)param_1 + 0x4fc) = ((uint)(uVar12 + uVar2) & 0xff) + 1;
        exceeded_constant_limit_simplify_the_code_to(param_1,uVar5,uVar12 + uVar2 & 0xffffffff,1);
        *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar3;
        uVar21 = *(ulonglong *)(param_2 + 0x30);
        uVar12 = uVar1;
        if (uVar21 <= uVar1) goto LAB_1406caaae;
      }
      uVar6 = FUN_1406d2e10(param_1,uVar5,uVar2 + (int)uVar12);
    }
  }
LAB_1406caaae:
  lVar8 = param_1[0xa4] - param_1[0xa3];
  if (lVar8 != 0) {
    lVar8 = lVar8 >> 3;
    lVar10 = param_1[0x11];
    bVar13 = 0xff;
    bVar17 = false;
    lVar16 = 0;
    do {
      while( true ) {
        uVar12 = *(ulonglong *)(param_1[0xa3] + lVar16 * 8);
        uVar21 = (uVar12 >> 9 ^ uVar12 >> 4) & param_1[0x12] - 1;
        if (*(ulonglong *)(lVar10 + uVar21 * 0x18) == uVar12) break;
        lVar20 = 1;
        do {
          uVar21 = uVar21 + lVar20 & param_1[0x12] - 1;
          lVar20 = lVar20 + 1;
        } while (*(ulonglong *)(lVar10 + uVar21 * 0x18) != uVar12);
        lVar20 = lVar10 + uVar21 * 0x18;
        if (*(char *)(lVar20 + 10) != '\0') goto LAB_1406cab5b;
LAB_1406cab3e:
        lVar16 = lVar16 + 1;
        if (lVar16 == lVar8) {
          if (!bVar17) goto LAB_1406cab9b;
          goto LAB_1406cab82;
        }
      }
      lVar20 = lVar10 + uVar21 * 0x18;
      if (*(char *)(lVar20 + 10) == '\0') goto LAB_1406cab3e;
LAB_1406cab5b:
      if (*(byte *)(lVar20 + 8) < bVar13) {
        bVar13 = *(byte *)(lVar20 + 8);
      }
      lVar16 = lVar16 + 1;
      bVar17 = true;
    } while (lVar16 != lVar8);
LAB_1406cab82:
    FUN_1407aacf0(*param_1,0xb,bVar13,0,0);
  }
LAB_1406cab9b:
  if ((uVar6 & 1) == 0) {
    cVar14 = *(char *)(param_2 + 0x30) + '\x01';
  }
  else {
    cVar14 = '\0';
  }
  FUN_1407aacf0(*param_1,0x16,local_4c,cVar14,0);
  *(uint *)((longlong)param_1 + 0x4fc) = uVar2;
  return;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar6 = 0;
    if (uVar9 == uVar21) break;
LAB_1406ca8e0:
    lVar10 = (*(longlong **)(param_2 + 0x28))[uVar9];
    iVar18 = *(int *)(lVar10 + 8);
    if (lVar10 == 0 || iVar18 != DAT_1416f23d8) {
      do {
        if ((iVar18 != DAT_1416f23c4) && (iVar18 != DAT_1416f2400)) {
          uVar6 = 0xffffffff;
          goto LAB_1406ca9d0;
        }
        lVar10 = *(longlong *)(lVar10 + 0x20);
        iVar18 = *(int *)(lVar10 + 8);
      } while (lVar10 == 0 || iVar18 != DAT_1416f23d8);
    }
    uVar11 = *(ulonglong *)(lVar10 + 0x20);
    uVar6 = 0xffffffff;
    if (uVar11 != uVar1) {
      uVar19 = uVar11 >> 9 ^ uVar11 >> 4;
      uVar7 = 0;
      do {
        uVar19 = uVar19 & uVar15;
        uVar4 = *(ulonglong *)(lVar8 + uVar19 * 0x18);
        if (uVar4 == uVar11) {
          lVar10 = lVar8 + uVar19 * 0x18;
          uVar6 = 0xffffffff;
          if (*(char *)(lVar10 + 9) == '\x01') {
            uVar6 = (uint)*(byte *)(lVar10 + 8);
          }
          goto LAB_1406ca9d0;
        }
        if (uVar4 == uVar1) break;
        uVar19 = uVar19 + uVar7 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 <= uVar15);
      uVar6 = 0xffffffff;
    }
LAB_1406ca9d0:
    if (uVar6 != (uint)bVar13 + (int)uVar9) goto LAB_1406ca9f0;
  }
  goto LAB_1406caaae;
}


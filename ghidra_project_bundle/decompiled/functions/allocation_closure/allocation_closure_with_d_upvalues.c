/**
 * Function: allocation_closure_with_d_upvalues
 * Address:  1406ce3f0
 * Signature: undefined allocation_closure_with_d_upvalues(void)
 * Body size: 1239 bytes
 */


void allocation_closure_with_d_upvalues
               (undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = (undefined1)param_3;
  if ((param_1[0xe] != 0) && (param_2 != param_1[0xf])) {
    uVar15 = param_2 >> 9 ^ param_2 >> 4;
    uVar13 = 0;
    do {
      uVar15 = uVar15 & param_1[0xd] - 1;
      param_4 = uVar15 * 0x38;
      uVar10 = *(ulonglong *)(param_1[0xc] + param_4);
      if (uVar10 == param_2) {
        lVar19 = param_1[0xc] + param_4;
        goto LAB_1406ce47b;
      }
      if (uVar10 == param_1[0xf]) break;
      uVar15 = uVar15 + uVar13 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 <= param_1[0xd] - 1);
  }
  lVar19 = 0;
LAB_1406ce47b:
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x4fc);
  local_58 = param_1;
  sVar8 = FUN_1407aaa40(*param_1,*(undefined4 *)(lVar19 + 8));
  if (sVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(param_2 + 0xc),"Exceeded closure limit; simplify the code to compile",
               param_3,param_4);
  }
  lVar18 = local_58[0xb2];
  if (lVar18 != local_58[0xb3]) {
    local_58[0xb3] = lVar18;
  }
  puVar1 = local_58 + 0xb2;
  puVar12 = *(ulonglong **)(lVar19 + 0x10);
  puVar16 = *(ulonglong **)(lVar19 + 0x18);
  local_60 = (longlong)puVar16 - (longlong)puVar12 >> 3;
  if ((ulonglong)(local_58[0xb4] - lVar18) < (ulonglong)((longlong)puVar16 - (longlong)puVar12)) {
    if (local_60 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    FUN_14002bb90(puVar1,&local_60);
    puVar12 = *(ulonglong **)(lVar19 + 0x10);
    puVar16 = *(ulonglong **)(lVar19 + 0x18);
  }
LAB_1406ce52a:
  do {
    if (puVar12 == puVar16) {
      if ((((*(int *)(local_58 + 1) < 1) || (cVar7 = FUN_1406d8a50(local_58,param_2), cVar7 == '\0')
           ) || (*(char *)((longlong)local_58 + 0x512) != '\0')) ||
         (uVar9 = FUN_1407aa9c0(*local_58,*(undefined4 *)(lVar19 + 8)), 0x7fff < uVar9)) {
        FUN_1407ab880(*local_58,"allocation: closure with %d upvalues",
                      (ulonglong)(local_58[0xb3] - local_58[0xb2]) >> 3);
        FUN_1407aadb0(*local_58,0x13,local_49,sVar8);
      }
      else {
        FUN_1407aadb0(*local_58,0x40,local_49,uVar9);
      }
      puVar5 = (undefined1 *)local_58[0xb3];
      for (puVar14 = (undefined1 *)local_58[0xb2]; puVar14 != puVar5; puVar14 = puVar14 + 8) {
        FUN_1407aacf0(*local_58,0x46,*puVar14,puVar14[4],0);
      }
      *(undefined4 *)((longlong)local_58 + 0x4fc) = uVar2;
      return;
    }
    uVar13 = *puVar12;
    if ((local_58[0x13] != 0) && (uVar13 != local_58[0x14])) {
      uVar10 = uVar13 >> 9 ^ uVar13 >> 4;
      uVar17 = 0;
      uVar15 = uVar10;
      do {
        uVar15 = uVar15 & local_58[0x12] - 1;
        uVar4 = *(ulonglong *)(local_58[0x11] + uVar15 * 0x18);
        if (uVar4 == uVar13) {
          lVar18 = local_58[0x11] + uVar15 * 0x18;
          if (*(char *)(lVar18 + 9) == '\x01') {
            uVar9 = 0;
            if ((local_58[0x1d] == 0) || (uVar9 = 0, uVar13 == local_58[0x1e])) goto LAB_1406ce863;
            uVar15 = 0;
            goto LAB_1406ce5f0;
          }
          break;
        }
        if (uVar4 == local_58[0x14]) break;
        uVar15 = uVar15 + uVar17 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 <= local_58[0x12] - 1);
    }
    if ((local_58[0x27] != 0) && (uVar13 != local_58[0x28])) {
      uVar15 = uVar13 >> 9 ^ uVar13 >> 4;
      uVar10 = 0;
      do {
        uVar15 = uVar15 & local_58[0x26] - 1;
        lVar18 = uVar15 * 0x20;
        uVar17 = *(ulonglong *)(local_58[0x25] + lVar18);
        if (uVar17 == uVar13) {
          lVar18 = local_58[0x25] + lVar18;
          if (*(int *)(lVar18 + 8) != 0) {
            iVar3 = *(int *)((longlong)local_58 + 0x4fc);
            uVar9 = iVar3 + 1;
            if (0xff < uVar9) {
                    /* WARNING: Subroutine does not return */
              Luau::CompileError::CompileError_Constructor_or_Destructor
                        ((undefined8 *)(param_2 + 0xc),
                         "Out of registers when trying to allocate %d registers: exceeded limit %d",
                         1,0xff);
            }
            *(uint *)((longlong)local_58 + 0x4fc) = uVar9;
            if (uVar9 < *(uint *)(local_58 + 0xa0)) {
              uVar9 = *(uint *)(local_58 + 0xa0);
            }
            *(uint *)(local_58 + 0xa0) = uVar9;
            exceeded_constant_limit_simplify_the_code_to(local_58,param_2,lVar18 + 8,iVar3);
            local_60 = (ulonglong)CONCAT31((int3)(local_60 >> 0x28),(char)iVar3) << 0x20;
            puVar11 = (ulonglong *)local_58[0xb3];
            if (puVar11 != (ulonglong *)local_58[0xb4]) goto LAB_1406ce73c;
            FUN_140029790(puVar1,puVar11,&local_60);
            goto LAB_1406ce760;
          }
          break;
        }
        if (uVar17 == local_58[0x28]) break;
        uVar15 = uVar15 + uVar10 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 <= local_58[0x26] - 1);
    }
    uVar6 = out_of_upvalue_registers_when_trying_to_alloc(local_58);
    local_60._0_5_ = CONCAT14(uVar6,2);
    puVar11 = (ulonglong *)local_58[0xb3];
    if (puVar11 == (ulonglong *)local_58[0xb4]) {
      FUN_140029790(puVar1,puVar11,&local_60);
      goto LAB_1406ce760;
    }
LAB_1406ce73c:
    *puVar11 = local_60;
    local_58[0xb3] = local_58[0xb3] + 8;
    puVar12 = puVar12 + 1;
  } while( true );
  while( true ) {
    uVar9 = 0;
    if (uVar17 == local_58[0x1e]) break;
    uVar10 = uVar10 + uVar15 + 1;
    uVar15 = uVar15 + 1;
    uVar9 = 0;
    if (local_58[0x1c] - 1 < uVar15) break;
LAB_1406ce5f0:
    uVar10 = uVar10 & local_58[0x1c] - 1;
    uVar17 = *(ulonglong *)(local_58[0x1b] + uVar10 * 0x18);
    if (uVar17 == uVar13) {
      uVar9 = (uint)*(byte *)(local_58[0x1b] + uVar10 * 0x18 + 0x10);
      break;
    }
  }
LAB_1406ce863:
  local_60._0_5_ = CONCAT14(*(undefined1 *)(lVar18 + 8),uVar9);
  puVar11 = (ulonglong *)local_58[0xb3];
  if (puVar11 == (ulonglong *)local_58[0xb4]) {
    FUN_140029790(puVar1,puVar11,&local_60);
LAB_1406ce760:
    puVar12 = puVar12 + 1;
  }
  else {
    *puVar11 = local_60;
    local_58[0xb3] = local_58[0xb3] + 8;
    puVar12 = puVar12 + 1;
  }
  goto LAB_1406ce52a;
}


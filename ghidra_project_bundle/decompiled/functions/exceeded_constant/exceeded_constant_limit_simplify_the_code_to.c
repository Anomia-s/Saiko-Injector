/**
 * Function: exceeded_constant_limit_simplify_the_code_to
 * Address:  1406d5140
 * Signature: undefined exceeded_constant_limit_simplify_the_code_to(void)
 * Body size: 1351 bytes
 */


void exceeded_constant_limit_simplify_the_code_to
               (undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
               char param_5,char param_6,byte param_7,undefined4 param_8,uint param_9)

{
  undefined4 uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar11 = param_3 & 0xffffffff;
  uVar12 = (ulonglong)param_7;
  lVar13 = *(longlong *)(param_2 + 0x40);
  local_70 = 0x49;
  uVar14 = param_4;
  local_58 = param_1;
  if (lVar13 == 1) goto LAB_1406d519d;
  uVar18 = 0;
  if ((int)param_9 < 0) {
    if (lVar13 != 2) {
      local_70 = 0x3c;
      bVar3 = true;
LAB_1406d5279:
      local_4c = 0;
      goto LAB_1406d5280;
    }
    local_70 = 0x4a;
    if (param_1[0x22] != 0) {
      uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x38) + 8);
      if (uVar9 != param_1[0x23]) {
        param_3 = param_1[0x21] - 1;
        uVar14 = uVar9 >> 9 ^ uVar9 >> 4;
        uVar16 = 0;
        do {
          uVar14 = uVar14 & param_3;
          uVar17 = *(ulonglong *)(param_1[0x20] + uVar14 * 0x20);
          if (uVar17 == uVar9) {
            local_4c = (uint)(*(int *)(param_1[0x20] + uVar14 * 0x20 + 8) != 0);
            local_70 = local_4c | 0x4a;
            bVar3 = false;
            break;
          }
          local_70 = 0x4a;
          if (uVar17 == param_1[0x23]) {
            bVar3 = false;
            local_70 = 0x4a;
            goto LAB_1406d5279;
          }
          uVar14 = uVar14 + uVar16 + 1;
          uVar16 = uVar16 + 1;
          bVar3 = false;
          local_4c = 0;
        } while (uVar16 <= param_3);
        goto LAB_1406d5280;
      }
    }
LAB_1406d519d:
    local_4c = 0;
    bVar3 = false;
LAB_1406d52a2:
    local_60 = 0;
    local_68 = 0;
    uVar18 = 0;
    cVar5 = (char)local_4c;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x38) + uVar18 * 8);
      if (uVar18 == 0 || cVar5 != '\x01') {
        iVar6 = *(int *)(lVar10 + 8);
        if (lVar10 == 0 || iVar6 != DAT_1416f23d8) {
          do {
            if ((iVar6 != DAT_1416f23c4) && (iVar6 != DAT_1416f2400)) goto LAB_1406d5410;
            lVar10 = *(longlong *)(lVar10 + 0x20);
            iVar6 = *(int *)(lVar10 + 8);
          } while (lVar10 == 0 || iVar6 != DAT_1416f23d8);
        }
        if (local_58[0x13] != 0) {
          uVar9 = *(ulonglong *)(lVar10 + 0x20);
          if (uVar9 != local_58[0x14]) {
            param_3 = local_58[0x11];
            uVar14 = local_58[0x12] - 1;
            uVar16 = uVar9 >> 9 ^ uVar9 >> 4;
            uVar17 = 0;
            do {
              uVar16 = uVar16 & uVar14;
              uVar2 = *(ulonglong *)(param_3 + uVar16 * 0x18);
              if (uVar2 == uVar9) {
                lVar10 = param_3 + uVar16 * 0x18;
                if (*(char *)(lVar10 + 9) == '\x01') {
                  *(uint *)((longlong)&local_68 + uVar18 * 4) = (uint)*(byte *)(lVar10 + 8);
                  param_1 = local_58;
                  goto LAB_1406d52d0;
                }
                break;
              }
              if (uVar2 == local_58[0x14]) break;
              uVar16 = uVar16 + uVar17 + 1;
              uVar17 = uVar17 + 1;
            } while (uVar17 <= uVar14);
          }
        }
LAB_1406d5410:
        param_3 = uVar12 + 1 + uVar18;
        uVar7 = (uint)param_3 & 0xff;
        *(uint *)((longlong)&local_68 + uVar18 * 4) = uVar7;
        uVar1 = *(undefined4 *)((longlong)local_58 + 0x4fc);
        *(uint *)((longlong)local_58 + 0x4fc) = uVar7 + 1;
        uVar14 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        exceeded_constant_limit_simplify_the_code_to();
        *(undefined4 *)((longlong)local_58 + 0x4fc) = uVar1;
        param_1 = local_58;
      }
      else {
        iVar6 = exceeded_constant_limit_simplify_the_code_to(param_1);
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Luau::CompileError::CompileError_Constructor_or_Destructor
                    ((undefined8 *)(param_2 + 0xc),
                     "Exceeded constant limit; simplify the code to compile",param_3,uVar14);
        }
        *(int *)((longlong)&local_68 + uVar18 * 4) = iVar6;
      }
LAB_1406d52d0:
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulonglong *)(param_2 + 0x40));
    uVar18 = local_68 & 0xffffffff;
  }
  else {
    local_70 = 0x4b;
    local_4c = 1;
    bVar3 = false;
LAB_1406d5280:
    local_60 = 0;
    local_68 = 0;
    if (lVar13 != 0) goto LAB_1406d52a2;
  }
  FUN_1407aaf10(*param_1);
  uVar14 = uVar18;
  FUN_1407aacf0(*param_1,local_70,param_8,uVar18,0);
  if (bVar3) {
    uVar8 = *param_1;
    param_9 = local_60 << 8 | local_68._4_4_;
  }
  else {
    if (lVar13 == 1) goto LAB_1406d54b5;
    uVar8 = *param_1;
    if ((int)param_9 < 0) {
      param_9 = local_68._4_4_;
    }
  }
  FUN_1407aae60(uVar8,param_9);
LAB_1406d54b5:
  uVar9 = *(ulonglong *)(param_2 + 0x40);
  if (uVar9 != 0) {
    lVar13 = uVar12 + 1;
    if ((char)local_4c == '\0') {
      uVar18 = 0;
      do {
        uVar14 = (ulonglong)*(uint *)((longlong)&local_68 + uVar18 * 4);
        if (lVar13 + uVar18 != uVar14) {
          FUN_1407aacf0(*local_58,6,(param_7 + 1 & 0xff) + (int)uVar18,uVar14,0);
          uVar9 = *(ulonglong *)(param_2 + 0x40);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar9);
    }
    else {
      if ((int)lVar13 != (int)uVar18) {
        FUN_1407aacf0(*local_58,6,lVar13,uVar18,0);
        uVar9 = *(ulonglong *)(param_2 + 0x40);
        uVar14 = uVar18;
      }
      puVar4 = local_58;
      if (1 < uVar9) {
        uVar18 = 1;
        do {
          while( true ) {
            uVar7 = *(uint *)((longlong)&local_68 + uVar18 * 4);
            lVar13 = uVar12 + uVar18 + 1;
            uVar8 = *puVar4;
            if (0x7fff < (int)uVar7) break;
            uVar14 = (ulonglong)uVar7;
            FUN_1407aadb0(uVar8,5,lVar13,uVar14);
            uVar18 = uVar18 + 1;
            if (*(ulonglong *)(param_2 + 0x40) <= uVar18) goto LAB_1406d5563;
          }
          uVar14 = 0;
          FUN_1407aadb0(uVar8,0x42,lVar13,0);
          FUN_1407aae60(*puVar4,uVar7);
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ulonglong *)(param_2 + 0x40));
      }
    }
  }
LAB_1406d5563:
  puVar4 = local_58;
  uVar15 = CONCAT71((int7)(uVar14 >> 8),1);
  exceeded_constant_limit_simplify_the_code_to(local_58,*(undefined8 *)(param_2 + 0x20),param_7);
  uVar8 = FUN_1407aaf10(*puVar4);
  cVar5 = FUN_1407aafe0(*puVar4);
  if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xc),
               "Exceeded jump distance limit; simplify the code to compile",uVar8,uVar15);
  }
  cVar5 = '\0';
  if (param_6 == '\0') {
    cVar5 = (char)param_4 + '\x01';
  }
  FUN_1407aacf0(*puVar4,0x15,param_7,*(char *)(param_2 + 0x40) + '\x01',cVar5);
  if ((param_5 == '\0') && ((char)param_4 != '\0')) {
    param_4 = param_4 & 0xff;
    do {
      FUN_1407aacf0(*puVar4,6,uVar11,uVar12,0);
      uVar11 = CONCAT71((int7)(uVar11 >> 8),(char)uVar11 + '\x01');
      uVar12 = (ulonglong)(byte)((char)uVar12 + 1);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}


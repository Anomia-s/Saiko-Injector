/**
 * Function: expression_only_compiled_for_side_effects
 * Address:  1406cbc10
 * Signature: undefined expression_only_compiled_for_side_effects(void)
 * Body size: 591 bytes
 */


void expression_only_compiled_for_side_effects(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar4 = *(int *)(param_2 + 8);
  if ((((iVar4 != DAT_1416f23d8) && (iVar4 != DAT_1416f23dc)) && (iVar4 != DAT_1416f23e0)) &&
     (iVar4 != DAT_1416f23f0)) {
    if ((param_1[0x22] != 0) && (param_2 != param_1[0x23])) {
      uVar7 = param_2 >> 9 ^ param_2 >> 4;
      uVar5 = 0;
      do {
        uVar7 = uVar7 & param_1[0x21] - 1;
        lVar6 = uVar7 * 0x20;
        uVar8 = *(ulonglong *)(param_1[0x20] + lVar6);
        if (uVar8 == param_2) {
          if (*(int *)(param_1[0x20] + lVar6 + 8) != 0) {
            return;
          }
          break;
        }
        if (uVar8 == param_1[0x23]) break;
        uVar7 = uVar7 + uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= param_1[0x21] - 1);
    }
    if (iVar4 != DAT_1416f23e4) {
      FUN_1407ab880(*param_1,"expression only compiled for side effects");
      iVar4 = *(int *)(param_2 + 8);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x4fc);
    uVar5 = param_2;
    if ((param_2 == 0) || (iVar4 != DAT_1416f23d8)) {
      do {
        if ((iVar4 != DAT_1416f23c4) && (iVar4 != DAT_1416f2400)) goto LAB_1406cbde7;
        uVar5 = *(ulonglong *)(uVar5 + 0x20);
        iVar4 = *(int *)(uVar5 + 8);
      } while (uVar5 == 0 || iVar4 != DAT_1416f23d8);
    }
    if (param_1[0x13] != 0) {
      uVar5 = *(ulonglong *)(uVar5 + 0x20);
      if (uVar5 != param_1[0x14]) {
        uVar7 = uVar5 >> 9 ^ uVar5 >> 4;
        uVar8 = 0;
        do {
          uVar7 = uVar7 & param_1[0x12] - 1;
          uVar2 = *(ulonglong *)(param_1[0x11] + uVar7 * 0x18);
          if (uVar2 == uVar5) {
            if (*(char *)(param_1[0x11] + uVar7 * 0x18 + 9) != '\0') goto LAB_1406cbe1c;
            break;
          }
          if (uVar2 == param_1[0x14]) break;
          uVar7 = uVar7 + uVar8 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 <= param_1[0x12] - 1);
      }
    }
LAB_1406cbde7:
    uVar3 = iVar1 + 1;
    if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(param_2 + 0xc),
                 "Out of registers when trying to allocate %d registers: exceeded limit %d",1,0xff);
    }
    *(uint *)((longlong)param_1 + 0x4fc) = uVar3;
    if (uVar3 < *(uint *)(param_1 + 0xa0)) {
      uVar3 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa0) = uVar3;
    exceeded_constant_limit_simplify_the_code_to();
LAB_1406cbe1c:
    *(int *)((longlong)param_1 + 0x4fc) = iVar1;
  }
  return;
}


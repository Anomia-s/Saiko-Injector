/**
 * Function: missing_value_for_function_argument
 * Address:  140769ab0
 * Signature: undefined missing_value_for_function_argument(void)
 * Body size: 536 bytes
 */


undefined8
missing_value_for_function_argument
          (undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
          longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_8a8 [32];
  longlong local_888;
  undefined8 local_880;
  longlong local_878;
  longlong local_870;
  undefined1 local_868 [2080];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_8a8;
  local_888 = param_4;
  local_880 = param_3;
  local_870 = FUN_140106180(param_4 + 8);
  lVar3 = FUN_140106180((Decoration<__int64> *)(param_2 + 0x20));
  uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0x20));
  if ((int)uVar1 < 1) {
    lVar7 = 0;
  }
  else {
    lVar8 = 0;
    lVar5 = 0;
    local_878 = param_2;
    do {
      lVar7 = *(longlong *)(lVar3 + 8 + lVar8 * 2);
      if (lVar7 == 0) {
        FUN_140399a50(param_1[1],param_1[2],*(longlong *)(local_878 + 0x18) - param_1[2],
                      "missing value for function argument");
LAB_140769c98:
        uVar6 = 0xffffffff;
        goto LAB_140769c9d;
      }
      lVar9 = *(longlong *)(local_870 + 8 + lVar8);
      if (lVar9 != DAT_1416dfb80) {
        cannot_open_scope_for_s_missing_reflection_da(local_868,*param_1,lVar9,0);
        iVar2 = unknown_type_for_initializer
                          (param_1,*(undefined8 *)(lVar3 + 8 + lVar8 * 2),local_868);
        lVar7 = lVar5;
        if (iVar2 == 0) goto LAB_140769bfe;
        goto LAB_140769c98;
      }
      memset(local_868,0,0x820);
      iVar2 = unknown_type_for_initializer(param_1,lVar7,local_868);
      if (iVar2 != 0) goto LAB_140769c98;
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8 + lVar8 * 2) + 8);
      }
      piVar4 = (int *)FUN_1400ba4f0(*param_1,lVar5,0x163);
      lVar7 = lVar5;
      lVar9 = lVar5;
      if ((((piVar4 != (int *)0x0) && (*(longlong *)(local_888 + 0x20 + (longlong)*piVar4 * 8) == 0)
           ) && (lVar7 = 0x15f, lVar9 = 0x15f, *(longlong *)(local_888 + 0x88) == 0)) &&
         ((lVar7 = 0x15c, lVar9 = 0x15c, *(longlong *)(local_888 + 0x78) == 0 &&
          (lVar7 = lVar5, lVar9 = lVar5, *(longlong *)(local_888 + 0x58) != 0)))) {
        lVar7 = 0x157;
        lVar9 = lVar7;
      }
LAB_140769bfe:
      lVar5 = *(longlong *)(lVar3 + 8 + lVar8 * 2);
      if (*(longlong *)(lVar5 + 8) != lVar9) {
        lVar5 = invalid_cast_from_s_to_s(param_1,lVar5,lVar9);
        *(longlong *)(lVar3 + 8 + lVar8 * 2) = lVar5;
        if (lVar5 == 0) goto LAB_140769c98;
      }
      lVar8 = lVar8 + 0x10;
      lVar5 = lVar7;
    } while ((ulonglong)uVar1 << 4 != lVar8);
  }
  *param_5 = lVar7;
  uVar6 = 0;
LAB_140769c9d:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_8a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_8a8);
  }
  return uVar6;
}


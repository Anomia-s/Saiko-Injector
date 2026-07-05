/**
 * Function: any_must_be_the_last_case_in_match
 * Address:  140768330
 * Signature: undefined any_must_be_the_last_case_in_match(void)
 * Body size: 1258 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
any_must_be_the_last_case_in_match
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  Decoration<__int64> *this;
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_10f8 [32];
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 *local_10c8;
  longlong *local_10c0;
  undefined8 local_10b8;
  longlong local_10b0;
  ulonglong local_10a8;
  ulonglong local_10a0;
  Decoration<__int64> *local_1098;
  undefined8 local_1090;
  longlong local_1088 [260];
  undefined1 local_868 [2080];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_10f8;
  memset(local_868,0,0x820);
  iVar3 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 0x20),local_868,param_4);
  uVar10 = 0xffffffff;
  if (iVar3 == 0) {
    this = (Decoration<__int64> *)(param_2 + 0x28);
    uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    lVar6 = FUN_140106180(this);
    if (uVar4 == 0) {
      FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                    "match statement must have at least one case");
    }
    else {
      lVar7 = FUN_140758660(param_3);
      *(longlong *)(param_2 + 8) = lVar7;
      local_1098 = this;
      if (0 < (int)uVar4) {
        local_10a0 = (ulonglong)uVar4;
        local_10b0 = local_10a0 << 4;
        iVar3 = 1;
        lVar11 = 0;
        local_10a8 = (ulonglong)uVar4;
        do {
          if (lVar7 == 0) {
            memset(local_868,0,0x820);
          }
          else {
            cannot_open_scope_for_s_missing_reflection_da(local_1088,*param_1,lVar7,0);
            memcpy(local_868,local_1088,0x820);
          }
          iVar5 = unknown_type_for_initializer
                            (param_1,*(undefined8 *)(lVar6 + 8 + lVar11),local_868);
          if (iVar5 != 0) goto LAB_14076861a;
          lVar7 = *(longlong *)(param_2 + 8);
          if (lVar7 == 0) {
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8 + lVar11) + 8);
LAB_140768439:
            *(longlong *)(param_2 + 8) = lVar7;
          }
          else {
            if ((((((lVar7 == 0x154) || (lVar7 == 0x155)) || (lVar7 == 0x156)) ||
                 (((lVar7 == 0x157 || (lVar7 == 0x158)) ||
                  ((lVar7 == 0x159 || ((lVar7 == 0x15a || (lVar7 == 0x15b)))))))) ||
                (lVar7 == 0x15c)) || (((lVar7 == 0x15d || (lVar7 == 0x15e)) || (lVar7 == 0x15f)))) {
              local_1088[0] = 0;
              local_1090 = 0;
              local_10d8 = *(undefined8 *)(lVar6 + 8 + lVar11);
              local_10c0 = local_1088;
              local_10c8 = &local_1090;
              local_10b8 = 0;
              local_10d0 = CONCAT44(local_10d0._4_4_,0x2b);
              iVar5 = incompatible_types_in_expression_s_vs_s(param_1,param_2,0);
              lVar7 = local_1088[0];
              if (iVar5 == 0) goto LAB_140768439;
              goto LAB_14076861a;
            }
            lVar8 = *(longlong *)(*(longlong *)(lVar6 + 8 + lVar11) + 8);
            if (lVar8 != lVar7) {
              local_10d8 = 0;
              uVar10 = FUN_1403ae340(*param_1,0,lVar8,".");
              local_10d8 = 0;
              puVar9 = (undefined8 *)FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 8),".");
              local_10d8 = CONCAT44(local_10d8._4_4_,iVar3);
              local_10d0 = uVar10;
              local_10c8 = puVar9;
              FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                            "invalid type for case %d in match (got %s, expected %s)");
              (*DAT_1415033b0)(uVar10);
              (*DAT_1415033b0)(puVar9);
              uVar10 = 0xffffffff;
              goto LAB_14076839a;
            }
          }
          iVar3 = iVar3 + 1;
          lVar11 = lVar11 + 0x10;
        } while (local_10b0 != lVar11);
        lVar11 = local_10a0 << 4;
        lVar7 = 0;
        uVar4 = (uint)local_10a8;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 8 + lVar7) + 8) != *(longlong *)(param_2 + 8)) {
            lVar8 = invalid_cast_from_s_to_s(param_1);
            *(longlong *)(lVar6 + 8 + lVar7) = lVar8;
            if (lVar8 == 0) goto LAB_14076861a;
          }
          lVar7 = lVar7 + 0x10;
        } while (lVar11 != lVar7);
      }
      local_10b0 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
      puVar9 = (undefined8 *)FUN_1400ba4f0(*param_1,local_10b0,0x164);
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = invalid_cast_from_s_to_s(param_1,*(undefined8 *)(param_2 + 0x20),*puVar9);
        *(undefined8 *)(param_2 + 0x20) = uVar10;
      }
      lVar7 = FUN_1400ba4f0(*param_1,local_10b0,0x165);
      if (lVar7 != 0) {
        uVar10 = invalid_cast_from_s_to_s(param_1,*(undefined8 *)(param_2 + 0x20),0x156);
        *(undefined8 *)(param_2 + 0x20) = uVar10;
      }
      if (0 < (int)uVar4) {
        local_10a8 = (ulonglong)(uVar4 - 1) << 4;
        uVar12 = 0;
        do {
          piVar1 = *(int **)(lVar6 + uVar12);
          if (((*piVar1 == 6) && (pcVar2 = *(char **)(piVar1 + 8), pcVar2 != (char *)0x0)) &&
             ((*pcVar2 == '_' && (pcVar2[1] == '\0')))) {
            if (local_10a8 != uVar12) {
              FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                            "any (_) must be the last case in match");
              uVar10 = 0xffffffff;
              goto LAB_14076839a;
            }
            *(int **)(param_2 + 0x38) = piVar1;
            *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar6 + 8 + uVar12);
            FUN_1403b3040(local_1098);
          }
          else {
            cannot_open_scope_for_s_missing_reflection_da(local_1088,*param_1,local_10b0,0);
            memcpy(local_868,local_1088,0x820);
            iVar3 = unknown_type_for_initializer(param_1,*(undefined8 *)(lVar6 + uVar12),local_868);
            if (iVar3 != 0) goto LAB_14076861a;
            if (*(longlong *)(*(longlong *)(lVar6 + uVar12) + 8) !=
                *(longlong *)(*(longlong *)(param_2 + 0x20) + 8)) {
              lVar7 = invalid_cast_from_s_to_s(param_1);
              *(longlong *)(lVar6 + uVar12) = lVar7;
              if (lVar7 == 0) goto LAB_14076861a;
            }
          }
          uVar12 = uVar12 + 0x10;
        } while ((ulonglong)uVar4 << 4 != uVar12);
      }
      uVar10 = 0;
    }
  }
LAB_14076839a:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_10f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_10f8);
  }
  return uVar10;
LAB_14076861a:
  uVar10 = 0xffffffff;
  goto LAB_14076839a;
}


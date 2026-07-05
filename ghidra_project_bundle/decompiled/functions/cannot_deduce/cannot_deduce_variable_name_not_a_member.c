/**
 * Function: cannot_deduce_variable_name_not_a_member
 * Address:  140767490
 * Signature: undefined cannot_deduce_variable_name_not_a_member(void)
 * Body size: 1024 bytes
 */


undefined8
cannot_deduce_variable_name_not_a_member
          (undefined8 *param_1,longlong param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_8a8 [32];
  undefined8 local_888;
  longlong local_878;
  longlong local_870;
  undefined1 local_868 [2080];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_8a8;
  if (*(char *)((longlong)param_3 + 0x80a) == '\0') {
    uVar3 = param_1[1];
    lVar6 = param_1[2];
    lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
    pcVar8 = "missing type for initializer";
    goto LAB_140767511;
  }
  uVar3 = FUN_140758660(param_3);
  piVar4 = (int *)FUN_1400ba4f0(*param_1,uVar3,0x16e);
  if (piVar4 == (int *)0x0) {
    bVar9 = false;
  }
  else {
    bVar9 = *piVar4 - 5U < 2;
  }
  *(bool *)(param_2 + 0x39) = bVar9;
  iVar2 = cannot_open_scope_for_type_s(param_3);
  if (iVar2 == 0) {
    iVar2 = invalid_collection_literal_for_type_s(param_1,param_2,param_3);
    if (iVar2 == 0) {
      plVar5 = (longlong *)FUN_140106180((Decoration<__int64> *)(param_2 + 0x20));
      iVar2 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                        ((Decoration<__int64> *)(param_2 + 0x20));
      if (iVar2 < 1) {
LAB_1407676ab:
        *(undefined8 *)(param_2 + 8) = uVar3;
        iVar2 = missing_resize_for_opaque_type_s(param_3);
        if (iVar2 == 0) {
          uVar3 = 0;
          goto LAB_140767541;
        }
      }
      else {
        piVar4 = (int *)plVar5[1];
        if (piVar4 == (int *)0x0) {
LAB_1407677fc:
          uVar3 = param_1[1];
          lVar6 = param_1[2];
          lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
          pcVar8 = "missing value for initializer element";
LAB_140767511:
          FUN_140399a50(uVar3,lVar6,lVar7,pcVar8);
        }
        else {
          local_878 = CONCAT44(local_878._4_4_,iVar2);
          if (*plVar5 != 0) {
            iVar2 = FUN_140757ef0(param_3);
            if (iVar2 != 0) {
LAB_1407675b6:
              uVar3 = param_1[1];
              lVar6 = param_1[2];
              lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
              pcVar8 = "cannot resolve member";
              goto LAB_140767511;
            }
            piVar4 = (int *)plVar5[1];
          }
          if (((*piVar4 == 7) && (*(char **)(piVar4 + 8) != (char *)0x0)) &&
             (**(char **)(piVar4 + 8) == '\0')) {
            lVar6 = FUN_140758690(param_3);
            *(longlong *)(piVar4 + 8) = lVar6;
            if (lVar6 == 0) {
LAB_140767865:
              uVar3 = param_1[1];
              lVar6 = param_1[2];
              lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
              pcVar8 = "cannot deduce variable name: not a member";
              goto LAB_140767511;
            }
          }
          lVar6 = FUN_140758660(param_3);
          memcpy(local_868,param_3,0x820);
          iVar2 = unknown_type_for_initializer(param_1,plVar5[1],local_868,param_4);
          if (iVar2 == 0) {
            if (*(longlong *)(plVar5[1] + 8) != lVar6) {
              lVar7 = invalid_cast_from_s_to_s(param_1,plVar5[1],lVar6);
              if (lVar7 == 0) goto LAB_14076753c;
              plVar5[1] = lVar7;
            }
            if ((int)plVar5[3] != 0) {
              cVar1 = FUN_140768850(*param_1,lVar6);
              if (cVar1 == '\0') {
LAB_140767817:
                local_888 = 0;
                uVar3 = FUN_1403ae340(*param_1,0,lVar6,".");
                local_888 = uVar3;
                FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                              "invalid operator for type \'%s\'");
                (*DAT_1415033b0)(uVar3);
                goto LAB_14076753c;
              }
            }
            if (bVar9 == false) {
              lVar6 = FUN_1407579b0(param_3);
              plVar5[2] = lVar6;
            }
            else if (*(int *)plVar5[1] == 2) {
              *(undefined1 *)(plVar5[1] + 0x39) = 1;
            }
            if ((uint)local_878 != 1) {
              plVar5 = plVar5 + 7;
              lVar6 = (ulonglong)(uint)local_878 - 1;
              do {
                local_878 = lVar6;
                iVar2 = too_many_elements_for_scope_for_type_s(param_3);
                if (iVar2 != 0) goto LAB_14076753c;
                piVar4 = (int *)plVar5[-2];
                if (piVar4 == (int *)0x0) goto LAB_1407677fc;
                if (plVar5[-3] != 0) {
                  iVar2 = FUN_140757ef0(param_3);
                  if (iVar2 != 0) goto LAB_1407675b6;
                  piVar4 = (int *)plVar5[-2];
                }
                if (((*piVar4 == 7) && (*(char **)(piVar4 + 8) != (char *)0x0)) &&
                   (**(char **)(piVar4 + 8) == '\0')) {
                  lVar6 = FUN_140758690(param_3);
                  *(longlong *)(piVar4 + 8) = lVar6;
                  if (lVar6 == 0) goto LAB_140767865;
                }
                local_870 = FUN_140758660(param_3);
                memcpy(local_868,param_3,0x820);
                lVar6 = local_870;
                iVar2 = unknown_type_for_initializer(param_1,plVar5[-2],local_868,param_4);
                if (iVar2 != 0) goto LAB_14076753c;
                if (*(longlong *)(plVar5[-2] + 8) != lVar6) {
                  lVar7 = invalid_cast_from_s_to_s(param_1,plVar5[-2],lVar6);
                  if (lVar7 == 0) goto LAB_14076753c;
                  plVar5[-2] = lVar7;
                }
                if ((int)*plVar5 != 0) {
                  cVar1 = FUN_140768850(*param_1,lVar6);
                  if (cVar1 == '\0') goto LAB_140767817;
                }
                if (bVar9 == false) {
                  lVar6 = FUN_1407579b0(param_3);
                  plVar5[-1] = lVar6;
                }
                else if (*(int *)plVar5[-2] == 2) {
                  *(undefined1 *)(plVar5[-2] + 0x39) = 1;
                }
                plVar5 = plVar5 + 4;
                lVar6 = local_878 + -1;
              } while (lVar6 != 0);
            }
            goto LAB_1407676ab;
          }
        }
      }
    }
  }
LAB_14076753c:
  uVar3 = 0xffffffff;
LAB_140767541:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_8a8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_8a8);
}


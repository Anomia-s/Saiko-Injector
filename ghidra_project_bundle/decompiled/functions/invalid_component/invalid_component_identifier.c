/**
 * Function: invalid_component_identifier
 * Address:  1405f1750
 * Signature: undefined invalid_component_identifier(void)
 * Body size: 991 bytes
 */


undefined8 invalid_component_identifier(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong *local_60;
  longlong *local_58;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if ((param_3[3] != 0) && ((char)param_3[7] != '\x01')) goto LAB_1405f1ab0;
  pcVar7 = (char *)*param_3;
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    pcVar7 = "invalid component identifier";
  }
  else {
    pcVar6 = (char *)param_3[1];
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) {
      if (*(longlong *)(param_1 + 0x458) == 0) {
LAB_1405f1843:
        local_40 = 0;
        local_68 = param_3 + 4;
        local_60 = &local_40;
        local_58 = (longlong *)0x0;
        iVar2 = variable_identifier_s_not_allowed_here(param_1,0,pcVar7,param_3 + 5);
        uVar1 = local_40;
        if (iVar2 == 0 && local_40 != 0) {
          if (param_3[1] == 0) {
LAB_1405f1968:
            if (uVar1 == 0x10f) {
              pcVar7 = "cannot use anonymous entity as component or tag";
              goto LAB_1405f17fc;
            }
            param_3[3] = param_3[2] | uVar1;
          }
          else {
            lVar3 = FUN_1400be350(*(undefined8 *)(param_1 + 0x448),local_40);
            if (param_3[1] == 0) goto LAB_1405f1968;
            local_48 = 0;
            local_68 = (longlong *)((longlong)param_3 + 0x24);
            local_60 = &local_48;
            local_58 = param_3 + 7;
            iVar2 = variable_identifier_s_not_allowed_here(param_1,lVar3,param_3[1],param_3 + 6);
            if (iVar2 != 0 || local_48 == 0) {
              if (*(char *)param_3[1] == '$') {
                pcVar7 = "unresolved variable \'%s\'";
              }
              else {
                if (*(longlong *)(param_1 + 0x458) != 0) {
                  iVar2 = unresolved_reference_to_s(param_1,param_2,(char *)param_3[1]);
                  uVar4 = 0xffffffff;
                  if (iVar2 != 0) goto LAB_1405f1ab2;
                  *(undefined1 *)(param_3 + 7) = 1;
                  goto LAB_1405f1ab0;
                }
                if (lVar3 != 0) {
                  plVar5 = (longlong *)FUN_1403b36e0(*(undefined8 *)(param_1 + 0x448),lVar3);
                  local_68 = plVar5;
                  FUN_1405f0f70(param_1,param_2,"target \'%s\' not found in parent \'%s\'",
                                param_3[1]);
                  (*DAT_1415033b0)(plVar5);
                  uVar4 = 0xffffffff;
                  goto LAB_1405f1ab2;
                }
                pcVar7 = "unresolved identifier \'%s\'";
              }
              FUN_1405f0f70(param_1,param_2,pcVar7);
              uVar4 = 0xffffffff;
              goto LAB_1405f1ab2;
            }
            if (local_48 == 0x10f || uVar1 == 0x10f) {
              FUN_1405f0f70(param_1,param_2,"cannot use anonymous entity as element of pair");
              uVar4 = 0xffffffff;
              goto LAB_1405f1ab2;
            }
            param_3[3] = local_48 & 0xffffffff | uVar1 << 0x20 | param_3[2] | 0x8000000000000000;
          }
LAB_1405f1ab0:
          uVar4 = 0;
          goto LAB_1405f1ab2;
        }
        pcVar7 = (char *)*param_3;
        if (*pcVar7 == '$') {
          pcVar6 = "unresolved variable \'%s\'";
        }
        else {
          pcVar6 = "unresolved identifier \'%s\'";
        }
      }
      else {
        if (*pcVar7 == '$') {
          if (*(char *)(param_1 + 0x48d) == '\x01') {
            lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),pcVar7 + 1);
joined_r0x0001405f19a3:
            if (lVar3 != 0) goto LAB_1405f1ab0;
          }
          else {
            if ((int)param_3[4] != -1) {
              lVar3 = FUN_140761f90();
              goto joined_r0x0001405f19a3;
            }
            lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),pcVar7 + 1);
            if (lVar3 != 0) {
              *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar3 + 0x20);
              goto LAB_1405f1ab0;
            }
          }
          lVar3 = *param_3;
        }
        else {
          if ((pcVar6 == (char *)0x0) || (*pcVar6 != '$')) goto LAB_1405f1843;
          if (*(char *)(param_1 + 0x48d) == '\x01') {
            lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),pcVar6 + 1);
LAB_1405f1a2e:
            if (lVar3 != 0) goto LAB_1405f1ab0;
          }
          else {
            if (*(int *)((longlong)param_3 + 0x24) != -1) {
              lVar3 = FUN_140761f90();
              goto LAB_1405f1a2e;
            }
            lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),pcVar6 + 1);
            if (lVar3 != 0) {
              *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)(lVar3 + 0x20);
              goto LAB_1405f1ab0;
            }
          }
          lVar3 = param_3[1];
        }
        pcVar7 = (char *)(lVar3 + 1);
        pcVar6 = "unresolved variable \'%s\'";
      }
      FUN_1405f0f70(param_1,param_2,pcVar6,pcVar7);
      uVar4 = 0xffffffff;
      goto LAB_1405f1ab2;
    }
    pcVar7 = "invalid pair identifier";
  }
LAB_1405f17fc:
  FUN_1405f0f70(param_1,param_2,pcVar7);
  uVar4 = 0xffffffff;
LAB_1405f1ab2:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_88)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}


/**
 * Function: entity_s_for_unit_s_used_as_prefix_is_not_a_p
 * Address:  1405e9da0
 * Signature: undefined entity_s_for_unit_s_used_as_prefix_is_not_a_p(void)
 * Body size: 1064 bytes
 */


undefined8
entity_s_for_unit_s_used_as_prefix_is_not_a_p
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_4a8 [32];
  char *local_488;
  undefined8 local_480;
  char *local_478;
  undefined4 local_470;
  int local_46c;
  char *local_468;
  undefined1 local_460 [1048];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4a8;
  lVar1 = param_3[1];
  lVar2 = param_3[2];
  lVar3 = param_3[3];
  iVar12 = *(int *)(param_3 + 4);
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      iVar5 = *(int *)((longlong)param_3 + 0x24);
      if (lVar1 == 0) {
LAB_1405ea19e:
        param_3[2] = lVar2;
        param_3[3] = lVar3;
        param_3[1] = lVar1;
        *(int *)(param_3 + 4) = iVar12;
        *(int *)((longlong)param_3 + 0x24) = iVar5;
        uVar10 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        goto LAB_1405ea007;
      }
      local_488 = (char *)FUN_1403af230(param_1);
      pcVar11 = "invalid unit \'%s\': cannot specify prefix without base";
      uVar10 = 0x6b;
    }
    else {
      local_488 = (char *)FUN_1403af230(param_1);
      pcVar11 = "invalid unit \'%s\': cannot specify over without base";
      uVar10 = 0x5e;
    }
LAB_1405e9ff8:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/units_ts.c"
                  ,uVar10,pcVar11);
    pcVar11 = (char *)0x0;
  }
  else {
    local_468 = (char *)*param_3;
    local_46c = *(int *)((longlong)param_3 + 0x24);
    cVar4 = FUN_1400b9b40(param_1,lVar2,0x16f);
    if (cVar4 == '\0') {
      uVar7 = FUN_1403af230(param_1,param_2);
      local_488 = (char *)FUN_1403af230(param_1,lVar2);
      pcVar11 = "entity \'%s\' for unit \'%s\' used as base is not a unit";
      uVar10 = 0x56;
      local_480 = uVar7;
      goto LAB_1405e9ff8;
    }
    if ((lVar3 != 0) && (cVar4 = FUN_1400b9b40(param_1,lVar3,0x16f), cVar4 == '\0')) {
      uVar7 = FUN_1403af230(param_1,param_2);
      local_488 = (char *)FUN_1403af230(param_1,lVar3);
      pcVar11 = "entity \'%s\' for unit \'%s\' used as over is not a unit";
      uVar10 = 99;
      local_480 = uVar7;
      goto LAB_1405e9ff8;
    }
    if (lVar1 == 0) {
      local_470 = 0;
      memset(local_460,0,0x418);
    }
    else {
      lVar6 = FUN_1400ba4f0(param_1,lVar1,0x170);
      if (lVar6 == 0) {
        uVar7 = FUN_1403af230(param_1,param_2);
        local_488 = (char *)FUN_1403af230(param_1,lVar3);
        pcVar11 = "entity \'%s\' for unit \'%s\' used as prefix is not a prefix";
        uVar10 = 0x71;
        local_480 = uVar7;
        goto LAB_1405e9ff8;
      }
      if (iVar12 == 0 && local_46c == 0) {
        local_46c = *(int *)(lVar6 + 0xc);
        iVar12 = *(int *)(lVar6 + 8);
      }
      else if ((*(int *)(lVar6 + 8) != iVar12) || (*(int *)(lVar6 + 0xc) != local_46c)) {
        uVar7 = FUN_1403af230(param_1,lVar1);
        local_488 = (char *)FUN_1403af230(param_1,param_2);
        pcVar11 = "factor for unit \'%s\' is inconsistent with prefix \'%s\'";
        uVar10 = 0x7b;
        local_480 = uVar7;
        goto LAB_1405e9ff8;
      }
      memset(local_460,0,0x418);
      plVar8 = (longlong *)FUN_1400ba4f0(param_1,lVar1,0x170);
      if (*plVar8 == 0) {
        local_470 = 0;
      }
      else {
        uVar10 = FUN_1403b8780(local_460);
        local_470 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      }
    }
    plVar8 = (longlong *)FUN_1400ba4f0(param_1,lVar2,0x16f);
    if (*plVar8 != 0) {
      FUN_1403b8780(local_460);
    }
    if ((lVar3 != 0) && (plVar8 = (longlong *)FUN_1400ba4f0(param_1,lVar3,0x16f), *plVar8 != 0)) {
      FUN_1403b7ad0(local_460,0x2f);
      uVar10 = FUN_1403b8780(local_460,*plVar8);
      local_470 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    pcVar11 = (char *)FUN_1403b89b0(local_460);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
LAB_1405ea194:
      (*DAT_1415033b0)(pcVar11);
      iVar5 = local_46c;
      goto LAB_1405ea19e;
    }
    sVar9 = strlen(pcVar11);
    if ((int)sVar9 == 0) {
      (*DAT_1415033b0)(pcVar11);
      pcVar11 = (char *)0x0;
      goto LAB_1405ea194;
    }
    if (local_468 == (char *)0x0) {
      if (lVar1 != 0 || lVar3 != 0) {
        (*DAT_1415033b0)(*param_3);
        *param_3 = pcVar11;
        iVar5 = local_46c;
        goto LAB_1405ea19e;
      }
      goto LAB_1405ea194;
    }
    iVar5 = strcmp(local_468,pcVar11);
    if (((byte)local_470 & iVar5 != 0) == 0) goto LAB_1405ea194;
    local_480 = FUN_1403af230(param_1,param_2);
    local_488 = local_468;
    local_478 = pcVar11;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/units_ts.c"
                  ,0xa9,"symbol \'%s\' for unit \'%s\' does not match base symbol \'%s\'");
  }
  (*DAT_1415033b0)(pcVar11);
  uVar10 = 0;
LAB_1405ea007:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_4a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_4a8);
  }
  return uVar10;
}


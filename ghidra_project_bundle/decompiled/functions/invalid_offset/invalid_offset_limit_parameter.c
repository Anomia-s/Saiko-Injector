/**
 * Function: invalid_offset_limit_parameter
 * Address:  1403cf310
 * Signature: undefined invalid_offset_limit_parameter(void)
 * Body size: 1020 bytes
 */


void invalid_offset_limit_parameter
               (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [360];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_1f8;
  uStack_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0x10100000100;
  pcVar5 = (char *)FUN_1405f7fe0(0,"entity_ids");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68 = CONCAT71(local_68._1_7_,iVar2 == 0);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"doc");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_4_ = CONCAT13(iVar2 == 0,(undefined3)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"full_paths");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_5_ = CONCAT14(iVar2 == 0,(undefined4)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"inherited");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_7_ = CONCAT16(iVar2 == 0,(undefined6)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"values");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_2_ = CONCAT11(iVar2 == 0,(undefined1)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"builtin");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_3_ = CONCAT12(iVar2 == 0,(undefined2)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"type_info");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    uStack_60 = CONCAT71(uStack_60._1_7_,iVar2 == 0);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"field_info");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    uStack_60._0_2_ = CONCAT11(iVar2 == 0,(undefined1)uStack_60);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"query_info");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    uStack_60._0_3_ = CONCAT12(iVar2 == 0,(undefined2)uStack_60);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"query_plan");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    uStack_60._0_4_ = CONCAT13(iVar2 == 0,(undefined3)uStack_60);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"query_profile");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    uStack_60._0_5_ = CONCAT14(iVar2 == 0,(undefined4)uStack_60);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"table");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68 = CONCAT17(iVar2 == 0,(undefined7)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"fields");
  if (pcVar5 != (char *)0x0) {
    iVar2 = strcmp(pcVar5,"true");
    local_68._0_6_ = CONCAT15(iVar2 == 0,(undefined5)local_68);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"results");
  uVar3 = 0;
  if (pcVar5 == (char *)0x0) {
    bVar8 = false;
  }
  else {
    iVar2 = strcmp(pcVar5,"true");
    bVar8 = iVar2 != 0;
  }
  uStack_60._0_6_ = CONCAT15(bVar8,(undefined5)uStack_60);
  uStack_40 = param_3;
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"offset");
  if (pcVar5 != (char *)0x0) {
    uVar3 = atoi(pcVar5);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_1,"limit");
  if (pcVar5 == (char *)0x0) {
    uVar4 = 1000;
    uVar7 = uVar3 | 1000;
  }
  else {
    uVar4 = atoi(pcVar5);
    uVar7 = uVar3 | uVar4;
  }
  if ((int)uVar7 < 0) {
    error(param_2,"invalid offset/limit parameter");
  }
  else {
    FUN_1400c49e0(local_1d0,param_4,uVar3,uVar4);
    iVar2 = soptimized_out_trivial_queryn(local_1d0,param_2 + 2,&local_68);
    lVar1 = DAT_1416dfbc0;
    if (iVar2 != 0) {
      DAT_1416dfbc0 = 0;
      if (lVar1 != 0) {
        uVar6 = FUN_1403d2b10(0x22,lVar1);
        error(param_2,&DAT_141339891,uVar6);
        (*DAT_1415033b0)(uVar6);
        (*DAT_1415033b0)(lVar1);
      }
      *param_2 = 400;
    }
    FUN_1405f7fe0(param_1,"offset");
  }
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_1f8);
  }
  return;
}


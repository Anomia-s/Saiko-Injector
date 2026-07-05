/**
 * Function: token_encryption_failed
 * Address:  14046ec20
 * Signature: undefined token_encryption_failed(void)
 * Body size: 1034 bytes
 */


undefined4 *
token_encryption_failed
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5,undefined8 *param_6,undefined4 *param_7)

{
  char *pcVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char cVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong lVar8;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_1;
  memset(param_1,0,0x140);
  cVar5 = FUN_14046dc50(&local_b8,local_f8);
  puVar4 = local_58;
  pcVar1 = (char *)((longlong)local_58 + 0x39);
  if (cVar5 == '\0') {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e19878);
    }
    builtin_strncpy(pcVar1,"Client k",8);
    builtin_strncpy((char *)((longlong)puVar4 + 0x41),"eygen fa",8);
    *(undefined8 *)((longlong)puVar4 + 0x46) = 0x64656c69616620;
    return local_58;
  }
  cVar5 = FUN_14046dd50(local_98,local_f8,param_6);
  FUN_14046e980(local_f8,0x20);
  if (cVar5 == '\0') {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e198a0);
    }
    builtin_strncpy(pcVar1,"Key exch",8);
    builtin_strncpy((char *)((longlong)puVar4 + 0x41),"ange fai",8);
    *(undefined4 *)((longlong)puVar4 + 0x49) = 0x64656c;
    return local_58;
  }
  local_138 = *param_6;
  uStack_130 = param_6[1];
  local_128 = param_6[2];
  uStack_120 = param_6[3];
  local_118 = *param_7;
  uStack_114 = param_7[1];
  uStack_110 = param_7[2];
  uStack_10c = param_7[3];
  local_108 = param_7[4];
  uStack_104 = param_7[5];
  uStack_100 = param_7[6];
  uStack_fc = param_7[7];
  cVar5 = FUN_14046de60(local_d8,local_98,local_158,0x60,"luduvo-auth-v1");
  if (cVar5 == '\0') {
    FUN_14046e980(local_98,0x20);
LAB_14046ee1d:
    FUN_14046e980(local_d8,0x20);
    FUN_14046e980(&local_78,0x20);
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e198c8);
    }
    builtin_strncpy(pcVar1,"Key deri",8);
    builtin_strncpy((char *)((longlong)puVar4 + 0x41),"vation f",8);
    *(undefined8 *)((longlong)puVar4 + 0x47) = 0x64656c69616620;
    return local_58;
  }
  cVar5 = FUN_14046de60(&local_78,local_98,local_158,0x60,"luduvo-session-v1");
  FUN_14046e980(local_98,0x20);
  if (cVar5 == '\0') goto LAB_14046ee1d;
  plVar2 = (longlong *)(local_58 + 8);
  uVar6 = param_5 + 0x3d;
  lVar8 = *(longlong *)(local_58 + 8);
  pvVar3 = *(void **)(local_58 + 10);
  sVar7 = uVar6 - ((longlong)pvVar3 - lVar8);
  if (uVar6 < (ulonglong)((longlong)pvVar3 - lVar8)) {
    lVar8 = lVar8 + uVar6;
LAB_14046ed8f:
    *(longlong *)(local_58 + 10) = lVar8;
  }
  else if (sVar7 != 0) {
    if (uVar6 <= (ulonglong)(*(longlong *)(local_58 + 0xc) - lVar8)) {
      lVar8 = (longlong)pvVar3 + sVar7;
      memset(pvVar3,0,sVar7);
      goto LAB_14046ed8f;
    }
    FUN_140037db0(plVar2,uVar6,&local_49);
  }
  *(undefined1 *)*plVar2 = 8;
  lVar8 = *plVar2;
  *(undefined4 *)(lVar8 + 0x11) = local_a8;
  *(undefined4 *)(lVar8 + 0x15) = uStack_a4;
  *(undefined4 *)(lVar8 + 0x19) = uStack_a0;
  *(undefined4 *)(lVar8 + 0x1d) = uStack_9c;
  *(undefined4 *)(lVar8 + 1) = local_b8;
  *(undefined4 *)(lVar8 + 5) = uStack_b4;
  *(undefined4 *)(lVar8 + 9) = uStack_b0;
  *(undefined4 *)(lVar8 + 0xd) = uStack_ac;
  lVar8 = FUN_14046df80(*plVar2 + 0x21,param_5 + 0x1c,param_4,param_5,local_d8,local_158,0x60);
  FUN_14046e980(local_d8);
  if (lVar8 == 0) {
    FUN_14046e980(&local_78,0x20);
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e198f0);
    }
    builtin_strncpy(pcVar1,"Token en",8);
    builtin_strncpy((char *)((longlong)puVar4 + 0x41),"cryption",8);
    *(undefined8 *)((longlong)puVar4 + 0x49) = 0x64656c69616620;
    if (*(longlong *)(local_58 + 8) == *(longlong *)(local_58 + 10)) {
      return local_58;
    }
    *(longlong *)(local_58 + 10) = *(longlong *)(local_58 + 8);
    return local_58;
  }
  uVar6 = lVar8 + 0x21;
  lVar8 = *(longlong *)(local_58 + 8);
  pvVar3 = *(void **)(local_58 + 10);
  sVar7 = uVar6 - ((longlong)pvVar3 - lVar8);
  if (uVar6 < (ulonglong)((longlong)pvVar3 - lVar8)) {
    lVar8 = lVar8 + uVar6;
  }
  else {
    if (sVar7 == 0) goto LAB_14046efd4;
    if ((ulonglong)(*(longlong *)(local_58 + 0xc) - lVar8) < uVar6) {
      FUN_140037db0(plVar2,uVar6,&local_49);
      goto LAB_14046efd4;
    }
    lVar8 = (longlong)pvVar3 + sVar7;
    memset(pvVar3,0,sVar7);
  }
  *(longlong *)(local_58 + 10) = lVar8;
LAB_14046efd4:
  puVar4 = local_58;
  local_58[4] = local_68;
  local_58[5] = uStack_64;
  local_58[6] = uStack_60;
  local_58[7] = uStack_5c;
  *local_58 = local_78;
  local_58[1] = uStack_74;
  local_58[2] = uStack_70;
  local_58[3] = uStack_6c;
  FUN_14046e980(&local_78,0x20);
  *(undefined1 *)(puVar4 + 0xe) = 1;
  return local_58;
}


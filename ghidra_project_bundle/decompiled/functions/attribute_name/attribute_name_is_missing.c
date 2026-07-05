/**
 * Function: attribute_name_is_missing
 * Address:  14078f120
 * Signature: undefined attribute_name_is_missing(void)
 * Body size: 495 bytes
 */


ulonglong *
attribute_name_is_missing
          (undefined8 param_1,ulonglong *param_2,undefined4 *param_3,char *param_4,
          undefined8 *param_5,undefined8 param_6)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b0 [7];
  longlong *local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  ulonglong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(undefined1 *)((longlong)param_2 + 4) = 0;
  local_70 = '\0';
  local_50 = param_2;
  if (DAT_141700460 == (char *)0x0) {
LAB_14078f225:
    if (*param_4 == '\0') {
      FUN_14078f3b0(param_1,param_3,"Attribute name is missing");
    }
    else {
      FUN_14078f3b0(param_1,param_3,"Invalid attribute \'@%s\'",param_4);
    }
  }
  else {
    iVar2 = strcmp(param_4,DAT_141700460);
    puVar5 = &DAT_141700460;
    while (iVar2 != 0) {
      if ((char *)puVar5[0xb] == (char *)0x0) goto LAB_14078f225;
      iVar2 = strcmp(param_4,(char *)puVar5[0xb]);
      puVar5 = puVar5 + 0xb;
    }
    *local_50 = (ulonglong)*(uint *)(puVar5 + 1) | 0x100000000;
    if (*(char *)(puVar5 + 10) == '\x01') {
      FUN_14079dd30(local_b0,puVar5 + 2);
    }
    plVar4 = (longlong *)(param_5[1] * 8 + *(longlong *)*param_5);
    plVar6 = plVar4 + param_5[2];
    uVar1 = *local_50;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
      if (*(int *)(*plVar4 + 0x20) == (int)uVar1) {
        FUN_14078f3b0(param_1,param_3,"Cannot duplicate attribute \'@%s\'",param_4);
      }
    }
    if (local_70 != '\0') {
      local_c8 = *param_3;
      uStack_c4 = param_3[1];
      uStack_c0 = param_3[2];
      uStack_bc = param_3[3];
      if (local_78 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*local_78 + 0x10))(local_78,&local_68,&local_c8,param_6);
      for (; local_68 != local_60; local_68 = local_68 + 0x30) {
        if (*(ulonglong *)(local_68 + 0x28) < 0x10) {
          lVar3 = local_68 + 0x10;
        }
        else {
          lVar3 = *(longlong *)(local_68 + 0x10);
        }
        FUN_14078f3b0(param_1,local_68,&DAT_141339891,lVar3);
      }
      FUN_14079cc00(&local_68);
    }
  }
  if ((local_70 == '\x01') && (local_78 != (longlong *)0x0)) {
    (**(code **)(*local_78 + 0x20))(local_78,local_78 != local_b0);
  }
  return local_50;
}


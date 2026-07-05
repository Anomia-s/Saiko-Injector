/**
 * Function: cannot_update_scripts_for_individual_template
 * Address:  1403cab50
 * Signature: undefined cannot_update_scripts_for_individual_template(void)
 * Body size: 637 bytes
 */


undefined8
cannot_update_scripts_for_individual_template
          (undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [248];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  pcVar3 = (char *)FUN_1403af230();
  lVar4 = FUN_1400ba6e0(param_1,param_2,DAT_1416dfb78,0x28);
  if (*(undefined8 **)(lVar4 + 0x20) == (undefined8 *)0x0) {
    if (*(longlong *)(lVar4 + 8) != 0) {
      (*DAT_1415033b0)();
    }
    uVar9 = (*DAT_1415033b8)(param_4);
    *(undefined8 *)(lVar4 + 8) = uVar9;
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      (*DAT_1415033b0)();
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    if (*(longlong *)(lVar4 + 0x18) != 0) {
      FUN_1403caac0();
    }
    local_148 = 0;
    local_158 = (char *)&local_148;
    lVar5 = token_buffer(param_1,pcVar3,param_4,0);
    *(longlong *)(lVar4 + 0x18) = lVar5;
    if (lVar5 != 0) {
      cVar1 = FUN_140396b90(param_1);
      uVar9 = 0;
      if (cVar1 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_140396810(param_1,local_140);
      }
      FUN_1403ca850(param_1,param_2,param_3);
      uVar8 = param_3;
      if (param_3 == 0) {
        uVar8 = param_2;
      }
      lVar5 = 0x126;
      if (param_3 == 0) {
        lVar5 = DAT_1416dfb78;
      }
      uVar7 = FUN_1400bedc0(param_1,uVar8 & 0xffffffff | lVar5 << 0x20 | 0x8000000000000000);
      iVar2 = FUN_1405f4380(*(undefined8 *)(lVar4 + 0x18),0,&local_148);
      if (iVar2 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = local_148;
        FUN_1403caac0(*(undefined8 *)(lVar4 + 0x18));
        *(undefined8 *)(lVar4 + 0x18) = 0;
        FUN_1403b4150(param_1,param_2 & 0xffffffff | DAT_1416dfb78 << 0x20 | 0x8000000000000000);
        uVar9 = 0xffffffff;
      }
      FUN_1400bedc0(param_1,uVar7);
      if (cVar1 != '\0') {
        FUN_1403969b0(uVar6,local_140);
      }
      goto LAB_1403cac03;
    }
    *(undefined8 *)(lVar4 + 0x10) = local_148;
    local_158 = "script";
    if (pcVar3 != (char *)0x0) {
      local_158 = pcVar3;
    }
    local_150 = local_148;
    FUN_140399630(0xfffffffd,0,0,"%s: %s");
  }
  else {
    local_158 = (char *)0x0;
    pcVar3 = (char *)FUN_1403ae340(param_1,0,**(undefined8 **)(lVar4 + 0x20),".");
    local_158 = pcVar3;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/script.c"
                  ,200,
                  "cannot update scripts for individual templates, update parent script instead (tried to update \'%s\')"
                 );
    (*DAT_1415033b0)(pcVar3);
  }
  uVar9 = 0xffffffff;
LAB_1403cac03:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_178)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_178);
}


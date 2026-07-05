/**
 * Function: vkcreateinstance
 * Address:  140221d50
 * Signature: undefined vkcreateinstance(void)
 * Body size: 832 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong vkcreateinstance(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char **ppcStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  char *local_50;
  byte *local_48;
  byte local_39 [9];
  
  local_39[1] = 0xfe;
  local_39[2] = 0xff;
  local_39[3] = 0xff;
  local_39[4] = 0xff;
  local_39[5] = 0xff;
  local_39[6] = 0xff;
  local_39[7] = 0xff;
  local_39[8] = 0xff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416b84ec) && (FUN_140b6864c(&DAT_1416b84ec), DAT_1416b84ec == -1)) {
    pcVar6 = getenv("LDV_VK_VALIDATION");
    if (pcVar6 == (char *)0x0) {
      DAT_1416b84e8 = true;
    }
    else {
      DAT_1416b84e8 = *pcVar6 != '0';
    }
    _Init_thread_footer(&DAT_1416b84ec);
  }
  cVar2 = vk_ext_debug_utils(param_1 + 0x18,*(undefined8 *)(param_1 + 8),DAT_1416b84e8);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    DAT_1416b6d68 = vkGetInstanceProcAddr;
    _DAT_1416b6d20 = vkGetInstanceProcAddr(0,"vkCreateInstance");
    _DAT_1416b6d88 = (*DAT_1416b6d68)(0,"vkEnumerateInstanceExtensionProperties");
    _DAT_1416b6d98 = (*DAT_1416b6d68)(0,"vkEnumerateInstanceLayerProperties");
    _DAT_1416b7168 = (*DAT_1416b6d68)(0,"vkEnumerateInstanceVersion");
    vkgetdeviceimagesparsememoryrequirements(&DAT_1416b6d20,*(undefined8 *)(param_1 + 0x18));
    vkgetdeviceimagesparsememoryrequirements(&DAT_1416b6d20,*(undefined8 *)(param_1 + 0x28));
    local_50 = "VK_KHR_swapchain";
    local_f0 = 0;
    local_c8 = 0xffffffff;
    local_b8 = 0xffffffff;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    ppcStack_88 = (char **)0x0;
    local_80 = 0;
    local_78 = 0x100;
    local_74 = 0;
    local_73 = 0;
    local_72 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0xf;
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = FUN_140530cf0();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x18);
    uStack_e0 = *(undefined8 *)(param_1 + 0x20);
    local_d8 = *(undefined4 *)(param_1 + 0x28);
    uStack_d4 = *(undefined4 *)(param_1 + 0x2c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x30);
    uStack_cc = *(undefined4 *)(param_1 + 0x34);
    local_c8 = *(undefined4 *)(param_1 + 0x38);
    ppcStack_88 = &local_50;
    local_80 = 1;
    local_f0 = lVar3;
    FUN_140530f40(&local_48,&local_f0);
    pbVar4 = local_48;
    local_48 = (byte *)0x0;
    plVar1 = *(longlong **)(param_1 + 0x70);
    *(byte **)(param_1 + 0x70) = pbVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      pbVar4 = local_48;
      if (local_48 != (byte *)0x0) {
        local_48 = (byte *)0x0;
        (**(code **)(*(longlong *)pbVar4 + 0x10))();
      }
      pbVar4 = *(byte **)(param_1 + 0x70);
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),pbVar4 != (byte *)0x0);
    if ((pbVar4 == (byte *)0x0) &&
       ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
        (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df5180),
        DAT_14151e360 != 0)))) {
      lVar3 = DAT_14151e360;
      local_39[0] = 0;
      local_48 = local_39;
      cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_48);
      if (cVar2 == '\0') {
        do {
          local_48 = (byte *)0x64;
          FUN_140008100(&local_48);
          local_48 = local_39;
          cVar2 = FUN_140b53dc0(lVar3,&PTR_DAT_140dc1aa0,&local_48);
        } while (cVar2 == '\0');
      }
      if ((local_39[0] & 1) == 0) {
        do {
          local_48 = (byte *)0x64;
          FUN_140008100(&local_48);
        } while ((local_39[0] & 1) == 0);
      }
    }
    if (0xf < local_58) {
      uVar5 = local_58 + 1;
      lVar3 = local_70;
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(local_70 + -8);
        if (0x1f < (ulonglong)((local_70 + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = local_58 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar3,uVar5);
    }
  }
  return uVar7 & 0xffffffff;
}


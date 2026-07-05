/**
 * Function: ldv_d3d12_debug
 * Address:  14022bd90
 * Signature: undefined ldv_d3d12_debug(void)
 * Body size: 688 bytes
 */


ulonglong ldv_d3d12_debug(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
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
               0x140) < DAT_1416b84f4) && (FUN_140b6864c(&DAT_1416b84f4), DAT_1416b84f4 == -1)) {
    pcVar4 = getenv("LDV_D3D12_DEBUG");
    if (pcVar4 == (char *)0x0) {
      DAT_1416b84f0 = false;
    }
    else {
      DAT_1416b84f0 = *pcVar4 != '0' && *pcVar4 != '\0';
    }
    _Init_thread_footer(&DAT_1416b84f4);
  }
  cVar3 = DAT_1416b84f0;
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_88 = "false";
    if (DAT_1416b84f0 != '\0') {
      local_88 = "true";
    }
    index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df53d0,&local_88);
  }
  cVar3 = uluduvo_d3d12_device(param_1 + 0x18,*(undefined8 *)(param_1 + 8),cVar3);
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    local_60 = 0x40000000400;
    local_50 = 0x100;
    local_4b = 0;
    pcVar4 = *(char **)(param_1 + 0x10);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_140530cf0();
    }
    local_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    local_70 = *(undefined4 *)(param_1 + 0x38);
    uStack_6c = *(undefined4 *)(param_1 + 0x3c);
    uStack_68 = *(undefined4 *)(param_1 + 0x40);
    uStack_64 = *(undefined4 *)(param_1 + 0x44);
    local_4c = 0;
    local_58 = 0x1000008000;
    local_88 = pcVar4;
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      FUN_140b5d440(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df53f8,&local_60,
                    (longlong)&local_60 + 4,&local_58,(longlong)&local_58 + 4);
    }
    FUN_14053e3f0(&local_48,&local_88);
    pbVar5 = local_48;
    local_48 = (byte *)0x0;
    plVar1 = *(longlong **)(param_1 + 0x1d8);
    *(byte **)(param_1 + 0x1d8) = pbVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      pbVar5 = local_48;
      if (local_48 != (byte *)0x0) {
        local_48 = (byte *)0x0;
        (**(code **)(*(longlong *)pbVar5 + 0x10))();
      }
      pbVar5 = *(byte **)(param_1 + 0x1d8);
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),pbVar5 != (byte *)0x0);
    if (pbVar5 == (byte *)0x0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df5420),
         DAT_14151e360 != 0)) {
        lVar2 = DAT_14151e360;
        local_39[0] = 0;
        local_48 = local_39;
        cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_48);
        if (cVar3 == '\0') {
          do {
            local_48 = (byte *)0x64;
            FUN_140008100(&local_48);
            local_48 = local_39;
            cVar3 = FUN_140b53dc0(lVar2,&PTR_DAT_140dc1aa0,&local_48);
          } while (cVar3 == '\0');
        }
        if ((local_39[0] & 1) == 0) {
          do {
            local_48 = (byte *)0x64;
            FUN_140008100(&local_48);
          } while ((local_39[0] & 1) == 0);
        }
      }
    }
    else if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df5448);
    }
  }
  return uVar6 & 0xffffffff;
}


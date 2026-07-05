/**
 * Function: uluduvo_d3d12_copy_queue
 * Address:  14053dc90
 * Signature: undefined uluduvo_d3d12_copy_queue(void)
 * Body size: 472 bytes
 */


bool uluduvo_d3d12_copy_queue(longlong *param_1,uint param_2,char *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint local_60 [4];
  char *local_50;
  uint *local_48;
  uint local_3c [3];
  
  local_3c[1] = 0xfffffffe;
  local_3c[2] = 0xffffffff;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  plVar1 = (longlong *)*param_4;
  local_60[0] = param_2;
  local_50 = param_3;
  if (plVar1 != (longlong *)0x0) {
    *param_4 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  iVar4 = (**(code **)(*param_1 + 0x40))(param_1,local_60,&DAT_140e52ca0,param_4);
  if (iVar4 < 0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_48 = (uint *)CONCAT44(local_48._4_4_,iVar4);
      index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52c20,&local_50,
                          &local_48);
      if (DAT_14151e360 == 0) goto LAB_14053de56;
    }
    lVar2 = DAT_14151e360;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_48 = local_3c;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_48);
    if (cVar3 == '\0') {
      do {
        local_48 = (uint *)0x64;
        FUN_140008100(&local_48);
        local_48 = local_3c;
        cVar3 = FUN_140b53dc0(lVar2,&PTR_DAT_140dc1aa0,&local_48);
      } while (cVar3 == '\0');
    }
    if ((local_3c[0] & 1) == 0) {
      do {
        local_48 = (uint *)0x64;
        FUN_140008100(&local_48);
      } while ((local_3c[0] & 1) == 0);
    }
    goto LAB_14053de56;
  }
  iVar5 = strcmp(param_3,"graphics");
  if (iVar5 == 0) {
    pwVar6 = L"Luduvo D3D12 Graphics Queue";
LAB_14053de18:
    (**(code **)(*(longlong *)*param_4 + 0x30))((longlong *)*param_4,pwVar6);
  }
  else {
    iVar5 = strcmp(param_3,"compute");
    if (iVar5 == 0) {
      pwVar6 = L"Luduvo D3D12 Compute Queue";
      goto LAB_14053de18;
    }
    iVar5 = strcmp(param_3,"copy");
    if (iVar5 == 0) {
      pwVar6 = L"Luduvo D3D12 Copy Queue";
      goto LAB_14053de18;
    }
  }
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_48 = (uint *)CONCAT44(local_48._4_4_,local_60[2]);
    local_3c[0] = param_2;
    index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52c48,&local_50,
                        local_3c,&local_48);
  }
LAB_14053de56:
  return -1 < iVar4;
}


/**
 * Function: primitivetype_unsupported_by_this_device
 * Address:  14072e420
 * Signature: undefined primitivetype_unsupported_by_this_device(void)
 * Body size: 1667 bytes
 */


longlong **
primitivetype_unsupported_by_this_device
          (longlong param_1,longlong **param_2,byte *param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined1 local_280 [328];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined8 local_124;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  uint local_fc;
  byte local_f8;
  byte local_f7;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_bc;
  uint local_b8;
  undefined4 auStack_b4 [8];
  undefined4 local_94;
  undefined8 local_90;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_3[0xc4] == 1) && (*(char *)(param_1 + 0x501) == '\0')) {
    local_2f0 = 0;
    local_2f8 = (char *)FUN_140b65d30(0x40);
    local_2e8 = 0x32;
    local_2e0 = 0x3f;
    builtin_strncpy(local_2f8,"Single-pass stereo is not supported by this device",0x33);
    FUN_14053e350(param_1 + 0x10,&local_2f8);
    pcVar6 = local_2f8;
    uVar7 = local_2e0;
  }
  else {
    memset(&local_2f0,0,0x288);
    local_2f8 = *(char **)(param_4 + 0xa0);
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      local_2f0 = *(longlong *)(lVar4 + 0x80);
      local_2e8 = *(longlong *)(lVar4 + 0x88) - local_2f0;
    }
    lVar4 = *(longlong *)(param_3 + 0x18);
    if (lVar4 != 0) {
      local_2c0 = *(longlong *)(lVar4 + 0x80);
      local_2b8 = *(longlong *)(lVar4 + 0x88) - local_2c0;
    }
    lVar4 = *(longlong *)(param_3 + 0x20);
    if (lVar4 != 0) {
      local_2d0 = *(longlong *)(lVar4 + 0x80);
      local_2c8 = *(longlong *)(lVar4 + 0x88) - local_2d0;
    }
    lVar4 = *(longlong *)(param_3 + 0x28);
    if (lVar4 != 0) {
      local_2b0 = *(longlong *)(lVar4 + 0x80);
      local_2a8 = *(longlong *)(lVar4 + 0x88) - local_2b0;
    }
    lVar4 = *(longlong *)(param_3 + 0x30);
    if (lVar4 != 0) {
      local_2e0 = *(ulonglong *)(lVar4 + 0x80);
      local_2d8 = *(longlong *)(lVar4 + 0x88) - local_2e0;
    }
    FUN_14072ebd0(param_3 + 0x38,local_280);
    local_108 = (uint)param_3[0x79];
    local_104 = (uint)param_3[0x7a];
    local_100 = FUN_14071d6d0(param_3[0x7b]);
    local_fc = (uint)param_3[0x7c];
    local_f8 = param_3[0x7d];
    local_f7 = param_3[0x7e];
    local_f4 = FUN_14071d6d0(param_3[0x81]);
    local_f0 = FUN_14071d6d0(param_3[0x82]);
    local_ec = FUN_14071d6d0(param_3[0x83]);
    local_e8 = FUN_14071d6d0(param_3[0x84]);
    local_e4 = FUN_14071d6d0(param_3[0x85]);
    local_e0 = FUN_14071d6d0(param_3[0x86]);
    local_dc = FUN_14071d6d0(param_3[0x87]);
    local_d8 = FUN_14071d6d0(param_3[0x88]);
    if ((((param_3[0x7c] | param_3[0x79]) & 1) != 0) && (*(char *)(param_5 + 0x10) == '\0')) {
      local_108 = 0;
      local_fc = 0;
      (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                (*(longlong **)(param_1 + 0x68),1,
                 "depthEnable or stencilEnable is true, but no depth target is bound");
    }
    if (param_3[0x8c] == 1) {
      local_134 = 2;
      bVar2 = param_3[0x8d];
joined_r0x00014072e711:
      if (bVar2 != 2) goto LAB_14072e713;
LAB_14072e739:
      local_130 = 1;
    }
    else {
      if (param_3[0x8c] != 0) {
        httplib::ClientImpl::vfunction4();
        bVar2 = param_3[0x8d];
        goto joined_r0x00014072e711;
      }
      local_134 = 3;
      bVar2 = param_3[0x8d];
      if (bVar2 == 2) goto LAB_14072e739;
LAB_14072e713:
      if (bVar2 == 1) {
        local_130 = 2;
      }
      else if (bVar2 == 0) {
        local_130 = 3;
      }
      else {
        httplib::ClientImpl::vfunction4();
      }
    }
    local_12c = (uint)param_3[0x8e];
    local_128 = *(undefined4 *)(param_3 + 0x94);
    local_124 = *(undefined8 *)(param_3 + 0x98);
    local_11c = (uint)param_3[0x8f];
    local_118 = (uint)param_3[0x91];
    local_114 = (uint)param_3[0x92];
    local_10c = (uint)param_3[0xa2];
    local_110 = (uint)param_3[0xa0];
    bVar2 = *param_3;
    if (((ulonglong)bVar2 < 9 & (byte)(0x1fb >> (bVar2 & 0x1f))) != 0) {
      local_bc = *(undefined4 *)(&DAT_14123cbfc + (ulonglong)bVar2 * 4);
      lVar4 = FUN_140720860(*(undefined1 *)(param_5 + 0x10));
      local_94 = *(undefined4 *)(lVar4 + 0xc);
      local_90 = *(undefined8 *)(param_5 + 0x14);
      if (*(int *)(param_5 + 8) == 0) {
        local_b8 = 0;
        lVar4 = *(longlong *)(param_3 + 8);
      }
      else {
        uVar7 = 0;
        do {
          lVar4 = FUN_140720860(*(undefined1 *)(param_5 + uVar7));
          auStack_b4[uVar7] = *(undefined4 *)(lVar4 + 0xc);
          uVar7 = uVar7 + 1;
          local_b8 = *(uint *)(param_5 + 8);
        } while (uVar7 < local_b8);
        lVar4 = *(longlong *)(param_3 + 8);
      }
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x28) != *(longlong *)(lVar4 + 0x30)) {
          local_c8 = (undefined4)
                     ((ulonglong)(*(longlong *)(lVar4 + 0x30) - *(longlong *)(lVar4 + 0x28)) >> 5);
          local_d0 = *(undefined8 *)(lVar4 + 0x28);
        }
      }
      local_138 = 0xffffffff;
      local_40 = (longlong *)0x0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                        (*(longlong **)(param_1 + 0x10),&local_2f8,&DAT_14123cc20);
      if (iVar3 < 0) {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_68 = (char *)FUN_140b65d30(0x40);
        local_58 = 0x31;
        uStack_50 = 0x3f;
        builtin_strncpy(local_68,"Failed to create a graphics pipeline state object",0x32);
        FUN_14053e350(param_1 + 0x10,&local_68);
        if (0xf < uStack_50) {
          uVar7 = uStack_50 + 1;
          pcVar6 = local_68;
          if (0xfff < uVar7) {
            pcVar6 = *(char **)(local_68 + -8);
            if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar6)) goto LAB_14072ea8a;
            uVar7 = uStack_50 + 0x28;
          }
          thunk_FUN_140b68ba8(pcVar6,uVar7);
        }
        *param_2 = (longlong *)0x0;
      }
      else {
        *param_2 = (longlong *)0x0;
        if (param_2 != &local_40) {
          *param_2 = local_40;
          return param_2;
        }
      }
      plVar1 = local_40;
      if (local_40 == (longlong *)0x0) {
        return param_2;
      }
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
      return param_2;
    }
    uStack_60 = 0;
    local_68 = (char *)FUN_140b65d30(0x30);
    local_58 = 0x28;
    uStack_50 = 0x2f;
    builtin_strncpy(local_68,"PrimitiveType unsupported by this device",0x29);
    FUN_14053e350(param_1 + 0x10,&local_68);
    pcVar6 = local_68;
    uVar7 = uStack_50;
  }
  if (0xf < uVar7) {
    uVar5 = uVar7 + 1;
    if (0xfff < uVar5) {
      if ((char *)0x1f < pcVar6 + (-8 - (longlong)*(char **)(pcVar6 + -8))) {
LAB_14072ea8a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar7 + 0x28;
      pcVar6 = *(char **)(pcVar6 + -8);
    }
    thunk_FUN_140b68ba8(pcVar6,uVar5);
  }
  *param_2 = (longlong *)0x0;
  return param_2;
}


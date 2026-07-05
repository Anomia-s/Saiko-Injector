/**
 * Function: failed_to_create_a_meshlet_pipeline_state_obj
 * Address:  1407328b0
 * Signature: undefined failed_to_create_a_meshlet_pipeline_state_obj(void)
 * Body size: 1040 bytes
 */


longlong **
failed_to_create_a_meshlet_pipeline_state_obj
          (longlong param_1,longlong **param_2,undefined1 *param_3,longlong param_4,longlong param_5
          )

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_2e8 [8];
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined4 local_2b8;
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined4 local_2a0;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined4 local_288;
  undefined1 local_284 [44];
  undefined4 local_258;
  undefined4 local_254 [3];
  undefined4 local_248;
  undefined4 local_220;
  undefined1 local_21c [332];
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 auStack_b4 [8];
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 *local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = (longlong *)0x0;
  memset(local_2e8,0,0x260);
  local_2d8 = 0xe;
  local_2d0 = 0x18;
  local_2b8 = 0x19;
  local_2a0 = 2;
  local_288 = 10;
  local_258 = 0xb;
  local_220 = 8;
  local_d0 = 0x11;
  local_c0 = 9;
  local_b8 = 0xf;
  local_90 = 0x10;
  local_2e0 = *(undefined8 *)(param_4 + 0xa0);
  FUN_14072ebd0(param_3 + 0x20,local_21c);
  FUN_14072ef20(param_3 + 0x61,local_254);
  if ((((param_3[100] | param_3[0x61]) & 1) != 0) && (*(char *)(param_5 + 0x10) == '\0')) {
    local_254[0] = 0;
    local_248 = 0;
  }
  FUN_14072efc0(param_3 + 0x74,local_284);
  switch(*param_3) {
  case 0:
    local_2d4 = 1;
    break;
  case 1:
    local_2d4 = 2;
    break;
  default:
    httplib::ClientImpl::vfunction4();
    goto LAB_140732aa1;
  case 3:
  case 4:
    local_2d4 = 3;
    break;
  case 8:
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (char *)0x0;
    uStack_70 = 0;
    local_78 = (char *)FUN_140b65d30(0x30);
    local_68 = 0x2b;
    uStack_60 = 0x2f;
    builtin_strncpy(local_78,"Unsupported primitive topology for meshlets",0x2c);
    FUN_14053e350(param_1 + 0x10,&local_78);
    if (uStack_60 < 0x10) goto LAB_140732aa1;
    uVar2 = uStack_60 + 1;
    pcVar4 = local_78;
    if (0xfff < uVar2) {
      pcVar4 = *(char **)(local_78 + -8);
      if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar4)) goto LAB_140732ca7;
      uVar2 = uStack_60 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar4,uVar2);
LAB_140732aa1:
    *param_2 = (longlong *)0x0;
    return param_2;
  }
  local_cc = *(undefined8 *)(param_5 + 0x14);
  local_bc = 0xffffffff;
  uVar6 = 0;
  local_94 = 0;
  if (*(int *)(param_5 + 8) != 0) {
    do {
      lVar3 = FUN_140720860(*(undefined1 *)(param_5 + (ulonglong)uVar6));
      auStack_b4[uVar6] = *(undefined4 *)(lVar3 + 0xc);
      uVar6 = uVar6 + 1;
      local_94 = *(uint *)(param_5 + 8);
    } while (uVar6 < local_94);
  }
  lVar3 = FUN_140720860(*(undefined1 *)(param_5 + 0x10));
  local_8c = *(undefined4 *)(lVar3 + 0xc);
  plVar5 = *(longlong **)(param_3 + 8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,local_2c8,local_2c0);
  }
  plVar5 = *(longlong **)(param_3 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,local_2b0,local_2a8);
  }
  plVar5 = *(longlong **)(param_3 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,local_298,local_290);
  }
  local_88 = 0x260;
  local_80 = local_2e8;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x178))
                    (*(longlong **)(param_1 + 0x18),&local_88,&DAT_14123cc20);
  if (iVar1 < 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (char *)0x0;
    uStack_70 = 0;
    local_78 = (char *)FUN_140b65d30(0x40);
    local_68 = 0x30;
    uStack_60 = 0x3f;
    builtin_strncpy(local_78,"Failed to create a meshlet pipeline state object",0x31);
    FUN_14053e350(param_1 + 0x10,&local_78);
    if (0xf < uStack_60) {
      uVar2 = uStack_60 + 1;
      pcVar4 = local_78;
      if (0xfff < uVar2) {
        pcVar4 = *(char **)(local_78 + -8);
        if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar4)) {
LAB_140732ca7:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar2 = uStack_60 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar4,uVar2);
    }
    *param_2 = (longlong *)0x0;
    plVar5 = local_50;
  }
  else {
    *param_2 = (longlong *)0x0;
    plVar5 = local_50;
    if (param_2 != &local_50) {
      *param_2 = local_50;
      return param_2;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar5 + 0x10))();
  }
  return param_2;
}


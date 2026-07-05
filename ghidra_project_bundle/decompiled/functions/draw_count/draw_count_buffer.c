/**
 * Function: draw_count_buffer
 * Address:  1404dacd0
 * Signature: undefined draw_count_buffer(void)
 * Body size: 798 bytes
 */


ulonglong draw_count_buffer(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong local_f8 [2];
  undefined4 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined4 uStack_c7;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  undefined5 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  undefined5 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puStack_e8 = (undefined4 *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0xf;
  local_c8 = 0;
  uStack_c3 = 0;
  uStack_c0 = 0;
  local_b8 = 1;
  local_b4 = 0;
  local_b0 = 0;
  local_f8[0] = (param_2 & 0xffffffff) * 0x14;
  local_f8[1] = 0x14;
  uStack_c7 = 1;
  uStack_c1 = 1;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  plVar5 = (longlong *)FUN_140b65d30(0x20);
  local_78 = (undefined4 *)&DAT_00000010;
  uStack_70 = 0x1f;
  *(undefined4 *)plVar5 = 0x6c6c7543;
  builtin_strncpy((char *)((longlong)plVar5 + 4),"ed D",4);
  *(undefined4 *)(plVar5 + 1) = 0x20776172;
  builtin_strncpy((char *)((longlong)plVar5 + 0xc),"Args",4);
  *(char *)(plVar5 + 2) = '\0';
  if (local_d0 < 0x10) {
    local_88 = plVar5;
    FUN_1400069b0(&puStack_e8,0x10);
  }
  else {
    uStack_d8 = 0x10;
    uVar1 = *(undefined4 *)((longlong)plVar5 + 4);
    lVar3 = plVar5[1];
    uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
    *puStack_e8 = (int)*plVar5;
    puStack_e8[1] = uVar1;
    puStack_e8[2] = (int)lVar3;
    puStack_e8[3] = uVar2;
    *(undefined1 *)(puStack_e8 + 4) = 0;
    local_88 = plVar5;
  }
  local_b8 = 0x10;
  local_b4 = CONCAT11(local_b4._1_1_,1);
  thunk_FUN_140b68ba8(plVar5,0x20);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
            (*(longlong **)(*param_1 + 0x18),&local_88,local_f8);
  plVar6 = local_88;
  local_88 = (longlong *)0x0;
  plVar5 = (longlong *)*param_3;
  *param_3 = (longlong)plVar6;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = local_88;
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar6 = (longlong *)*param_3;
  }
  if (plVar6 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    uStack_70 = 0;
    local_68 = 0;
    uStack_80 = 0;
    local_78 = (undefined4 *)0x0;
    local_60 = 0xf;
    local_58 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_50 = 0;
    local_48 = 1;
    local_44 = 0;
    local_40 = 0;
    local_88 = (longlong *)0x4;
    uStack_57 = 1;
    uStack_55 = 1;
    uStack_51 = 1;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    plVar5 = (longlong *)FUN_140b65d30(0x20);
    local_98 = 0x11;
    uStack_90 = 0x1f;
    *(undefined4 *)plVar5 = 0x77617244;
    builtin_strncpy((char *)((longlong)plVar5 + 4)," Cou",4);
    *(undefined4 *)(plVar5 + 1) = 0x4220746e;
    builtin_strncpy((char *)((longlong)plVar5 + 0xc),"uffe",4);
    *(undefined2 *)(plVar5 + 2) = 0x72;
    if (local_60 < 0x11) {
      local_a8 = plVar5;
      FUN_1400069b0(&local_78,0x11);
    }
    else {
      local_68 = 0x11;
      lVar3 = *plVar5;
      uVar1 = *(undefined4 *)((longlong)plVar5 + 4);
      lVar4 = plVar5[1];
      uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
      *(char *)(local_78 + 4) = (char)plVar5[2];
      *local_78 = (int)lVar3;
      local_78[1] = uVar1;
      local_78[2] = (int)lVar4;
      local_78[3] = uVar2;
      *(undefined1 *)((longlong)local_78 + 0x11) = 0;
      local_a8 = plVar5;
    }
    local_48 = 0x10;
    local_44 = CONCAT11(local_44._1_1_,1);
    thunk_FUN_140b68ba8(plVar5,0x20);
    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
              (*(longlong **)(*param_1 + 0x18),&local_a8,&local_88);
    plVar6 = local_a8;
    local_a8 = (longlong *)0x0;
    plVar5 = (longlong *)*param_4;
    *param_4 = (longlong)plVar6;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))();
      plVar5 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)0x0;
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),*param_4 != 0);
    if (0xf < local_60) {
      uVar7 = local_60 + 1;
      puVar8 = local_78;
      if (0xfff < uVar7) {
        puVar8 = *(undefined4 **)(local_78 + -2);
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_78 + (-8 - (longlong)puVar8)))
        goto LAB_1404dafd5;
        uVar7 = local_60 + 0x28;
      }
      thunk_FUN_140b68ba8(puVar8,uVar7);
    }
  }
  if (0xf < local_d0) {
    uVar7 = local_d0 + 1;
    puVar8 = puStack_e8;
    if (0xfff < uVar7) {
      puVar8 = *(undefined4 **)(puStack_e8 + -2);
      if (0x1f < (ulonglong)((longlong)puStack_e8 + (-8 - (longlong)puVar8))) {
LAB_1404dafd5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_d0 + 0x28;
    }
    thunk_FUN_140b68ba8(puVar8,uVar7);
  }
  return uVar9 & 0xffffffff;
}


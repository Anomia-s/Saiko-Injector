/**
 * Function: thread_name
 * Address:  140032260
 * Signature: undefined thread_name(void)
 * Body size: 1757 bytes
 */


void thread_name(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *_Src;
  void *local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_c8 = &DAT_1413a2ad6;
  local_d0 = &DAT_1413a2ad6;
  local_d8 = &DAT_1413a2ad6;
  local_e0 = &DAT_1413a2ad6;
  local_e8 = &DAT_1413a2ad6;
  local_f0 = &DAT_1413a2ad6;
  local_f8 = &DAT_1413a2ad6;
  local_100 = &DAT_1413a2ad6;
  local_108 = &DAT_1413a2ad6;
  local_110 = &DAT_1413a2ad6;
  local_118 = &DAT_1413a2ad6;
  local_120 = &DAT_1413a2ad6;
  local_128 = &DAT_1413a2ad6;
  local_130 = &DAT_1413a2ad6;
  local_138 = &DAT_1413a2ad6;
  local_140 = &DAT_1413a2ad6;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  uVar5 = param_1[2];
  _Src = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Src = (undefined8 *)*param_1;
  }
  if ((longlong)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar5 < 0x10) {
    uStack_150 = 0xf;
    local_168 = (void *)*_Src;
    uStack_160 = _Src[1];
    local_158 = uVar5;
  }
  else {
    uVar2 = uVar5 | 0xf;
    uVar4 = 0x16;
    if (0x16 < uVar2) {
      uVar4 = uVar2;
    }
    if (uVar2 < 0xfff) {
      local_168 = (void *)FUN_140b65d30(uVar4 + 1);
    }
    else {
      lVar3 = FUN_140b65d30(uVar4 + 0x28);
      local_168 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)local_168 - 8) = lVar3;
    }
    local_158 = uVar5;
    uStack_150 = uVar4;
    memcpy(local_168,_Src,uVar5 + 1);
  }
  invalid_format_pattern
            (param_1,&local_c0,param_1 + 0x52,&local_168,&local_140,&local_138,&local_130,&local_128
             ,&local_120,&local_118,&local_110,&local_108,&local_100,&local_f8,&local_f0,&local_e8,
             &local_e0,&local_d8,&local_d0,&local_c8);
  plVar1 = param_1 + 0xe;
  if (plVar1 == &local_c0) {
    param_1[0x20] = local_30;
    param_1[0x21] = uStack_28;
    param_1[0x1e] = local_40;
    param_1[0x1f] = uStack_38;
    param_1[0x1c] = local_50;
    param_1[0x1d] = uStack_48;
    param_1[0x1a] = local_60;
    param_1[0x1b] = uStack_58;
    param_1[0x18] = local_70;
    param_1[0x19] = uStack_68;
    param_1[0x16] = local_80;
    param_1[0x17] = uStack_78;
    param_1[0x14] = local_90;
    param_1[0x15] = uStack_88;
    *(undefined4 *)(param_1 + 0x12) = local_a0;
    *(undefined4 *)((longlong)param_1 + 0x94) = uStack_9c;
    *(undefined4 *)(param_1 + 0x13) = uStack_98;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_94;
    if (0xf < uStack_a8) {
      uVar5 = uStack_a8 + 1;
      lVar3 = local_c0;
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(local_c0 + -8);
        if (0x1f < (ulonglong)((local_c0 + -8) - lVar3)) goto LAB_140032924;
        uVar5 = uStack_a8 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar3,uVar5);
    }
  }
  else {
    uVar5 = param_1[0x11];
    if (0xf < uVar5) {
      lVar3 = *plVar1;
      uVar4 = uVar5 + 1;
      lVar6 = lVar3;
      if (0xfff < uVar4) {
        lVar6 = *(longlong *)(lVar3 + -8);
        if (0x1f < (ulonglong)((lVar3 + -8) - lVar6)) {
LAB_140032924:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uVar5 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar6,uVar4);
    }
    param_1[0x10] = local_b0;
    param_1[0x11] = uStack_a8;
    *plVar1 = local_c0;
    param_1[0xf] = uStack_b8;
    param_1[0x20] = local_30;
    param_1[0x21] = uStack_28;
    param_1[0x1e] = local_40;
    param_1[0x1f] = uStack_38;
    param_1[0x1c] = local_50;
    param_1[0x1d] = uStack_48;
    param_1[0x1a] = local_60;
    param_1[0x1b] = uStack_58;
    param_1[0x18] = local_70;
    param_1[0x19] = uStack_68;
    param_1[0x16] = local_80;
    param_1[0x17] = uStack_78;
    param_1[0x14] = local_90;
    param_1[0x15] = uStack_88;
    param_1[0x12] = CONCAT44(uStack_9c,local_a0);
    param_1[0x13] = CONCAT44(uStack_94,uStack_98);
  }
  lVar3 = param_1[0x12];
  param_1[lVar3 * 3 + 0x22] = "time";
  param_1[lVar3 * 3 + 0x23] = 4;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x13];
  param_1[lVar3 * 3 + 0x22] = "file_name";
  param_1[lVar3 * 3 + 0x23] = 9;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x14];
  param_1[lVar3 * 3 + 0x22] = "caller_function";
  param_1[lVar3 * 3 + 0x23] = 0xf;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x15];
  param_1[lVar3 * 3 + 0x22] = "log_level";
  param_1[lVar3 * 3 + 0x23] = 9;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x16];
  param_1[lVar3 * 3 + 0x22] = "log_level_short_code";
  param_1[lVar3 * 3 + 0x23] = 0x14;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x17];
  param_1[lVar3 * 3 + 0x22] = "line_number";
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xc;
  lVar3 = param_1[0x18];
  param_1[lVar3 * 3 + 0x22] = "logger";
  param_1[lVar3 * 3 + 0x23] = 6;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x19];
  param_1[lVar3 * 3 + 0x22] = "full_path";
  param_1[lVar3 * 3 + 0x23] = 9;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x1a];
  param_1[lVar3 * 3 + 0x22] = "thread_id";
  param_1[lVar3 * 3 + 0x23] = 9;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x1b];
  param_1[lVar3 * 3 + 0x22] = "thread_name";
  param_1[lVar3 * 3 + 0x23] = 0xb;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x1c];
  param_1[lVar3 * 3 + 0x22] = "process_id";
  param_1[lVar3 * 3 + 0x23] = 10;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x1d];
  param_1[lVar3 * 3 + 0x22] = "source_location";
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xc;
  lVar3 = param_1[0x1e];
  param_1[lVar3 * 3 + 0x22] = "short_source_location";
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xc;
  lVar3 = param_1[0x1f];
  param_1[lVar3 * 3 + 0x22] = "message";
  param_1[lVar3 * 3 + 0x23] = 7;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x20];
  param_1[lVar3 * 3 + 0x22] = &DAT_141335651;
  param_1[lVar3 * 3 + 0x23] = 4;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  lVar3 = param_1[0x21];
  param_1[lVar3 * 3 + 0x22] = "named_args";
  param_1[lVar3 * 3 + 0x23] = 10;
  *(undefined4 *)(param_1 + lVar3 * 3 + 0x24) = 0xd;
  return;
}


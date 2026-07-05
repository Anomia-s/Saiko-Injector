// FUN_14014bf50 @ 14014bf50

void FUN_14014bf50(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    uVar2 = video_subsystem_has_not_been_initialized(param_1);
    if (*(int *)(param_1 + 0xa8) == 0 && *(int *)(param_1 + 0xac) == 0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      uVar1 = *(uint *)(param_1 + 0x48);
    }
    else {
      local_20 = param_1 + 200;
      local_28 = 1.0 < *(float *)(param_1 + 0xb0);
      couldnt_find_any_matching_video_modes
                (uVar2,*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac),
                 *(undefined4 *)(param_1 + 0xb4));
      uVar1 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar1 & 0x49) == 1) {
      video_subsystem_has_not_been_initialized(param_1,2,1);
    }
  }
  local_14 = 0;
  local_18 = 0;
  video_subsystem_has_not_been_initialized(param_1,&local_14,&local_18);
  sdl_quit_on_last_window_close(param_1,0x207,local_14,local_18);
  video_subsystem_has_not_been_initialized(param_1);
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}



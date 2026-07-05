/**
 * Function: window_framebuffer_support_not_available
 * Address:  14014b070
 * Signature: undefined window_framebuffer_support_not_available(void)
 * Body size: 654 bytes
 */


undefined8 window_framebuffer_support_not_available(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (DAT_1415259c8 == (undefined8 *)0x0) {
    pcVar4 = "Video subsystem has not been initialized";
  }
  else {
    cVar2 = FUN_1403d8fa0(param_1,1);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x108) == '\0') {
        if (*(longlong *)(param_1 + 0x100) != 0) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x100) + 0x30);
          *pbVar1 = *pbVar1 & 0xfe;
          parameter_s_is_invalid(*(undefined8 *)(param_1 + 0x100));
          *(undefined8 *)(param_1 + 0x100) = 0;
        }
        local_1c = 0;
        local_28 = 0;
        local_2c = 0;
        video_subsystem_has_not_been_initialized(param_1,&local_30,&local_34);
        puVar7 = DAT_1415259c8;
        if (*(char *)(DAT_1415259c8 + 0x61) == '\0') {
          if (*(char *)((longlong)DAT_1415259c8 + 0x309) != '\0') {
LAB_14014b22a:
            puVar7 = DAT_1415259c8;
            *(undefined1 *)(DAT_1415259c8 + 0x61) = 1;
            goto LAB_14014b238;
          }
          pcVar4 = (char *)FUN_140110550("SDL_FRAMEBUFFER_ACCELERATION");
          if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
            if (*pcVar4 != '0') {
              iVar3 = FUN_1400fd210(pcVar4,"false");
              if (iVar3 != 0) {
                iVar3 = FUN_1400fd210(pcVar4,"software");
                goto LAB_14014b1b0;
              }
            }
            goto LAB_14014b22a;
          }
          if (DAT_1415259c8[0x27] != 0) {
            iVar3 = FUN_1400fd200(*DAT_1415259c8,"windows");
LAB_14014b1b0:
            if (iVar3 == 0) goto LAB_14014b22a;
          }
          local_48 = &local_2c;
          cVar2 = video_subsystem_has_not_been_initialized();
          puVar7 = DAT_1415259c8;
          if (cVar2 == '\0') goto LAB_14014b22a;
          DAT_1415259c8[0x27] = video_subsystem_has_not_been_initialized;
          puVar7[0x28] = video_subsystem_has_not_been_initialized;
          puVar7[0x29] = video_subsystem_has_not_been_initialized;
          puVar7[0x2a] = video_subsystem_has_not_been_initialized;
          puVar7[0x2b] = video_subsystem_has_not_been_initialized;
          *(undefined1 *)(puVar7 + 0x61) = 1;
LAB_14014b26b:
          lVar6 = *(longlong *)(param_1 + 0x100);
          if (lVar6 == 0) {
            local_48 = (undefined4 *)CONCAT44(local_48._4_4_,local_2c);
            lVar6 = height_pitch_would_overflow(local_30,local_34,local_1c,local_28);
            *(longlong *)(param_1 + 0x100) = lVar6;
            if (lVar6 == 0) goto LAB_14014b2cf;
          }
          else {
            *(longlong *)(param_1 + 0x100) = lVar6;
          }
          *(undefined1 *)(param_1 + 0x108) = 1;
          *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) | 1;
        }
        else {
LAB_14014b238:
          if (((code *)puVar7[0x27] == (code *)0x0) || (puVar7[0x2a] == 0)) {
            FUN_1400fbed0("Window framebuffer support not available");
          }
          else {
            local_48 = &local_2c;
            cVar2 = (*(code *)puVar7[0x27])(puVar7,param_1,&local_1c,&local_28);
            if (cVar2 != '\0') goto LAB_14014b26b;
          }
          *(undefined8 *)(param_1 + 0x100) = 0;
        }
      }
LAB_14014b2cf:
      uVar5 = *(undefined8 *)(param_1 + 0x100);
      goto LAB_14014b2d6;
    }
    pcVar4 = "Invalid window";
  }
  FUN_1400fbed0(pcVar4);
  uVar5 = 0;
LAB_14014b2d6:
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
}


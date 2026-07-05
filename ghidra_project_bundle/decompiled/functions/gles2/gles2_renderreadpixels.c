/**
 * Function: gles2_renderreadpixels
 * Address:  14042f300
 * Signature: undefined gles2_renderreadpixels(void)
 * Body size: 411 bytes
 */


longlong gles2_renderreadpixels(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  char *local_68;
  char *local_60;
  undefined8 local_58;
  int local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (*(undefined4 **)(param_1 + 0x1e0) == (undefined4 *)0x0) {
    uVar5 = 0x16762004;
  }
  else {
    uVar5 = **(undefined4 **)(param_1 + 0x1e0);
  }
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  lVar4 = height_pitch_would_overflow(param_2[2],param_2[3],uVar5);
  if (lVar4 == 0) {
LAB_14042f465:
    lVar4 = 0;
  }
  else {
    iVar3 = param_2[1];
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      parameter_s_is_invalid(param_1,local_4c,&local_50);
      iVar1 = param_2[3];
      iVar3 = local_50 - (iVar3 + iVar1);
    }
    else {
      iVar1 = param_2[3];
    }
    local_58 = *(undefined8 *)(lVar4 + 0x18);
    local_60 = (char *)CONCAT44(local_60._4_4_,0x1401);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x1908);
    (**(code **)(lVar2 + 0x108))(*param_2,iVar3,param_2[2],iVar1);
    lVar2 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar2 + 8) == '\x01') {
      iVar3 = (**(code **)(lVar2 + 200))();
      if (iVar3 != 0) {
        do {
          local_60 = "UNKNOWN";
          if (iVar3 - 0x500U < 6) {
            local_60 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar3 - 0x500U];
          }
          local_58 = CONCAT44(local_58._4_4_,iVar3);
          local_68 = "GLES2_RenderReadPixels";
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glReadPixels()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x7da);
          iVar3 = (**(code **)(lVar2 + 200))();
        } while (iVar3 != 0);
        parameter_s_is_invalid(lVar4);
        goto LAB_14042f465;
      }
    }
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      parameter_s_is_invalid(lVar4,2);
    }
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_88)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_88);
}


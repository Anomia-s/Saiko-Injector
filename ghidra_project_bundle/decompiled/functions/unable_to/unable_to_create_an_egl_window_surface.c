/**
 * Function: unable_to_create_an_egl_window_surface
 * Address:  140458350
 * Signature: undefined unable_to_create_an_egl_window_surface(void)
 * Body size: 568 bytes
 */


ulonglong unable_to_create_an_egl_window_surface
                    (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  cVar3 = couldnt_find_matching_egl_config();
  uVar8 = 0;
  if (cVar3 == '\0') goto LAB_140458551;
  if (*(int *)(param_1 + 0x3f8) == 0) {
LAB_1404583b8:
    cVar3 = FUN_1404564f0(param_1,0,"EGL_EXT_present_opaque");
    uVar9 = uVar8;
    if (cVar3 != '\0') {
      if (param_2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (uint)((*(byte *)(param_2 + 0x4b) & 0x40) == 0);
      }
      *(undefined4 *)((longlong)&local_d8 + uVar8 * 4) = 0x31df;
      uVar9 = (ulonglong)((int)uVar8 + 2);
      *(uint *)((longlong)&local_d8 + uVar8 * 4 + 4) = uVar4;
    }
    if (*(code **)(param_1 + 0x520) != (code *)0x0) {
      piVar6 = (int *)(**(code **)(param_1 + 0x520))
                                (*(undefined8 *)(param_1 + 0x530),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x18));
      if (piVar6 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x408) = 0;
        *(undefined1 *)(param_1 + 0x40c) = 0;
        pcVar7 = "EGL surface attribute callback returned NULL pointer";
        goto LAB_14045854a;
      }
      iVar5 = *piVar6;
      piVar2 = piVar6;
      while (iVar5 != 0x3038) {
        if (0x1d < uVar9) {
          *(undefined4 *)(param_1 + 0x408) = 0;
          *(undefined1 *)(param_1 + 0x40c) = 0;
          pcVar7 = "EGL surface attribute callback returned too many attributes";
          goto LAB_14045854a;
        }
        *(int *)((longlong)&local_d8 + uVar9 * 4) = iVar5;
        *(int *)((longlong)&local_d8 + uVar9 * 4 + 4) = piVar2[1];
        uVar9 = uVar9 + 2;
        iVar5 = piVar2[2];
        piVar2 = piVar2 + 2;
      }
      FUN_140160cf0(piVar6);
    }
    *(undefined4 *)((longlong)&local_d8 + (uVar9 & 0xffffffff) * 4) = 0x3038;
    lVar1 = *(longlong *)(param_1 + 0x688);
    uVar8 = (**(code **)(lVar1 + 0x80))
                      (*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),param_3,&local_d8
                      );
    if (uVar8 != 0) goto LAB_140458551;
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
    if ((0xe < iVar5 - 0x3000U) ||
       (pcVar7 = (&PTR_s_EGL_SUCCESS_140e188c8)[iVar5 - 0x3000U], *pcVar7 == '\0')) {
      pcVar7 = local_48;
      FUN_1400fd420(pcVar7,0x20,&DAT_141327795,iVar5);
    }
    FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                  "unable to create an EGL window surface","eglCreateWindowSurface",pcVar7);
  }
  else {
    cVar3 = FUN_1404564f0(param_1,0,"EGL_KHR_gl_colorspace");
    if (cVar3 != '\0') {
      local_d8 = 0x30890000309d;
      uVar8 = 2;
      goto LAB_1404583b8;
    }
    pcVar7 = "EGL implementation does not support sRGB system framebuffers";
LAB_14045854a:
    FUN_1400fbed0(pcVar7);
  }
  uVar8 = 0;
LAB_140458551:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_f8);
  }
  return uVar8;
}


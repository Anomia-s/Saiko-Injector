/**
 * Function: egl_khr_create_context
 * Address:  140457bd0
 * Signature: undefined egl_khr_create_context(void)
 * Body size: 1007 bytes
 */


longlong egl_khr_create_context(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  code *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [32];
  int local_e8 [36];
  int local_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x688) == 0) {
    pcVar12 = "EGL not initialized";
LAB_140457f40:
    FUN_1400fbed0(pcVar12);
  }
  else {
    uVar1 = *(uint *)(param_1 + 1000);
    iVar7 = *(int *)(param_1 + 0x3dc);
    iVar2 = *(int *)(param_1 + 0x3e0);
    if (*(int *)(param_1 + 0x3ec) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = video_subsystem_has_not_been_initialized();
    }
    if ((((iVar7 < 3) || (uVar1 == 4 && iVar2 == 0)) && (*(int *)(param_1 + 0x3e4) == 0)) &&
       ((uVar1 & 0xfffffffb) == 0)) {
      uVar13 = 0;
      if (uVar1 == 4) {
        local_e8[0] = 0x3098;
        local_e8[1] = 1;
        if (1 < iVar7) {
          local_e8[1] = iVar7;
        }
        uVar13 = 2;
      }
    }
    else {
      cVar6 = FUN_1404564f0(param_1,0,"EGL_KHR_create_context");
      if (cVar6 == '\0') {
        pcVar12 = "Could not create EGL context (context attributes are not supported)";
        goto LAB_140457f40;
      }
      local_e8[0] = 0x3098;
      local_e8[2] = 0x30fb;
      if ((uVar1 & 0xfffffffb) == 0) {
        uVar13 = 4;
        iVar3 = *(int *)(param_1 + 0x3e4);
      }
      else {
        local_e8[4] = 0x30fd;
        uVar13 = 6;
        iVar3 = *(int *)(param_1 + 0x3e4);
        local_e8[5] = uVar1;
      }
      local_e8[1] = iVar7;
      local_e8[3] = iVar2;
      if (iVar3 != 0) {
        local_e8[uVar13] = 0x30fc;
        local_e8[uVar13 + 1] = iVar3;
        uVar13 = (ulonglong)((int)uVar13 + 2);
      }
    }
    uVar14 = uVar13;
    if ((*(int *)(param_1 + 0x3fc) != 0) &&
       (cVar6 = FUN_1404564f0(param_1,0,"EGL_KHR_create_context_no_error"), cVar6 != '\0')) {
      local_e8[uVar13] = 0x31b3;
      uVar14 = (ulonglong)((int)uVar13 + 2);
      local_e8[uVar13 + 1] = *(int *)(param_1 + 0x3fc);
    }
    if (*(code **)(param_1 + 0x528) != (code *)0x0) {
      piVar9 = (int *)(**(code **)(param_1 + 0x528))
                                (*(undefined8 *)(param_1 + 0x530),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x18));
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x408) = 0;
        *(undefined1 *)(param_1 + 0x40c) = 0;
        pcVar12 = "EGL context attribute callback returned NULL pointer";
        goto LAB_140457f40;
      }
      iVar7 = *piVar9;
      piVar5 = piVar9;
      while (iVar7 != 0x3038) {
        if (0x1d < uVar14) {
          *(undefined4 *)(param_1 + 0x408) = 0;
          *(undefined1 *)(param_1 + 0x40c) = 0;
          pcVar12 = "EGL context attribute callback returned too many attributes";
          goto LAB_140457f40;
        }
        local_e8[uVar14] = iVar7;
        local_e8[uVar14 + 1] = piVar5[1];
        uVar14 = uVar14 + 2;
        iVar7 = piVar5[2];
        piVar5 = piVar5 + 2;
      }
      FUN_140160cf0(piVar9);
    }
    local_e8[uVar14 & 0xffffffff] = 0x3038;
    *(uint *)(*(longlong *)(param_1 + 0x688) + 0x38) = (uVar1 != 4) + 0x30a0 + (uint)(uVar1 != 4);
    (**(code **)(*(longlong *)(param_1 + 0x688) + 200))
              (*(undefined4 *)(*(longlong *)(param_1 + 0x688) + 0x38));
    lVar10 = *(longlong *)(param_1 + 0x688);
    lVar10 = (**(code **)(lVar10 + 0x68))
                       (*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),uVar8,local_e8
                       );
    if (lVar10 == 0) {
      iVar7 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
      if ((0xe < iVar7 - 0x3000U) ||
         (piVar9 = (int *)(&PTR_s_EGL_SUCCESS_140e188c8)[iVar7 - 0x3000U], (char)*piVar9 == '\0')) {
        piVar9 = local_58;
        FUN_1400fd420(piVar9,0x20,&DAT_141327795,iVar7);
      }
      FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                    "Could not create EGL context","eglCreateContext",piVar9);
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x688) + 0x20) = 0;
      cVar6 = unable_to_make_egl_context_current(param_1,param_2,lVar10);
      lVar4 = *(longlong *)(param_1 + 0x688);
      if (cVar6 != '\0') {
        if (((*(int *)(lVar4 + 0x28) < 2) &&
            ((*(int *)(lVar4 + 0x28) != 1 || (*(int *)(lVar4 + 0x2c) < 5)))) &&
           (cVar6 = FUN_1404564f0(param_1,0,"EGL_KHR_surfaceless_context"), cVar6 == '\0'))
        goto LAB_140457f47;
        if (uVar1 == 4) {
          cVar6 = video_subsystem_has_not_been_initialized("GL_OES_surfaceless_context");
          if (cVar6 == '\0') goto LAB_140457f47;
        }
        else {
          pcVar11 = (code *)video_subsystem_has_not_been_initialized("glGetIntegerv");
          if (pcVar11 == (code *)0x0) goto LAB_140457f47;
          local_58[0] = 0;
          (*pcVar11)(0x821b,local_58);
          if (local_58[0] < 3) goto LAB_140457f47;
        }
        *(undefined1 *)(param_1 + 0x550) = 1;
        goto LAB_140457f47;
      }
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x70))(*(undefined8 *)(lVar4 + 0x10),lVar10);
      }
    }
  }
  lVar10 = 0;
LAB_140457f47:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_108);
  }
  return lVar10;
}


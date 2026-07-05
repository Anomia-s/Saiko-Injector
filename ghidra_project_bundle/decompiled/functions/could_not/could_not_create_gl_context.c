/**
 * Function: could_not_create_gl_context
 * Address:  140463ed0
 * Signature: undefined could_not_create_gl_context(void)
 * Body size: 1053 bytes
 */


longlong could_not_create_gl_context(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x18);
  if (*(int *)(param_1 + 1000) == 4) {
    cVar3 = FUN_1401106d0("SDL_OPENGL_ES_DRIVER",0);
    if ((cVar3 == '\0') && (iVar4 = *(int *)(param_1 + 0x3dc), iVar4 != 1)) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x680) + 8);
      if ((iVar4 <= iVar1) &&
         ((iVar4 != iVar1 ||
          (*(int *)(param_1 + 0x3e0) <= *(int *)(*(longlong *)(param_1 + 0x680) + 0xc)))))
      goto LAB_140464042;
    }
    FUN_140165790(*(undefined8 *)(param_1 + 0x510));
    *(undefined8 *)(param_1 + 0x510) = 0;
    FUN_140160cf0(*(undefined8 *)(param_1 + 0x680));
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(code **)(param_1 + 0x188) = FUN_1404646c0;
    *(code **)(param_1 + 400) = FUN_140456600;
    *(code **)(param_1 + 0x198) = FUN_140456690;
    *(code **)(param_1 + 0x1a0) = FUN_1404647c0;
    *(undefined1 **)(param_1 + 0x1a8) = &LAB_1404648f0;
    *(code **)(param_1 + 0x1b8) = late_swap_tearing_currently_unsupported;
    *(code **)(param_1 + 0x1c0) = egl_not_initialized;
    *(undefined1 **)(param_1 + 0x1c8) = &LAB_1404648d0;
    *(undefined1 **)(param_1 + 0x1d0) = &LAB_1404648c0;
    *(undefined1 **)(param_1 + 0x1b0) = &LAB_1404649d0;
    lVar5 = 0;
    cVar3 = FUN_1404646c0(param_1,0);
    if (cVar3 != '\0') {
      if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_98)) {
        lVar5 = FUN_1404647c0(param_1,param_2);
        return lVar5;
      }
      goto LAB_1404642e0;
    }
  }
  else {
LAB_140464042:
    if (*(int *)(param_1 + 0x3ec) == 0) {
      lVar6 = 0;
      if (*(int *)(param_1 + 0x3dc) < 3) goto LAB_14046406a;
LAB_140464080:
      lVar5 = (**(code **)(*(longlong *)(param_1 + 0x680) + 0x18))(uVar2);
      if (lVar5 == 0) {
        FUN_1400fbed0("Could not create GL context");
      }
      else {
        if (*(longlong *)(param_1 + 0x680) != 0) {
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x680) + 0x28))
                            (*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x18),lVar5);
          if (iVar4 == 0) {
            cVar3 = FUN_1403d7710("wglMakeCurrent()");
            goto joined_r0x0001404640c4;
          }
LAB_1404640f0:
          pcVar7 = (code *)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))
                                     ("wglCreateContextAttribsARB");
          if (pcVar7 != (code *)0x0) {
            uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3dc) >> 0x20);
            local_78._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x3dc);
            local_78._0_4_ = 0x2091;
            uStack_70 = 0x2092;
            if (*(int *)(param_1 + 1000) == 0) {
              uVar10 = 4;
              uVar9 = 4;
              iVar4 = *(int *)(param_1 + 0x3e4);
            }
            else {
              local_68._0_4_ = 0x9126;
              uVar10 = 6;
              uVar9 = 6;
              iVar4 = *(int *)(param_1 + 0x3e4);
              local_68._4_4_ = *(int *)(param_1 + 1000);
            }
            if (iVar4 != 0) {
              *(undefined4 *)((longlong)&local_78 + (ulonglong)uVar9 * 4) = 0x2094;
              uVar10 = uVar9 + 2;
              *(int *)((longlong)&local_78 + (ulonglong)uVar9 * 4 + 4) = iVar4;
            }
            lVar8 = *(longlong *)(param_1 + 0x680);
            if ((*(char *)(lVar8 + 2) == '\x01') && (*(int *)(param_1 + 0x3f0) == 0)) {
              *(undefined8 *)((longlong)&local_78 + (ulonglong)uVar10 * 4) = 0x2097;
              uVar10 = uVar10 + 2;
            }
            if ((*(char *)(lVar8 + 3) == '\x01') && (*(int *)(param_1 + 0x3f4) != 0)) {
              *(undefined8 *)((longlong)&local_78 + (ulonglong)uVar10 * 4) = 0x825200008256;
              uVar10 = uVar10 + 2;
            }
            if ((*(char *)(lVar8 + 4) == '\x01') && (iVar4 = *(int *)(param_1 + 0x3fc), iVar4 != 0))
            {
              uVar11 = (ulonglong)uVar10;
              *(undefined4 *)((longlong)&local_78 + uVar11 * 4) = 0x31b3;
              uVar10 = uVar10 + 2;
              *(int *)((longlong)&local_78 + uVar11 * 4 + 4) = iVar4;
            }
            *(undefined4 *)((longlong)&local_78 + (ulonglong)uVar10 * 4) = 0;
            lVar8 = (*pcVar7)(uVar2,lVar6,&local_78);
            (**(code **)(*(longlong *)(param_1 + 0x680) + 0x20))(lVar5);
            goto LAB_1404641f5;
          }
          FUN_1400fbed0("GL 3.x is not supported");
          lVar6 = *(longlong *)(param_1 + 0x680);
          goto joined_r0x000140464243;
        }
        cVar3 = FUN_1400fbed0("OpenGL not initialized");
joined_r0x0001404640c4:
        if (cVar3 != '\0') goto LAB_1404640f0;
LAB_140464255:
        if (*(longlong *)(param_1 + 0x680) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x680) + 0x20))(lVar5);
        }
      }
    }
    else {
      lVar6 = video_subsystem_has_not_been_initialized();
      if (2 < *(int *)(param_1 + 0x3dc)) goto LAB_140464080;
LAB_14046406a:
      if ((*(int *)(param_1 + 1000) != 0) || (*(int *)(param_1 + 0x3e4) != 0)) goto LAB_140464080;
      lVar8 = (**(code **)(*(longlong *)(param_1 + 0x680) + 0x18))(uVar2);
      if (lVar6 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x680) + 0x30))(lVar6,lVar8);
      }
LAB_1404641f5:
      if (lVar8 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x680);
        lVar5 = lVar8;
joined_r0x000140464243:
        if (lVar6 == 0) {
          cVar3 = FUN_1400fbed0("OpenGL not initialized");
        }
        else {
          iVar4 = (**(code **)(lVar6 + 0x28))
                            (*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x18),lVar5);
          if (iVar4 != 0) goto LAB_140464277;
          cVar3 = FUN_1403d7710("wglMakeCurrent()");
        }
        if (cVar3 == '\0') goto LAB_140464255;
        goto LAB_140464277;
      }
      FUN_1403d7710("Could not create GL context");
    }
    lVar5 = 0;
  }
LAB_140464277:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_98)) {
    return lVar5;
  }
LAB_1404642e0:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_98);
}


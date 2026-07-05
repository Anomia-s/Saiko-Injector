/**
 * Function: renderer_already_associated_with_window
 * Address:  1401192c0
 * Signature: undefined renderer_already_associated_with_window(void)
 * Body size: 2584 bytes
 */


void * renderer_already_associated_with_window(ulonglong param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  void *_Dst;
  longlong lVar12;
  undefined8 uVar13;
  void *pvVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  char *local_80;
  
  lVar10 = FUN_14014ff10(param_1,"SDL.renderer.create.window",0);
  lVar11 = FUN_14014ff10(param_1 & 0xffffffff,"SDL.renderer.create.surface",0);
  local_80 = (char *)FUN_14014ffe0(param_1 & 0xffffffff,"SDL.renderer.create.name",0);
  _Dst = (void *)FUN_140160c70(1,0x2d0);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  FUN_1403d8ef0(_Dst,2,1);
  if ((lVar10 == 0) != (lVar11 != 0)) {
    pcVar18 = "Parameter \'%s\' is invalid";
    local_80 = "window";
LAB_14011936a:
    FUN_1400fbed0(pcVar18,local_80);
LAB_140119437:
    cVar5 = FUN_1403d8fa0(_Dst,2);
    if (cVar5 == '\0') {
      FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    }
    else {
      if (*(char *)((longlong)_Dst + 0x2b8) == '\0') {
        parameter_s_is_invalid(_Dst);
      }
      if (DAT_141525640 != (void *)0x0) {
        pvVar2 = DAT_141525640;
        if (DAT_141525640 == _Dst) {
          DAT_141525640 = *(void **)((longlong)_Dst + 0x2c8);
        }
        else {
          do {
            pvVar14 = pvVar2;
            pvVar2 = *(void **)((longlong)pvVar14 + 0x2c8);
            if (pvVar2 == (void *)0x0) goto LAB_1401194b7;
          } while (pvVar2 != _Dst);
          *(undefined8 *)((longlong)pvVar14 + 0x2c8) = *(undefined8 *)((longlong)_Dst + 0x2c8);
        }
      }
LAB_1401194b7:
      FUN_1403d8ef0(_Dst,2,0);
      FUN_140160cf0(_Dst);
    }
    return (void *)0x0;
  }
  if (lVar10 != 0) {
    cVar5 = video_subsystem_has_not_been_initialized(lVar10);
    if (cVar5 == '\0') {
      uVar7 = video_subsystem_has_not_been_initialized(lVar10);
      lVar12 = FUN_14014ff10(uVar7,"SDL.internal.window.renderer",0);
      if (lVar12 == 0) goto LAB_1401193ba;
      pcVar18 = "Renderer already associated with window";
    }
    else {
      pcVar18 = "Surface already associated with window";
    }
LAB_1401193b3:
    FUN_1400fbed0(pcVar18);
    goto LAB_140119437;
  }
LAB_1401193ba:
  pcVar18 = (char *)FUN_140110550("SDL_RENDER_VSYNC");
  if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
    uVar4 = FUN_1401106d0("SDL_RENDER_VSYNC",1);
    FUN_14014fc70(param_1 & 0xffffffff,"SDL.renderer.create.present_vsync",uVar4);
  }
  if (lVar11 != 0) {
    cVar5 = unsupported_output_colorspace(_Dst,lVar11,param_1 & 0xffffffff);
    if (cVar5 == '\0') goto LAB_140119437;
    *(longlong *)((longlong)_Dst + 0x100) = lVar10;
    uVar13 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x1e8) = uVar13;
    *(undefined4 *)((longlong)_Dst + 0x158) = *(undefined4 *)(lVar11 + 8);
    *(undefined4 *)((longlong)_Dst + 0x15c) = *(undefined4 *)(lVar11 + 0xc);
    goto LAB_140119990;
  }
  if ((local_80 == (char *)0x0) &&
     (local_80 = (char *)FUN_140110550("SDL_RENDER_DRIVER"), local_80 == (char *)0x0)) {
    bVar3 = true;
    local_80 = (char *)0x0;
LAB_140119825:
    cVar5 = (*(code *)PTR_couldnt_get_window_handle_1415036e0)(_Dst,lVar10,param_1 & 0xffffffff);
    if (cVar5 == '\0') {
      parameter_s_is_invalid(_Dst);
      memset(_Dst,0,0x2d0);
      cVar5 = (*(code *)PTR_couldnt_get_window_handle_1415036f0)(_Dst,lVar10,param_1 & 0xffffffff);
      if (cVar5 == '\0') {
        parameter_s_is_invalid(_Dst);
        memset(_Dst,0,0x2d0);
        cVar5 = (*(code *)PTR_couldnt_get_window_handle_141503700)(_Dst,lVar10,param_1 & 0xffffffff)
        ;
        if (cVar5 == '\0') {
          parameter_s_is_invalid(_Dst);
          memset(_Dst,0,0x2d0);
          cVar5 = (*(code *)PTR_gl_arb_debug_output_141503710)(_Dst,lVar10,param_1 & 0xffffffff);
          if (cVar5 == '\0') {
            parameter_s_is_invalid(_Dst);
            memset(_Dst,0,0x2d0);
            cVar5 = (*(code *)PTR_gles2_createrenderer_141503750)(_Dst,lVar10,param_1 & 0xffffffff);
            if (cVar5 == '\0') {
              parameter_s_is_invalid(_Dst);
              memset(_Dst,0,0x2d0);
              cVar5 = (*(code *)PTR_unsupported_output_colorspace_141503760)
                                (_Dst,lVar10,param_1 & 0xffffffff);
              if (cVar5 == '\0') {
                parameter_s_is_invalid(_Dst);
                memset(_Dst,0,0x2d0);
                cVar5 = (*(code *)PTR_unsupported_output_colorspace_141503770)
                                  (_Dst,lVar10,param_1 & 0xffffffff);
                if (cVar5 == '\0') {
                  parameter_s_is_invalid(_Dst);
                  memset(_Dst,0,0x2d0);
                  cVar5 = (*(code *)PTR_sdlrenderercreatepresent_vsync_1415036a0)
                                    (_Dst,lVar10,param_1 & 0xffffffff);
                  if (cVar5 == '\0') {
                    parameter_s_is_invalid(_Dst);
                    memset(_Dst,0,0x2d0);
                    if (!bVar3) goto LAB_140119808;
                    pcVar18 = "Couldn\'t find matching render driver";
                    goto LAB_1401193b3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*local_80 == '\0') {
      bVar3 = false;
      goto LAB_140119825;
    }
    bVar6 = 0;
    pcVar18 = local_80;
    do {
      if ((*pcVar18 == '\0') || ((bVar6 & 1) != 0)) {
        bVar6 = bVar6 & 1;
        break;
      }
      pcVar15 = strchr(pcVar18,0x2c);
      if (pcVar15 == (char *)0x0) {
        lVar12 = FUN_1400fc570(pcVar18);
        lVar16 = FUN_1400fc570(PTR_s_direct3d11_1415036e8);
        if (lVar12 == lVar16) goto LAB_140119591;
LAB_1401195d0:
        lVar16 = FUN_1400fc570(PTR_s_direct3d12_1415036f8);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_direct3d12_1415036f8,pcVar18,lVar12), iVar8 == 0)) {
          cVar5 = (*(code *)PTR_couldnt_get_window_handle_1415036f0)
                            (_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_s_direct3d_141503708);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_direct3d_141503708,pcVar18,lVar12), iVar8 == 0)) {
          cVar5 = (*(code *)PTR_couldnt_get_window_handle_141503700)
                            (_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_s_opengl_1413437f8_0x12_141503718);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_opengl_1413437f8_0x12_141503718,pcVar18,lVar12), iVar8 == 0)
           ) {
          cVar5 = (*(code *)PTR_gl_arb_debug_output_141503710)(_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_s_opengles2_141503758);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_opengles2_141503758,pcVar18,lVar12), iVar8 == 0)) {
          cVar5 = (*(code *)PTR_gles2_createrenderer_141503750)(_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_s_vulkan_141341e4c_0x12_141503768);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_vulkan_141341e4c_0x12_141503768,pcVar18,lVar12), iVar8 == 0)
           ) {
          cVar5 = (*(code *)PTR_unsupported_output_colorspace_141503760)
                            (_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_DAT_141503778);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_DAT_141503778,pcVar18,lVar12), iVar8 == 0)) {
          cVar5 = (*(code *)PTR_unsupported_output_colorspace_141503770)
                            (_Dst,lVar10,param_1 & 0xffffffff);
          bVar6 = 1;
          if (cVar5 != '\0') goto LAB_140119527;
        }
        lVar16 = FUN_1400fc570(PTR_s_software_1415036a8);
        if ((lVar12 == lVar16) &&
           (iVar8 = FUN_1400fcff0(PTR_s_software_1415036a8,pcVar18,lVar12), iVar8 == 0)) {
          bVar6 = (*(code *)PTR_sdlrenderercreatepresent_vsync_1415036a0)
                            (_Dst,lVar10,param_1 & 0xffffffff);
        }
        else {
          bVar6 = 0;
        }
      }
      else {
        lVar12 = (longlong)pcVar15 - (longlong)pcVar18;
        lVar16 = FUN_1400fc570(PTR_s_direct3d11_1415036e8);
        if (lVar12 != lVar16) goto LAB_1401195d0;
LAB_140119591:
        iVar8 = FUN_1400fcff0(PTR_s_direct3d11_1415036e8,pcVar18,lVar12);
        if (iVar8 != 0) goto LAB_1401195d0;
        cVar5 = (*(code *)PTR_couldnt_get_window_handle_1415036e0)(_Dst,lVar10,param_1 & 0xffffffff)
        ;
        bVar6 = 1;
        if (cVar5 == '\0') goto LAB_1401195d0;
      }
LAB_140119527:
      pcVar18 = pcVar15 + 1;
    } while (pcVar15 != (char *)0x0);
    if (bVar6 == 0) {
LAB_140119808:
      pcVar18 = "%s not available";
      goto LAB_14011936a;
    }
  }
  *(longlong *)((longlong)_Dst + 0x100) = lVar10;
  uVar13 = initializesrwlock();
  *(undefined8 *)((longlong)_Dst + 0x1e8) = uVar13;
LAB_140119990:
  *(undefined8 *)((longlong)_Dst + 0x168) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1a4) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)_Dst + 0x1ac) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)_Dst + 0x1bc) = 0x3f8000003f800000;
  *(longlong *)((longlong)_Dst + 0x150) = (longlong)_Dst + 0x158;
  *(undefined8 *)((longlong)_Dst + 0x1cc) = 0x3f8000003f800000;
  FUN_140119ed0((longlong)_Dst + 0x158);
  fVar20 = *(float *)((longlong)_Dst + 0x1bc);
  fVar1 = *(float *)((longlong)_Dst + 0x1c0);
  fVar19 = floorf((float)*(int *)((longlong)_Dst + 0x180) * fVar20 +
                  *(float *)((longlong)_Dst + 0x1b4));
  *(int *)((longlong)_Dst + 400) = (int)fVar19;
  fVar19 = floorf((float)*(int *)((longlong)_Dst + 0x184) * fVar1 +
                  *(float *)((longlong)_Dst + 0x1b8));
  *(int *)((longlong)_Dst + 0x194) = (int)fVar19;
  fVar20 = ceilf((float)*(int *)((longlong)_Dst + 0x188) * fVar20);
  *(int *)((longlong)_Dst + 0x198) = (int)fVar20;
  fVar20 = ceilf((float)*(int *)((longlong)_Dst + 0x18c) * fVar1);
  *(int *)((longlong)_Dst + 0x19c) = (int)fVar20;
  parameter_s_is_invalid(_Dst);
  *(undefined4 *)((longlong)_Dst + 0x238) = 1;
  uVar9 = 1;
  if (*(char *)((longlong)_Dst + 0xfc) == '\0') {
    pcVar18 = (char *)FUN_140110550("SDL_RENDER_LINE_METHOD");
    if (pcVar18 == (char *)0x0) {
      uVar9 = 0;
    }
    else {
      iVar8 = atoi(pcVar18);
      uVar9 = 2;
      if (iVar8 != 3) {
        uVar9 = (uint)(iVar8 == 2);
      }
    }
  }
  *(uint *)((longlong)_Dst + 0x1d4) = uVar9;
  *(undefined8 *)((longlong)_Dst + 500) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)_Dst + 0x1fc) = 0x3f8000003f800000;
  if (lVar10 != 0) {
    uVar17 = video_subsystem_has_not_been_initialized(lVar10);
    if ((uVar17 & 0x40000000) != 0) {
      *(undefined1 *)((longlong)_Dst + 0x290) = 1;
    }
    uVar17 = video_subsystem_has_not_been_initialized(lVar10);
    if ((uVar17 & 0x48) != 0) {
      *(undefined1 *)((longlong)_Dst + 0x108) = 1;
    }
  }
  cVar5 = FUN_1403d8fa0(_Dst,2);
  if (cVar5 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    iVar8 = 0;
  }
  else if (*(char *)((longlong)_Dst + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((longlong)_Dst + 0x2a8);
    if (iVar8 == 0) {
      iVar8 = FUN_14014f270();
      *(int *)((longlong)_Dst + 0x2a8) = iVar8;
    }
  }
  FUN_14014fbf0(iVar8,"SDL.renderer.name",*(undefined8 *)((longlong)_Dst + 0xe8));
  if (lVar10 != 0) {
    FUN_14014faf0(iVar8,"SDL.renderer.window",lVar10);
  }
  if (lVar11 != 0) {
    FUN_14014faf0(iVar8,"SDL.renderer.surface",lVar11);
  }
  FUN_14014fc70(iVar8,"SDL.renderer.output_colorspace",(longlong)*(int *)((longlong)_Dst + 0x1f0));
  parameter_s_is_invalid(_Dst);
  if (lVar10 != 0) {
    uVar7 = video_subsystem_has_not_been_initialized(lVar10);
    FUN_14014faf0(uVar7,"SDL.internal.window.renderer",_Dst);
    FUN_14014c2d0(lVar10,_Dst);
  }
  rect_has_a_negative_size(_Dst,0);
  iVar8 = FUN_140150150(param_1 & 0xffffffff,"SDL.renderer.create.present_vsync",0);
  cVar5 = parameter_s_is_invalid(_Dst);
  if (iVar8 == 0 && cVar5 == '\0') {
    parameter_s_is_invalid(_Dst);
  }
  iVar8 = video_subsystem_has_not_been_initialized(lVar10);
  if (iVar8 == 0) {
    iVar8 = video_subsystem_has_not_been_initialized();
  }
  lVar10 = video_subsystem_has_not_been_initialized(iVar8);
  uVar17 = 0xfe502a;
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0x18);
    if ((0 < (longlong)(int)uVar9) && (0 < (longlong)*(int *)(lVar10 + 0x1c))) {
      uVar17 = (longlong)*(int *)(lVar10 + 0x1c) * 1000000000;
      if (uVar17 >> 0x20 == 0) {
        uVar17 = (uVar17 & 0xffffffff) / (ulonglong)uVar9;
      }
      else {
        uVar17 = uVar17 / (ulonglong)(longlong)(int)uVar9;
      }
    }
  }
  *(ulonglong *)((longlong)_Dst + 0x110) = uVar17;
  FUN_1400fb890(6,"Created renderer: %s",*(undefined8 *)((longlong)_Dst + 0xe8));
  *(void **)((longlong)_Dst + 0x2c8) = DAT_141525640;
  DAT_141525640 = _Dst;
  FUN_1400fc040();
  return _Dst;
}


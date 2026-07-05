/**
 * Function: gl_arb_debug_output
 * Address:  140426cd0
 * Signature: undefined gl_arb_debug_output(void)
 * Body size: 4323 bytes
 */


undefined8 gl_arb_debug_output(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  char local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  video_subsystem_has_not_been_initialized(0x14,&local_70);
  video_subsystem_has_not_been_initialized(0x11,&local_74);
  video_subsystem_has_not_been_initialized(0x12,&local_78);
  video_subsystem_has_not_been_initialized(param_2);
  uVar4 = video_subsystem_has_not_been_initialized(param_2);
  bVar10 = (uVar4 & 2) != 0;
  bVar11 = local_70 != 4;
  bVar12 = local_74 == 2;
  bVar13 = local_78 == 1;
  if ((bVar13 && bVar12) && (bVar11 && bVar10)) {
LAB_140426dc9:
    sdlrenderercreateoutput_colorspace(param_1,param_3);
    if (*(int *)(param_1 + 0x3e) == 0x120005a0) {
      plVar5 = (longlong *)FUN_140160c70(1,0x280);
      if (plVar5 != (longlong *)0x0) {
        *param_1 = &LAB_140427dc0;
        param_1[2] = FUN_140427de0;
        param_1[3] = render_targets_not_supported_by_opengl;
        param_1[0xe] = gl_updatetexture;
        param_1[0xf] = gl_updatetextureyuv;
        param_1[0x10] = gl_updatetexturenv;
        param_1[0x11] = FUN_140428e60;
        param_1[0x12] = FUN_140428ef0;
        param_1[0x13] = FUN_140428f90;
        param_1[0x14] = render_targets_not_supported_by_opengl;
        param_1[4] = httplib::ClientImpl::vfunction2;
        param_1[5] = httplib::ClientImpl::vfunction2;
        param_1[6] = FUN_140429160;
        param_1[7] = FUN_1404292e0;
        param_1[0xb] = FUN_1404293e0;
        param_1[0xc] = &LAB_1404296c0;
        param_1[0xd] = gl_runcommandqueue;
        param_1[0x15] = texture_format_s_not_supported_by_opengl;
        param_1[0x16] = FUN_14042a280;
        param_1[0x17] = FUN_14042a2a0;
        param_1[0x18] = gldebugmessagecallbackarb;
        param_1[0x19] = that_operation_is_not_supported;
        param_1[0x58] = plVar5;
        *(undefined1 *)(plVar5 + 0x40) = 1;
        plVar5[0x43] = 0;
        *(undefined4 *)(plVar5 + 0x45) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x22c) = 0;
        *(undefined4 *)(plVar5 + 0x46) = 0x7fffffff;
        *(undefined4 *)((longlong)plVar5 + 0x234) = 0xffffffff;
        *(undefined1 *)(plVar5 + 0x48) = 1;
        *(undefined1 *)((longlong)plVar5 + 0x242) = 1;
        *(undefined4 *)((longlong)plVar5 + 0x255) = 1;
        *(undefined1 *)((longlong)plVar5 + 0x259) = 1;
        *(undefined1 *)((longlong)plVar5 + 0x26c) = 1;
        param_1[0x20] = param_2;
        param_1[0x1d] = PTR_s_opengl_1413437f8_0x12_141503718;
        parameter_s_is_invalid(param_1,0x16362004);
        parameter_s_is_invalid(param_1,0x16762004);
        parameter_s_is_invalid(param_1,0x16161804);
        parameter_s_is_invalid(param_1,0x16561804);
        lVar6 = video_subsystem_has_not_been_initialized(param_2);
        *plVar5 = lVar6;
        if ((lVar6 != 0) &&
           (cVar1 = video_subsystem_has_not_been_initialized(param_2,lVar6), cVar1 != '\0')) {
          lVar6 = video_subsystem_has_not_been_initialized("glBegin");
          plVar5[7] = lVar6;
          cVar1 = '\x01';
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glBegin",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glBindTexture");
          plVar5[8] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glBindTexture",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glBlendEquation");
          plVar5[9] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glBlendEquation",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glBlendFuncSeparate");
          plVar5[10] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glBlendFuncSeparate",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glClear");
          plVar5[0xb] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glClear",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glClearColor");
          plVar5[0xc] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glClearColor",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glColor3fv");
          plVar5[0xd] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glColor3fv",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glColor4f");
          plVar5[0xe] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glColor4f",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glColor4ub");
          plVar5[0xf] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glColor4ub",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glColorPointer");
          plVar5[0x10] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glColorPointer",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDeleteTextures");
          plVar5[0x11] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDeleteTextures",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDepthFunc");
          plVar5[0x12] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDepthFunc",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDisable");
          plVar5[0x13] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDisable",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDisableClientState");
          plVar5[0x14] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDisableClientState",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDrawArrays");
          plVar5[0x15] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDrawArrays",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glDrawPixels");
          plVar5[0x16] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glDrawPixels",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glEnable");
          plVar5[0x17] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glEnable",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glEnableClientState");
          plVar5[0x18] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glEnableClientState",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glEnd");
          plVar5[0x19] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glEnd",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGenTextures");
          plVar5[0x1a] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGenTextures",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGetError");
          plVar5[0x1b] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGetError",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGetFloatv");
          plVar5[0x1c] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGetFloatv",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGetIntegerv");
          plVar5[0x1d] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGetIntegerv",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGetPointerv");
          plVar5[0x1e] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGetPointerv",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glGetString");
          plVar5[0x1f] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glGetString",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glLineWidth");
          plVar5[0x20] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glLineWidth",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glLoadIdentity");
          plVar5[0x21] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glLoadIdentity",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glMatrixMode");
          plVar5[0x22] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glMatrixMode",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glOrtho");
          plVar5[0x23] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glOrtho",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glPixelStorei");
          plVar5[0x24] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glPixelStorei",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glPointSize");
          plVar5[0x25] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glPointSize",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glRasterPos2i");
          plVar5[0x26] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glRasterPos2i",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glReadBuffer");
          plVar5[0x27] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glReadBuffer",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glReadPixels");
          plVar5[0x28] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glReadPixels",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glRectf");
          plVar5[0x29] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glRectf",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glRotatef");
          plVar5[0x2a] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glRotatef",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glScissor");
          plVar5[0x2b] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glScissor",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glShadeModel");
          plVar5[0x2c] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glShadeModel",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexCoord2f");
          plVar5[0x2d] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexCoord2f",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexCoordPointer");
          plVar5[0x2e] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexCoordPointer",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexEnvf");
          plVar5[0x2f] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexEnvf",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexImage2D");
          plVar5[0x30] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexImage2D",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexParameteri");
          plVar5[0x31] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexParameteri",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glTexSubImage2D");
          plVar5[0x32] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glTexSubImage2D",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glVertex2f");
          plVar5[0x33] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glVertex2f",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glVertex3fv");
          plVar5[0x34] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glVertex3fv",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glVertexPointer");
          plVar5[0x35] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glVertexPointer",uVar7);
          }
          lVar6 = video_subsystem_has_not_been_initialized("glViewport");
          plVar5[0x36] = lVar6;
          if (lVar6 == 0) {
            uVar7 = out_of_memory();
            cVar1 = FUN_1400fbed0("Couldn\'t load GL function %s: %s","glViewport",uVar7);
          }
          if (cVar1 != '\0') {
            cVar1 = video_subsystem_has_not_been_initialized(0x13,&local_6c);
            if ((cVar1 != '\0') && ((local_6c & 1) != 0)) {
              *(undefined1 *)(plVar5 + 1) = 1;
            }
            if (((char)plVar5[1] == '\x01') &&
               (cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_debug_output"),
               cVar1 != '\0')) {
              pcVar8 = (code *)video_subsystem_has_not_been_initialized("glDebugMessageCallbackARB")
              ;
              *(undefined1 *)((longlong)plVar5 + 9) = 1;
              (*(code *)plVar5[0x1e])(0x8244,plVar5 + 3);
              (*(code *)plVar5[0x1e])(0x8245,plVar5 + 4);
              (*pcVar8)(FUN_14042a570,param_1);
              (*(code *)plVar5[0x17])(0x8242);
            }
            pcVar9 = (char *)FUN_140110550("GL_ARB_texture_non_power_of_two");
            if ((pcVar9 == (char *)0x0) || (*pcVar9 != '0')) {
              lVar6 = (*(code *)plVar5[0x1f])(0x1f02);
              if (lVar6 == 0) {
LAB_140427b35:
                cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_texture_non_power_of_two");
                if (cVar1 == '\0') goto LAB_140427b59;
              }
              else {
                FUN_1400fcb10(local_68,lVar6,0x10);
                pcVar9 = strchr(local_68,0x2e);
                if (pcVar9 == (char *)0x0) goto LAB_140427b35;
                *pcVar9 = '\0';
                iVar2 = atoi(local_68);
                if (iVar2 < 2) goto LAB_140427b35;
              }
              *(undefined4 *)(plVar5 + 5) = 0xde1;
              *(undefined1 *)((longlong)plVar5 + 0x2c) = 1;
              uVar7 = 0xd33;
            }
            else {
LAB_140427b59:
              *(undefined4 *)(plVar5 + 5) = 0xde1;
              cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_texture_rectangle");
              if (cVar1 == '\0') {
                cVar1 = video_subsystem_has_not_been_initialized("GL_EXT_texture_rectangle");
                uVar7 = 0xd33;
                if (cVar1 == '\0') goto LAB_140427b98;
              }
              *(undefined1 *)((longlong)plVar5 + 0x2d) = 1;
              *(undefined4 *)(plVar5 + 5) = 0x84f5;
              uVar7 = 0x84f8;
            }
LAB_140427b98:
            (*(code *)plVar5[0x1d])(uVar7,&local_6c);
            uVar3 = parameter_s_is_invalid(param_1);
            FUN_14014fc70(uVar3,"SDL.renderer.max_texture_size",(longlong)(int)local_6c);
            cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_multitexture");
            if (cVar1 != '\0') {
              lVar6 = video_subsystem_has_not_been_initialized("glActiveTextureARB");
              plVar5[0x38] = lVar6;
              if (lVar6 != 0) {
                *(undefined1 *)(plVar5 + 0x37) = 1;
                (*(code *)plVar5[0x1d])(0x84e2,plVar5 + 0x39);
              }
            }
            lVar6 = glcreateshaderobjectarb();
            plVar5[0x3f] = lVar6;
            pcVar9 = "ENABLED";
            if (lVar6 == 0) {
              pcVar9 = "DISABLED";
            }
            FUN_1400fb890(6,"OpenGL shaders: %s",pcVar9);
            if (plVar5[0x3f] != 0) {
              iVar2 = (int)plVar5[0x39];
              if (2 < iVar2) {
                parameter_s_is_invalid(param_1,0x32315659);
                parameter_s_is_invalid(param_1,0x56555949);
                if (plVar5[0x3f] == 0) goto LAB_140427c9a;
                iVar2 = (int)plVar5[0x39];
              }
              if (1 < iVar2) {
                parameter_s_is_invalid(param_1,0x3231564e);
                parameter_s_is_invalid(param_1,0x3132564e);
              }
            }
LAB_140427c9a:
            cVar1 = video_subsystem_has_not_been_initialized("GL_EXT_framebuffer_object");
            if (cVar1 != '\0') {
              *(undefined1 *)((longlong)plVar5 + 0x2e) = 1;
              lVar6 = video_subsystem_has_not_been_initialized("glGenFramebuffersEXT");
              plVar5[0x3a] = lVar6;
              lVar6 = video_subsystem_has_not_been_initialized("glDeleteFramebuffersEXT");
              plVar5[0x3b] = lVar6;
              lVar6 = video_subsystem_has_not_been_initialized("glFramebufferTexture2DEXT");
              plVar5[0x3c] = lVar6;
              lVar6 = video_subsystem_has_not_been_initialized("glBindFramebufferEXT");
              plVar5[0x3d] = lVar6;
              lVar6 = video_subsystem_has_not_been_initialized("glCheckFramebufferStatusEXT");
              plVar5[0x3e] = lVar6;
              (*(code *)plVar5[0x22])(0x1700);
              (*(code *)plVar5[0x21])();
              (*(code *)plVar5[0x13])(0xb71);
              (*(code *)plVar5[0x13])(0xb44);
              (*(code *)plVar5[0x13])(0xc11);
              (*(code *)plVar5[0x13])((int)plVar5[5]);
              (*(code *)plVar5[0xc])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
              (*(code *)plVar5[0xe])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
              *(undefined4 *)((longlong)plVar5 + 0x25c) = 0x3f800000;
              *(undefined4 *)(plVar5 + 0x4c) = 0x3f800000;
              *(undefined4 *)((longlong)plVar5 + 0x264) = 0x3f800000;
              *(undefined4 *)(plVar5 + 0x4d) = 0x3f800000;
              *(undefined4 *)(plVar5 + 0x4e) = 0x3f800000;
              *(undefined4 *)((longlong)plVar5 + 0x274) = 0x3f800000;
              *(undefined4 *)(plVar5 + 0x4f) = 0x3f800000;
              *(undefined4 *)((longlong)plVar5 + 0x27c) = 0x3f800000;
              uVar7 = 1;
              goto LAB_140427a02;
            }
            pcVar9 = "Can\'t create render targets, GL_EXT_framebuffer_object not available";
            goto LAB_14042799a;
          }
        }
      }
    }
    else {
      pcVar9 = "Unsupported output colorspace";
LAB_14042799a:
      FUN_1400fbed0(pcVar9);
    }
    if ((!bVar13 || !bVar12) || (!bVar11 || !bVar10)) goto LAB_1404279a4;
  }
  else {
    video_subsystem_has_not_been_initialized(0x14,0);
    video_subsystem_has_not_been_initialized(0x11,2);
    video_subsystem_has_not_been_initialized(0x12,1);
    cVar1 = video_subsystem_has_not_been_initialized(param_2,uVar4 & 0xffffffffcffffffd | 2);
    if (cVar1 != '\0') goto LAB_140426dc9;
LAB_1404279a4:
    uVar7 = out_of_memory();
    uVar7 = FUN_1400fcda0(uVar7);
    video_subsystem_has_not_been_initialized(0x14,local_70);
    video_subsystem_has_not_been_initialized(0x11,local_74);
    video_subsystem_has_not_been_initialized(0x12,local_78);
    video_subsystem_has_not_been_initialized(param_2,uVar4);
    FUN_1400fbed0(&DAT_141339891,uVar7);
    FUN_140160cf0(uVar7);
  }
  uVar7 = 0;
LAB_140427a02:
  if (DAT_1414ef3c0 != (local_50 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_50 ^ (ulonglong)auStack_98);
  }
  return uVar7;
}


/**
 * Function: gles2_createrenderer
 * Address:  14042ad20
 * Signature: undefined gles2_createrenderer(void)
 * Body size: 1353 bytes
 */


undefined8 gles2_createrenderer(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  cVar2 = video_subsystem_has_not_been_initialized(0x14,&local_3c);
  if (cVar2 != '\0') {
    cVar2 = video_subsystem_has_not_been_initialized(0x11,&local_40);
    if (cVar2 != '\0') {
      cVar2 = video_subsystem_has_not_been_initialized(0x12,&local_44);
      if (cVar2 != '\0') {
        video_subsystem_has_not_been_initialized(param_2);
        uVar5 = video_subsystem_has_not_been_initialized(param_2);
        bVar9 = (uVar5 & 2) != 0;
        bVar10 = local_3c == 4;
        bVar1 = 1 < local_40;
        if (bVar1 && (bVar10 && bVar9)) {
LAB_14042ae1d:
          sdlrenderercreateoutput_colorspace(param_1,param_3);
          if (*(int *)(param_1 + 0x3e) == 0x120005a0) {
            plVar6 = (longlong *)FUN_140160c70(1,0x2f0);
            if (plVar6 != (longlong *)0x0) {
              param_1[0x58] = plVar6;
              *(undefined1 *)(plVar6 + 0x49) = 1;
              plVar6[0x4a] = 0;
              *(undefined4 *)(plVar6 + 0x4c) = 0x7fffffff;
              *(undefined1 *)((longlong)plVar6 + 0x264) = 1;
              *(undefined1 *)((longlong)plVar6 + 0x266) = 1;
              *(undefined1 *)((longlong)plVar6 + 0x279) = 1;
              *(undefined1 *)((longlong)plVar6 + 0x28c) = 1;
              plVar6[0x52] = 0;
              plVar6[0x53] = 0;
              param_1[0x20] = param_2;
              param_1[0x1d] = PTR_s_opengles2_141503758;
              parameter_s_is_invalid(param_1,0x16762004);
              parameter_s_is_invalid(param_1,0x16362004);
              parameter_s_is_invalid(param_1,0x16161804);
              parameter_s_is_invalid(param_1,0x16561804);
              lVar7 = video_subsystem_has_not_been_initialized(param_2);
              *plVar6 = lVar7;
              if (lVar7 != 0) {
                cVar2 = video_subsystem_has_not_been_initialized(param_2,lVar7);
                if (cVar2 != '\0') {
                  cVar2 = couldnt_load_gles2_function_s_s(plVar6);
                  if (cVar2 != '\0') {
                    cVar2 = FUN_14042b9a0(plVar6);
                    if (cVar2 != '\0') {
                      cVar2 = video_subsystem_has_not_been_initialized(0x13,&local_38);
                      if ((cVar2 != '\0') && ((local_38 & 1) != 0)) {
                        *(undefined1 *)(plVar6 + 1) = 1;
                      }
                      local_38 = 0;
                      (*(code *)plVar6[0x1a])(0xd33,&local_38);
                      lVar7 = (longlong)(int)local_38;
                      uVar3 = parameter_s_is_invalid(param_1);
                      FUN_14014fc70(uVar3,"SDL.renderer.max_texture_size",lVar7);
                      plVar6[0x3b] = 0;
                      (*(code *)plVar6[0x1a])(0x8ca6,&local_34);
                      *(undefined4 *)(plVar6 + 0x3c) = local_34;
                      *param_1 = &LAB_14042bae0;
                      param_1[2] = FUN_14042bb00;
                      param_1[3] = sdltexturecreateopengles2texture_uv;
                      param_1[0xe] = gles2_updatetexture;
                      param_1[0xf] = gles2_updatetextureyuv;
                      param_1[0x10] = gles2_updatetexturenv;
                      param_1[0x11] = FUN_14042ded0;
                      param_1[0x12] = FUN_14042df60;
                      param_1[0x13] = FUN_14042dfd0;
                      param_1[0x14] = glframebuffertexture2d_failed;
                      param_1[4] = httplib::ClientImpl::vfunction2;
                      param_1[5] = httplib::ClientImpl::vfunction2;
                      param_1[6] = FUN_14042e150;
                      param_1[7] = FUN_14042e2f0;
                      param_1[0xb] = FUN_14042e4e0;
                      param_1[0xc] = &LAB_14042b270;
                      param_1[0xd] = unsupported_texture_format;
                      param_1[0x15] = gles2_renderreadpixels;
                      param_1[0x16] = &LAB_14042f4a0;
                      param_1[0x17] = FUN_14042f4b0;
                      param_1[0x18] = opt_actions_runner_work_platform_platform_thi;
                      param_1[0x19] = that_operation_is_not_supported;
                      parameter_s_is_invalid(param_1,0x32315659);
                      parameter_s_is_invalid(param_1,0x56555949);
                      parameter_s_is_invalid(param_1,0x3231564e);
                      parameter_s_is_invalid(param_1,0x3132564e);
                      iVar4 = failed_to_load_the_shader_d_s(plVar6,0xb,0x8b30);
                      if (iVar4 != 0) {
                        parameter_s_is_invalid(param_1,0x2053454f);
                      }
                      cVar2 = video_subsystem_has_not_been_initialized("GL_EXT_blend_minmax");
                      if (cVar2 != '\0') {
                        *(undefined1 *)((longlong)plVar6 + 9) = 1;
                      }
                      (*(code *)plVar6[0x10])(0xb71);
                      (*(code *)plVar6[0x10])(0xb44);
                      (*(code *)plVar6[2])(0x84c0);
                      (*(code *)plVar6[0x20])(0xd05,1);
                      (*(code *)plVar6[0x20])(0xcf5,1);
                      (*(code *)plVar6[0x14])(0);
                      (*(code *)plVar6[0x14])(1);
                      (*(code *)plVar6[0x11])(2);
                      (*(code *)plVar6[9])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                      *(undefined4 *)((longlong)plVar6 + 0x27c) = 0x3f800000;
                      *(undefined4 *)(plVar6 + 0x50) = 0x3f800000;
                      *(undefined4 *)((longlong)plVar6 + 0x284) = 0x3f800000;
                      *(undefined4 *)(plVar6 + 0x51) = 0x3f800000;
                      *(undefined4 *)(plVar6 + 0x5b) = 0xbf800000;
                      *(undefined4 *)((longlong)plVar6 + 0x2e4) = 0x3f800000;
                      opt_actions_runner_work_platform_platform_thi
                                (&DAT_1413a2ad6,param_1[0x58],0x89c,"GLES2_CreateRenderer");
                      uVar8 = 1;
                      goto LAB_14042b23d;
                    }
                  }
                }
              }
            }
          }
          else {
            FUN_1400fbed0("Unsupported output colorspace");
          }
          if (bVar1 && (bVar10 && bVar9)) goto LAB_14042b23b;
        }
        else {
          video_subsystem_has_not_been_initialized(0x14,4);
          video_subsystem_has_not_been_initialized(0x11,2);
          video_subsystem_has_not_been_initialized(0x12,0);
          cVar2 = video_subsystem_has_not_been_initialized(param_2,uVar5 & 0xffffffffcffffffd | 2);
          if (cVar2 != '\0') goto LAB_14042ae1d;
        }
        uVar8 = out_of_memory();
        uVar8 = FUN_1400fcda0(uVar8);
        video_subsystem_has_not_been_initialized(0x14,local_3c);
        video_subsystem_has_not_been_initialized(0x11,local_40);
        video_subsystem_has_not_been_initialized(0x12,local_44);
        video_subsystem_has_not_been_initialized(param_2,uVar5);
        FUN_1400fbed0(&DAT_141339891,uVar8);
        FUN_140160cf0(uVar8);
      }
    }
  }
LAB_14042b23b:
  uVar8 = 0;
LAB_14042b23d:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_68);
}


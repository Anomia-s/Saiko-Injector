/**
 * Function: glcreateshaderobjectarb
 * Address:  140635320
 * Signature: undefined glcreateshaderobjectarb(void)
 * Body size: 585 bytes
 */


longlong * glcreateshaderobjectarb(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)FUN_140160c70(1,0x130);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_texture_non_power_of_two");
    if ((cVar1 == '\0') &&
       ((cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_texture_rectangle"), cVar1 != '\0'
        || (cVar1 = video_subsystem_has_not_been_initialized("GL_EXT_texture_rectangle"),
           cVar1 != '\0')))) {
      *(undefined1 *)(plVar2 + 0xf) = 1;
    }
    cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_shader_objects");
    if ((((cVar1 != '\0') &&
         (cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_shading_language_100"),
         cVar1 != '\0')) &&
        (cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_vertex_shader"), cVar1 != '\0'))
       && (cVar1 = video_subsystem_has_not_been_initialized("GL_ARB_fragment_shader"), cVar1 != '\0'
          )) {
      lVar3 = video_subsystem_has_not_been_initialized("glGetError");
      *plVar2 = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glAttachObjectARB");
      plVar2[1] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glCompileShaderARB");
      plVar2[2] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glCreateProgramObjectARB");
      plVar2[3] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glCreateShaderObjectARB");
      plVar2[4] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glDeleteObjectARB");
      plVar2[5] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glGetInfoLogARB");
      plVar2[6] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glGetObjectParameterivARB");
      plVar2[7] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glGetUniformLocationARB");
      plVar2[8] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glLinkProgramARB");
      plVar2[9] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glShaderSourceARB");
      plVar2[10] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glUniform1iARB");
      plVar2[0xb] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glUniform1fARB");
      plVar2[0xc] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glUniform3fARB");
      plVar2[0xd] = lVar3;
      lVar3 = video_subsystem_has_not_been_initialized("glUseProgramObjectARB");
      plVar2[0xe] = lVar3;
      if (((((*plVar2 != 0) && (plVar2[1] != 0)) &&
           ((plVar2[2] != 0 && ((plVar2[3] != 0 && (plVar2[4] != 0)))))) && (plVar2[5] != 0)) &&
         (((((plVar2[6] != 0 && (plVar2[7] != 0)) && (plVar2[8] != 0)) &&
           ((plVar2[9] != 0 && (plVar2[10] != 0)))) &&
          ((plVar2[0xb] != 0 && ((plVar2[0xc] != 0 && (lVar3 != 0 && plVar2[0xd] != 0)))))))) {
        lVar3 = (longlong)plVar2 + 0x7c;
        uVar4 = 0;
        do {
          cVar1 = define_uvcoordscale_10n(plVar2,uVar4 & 0xffffffff,lVar3);
          if (cVar1 == '\0') {
            FUN_140635740(plVar2);
            return (longlong *)0x0;
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0xc;
        } while (uVar4 != 9);
        return plVar2;
      }
    }
    FUN_140160cf0(plVar2);
  }
  return (longlong *)0x0;
}


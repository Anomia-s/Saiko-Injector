/**
 * Function: couldnt_load_gles2_function_s_s
 * Address:  14042b2c0
 * Signature: undefined couldnt_load_gles2_function_s_s(void)
 * Body size: 1754 bytes
 */


undefined1 couldnt_load_gles2_function_s_s(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = "glActiveTexture";
  lVar3 = video_subsystem_has_not_been_initialized("glActiveTexture");
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (lVar3 != 0) {
    pcVar4 = "glAttachShader";
    lVar3 = video_subsystem_has_not_been_initialized("glAttachShader");
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      pcVar4 = "glBindAttribLocation";
      lVar3 = video_subsystem_has_not_been_initialized("glBindAttribLocation");
      *(longlong *)(param_1 + 0x20) = lVar3;
      if (lVar3 != 0) {
        pcVar4 = "glBindTexture";
        lVar3 = video_subsystem_has_not_been_initialized("glBindTexture");
        *(longlong *)(param_1 + 0x28) = lVar3;
        if (lVar3 != 0) {
          pcVar4 = "glBlendEquationSeparate";
          lVar3 = video_subsystem_has_not_been_initialized("glBlendEquationSeparate");
          *(longlong *)(param_1 + 0x30) = lVar3;
          if (lVar3 != 0) {
            pcVar4 = "glBlendFuncSeparate";
            lVar3 = video_subsystem_has_not_been_initialized("glBlendFuncSeparate");
            *(longlong *)(param_1 + 0x38) = lVar3;
            if (lVar3 != 0) {
              pcVar4 = "glClear";
              lVar3 = video_subsystem_has_not_been_initialized("glClear");
              *(longlong *)(param_1 + 0x40) = lVar3;
              if (lVar3 != 0) {
                pcVar4 = "glClearColor";
                lVar3 = video_subsystem_has_not_been_initialized("glClearColor");
                *(longlong *)(param_1 + 0x48) = lVar3;
                if (lVar3 != 0) {
                  pcVar4 = "glCompileShader";
                  lVar3 = video_subsystem_has_not_been_initialized("glCompileShader");
                  *(longlong *)(param_1 + 0x50) = lVar3;
                  if (lVar3 != 0) {
                    pcVar4 = "glCreateProgram";
                    lVar3 = video_subsystem_has_not_been_initialized("glCreateProgram");
                    *(longlong *)(param_1 + 0x58) = lVar3;
                    if (lVar3 != 0) {
                      pcVar4 = "glCreateShader";
                      lVar3 = video_subsystem_has_not_been_initialized("glCreateShader");
                      *(longlong *)(param_1 + 0x60) = lVar3;
                      if (lVar3 != 0) {
                        pcVar4 = "glDeleteProgram";
                        lVar3 = video_subsystem_has_not_been_initialized("glDeleteProgram");
                        *(longlong *)(param_1 + 0x68) = lVar3;
                        if (lVar3 != 0) {
                          pcVar4 = "glDeleteShader";
                          lVar3 = video_subsystem_has_not_been_initialized("glDeleteShader");
                          *(longlong *)(param_1 + 0x70) = lVar3;
                          if (lVar3 != 0) {
                            pcVar4 = "glDeleteTextures";
                            lVar3 = video_subsystem_has_not_been_initialized("glDeleteTextures");
                            *(longlong *)(param_1 + 0x78) = lVar3;
                            if (lVar3 != 0) {
                              pcVar4 = "glDisable";
                              lVar3 = video_subsystem_has_not_been_initialized("glDisable");
                              *(longlong *)(param_1 + 0x80) = lVar3;
                              if (lVar3 != 0) {
                                pcVar4 = "glDisableVertexAttribArray";
                                lVar3 = video_subsystem_has_not_been_initialized
                                                  ("glDisableVertexAttribArray");
                                *(longlong *)(param_1 + 0x88) = lVar3;
                                if (lVar3 != 0) {
                                  pcVar4 = "glDrawArrays";
                                  lVar3 = video_subsystem_has_not_been_initialized("glDrawArrays");
                                  *(longlong *)(param_1 + 0x90) = lVar3;
                                  if (lVar3 != 0) {
                                    pcVar4 = "glEnable";
                                    lVar3 = video_subsystem_has_not_been_initialized("glEnable");
                                    *(longlong *)(param_1 + 0x98) = lVar3;
                                    if (lVar3 != 0) {
                                      pcVar4 = "glEnableVertexAttribArray";
                                      lVar3 = video_subsystem_has_not_been_initialized
                                                        ("glEnableVertexAttribArray");
                                      *(longlong *)(param_1 + 0xa0) = lVar3;
                                      if (lVar3 != 0) {
                                        pcVar4 = "glFinish";
                                        lVar3 = video_subsystem_has_not_been_initialized("glFinish")
                                        ;
                                        *(longlong *)(param_1 + 0xa8) = lVar3;
                                        if (lVar3 != 0) {
                                          pcVar4 = "glGenFramebuffers";
                                          lVar3 = video_subsystem_has_not_been_initialized
                                                            ("glGenFramebuffers");
                                          *(longlong *)(param_1 + 0xb0) = lVar3;
                                          if (lVar3 != 0) {
                                            pcVar4 = "glGenTextures";
                                            lVar3 = video_subsystem_has_not_been_initialized
                                                              ("glGenTextures");
                                            *(longlong *)(param_1 + 0xb8) = lVar3;
                                            if (lVar3 != 0) {
                                              pcVar4 = "glGetString";
                                              lVar3 = video_subsystem_has_not_been_initialized
                                                                ("glGetString");
                                              *(longlong *)(param_1 + 0xc0) = lVar3;
                                              if (lVar3 != 0) {
                                                pcVar4 = "glGetError";
                                                lVar3 = video_subsystem_has_not_been_initialized
                                                                  ("glGetError");
                                                *(longlong *)(param_1 + 200) = lVar3;
                                                if (lVar3 != 0) {
                                                  pcVar4 = "glGetIntegerv";
                                                  lVar3 = video_subsystem_has_not_been_initialized
                                                                    ("glGetIntegerv");
                                                  *(longlong *)(param_1 + 0xd0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glGetProgramiv";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glGetProgramiv");
                                                    *(longlong *)(param_1 + 0xd8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glGetShaderInfoLog";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glGetShaderInfoLog");
                                                  *(longlong *)(param_1 + 0xe0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glGetShaderiv";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glGetShaderiv");
                                                    *(longlong *)(param_1 + 0xe8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glGetUniformLocation";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glGetUniformLocation");
                                                  *(longlong *)(param_1 + 0xf0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glLinkProgram";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glLinkProgram");
                                                    *(longlong *)(param_1 + 0xf8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glPixelStorei";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glPixelStorei");
                                                  *(longlong *)(param_1 + 0x100) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glReadPixels";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glReadPixels");
                                                    *(longlong *)(param_1 + 0x108) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glScissor";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glScissor");
                                                  *(longlong *)(param_1 + 0x110) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glShaderBinary";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glShaderBinary");
                                                    *(longlong *)(param_1 + 0x118) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glShaderSource";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glShaderSource");
                                                  *(longlong *)(param_1 + 0x120) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glTexImage2D";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glTexImage2D");
                                                    *(longlong *)(param_1 + 0x128) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glTexParameteri";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glTexParameteri");
                                                  *(longlong *)(param_1 + 0x130) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glTexSubImage2D";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glTexSubImage2D");
                                                    *(longlong *)(param_1 + 0x138) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glUniform1i";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glUniform1i");
                                                  *(longlong *)(param_1 + 0x140) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glUniform3f";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glUniform3f");
                                                    *(longlong *)(param_1 + 0x148) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glUniform4f";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glUniform4f");
                                                  *(longlong *)(param_1 + 0x150) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glUniformMatrix3fv";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glUniformMatrix3fv");
                                                    *(longlong *)(param_1 + 0x158) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glUniformMatrix4fv";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glUniformMatrix4fv");
                                                  *(longlong *)(param_1 + 0x160) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glUseProgram";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glUseProgram");
                                                    *(longlong *)(param_1 + 0x168) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glVertexAttribPointer";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glVertexAttribPointer");
                                                  *(longlong *)(param_1 + 0x170) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glViewport";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glViewport");
                                                    *(longlong *)(param_1 + 0x178) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glBindFramebuffer";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glBindFramebuffer");
                                                  *(longlong *)(param_1 + 0x180) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glFramebufferTexture2D";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glFramebufferTexture2D");
                                                    *(longlong *)(param_1 + 0x188) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glCheckFramebufferStatus";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glCheckFramebufferStatus");
                                                  *(longlong *)(param_1 + 400) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glDeleteFramebuffers";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glDeleteFramebuffers");
                                                    *(longlong *)(param_1 + 0x198) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glGetAttribLocation";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glGetAttribLocation");
                                                  *(longlong *)(param_1 + 0x1a0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glGetProgramInfoLog";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glGetProgramInfoLog");
                                                    *(longlong *)(param_1 + 0x1a8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glGenBuffers";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glGenBuffers");
                                                  *(longlong *)(param_1 + 0x1b0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glDeleteBuffers";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glDeleteBuffers");
                                                    *(longlong *)(param_1 + 0x1b8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glBindBuffer";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glBindBuffer");
                                                  *(longlong *)(param_1 + 0x1c0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    pcVar4 = "glBufferData";
                                                    lVar3 = video_subsystem_has_not_been_initialized
                                                                      ("glBufferData");
                                                    *(longlong *)(param_1 + 0x1c8) = lVar3;
                                                    if (lVar3 != 0) {
                                                      pcVar4 = "glBufferSubData";
                                                      lVar3 = 
                                                  video_subsystem_has_not_been_initialized
                                                            ("glBufferSubData");
                                                  *(longlong *)(param_1 + 0x1d0) = lVar3;
                                                  if (lVar3 != 0) {
                                                    return 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = out_of_memory();
  uVar2 = FUN_1400fbed0("Couldn\'t load GLES2 function %s: %s",pcVar4,uVar1);
  return uVar2;
}


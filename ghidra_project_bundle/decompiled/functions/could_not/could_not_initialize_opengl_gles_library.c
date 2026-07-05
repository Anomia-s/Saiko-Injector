/**
 * Function: could_not_initialize_opengl_gles_library
 * Address:  140456730
 * Signature: undefined could_not_initialize_opengl_gles_library(void)
 * Body size: 1906 bytes
 */


undefined8 could_not_initialize_opengl_gles_library(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  
  if (*(longlong *)(param_1 + 0x688) != 0) {
    uVar3 = FUN_1400fbed0("EGL context already created");
    return uVar3;
  }
  lVar4 = FUN_140160c70(1,0x118);
  *(longlong *)(param_1 + 0x688) = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  pcVar5 = (char *)FUN_140110550("SDL_VIDEO_WIN_D3DCOMPILER");
  if (pcVar5 == (char *)0x0) {
    iVar2 = FUN_1403d7a70();
    if (iVar2 == 0) {
      pcVar5 = "d3dcompiler_43.dll";
    }
    else {
      lVar4 = parameter_s_is_invalid("d3dcompiler_47.dll");
      if (lVar4 != 0) goto LAB_1404567dc;
      FUN_1400fc040();
      pcVar5 = "d3dcompiler_46.dll";
    }
LAB_1404567d2:
    lVar4 = parameter_s_is_invalid(pcVar5);
    if (lVar4 != 0) goto LAB_1404567dc;
    FUN_1400fc040();
    pcVar5 = (char *)FUN_140110550("SDL_OPENGL_LIBRARY");
    if (pcVar5 != (char *)0x0) goto LAB_1404567ed;
LAB_140456822:
    if (*(int *)(param_1 + 1000) == 4) {
      if (*(int *)(param_1 + 0x3dc) < 2) {
        pcVar5 = "libGLESv1_CM.dll";
        lVar4 = parameter_s_is_invalid("libGLESv1_CM.dll");
        if (lVar4 != 0) goto LAB_1404567fd;
        pcVar5 = "libGLES_CM.dll";
      }
      else {
        pcVar5 = "libGLESv2.dll";
      }
    }
    else {
      pcVar5 = "opengl32.dll";
    }
    lVar4 = parameter_s_is_invalid(pcVar5);
    **(longlong **)(param_1 + 0x688) = lVar4;
    if (lVar4 == 0) {
      pcVar5 = "Could not initialize OpenGL / GLES library";
      goto LAB_140456e74;
    }
  }
  else {
    iVar2 = FUN_1400fd210(pcVar5,"none");
    if (iVar2 != 0) goto LAB_1404567d2;
LAB_1404567dc:
    pcVar5 = (char *)FUN_140110550("SDL_OPENGL_LIBRARY");
    if (pcVar5 == (char *)0x0) goto LAB_140456822;
LAB_1404567ed:
    lVar4 = parameter_s_is_invalid(pcVar5);
    if (lVar4 == 0) goto LAB_140456822;
LAB_1404567fd:
    **(longlong **)(param_1 + 0x688) = lVar4;
  }
  if ((param_2 == 0) || (lVar4 = parameter_s_is_invalid(), lVar4 == 0)) {
LAB_140456894:
    pcVar7 = (char *)FUN_140110550("SDL_EGL_LIBRARY");
    pcVar5 = "libEGL.dll";
    if (pcVar7 != (char *)0x0) {
      pcVar5 = pcVar7;
    }
    lVar4 = parameter_s_is_invalid(pcVar5);
    if (lVar4 != 0) {
      lVar6 = failed_loading_s(lVar4,"eglChooseConfig");
      if (lVar6 != 0) {
        FUN_1400fc040();
        goto LAB_1404568df;
      }
      FUN_140165790(lVar4);
    }
    pcVar5 = "Could not load EGL library";
  }
  else {
    lVar6 = failed_loading_s(lVar4,"eglChooseConfig");
    if (lVar6 == 0) {
      FUN_140165790(lVar4);
      goto LAB_140456894;
    }
LAB_1404568df:
    *(longlong *)(*(longlong *)(param_1 + 0x688) + 8) = lVar4;
    uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),"eglGetDisplay");
    *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x40) = uVar3;
    if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x40) == 0) {
      pcVar5 = "Could not retrieve EGL function eglGetDisplay";
    }
    else {
      uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),"eglInitialize");
      *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x48) = uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x48) == 0) {
        pcVar5 = "Could not retrieve EGL function eglInitialize";
      }
      else {
        uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),"eglTerminate")
        ;
        *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x50) = uVar3;
        if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x50) == 0) {
          pcVar5 = "Could not retrieve EGL function eglTerminate";
        }
        else {
          uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                   "eglGetProcAddress");
          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x58) = uVar3;
          if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x58) == 0) {
            pcVar5 = "Could not retrieve EGL function eglGetProcAddress";
          }
          else {
            uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                     "eglChooseConfig");
            *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x60) = uVar3;
            if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x60) == 0) {
              pcVar5 = "Could not retrieve EGL function eglChooseConfig";
            }
            else {
              uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                       "eglCreateContext");
              *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x68) = uVar3;
              if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x68) == 0) {
                pcVar5 = "Could not retrieve EGL function eglCreateContext";
              }
              else {
                uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                         "eglDestroyContext");
                *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x70) = uVar3;
                if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x70) == 0) {
                  pcVar5 = "Could not retrieve EGL function eglDestroyContext";
                }
                else {
                  uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                           "eglCreatePbufferSurface");
                  *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x78) = uVar3;
                  if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x78) == 0) {
                    pcVar5 = "Could not retrieve EGL function eglCreatePbufferSurface";
                  }
                  else {
                    uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                             "eglCreateWindowSurface");
                    *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x80) = uVar3;
                    if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x80) == 0) {
                      pcVar5 = "Could not retrieve EGL function eglCreateWindowSurface";
                    }
                    else {
                      uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8),
                                               "eglDestroySurface");
                      *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x88) = uVar3;
                      if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x88) == 0) {
                        pcVar5 = "Could not retrieve EGL function eglDestroySurface";
                      }
                      else {
                        uVar3 = failed_loading_s(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 8)
                                                 ,"eglMakeCurrent");
                        *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x90) = uVar3;
                        if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x90) == 0) {
                          pcVar5 = "Could not retrieve EGL function eglMakeCurrent";
                        }
                        else {
                          uVar3 = failed_loading_s(*(undefined8 *)
                                                    (*(longlong *)(param_1 + 0x688) + 8),
                                                   "eglSwapBuffers");
                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x98) = uVar3;
                          if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x98) == 0) {
                            pcVar5 = "Could not retrieve EGL function eglSwapBuffers";
                          }
                          else {
                            uVar3 = failed_loading_s(*(undefined8 *)
                                                      (*(longlong *)(param_1 + 0x688) + 8),
                                                     "eglSwapInterval");
                            *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xa0) = uVar3;
                            if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xa0) == 0) {
                              pcVar5 = "Could not retrieve EGL function eglSwapInterval";
                            }
                            else {
                              uVar3 = failed_loading_s(*(undefined8 *)
                                                        (*(longlong *)(param_1 + 0x688) + 8),
                                                       "eglQueryString");
                              *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xa8) = uVar3;
                              if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xa8) == 0) {
                                pcVar5 = "Could not retrieve EGL function eglQueryString";
                              }
                              else {
                                uVar3 = failed_loading_s(*(undefined8 *)
                                                          (*(longlong *)(param_1 + 0x688) + 8),
                                                         "eglGetConfigAttrib");
                                *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xb0) = uVar3;
                                if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xb0) == 0) {
                                  pcVar5 = "Could not retrieve EGL function eglGetConfigAttrib";
                                }
                                else {
                                  uVar3 = failed_loading_s(*(undefined8 *)
                                                            (*(longlong *)(param_1 + 0x688) + 8),
                                                           "eglWaitNative");
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xb8) = uVar3;
                                  if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xb8) == 0) {
                                    pcVar5 = "Could not retrieve EGL function eglWaitNative";
                                  }
                                  else {
                                    uVar3 = failed_loading_s(*(undefined8 *)
                                                              (*(longlong *)(param_1 + 0x688) + 8),
                                                             "eglWaitGL");
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xc0) = uVar3;
                                    if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xc0) == 0) {
                                      pcVar5 = "Could not retrieve EGL function eglWaitGL";
                                    }
                                    else {
                                      uVar3 = failed_loading_s(*(undefined8 *)
                                                                (*(longlong *)(param_1 + 0x688) + 8)
                                                               ,"eglBindAPI");
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 200) = uVar3;
                                      if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 200) == 0)
                                      {
                                        pcVar5 = "Could not retrieve EGL function eglBindAPI";
                                      }
                                      else {
                                        uVar3 = failed_loading_s(*(undefined8 *)
                                                                  (*(longlong *)(param_1 + 0x688) +
                                                                  8),"eglGetError");
                                        *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xd0) =
                                             uVar3;
                                        if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xd0) !=
                                            0) {
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglQueryDevicesEXT");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xd8) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglGetPlatformDisplayEXT");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xe8) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglCreateSyncKHR");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xf0) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglDestroySyncKHR");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0xf8) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglDupNativeFenceFDANDROID");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x100) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglWaitSyncKHR");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x108) =
                                               uVar3;
                                          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x58
                                                              ))("eglClientWaitSyncKHR");
                                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x110) =
                                               uVar3;
                                          FUN_1400fcb10(param_1 + 0x40c,pcVar5,0xff);
                                          return 1;
                                        }
                                        pcVar5 = "Could not retrieve EGL function eglGetError";
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
LAB_140456e74:
  cVar1 = FUN_1400fbed0(pcVar5);
  if (cVar1 == '\0') {
    FUN_140160cf0(*(undefined8 *)(param_1 + 0x688));
    *(undefined8 *)(param_1 + 0x688) = 0;
    return 0;
  }
  return 1;
}


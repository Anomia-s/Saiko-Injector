/**
 * Function: color_target_infos
 * Address:  1401013f0
 * Signature: undefined color_target_infos(void)
 * Body size: 1286 bytes
 */


longlong *
color_target_infos(longlong *param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_1 == (longlong *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","command_buffer");
    return (longlong *)0x0;
  }
  uVar8 = (uint)param_3;
  if (uVar8 != 0 && param_2 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","color_target_infos");
    return (longlong *)0x0;
  }
  if (4 < uVar8) {
    FUN_1400fbed0("num_color_targets exceeds MAX_COLOR_TARGET_BINDINGS");
    return (longlong *)0x0;
  }
  uVar9 = param_3;
  if (*(char *)(*param_1 + 0x2a4) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x49) == '\x01') {
      do {
        iVar5 = FUN_14015bb20(&DAT_1414f74f0,"SDL_BeginGPURenderPass_REAL",
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                              ,0x59a);
      } while (iVar5 == 0);
    }
    else {
      if ((((char)param_1[2] == '\0') && ((char)param_1[5] == '\0')) && ((char)param_1[8] != '\x01')
         ) {
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            lVar7 = uVar10 * 0x40;
            lVar1 = param_2 + lVar7;
            lVar2 = *(longlong *)(param_2 + lVar7);
            if ((*(char *)(param_2 + 0x38 + lVar7) == '\x01') && (*(int *)(lVar1 + 0x20) == 0)) {
              do {
                iVar5 = FUN_14015bb20(&DAT_1414f7550,"SDL_BeginGPURenderPass_REAL",
                                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                      ,0x5a1);
              } while (iVar5 == 0);
              uVar9 = param_3 & 0xffffffff;
              if (iVar5 == 1) {
                pcVar4 = (code *)swi(3);
                plVar6 = (longlong *)(*pcVar4)();
                return plVar6;
              }
            }
            if ((*(uint *)(lVar1 + 0x24) & 0xfffffffe) == 2) {
              piVar3 = *(int **)(lVar1 + 0x28);
              if (piVar3 == (int *)0x0) {
                do {
                  iVar5 = FUN_14015bb20(&DAT_1414f7580,"SDL_BeginGPURenderPass_REAL",
                                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                        ,0x5a6);
                } while (iVar5 == 0);
              }
              else {
                if (*(int *)(lVar2 + 0x1c) == 0) {
                  do {
                    iVar5 = FUN_14015bb20(&DAT_1414f75b0,"SDL_BeginGPURenderPass_REAL",
                                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                          ,0x5aa);
                  } while (iVar5 == 0);
                  uVar9 = param_3 & 0xffffffff;
                  if (iVar5 == 1) {
                    pcVar4 = (code *)swi(3);
                    plVar6 = (longlong *)(*pcVar4)();
                    return plVar6;
                  }
                }
                if (piVar3[7] != 0) {
                  do {
                    iVar5 = FUN_14015bb20(&DAT_1414f75e0,"SDL_BeginGPURenderPass_REAL",
                                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                          ,0x5ad);
                  } while (iVar5 == 0);
                  uVar9 = param_3 & 0xffffffff;
                  if (iVar5 == 1) {
                    pcVar4 = (code *)swi(3);
                    plVar6 = (longlong *)(*pcVar4)();
                    return plVar6;
                  }
                }
                if (piVar3[1] != *(int *)(lVar2 + 4)) {
                  do {
                    iVar5 = FUN_14015bb20(&DAT_1414f7610,"SDL_BeginGPURenderPass_REAL",
                                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                          ,0x5b0);
                  } while (iVar5 == 0);
                  uVar9 = param_3 & 0xffffffff;
                  if (iVar5 == 1) {
                    pcVar4 = (code *)swi(3);
                    plVar6 = (longlong *)(*pcVar4)();
                    return plVar6;
                  }
                }
                if (*piVar3 == 2) {
                  do {
                    iVar5 = FUN_14015bb20(&DAT_1414f7640,"SDL_BeginGPURenderPass_REAL",
                                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                          ,0x5b3);
                  } while (iVar5 == 0);
                  uVar9 = param_3 & 0xffffffff;
                  if (iVar5 == 1) {
                    pcVar4 = (code *)swi(3);
                    plVar6 = (longlong *)(*pcVar4)();
                    return plVar6;
                  }
                }
                if ((*(byte *)(piVar3 + 2) & 2) != 0) goto LAB_14010153c;
                do {
                  iVar5 = FUN_14015bb20(&DAT_1414f7670,"SDL_BeginGPURenderPass_REAL",
                                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                        ,0x5b6);
                } while (iVar5 == 0);
              }
              uVar9 = param_3 & 0xffffffff;
              if (iVar5 == 1) {
                pcVar4 = (code *)swi(3);
                plVar6 = (longlong *)(*pcVar4)();
                return plVar6;
              }
            }
LAB_14010153c:
            uVar10 = uVar10 + 1;
          } while (uVar10 != (param_3 & 0xffffffff));
        }
        if (param_4 != (longlong *)0x0) {
          if ((*(byte *)(*param_4 + 8) & 4) == 0) {
            do {
              iVar5 = FUN_14015bb20(&DAT_1414f76a0,"SDL_BeginGPURenderPass_REAL",
                                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                    ,0x5c0);
            } while (iVar5 == 0);
            uVar9 = param_3 & 0xffffffff;
            if (iVar5 == 1) {
              pcVar4 = (code *)swi(3);
              plVar6 = (longlong *)(*pcVar4)();
              return plVar6;
            }
          }
          if ((*(char *)((longlong)param_4 + 0x1c) == '\x01') &&
             ((*(int *)((longlong)param_4 + 0xc) == 0 || (*(int *)((longlong)param_4 + 0x14) == 0)))
             ) {
            do {
              iVar5 = FUN_14015bb20(&DAT_1414f76d0,"SDL_BeginGPURenderPass_REAL",
                                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                    ,0x5c4);
            } while (iVar5 == 0);
            uVar9 = param_3 & 0xffffffff;
            if (iVar5 == 1) {
              pcVar4 = (code *)swi(3);
              plVar6 = (longlong *)(*pcVar4)();
              return plVar6;
            }
          }
          if ((((int)param_4[2] == 2) || ((int)param_4[2] == 3)) ||
             ((*(uint *)(param_4 + 3) & 0xfffffffe) == 2)) {
            do {
              iVar5 = FUN_14015bb20(&DAT_1414f7700,"SDL_BeginGPURenderPass_REAL",
                                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                                    ,0x5cb);
            } while (iVar5 == 0);
            uVar9 = param_3 & 0xffffffff;
            if (iVar5 == 1) {
              pcVar4 = (code *)swi(3);
              plVar6 = (longlong *)(*pcVar4)();
              return plVar6;
            }
          }
        }
        goto LAB_1401018d5;
      }
      do {
        iVar5 = FUN_14015bb20(&DAT_1414f7520,"SDL_BeginGPURenderPass_REAL",
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/SDL_gpu.c"
                              ,0x59b);
      } while (iVar5 == 0);
    }
    if (iVar5 == 1) {
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    param_1 = (longlong *)0x0;
  }
  else {
LAB_1401018d5:
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,uVar9,param_4);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1 = param_1 + 1;
  }
  return param_1;
}


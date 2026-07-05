/**
 * Function: gldebugmessagecallbackarb
 * Address:  14042a390
 * Signature: undefined gldebugmessagecallbackarb(void)
 * Body size: 343 bytes
 */


void gldebugmessagecallbackarb(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar5 = plVar1;
  if (*plVar1 != 0) {
    FUN_14042a660(param_1);
    plVar5 = *(longlong **)(param_1 + 0x2c0);
  }
  if ((char)plVar5[1] == '\x01') {
    if (*(char *)((longlong)plVar5 + 9) == '\x01') {
      if (*(int *)((longlong)plVar5 + 0xc) != 0) {
        if (0 < *(int *)((longlong)plVar5 + 0xc)) {
          lVar6 = 0;
          do {
            FUN_140160cf0(*(undefined8 *)(plVar5[2] + lVar6 * 8));
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)((longlong)plVar5 + 0xc));
        }
        FUN_140160cf0(plVar5[2]);
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
        plVar5[2] = 0;
      }
    }
    else if (plVar5[0x1b] != 0) {
      do {
        iVar2 = (*(code *)plVar5[0x1b])();
      } while (iVar2 != 0);
    }
  }
  if (*(char *)((longlong)plVar1 + 9) == '\x01') {
    pcVar3 = (code *)video_subsystem_has_not_been_initialized("glDebugMessageCallbackARB");
    (*pcVar3)(plVar1[3],plVar1[4]);
  }
  if (plVar1[0x3f] != 0) {
    FUN_140635740();
  }
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar4 = plVar1[6];
    if (lVar4 != 0) {
      do {
        lVar6 = *(longlong *)(lVar4 + 0x10);
        (*(code *)plVar1[0x3b])(1,lVar4 + 8);
        gl_out_of_memory(&DAT_1413a2ad6,param_1,0x62a,"GL_DestroyRenderer");
        FUN_140160cf0(plVar1[6]);
        plVar1[6] = lVar6;
        lVar4 = lVar6;
      } while (lVar6 != 0);
      lVar6 = *plVar1;
    }
    video_subsystem_has_not_been_initialized(lVar6);
  }
  FUN_140160cf0(plVar1);
  return;
}


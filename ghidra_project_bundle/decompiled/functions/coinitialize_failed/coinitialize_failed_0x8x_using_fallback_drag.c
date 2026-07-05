/**
 * Function: coinitialize_failed_0x8x_using_fallback_drag
 * Address:  14015e430
 * Signature: undefined coinitialize_failed_0x8x_using_fallback_drag(void)
 * Body size: 605 bytes
 */


ulonglong coinitialize_failed_0x8x_using_fallback_drag(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  UINT UVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x678);
  iVar4 = FUN_1403d7730();
  if (iVar4 < 0) {
    pcVar8 = "CoInitialize() failed: 0x%.8x, using fallback drag-n-drop functionality";
LAB_14015e484:
    FUN_1400fb890(5,pcVar8,iVar4);
    lVar6 = FUN_140110550("SDL_WINDOWS_DPI_AWARENESS");
    if (lVar6 == 0) goto LAB_14015e51b;
LAB_14015e4a2:
    iVar4 = FUN_1400fd200(lVar6,"permonitorv2");
    if (iVar4 == 0) goto LAB_14015e51b;
    iVar4 = FUN_1400fd200(lVar6,"permonitor");
    if (iVar4 == 0) goto LAB_14015e538;
    iVar4 = FUN_1400fd200(lVar6,"system");
    if (iVar4 != 0) {
      iVar4 = FUN_1400fd200(lVar6,"unaware");
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*(longlong *)(param_1 + 0x678) + 0x38);
        if (pcVar2 == (code *)0x0) {
          pcVar2 = *(code **)(*(longlong *)(param_1 + 0x678) + 0xa8);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(0);
          }
        }
        else {
          (*pcVar2)(0xffffffffffffffff);
        }
      }
      goto LAB_14015e5a3;
    }
    lVar6 = *(longlong *)(param_1 + 0x678);
    if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
      (**(code **)(lVar6 + 0x38))(0xfffffffffffffffe);
      goto LAB_14015e5a3;
    }
    if (*(code **)(lVar6 + 0xa8) != (code *)0x0) {
      (**(code **)(lVar6 + 0xa8))(1);
      goto LAB_14015e5a3;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 4) = 1;
    iVar4 = OleInitialize((LPVOID)0x0);
    if (iVar4 < 0) {
      pcVar8 = "OleInitialize() failed: 0x%.8x, using fallback drag-n-drop functionality";
      goto LAB_14015e484;
    }
    *(undefined1 *)(lVar1 + 5) = 1;
    lVar6 = FUN_140110550("SDL_WINDOWS_DPI_AWARENESS");
    if (lVar6 != 0) goto LAB_14015e4a2;
LAB_14015e51b:
    lVar6 = *(longlong *)(param_1 + 0x678);
    if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
      iVar4 = (**(code **)(lVar6 + 0x38))(0xfffffffffffffffc);
      if (iVar4 != 0) goto LAB_14015e5a3;
LAB_14015e538:
      lVar6 = *(longlong *)(param_1 + 0x678);
      if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
        (**(code **)(lVar6 + 0x38))(0xfffffffffffffffd);
        goto LAB_14015e5a3;
      }
    }
    if (*(code **)(lVar6 + 0xa8) != (code *)0x0) {
      (**(code **)(lVar6 + 0xa8))(2);
      goto LAB_14015e5a3;
    }
  }
  if (*(code **)(lVar6 + 0x30) != (code *)0x0) {
    (**(code **)(lVar6 + 0x30))();
  }
LAB_14015e5a3:
  cVar3 = FUN_1401106d0("SDL_WINDOWS_GAMEINPUT",1);
  if (cVar3 != '\0') {
    that_operation_is_not_supported(param_1);
  }
  uVar7 = no_displays_available(param_1);
  if ((char)uVar7 != '\0') {
    uVar7 = uVar7 & 0xffffffff;
    FUN_140464da0(param_1);
    FUN_1404677d0(param_1);
    cm_unregister_notification();
    if (*(longlong *)(*(longlong *)(param_1 + 0x678) + 0x108) == 0) {
      hidvid_xpid_x(param_1,1);
    }
    parameter_s_is_invalid("SDL_WINDOWS_RAW_KEYBOARD",FUN_14015e820,param_1);
    parameter_s_is_invalid("SDL_WINDOWS_ENABLE_MESSAGELOOP",FUN_14015e850,0);
    parameter_s_is_invalid("SDL_WINDOWS_ENABLE_MENU_MNEMONICS",FUN_14015e870,0);
    parameter_s_is_invalid("SDL_WINDOW_FRAME_USABLE_WHILE_CURSOR_HIDDEN",FUN_14015e890,0);
    UVar5 = RegisterWindowMessageA("_SDL_WAKEUP");
    *(UINT *)(lVar1 + 0x358) = UVar5;
  }
  return uVar7;
}


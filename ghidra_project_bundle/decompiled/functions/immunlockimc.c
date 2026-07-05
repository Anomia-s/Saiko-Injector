/**
 * Function: immunlockimc
 * Address:  1404654c0
 * Signature: undefined immunlockimc(void)
 * Body size: 648 bytes
 */


void immunlockimc(longlong param_1,longlong param_2)

{
  char cVar1;
  HWND pHVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  HIMC pHVar7;
  HKL pHVar8;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    pHVar2 = *(HWND *)(*(longlong *)(param_2 + 0x180) + 8);
    pcVar3 = (char *)FUN_140110550("SDL_IME_IMPLEMENTED_UI");
    if (pcVar3 != (char *)0x0) {
      pcVar4 = strstr(pcVar3,"composition");
      if (pcVar4 != (char *)0x0) {
        *(undefined1 *)(param_1 + 0x113) = 1;
      }
      pcVar3 = strstr(pcVar3,"candidates");
      if (pcVar3 != (char *)0x0) {
        *(undefined1 *)(param_1 + 0x114) = 1;
      }
    }
    *(HWND *)(param_1 + 0x118) = pHVar2;
    *(undefined1 *)(param_1 + 0x110) = 1;
    lVar5 = parameter_s_is_invalid("imm32.dll");
    *(longlong *)(param_1 + 0x220) = lVar5;
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + 0x112) = 0;
      FUN_1400fc040();
      return;
    }
    uVar6 = failed_loading_s(lVar5,"ImmLockIMC");
    *(undefined8 *)(param_1 + 0x238) = uVar6;
    uVar6 = failed_loading_s(*(undefined8 *)(param_1 + 0x220),"ImmUnlockIMC");
    *(undefined8 *)(param_1 + 0x240) = uVar6;
    uVar6 = failed_loading_s(*(undefined8 *)(param_1 + 0x220),"ImmLockIMCC");
    *(undefined8 *)(param_1 + 0x248) = uVar6;
    uVar6 = failed_loading_s(*(undefined8 *)(param_1 + 0x220),"ImmUnlockIMCC");
    *(undefined8 *)(param_1 + 0x250) = uVar6;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x180) + 8);
    if (lVar5 != *(longlong *)(param_1 + 0x120)) {
      *(longlong *)(param_1 + 0x120) = lVar5;
      *(undefined8 *)(param_1 + 0x1dc) = 0;
      *(undefined8 *)(param_1 + 0x1e4) = 0;
      *(undefined8 *)(param_1 + 0x1ec) = 0;
      *(undefined8 *)(param_1 + 500) = 0;
      *(undefined8 *)(param_1 + 0x1fc) = 0;
      *(undefined8 *)(param_1 + 0x204) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
    FUN_1404657f0(param_1,lVar5,param_2 + 0x138,*(undefined4 *)(param_2 + 0x148));
    pHVar7 = ImmGetContext(pHVar2);
    *(HIMC *)(param_1 + 0x130) = pHVar7;
    ImmReleaseContext(pHVar2,pHVar7);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      *(undefined1 *)(param_1 + 0x112) = 0;
      cVar1 = *(char *)(param_1 + 0x110);
    }
    else {
      *(undefined1 *)(param_1 + 0x112) = 1;
      pHVar8 = GetKeyboardLayout(0);
      if (pHVar8 != *(HKL *)(param_1 + 0x218)) {
        *(HKL *)(param_1 + 0x218) = pHVar8;
        *(bool *)(param_1 + 0x1d8) =
             ((uint)pHVar8 & 0xffff) == 0x804 || ((uint)pHVar8 & 0x3ff) == 0x12;
        *(uint *)(param_1 + 0x1d4) = (uint)(pHVar8 != (HKL)0xe0060404);
      }
      showreadingwindow(param_1);
      pHVar8 = GetKeyboardLayout(0);
      if (pHVar8 != *(HKL *)(param_1 + 0x218)) {
        *(HKL *)(param_1 + 0x218) = pHVar8;
        *(bool *)(param_1 + 0x1d8) =
             ((uint)pHVar8 & 0xffff) == 0x804 || ((uint)pHVar8 & 0x3ff) == 0x12;
        *(uint *)(param_1 + 0x1d4) = (uint)(pHVar8 != (HKL)0xe0060404);
      }
      cVar1 = *(char *)(param_1 + 0x110);
    }
    if ((cVar1 == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) {
      FUN_1404659c0(param_1);
      if (*(HWND *)(param_1 + 0x120) == *(HWND *)(param_1 + 0x118)) {
        ImmAssociateContext(*(HWND *)(param_1 + 0x120),(HIMC)0x0);
      }
      *(undefined1 *)(param_1 + 0x111) = 0;
    }
  }
  return;
}


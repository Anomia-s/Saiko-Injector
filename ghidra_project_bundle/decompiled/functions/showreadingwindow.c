/**
 * Function: showreadingwindow
 * Address:  140466c70
 * Signature: undefined showreadingwindow(void)
 * Body size: 229 bytes
 */


void showreadingwindow(longlong param_1)

{
  UINT UVar1;
  longlong lVar2;
  undefined8 uVar3;
  HIMC pHVar4;
  undefined1 auStack_148 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  UVar1 = ImmGetIMEFileNameA(*(HKL *)(param_1 + 0x218),local_128,0x104);
  if (UVar1 != 0) {
    lVar2 = parameter_s_is_invalid(local_128);
    if (lVar2 != 0) {
      uVar3 = failed_loading_s(lVar2,"GetReadingString");
      *(undefined8 *)(param_1 + 0x228) = uVar3;
      lVar2 = failed_loading_s(lVar2,"ShowReadingWindow");
      *(longlong *)(param_1 + 0x230) = lVar2;
      if (lVar2 != 0) {
        pHVar4 = ImmGetContext(*(HWND *)(param_1 + 0x120));
        if (pHVar4 != (HIMC)0x0) {
          (**(code **)(param_1 + 0x230))(pHVar4,0);
          ImmReleaseContext(*(HWND *)(param_1 + 0x120),pHVar4);
        }
      }
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_148);
}


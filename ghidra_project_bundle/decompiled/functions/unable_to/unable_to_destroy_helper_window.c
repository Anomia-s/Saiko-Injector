/**
 * Function: unable_to_destroy_helper_window
 * Address:  14045f870
 * Signature: undefined unable_to_destroy_helper_window(void)
 * Body size: 128 bytes
 */


void unable_to_destroy_helper_window(void)

{
  BOOL BVar1;
  HMODULE hInstance;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  if (DAT_1416f2178 != (HWND)0x0) {
    BVar1 = DestroyWindow(DAT_1416f2178);
    if (BVar1 == 0) {
      FUN_1403d7710("Unable to destroy Helper Window");
      return;
    }
    DAT_1416f2178 = (HWND)0x0;
  }
  if (DAT_1416f2180 != 0) {
    BVar1 = UnregisterClassW(L"SDLHelperWindowInputCatcher",hInstance);
    if (BVar1 == 0) {
      FUN_1403d7710("Unable to destroy Helper Window Class");
      return;
    }
    DAT_1416f2180 = 0;
  }
  return;
}


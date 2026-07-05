/**
 * Function: unable_to_create_helper_window
 * Address:  14045f710
 * Signature: undefined unable_to_create_helper_window(void)
 * Body size: 342 bytes
 */


undefined8 unable_to_create_helper_window(void)

{
  DWORD DVar1;
  HMODULE hInstance;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStackY_b8 [32];
  WNDCLASSW local_58;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStackY_b8;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  uVar2 = 1;
  if (DAT_1416f2178 != (HWND)0x0) goto LAB_14045f836;
  local_58.style = 0;
  local_58._4_4_ = 0;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hbrBackground = (HBRUSH)0x0;
  local_58.lpszMenuName = (LPCWSTR)0x0;
  local_58.hIcon = (HICON)0x0;
  local_58.hCursor = (HCURSOR)0x0;
  local_58.lpfnWndProc = DefWindowProcW_exref;
  local_58.lpszClassName = L"SDLHelperWindowInputCatcher";
  local_58.hInstance = hInstance;
  DAT_1416f2180 = RegisterClassW(&local_58);
  if (DAT_1416f2180 == 0) {
    DVar1 = GetLastError();
    if (DVar1 == 0x582) goto LAB_14045f7aa;
    pcVar3 = "Unable to create Helper Window Class";
  }
  else {
LAB_14045f7aa:
    DAT_1416f2178 =
         CreateWindowExW(0,L"SDLHelperWindowInputCatcher",L"SDLHelperWindowInputMsgWindow",0,
                         -0x80000000,-0x80000000,-0x80000000,-0x80000000,(HWND)0xfffffffffffffffd,
                         (HMENU)0x0,hInstance,(LPVOID)0x0);
    uVar2 = 1;
    if (DAT_1416f2178 != (HWND)0x0) goto LAB_14045f836;
    UnregisterClassW(L"SDLHelperWindowInputCatcher",hInstance);
    pcVar3 = "Unable to create Helper Window";
  }
  uVar2 = FUN_1403d7710(pcVar3);
LAB_14045f836:
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStackY_b8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStackY_b8);
}


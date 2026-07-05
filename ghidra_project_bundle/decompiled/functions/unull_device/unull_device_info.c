/**
 * Function: unull_device_info
 * Address:  140176160
 * Signature: undefined unull_device_info(void)
 * Body size: 134 bytes
 */


longlong unull_device_info(longlong param_1)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 == 0) {
    FUN_140160cf0(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    sVar2 = wcslen(L"NULL device info");
    lVar3 = FUN_14017b9c0("UTF-8","WCHAR_T",L"NULL device info",sVar2 * 2 + 2);
    if (lVar3 == 0) {
      FUN_1400fc040();
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar3);
      FUN_140160cf0(lVar3);
    }
  }
  return lVar1;
}


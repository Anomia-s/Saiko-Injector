/**
 * Function: could_not_open_icc_profile
 * Address:  14045f2e0
 * Signature: undefined could_not_open_icc_profile(void)
 * Body size: 123 bytes
 */


longlong could_not_open_icc_profile(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x180);
  sVar1 = wcslen(*(wchar_t **)(lVar2 + 0xa8));
  lVar2 = FUN_14017b9c0("UTF-8","UTF-16LE",*(undefined8 *)(lVar2 + 0xa8),sVar1 * 2 + 2);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1400f9690(lVar2,param_3);
    if (lVar3 == 0) {
      FUN_1400fbed0("Could not open ICC profile");
    }
    FUN_140160cf0(lVar2);
  }
  return lVar3;
}


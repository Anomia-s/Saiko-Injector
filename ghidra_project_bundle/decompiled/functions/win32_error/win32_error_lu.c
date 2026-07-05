/**
 * Function: win32_error_lu
 * Address:  1405801e0
 * Signature: undefined win32_error_lu(void)
 * Body size: 341 bytes
 */


void win32_error_lu(undefined8 *param_1,DWORD param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  ulonglong _Size;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  byte abStack_129 [265];
  
  DVar1 = FormatMessageA(0x1200,(LPCVOID)0x0,param_2,0,(LPSTR)(abStack_129 + 1),0x100,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    FUN_1400a3c00(abStack_129 + 1,0x100,"Win32 error %lu",param_2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    _Size = strlen((char *)(abStack_129 + 1));
    uVar2 = _Size;
    if ((longlong)_Size < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
joined_r0x00014058028e:
    if (0xf < uVar2) {
      uVar3 = _Size | 0xf;
      uVar2 = 0x16;
      if (0x16 < uVar3) {
        uVar2 = uVar3;
      }
      if (uVar3 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar2 + 1);
      }
      else {
        lVar4 = FUN_140b65d30(uVar2 + 0x28);
        _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar4;
      }
      *param_1 = _Dst;
      param_1[2] = _Size;
      param_1[3] = uVar2;
      memcpy(_Dst,abStack_129 + 1,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      return;
    }
  }
  else {
    uVar2 = (ulonglong)DVar1;
    do {
      if ((0x20 < (ulonglong)abStack_129[uVar2]) ||
         ((0x100002400U >> ((ulonglong)abStack_129[uVar2] & 0x3f) & 1) == 0)) {
        _Size = uVar2 & 0xffffffff;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        goto joined_r0x00014058028e;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *param_1 = 0;
    param_1[1] = 0;
    _Size = 0;
  }
  param_1[2] = _Size;
  param_1[3] = 0xf;
  memcpy(param_1,abStack_129 + 1,_Size);
  *(undefined1 *)((longlong)param_1 + _Size) = 0;
  return;
}


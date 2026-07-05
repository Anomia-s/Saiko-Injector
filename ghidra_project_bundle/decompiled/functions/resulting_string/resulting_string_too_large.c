/**
 * Function: resulting_string_too_large
 * Address:  1406ac5d0
 * Signature: undefined resulting_string_too_large(void)
 * Body size: 331 bytes
 */


undefined8 resulting_string_too_large(undefined8 param_1)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong _Size;
  ulonglong uVar4;
  ulonglong _Size_00;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  undefined1 local_250 [544];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_278;
  pvVar2 = (void *)FUN_1406b7610(param_1,1,&local_258);
  uVar1 = FUN_1406b7830(param_1);
  if ((int)uVar1 < 1) {
    FUN_1404741b0(param_1,&DAT_1413a2ad6,0);
  }
  else {
    if (0x40000000 / (ulonglong)uVar1 < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"resulting string too large");
    }
    uVar4 = (ulonglong)uVar1;
    _Dst = (void *)FUN_1406b8360(param_1,local_250,local_258 * uVar4);
    _Size_00 = local_258;
    lVar3 = local_258 * uVar4;
    memcpy(_Dst,pvVar2,local_258);
    pvVar2 = (void *)((longlong)_Dst + local_258);
    _Size = lVar3 - local_258;
    if (_Size_00 < _Size) {
      do {
        memcpy(pvVar2,_Dst,_Size_00);
        pvVar2 = (void *)((longlong)pvVar2 + _Size_00);
        _Size = _Size - _Size_00;
        _Size_00 = _Size_00 * 2;
      } while (_Size_00 < _Size);
    }
    memcpy(pvVar2,_Dst,_Size);
    FUN_1406b8870(local_250,uVar4 * local_258);
  }
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_278)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_278);
  }
  return 1;
}


/**
 * Function: mkgmtime_failed
 * Address:  140037ae0
 * Signature: undefined __thiscall mkgmtime_failed(void * this)
 * Body size: 241 bytes
 */


longlong __thiscall mkgmtime_failed(void *this)

{
  bool bVar1;
  errno_t eVar2;
  __time64_t _Var3;
  undefined1 local_b8 [32];
  undefined1 local_98 [68];
  int local_54;
  undefined1 local_38 [8];
  undefined **ppuStack_30;
  void *local_28;
  ulonglong uStack_20;
  void *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = this;
  eVar2 = _gmtime64_s((tm *)(local_98 + 0x3c),(__time64_t *)&local_18);
  if (eVar2 != 0) {
    FUN_140007930(local_b8,eVar2);
    FUN_1400089f0(local_38,"failed to call gmtime_rs, with error message errno: ",local_b8);
    local_98._8_8_ = 0;
    local_98._16_8_ = 0;
                    /* inlined constructor or destructor (approx location) for
                       quill::v11::QuillError */
    local_98._0_8_ = &quill::v11::QuillError::vftable;
    local_98._32_8_ = ppuStack_30;
    local_98._40_8_ = local_28;
    local_98._48_8_ = uStack_20;
    local_28 = (void *)0x0;
    uStack_20 = 0xf;
    local_38[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14140fa50);
  }
  bVar1 = 0xb < local_54;
  local_54 = 0xb;
  if (bVar1) {
    local_54 = 0x17;
  }
  local_98._60_8_ = 0x3b0000003b;
  _Var3 = _mkgmtime64((tm *)(local_98 + 0x3c));
  if (_Var3 != -1) {
    return _Var3 + 1;
  }
  quill::v11::QuillError::QuillError((QuillError *)local_98,"_mkgmtime failed.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_98,(ThrowInfo *)&DAT_14140fa50);
}


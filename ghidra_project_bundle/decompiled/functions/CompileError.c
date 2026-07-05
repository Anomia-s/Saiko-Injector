/**
 * Function: CompileError
 * Address:  1406c4ed0
 * Signature: CompileError * __thiscall CompileError(CompileError * this, longlong param_1)
 * Body size: 290 bytes
 */


CompileError * __thiscall Luau::CompileError::CompileError(CompileError *this,longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  ulonglong uVar7;
  undefined8 *_Src;
  
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (CompileError_vftable *)&std::exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)&(this->exception_data).offset_0x10 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(this->exception_data).offset_0x10 + 4) = uVar2;
  *(undefined4 *)&(this->exception_data).offset_0x18 = uVar3;
  *(undefined4 *)((longlong)&(this->exception_data).offset_0x18 + 4) = uVar4;
  (this->exception_data).offset_0x20 = (void *)0x0;
  (this->exception_data).offset_0x28 = 0;
  (this->exception_data).offset_0x30 = 0;
  (this->exception_data).offset_0x38 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
    _Src = (undefined8 *)(param_1 + 0x28);
  }
  else {
    _Src = *(undefined8 **)(param_1 + 0x28);
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      (this->exception_data).offset_0x30 = uVar1;
      (this->exception_data).offset_0x38 = 0xf;
      uVar1 = _Src[1];
      (this->exception_data).offset_0x20 = (void *)*_Src;
      (this->exception_data).offset_0x28 = uVar1;
    }
    else {
      uVar5 = uVar1 | 0xf;
      uVar7 = 0x16;
      if (0x16 < uVar5) {
        uVar7 = uVar5;
      }
      if (uVar5 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar7 + 1);
      }
      else {
        lVar6 = FUN_140b65d30(uVar7 + 0x28);
        _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar6;
      }
      (this->exception_data).offset_0x20 = _Dst;
      (this->exception_data).offset_0x30 = uVar1;
      (this->exception_data).offset_0x38 = uVar7;
      memcpy(_Dst,_Src,uVar1 + 1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}


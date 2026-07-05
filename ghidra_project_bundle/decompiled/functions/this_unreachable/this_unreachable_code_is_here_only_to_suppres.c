/**
 * Function: this_unreachable_code_is_here_only_to_suppres
 * Address:  140b53f60
 * Signature: undefined this_unreachable_code_is_here_only_to_suppres(void)
 * Body size: 280 bytes
 */


undefined4 this_unreachable_code_is_here_only_to_suppres(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *_Dst;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  uVar1 = param_1[6];
  uVar7 = param_1[7];
  if (uVar1 == uVar7) {
    uVar7 = uVar1 * 2;
    _Dst = (longlong *)
           thunk_FUN_140b65d30(-(ulonglong)((uVar1 & 0x7fffffffffffffff) >> 0x3d != 0) | uVar1 * 8);
    if ((longlong)uVar1 < 1) {
      quill::v11::QuillError::QuillError
                ((QuillError *)&stack0xffffffffffffff90,
                 "This unreachable code is here only to suppress gcc false positive warnings");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((QuillError *)&stack0xffffffffffffff90,(ThrowInfo *)&DAT_14140fa50);
    }
    if (uVar1 == 0xc) {
      lVar2 = *param_1;
      lVar3 = param_1[1];
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      lVar6 = param_1[5];
      _Dst[4] = param_1[4];
      _Dst[5] = lVar6;
      _Dst[2] = lVar4;
      _Dst[3] = lVar5;
      *_Dst = lVar2;
      _Dst[1] = lVar3;
    }
    else {
      _Src = (void *)*param_1;
      memcpy(_Dst,_Src,uVar1 << 2);
      if (_Src != (void *)0x0) {
        thunk_FUN_140b68ba8(_Src);
      }
    }
    *param_1 = (longlong)_Dst;
    param_1[7] = uVar7;
  }
  if (uVar7 == 0xc) {
    *(undefined4 *)((longlong)param_1 + param_1[6] * 4) = param_2;
  }
  else {
    *(undefined4 *)(*param_1 + param_1[6] * 4) = param_2;
  }
  param_1[6] = param_1[6] + 1;
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}


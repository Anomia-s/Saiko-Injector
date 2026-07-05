/**
 * Function: failed_to_call_gmtime_rs_with_error_message_e
 * Address:  140041180
 * Signature: undefined failed_to_call_gmtime_rs_with_error_message_e(void)
 * Body size: 554 bytes
 */


undefined8 *
failed_to_call_gmtime_rs_with_error_message_e
          (undefined8 *param_1,ulonglong param_2,char param_3,char *param_4)

{
  errno_t eVar1;
  size_t _Size;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  tm local_11c;
  QuillError_vftable *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_78 [32];
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  local_38[0] = param_2 / 1000000000;
  if (param_3 == '\x01') {
    eVar1 = _gmtime64_s(&local_11c,(__time64_t *)local_38);
    if (eVar1 != 0) {
      FUN_140007930(local_78,eVar1);
      FUN_1400089f0(local_58,"failed to call gmtime_rs, with error message errno: ",local_78);
      local_f0 = 0;
      uStack_e8 = 0;
                    /* inlined constructor: quill::v11::QuillError::QuillError */
      local_f8 = &quill::v11::QuillError::vftable;
      uStack_d8 = uStack_50;
      local_d0 = local_48;
      uStack_c8 = uStack_40;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58[0] = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_f8,(ThrowInfo *)&DAT_14140fa50);
    }
  }
  else {
    eVar1 = _localtime64_s(&local_11c,(__time64_t *)local_38);
    if (eVar1 != 0) {
      FUN_140007930(local_78,eVar1);
      FUN_1400089f0(local_58,"failed to call localtime_rs, with error message errno: ",local_78);
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = &quill::v11::QuillError::vftable;
      uStack_d8 = uStack_50;
      local_d0 = local_48;
      uStack_c8 = uStack_40;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58[0] = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_f8,(ThrowInfo *)&DAT_14140fa50);
    }
  }
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(char **)param_4;
  }
  strftime((char *)&local_f8,0x80,param_4,&local_11c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Size = strlen((char *)&local_f8);
  if (-1 < (longlong)_Size) {
    if (_Size < 0x10) {
      param_1[2] = _Size;
      param_1[3] = 0xf;
      memcpy(param_1,&local_f8,_Size);
      *(undefined1 *)((longlong)param_1 + _Size) = 0;
    }
    else {
      uVar2 = _Size | 0xf;
      uVar4 = 0x16;
      if (0x16 < uVar2) {
        uVar4 = uVar2;
      }
      if (uVar2 < 0xfff) {
        _Dst = (void *)FUN_140b65d30(uVar4 + 1);
      }
      else {
        lVar3 = FUN_140b65d30(uVar4 + 0x28);
        _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar3;
      }
      *param_1 = _Dst;
      param_1[2] = _Size;
      param_1[3] = uVar4;
      memcpy(_Dst,&local_f8,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}


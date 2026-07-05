/**
 * Function: failed_to_get_thread_name_invalid_data
 * Address:  14000e1e0
 * Signature: undefined failed_to_get_thread_name_invalid_data(void)
 * Body size: 886 bytes
 */


undefined8 failed_to_get_thread_name_invalid_data(undefined8 param_1)

{
  longlong lVar1;
  wchar_t *_Src;
  HANDLE pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *pcVar7;
  char *pcVar8;
  QuillError *this;
  LPCSTR pCVar9;
  void *_Dst;
  undefined1 local_158 [112];
  codecvt_utf8_utf16<wchar_t,1114111,0> local_e8;
  ulonglong local_d8;
  ulonglong local_d0;
  wchar_t *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  size_t local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_70 = (wchar_t *)0x0;
  pvVar2 = GetCurrentThread();
  local_e8._Crt_new_delete = (_Crt_new_delete)0x0;
  local_e8.vftablePtr = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)FUN_140b65d30(0x20);
  local_d8 = 0x14;
  local_d0 = 0x1f;
  (local_e8.vftablePtr)->vfunction1 = (vfunction1 *)0x6165726854746547;
  (local_e8.vftablePtr)->_Incref = (_Incref *)0x7069726373654464;
  *(undefined4 *)&(local_e8.vftablePtr)->_Decref = 0x6e6f6974;
  *(undefined1 *)((longlong)&(local_e8.vftablePtr)->_Decref + 4) = 0;
  uStack_5a = 0;
  local_58 = 0xe;
  uStack_50 = 0xf;
  local_68 = 0x6c656e72654b;
  uStack_62 = 0x6142;
  uStack_60 = 0x6c6c642e6573;
  pCVar9 = (LPCSTR)&local_68;
  uVar3 = failed_to_free_library(pCVar9,(LPCSTR)&local_e8,pvVar2,&local_70);
  if (0xf < uStack_50) {
    lVar1 = CONCAT26(uStack_62,local_68);
    uVar4 = uStack_50 + 1;
    lVar6 = lVar1;
    if (0xfff < uVar4) {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar6)) goto LAB_14000e538;
      uVar4 = uStack_50 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar6,uVar4);
  }
  if (0xf < local_d0) {
    uVar4 = local_d0 + 1;
    pcVar7 = local_e8.vftablePtr;
    if (0xfff < uVar4) {
      pcVar7 = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)local_e8.vftablePtr[-1].vfunction10;
      if (0x1f < (ulonglong)((longlong)local_e8.vftablePtr + (-8 - (longlong)pcVar7)))
      goto LAB_14000e538;
      uVar4 = local_d0 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar7,uVar4);
  }
  _Src = local_70;
  if ((int)uVar3 < 0) {
    pcVar8 = "Failed to get thread name";
    this = (QuillError *)local_158;
  }
  else {
    if (local_70 != (wchar_t *)0x0) {
      sVar5 = wcsnlen(local_70,0x100);
      local_68 = 0;
      uStack_62 = 0;
      uStack_60 = 0;
      uStack_5a = 0;
      local_58 = 0;
      uStack_50 = 0;
      if (0x7ffffffffffffffe < sVar5) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar5 < 8) {
        uStack_50 = 7;
        local_58 = sVar5;
        memcpy(&local_68,_Src,sVar5 * 2);
        *(undefined2 *)((longlong)&local_68 + sVar5 * 2) = 0;
      }
      else {
        uVar3 = sVar5 | 7;
        if (0x7ffffffffffffffe < uVar3) {
LAB_14000e551:
                    /* WARNING: Subroutine does not return */
          std::bad_array_new_length::bad_array_new_length();
        }
        uVar4 = 10;
        if (10 < uVar3) {
          uVar4 = uVar3;
        }
        if (uVar3 < 0x7ff) {
          _Dst = (void *)FUN_140b65d30(uVar4 * 2 + 2);
        }
        else {
          if (0x7fffffffffffffeb < uVar3) goto LAB_14000e551;
          lVar6 = FUN_140b65d30(uVar4 * 2 + 0x29);
          _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)_Dst - 8) = lVar6;
        }
        local_68 = SUB86(_Dst,0);
        uStack_62 = (undefined2)((ulonglong)_Dst >> 0x30);
        local_58 = sVar5;
        uStack_50 = uVar4;
        memcpy(_Dst,_Src,sVar5 * 2);
        *(undefined2 *)((longlong)_Dst + sVar5 * 2) = 0;
      }
      LocalFree(local_70);
      std::codecvt_utf8_utf16<wchar_t,1114111,0>::codecvt_utf8_utf16<wchar_t,1114111,0>(&local_e8);
      if (7 < uStack_50) {
        pCVar9 = (LPCSTR)CONCAT26(uStack_62,local_68);
      }
      FUN_14000fee0(&local_e8,param_1,pCVar9);
      std::
      wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
      ::
      wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>_Constructor_or_Destructor
                (&local_e8.vftablePtr);
      if (7 < uStack_50) {
        lVar1 = CONCAT26(uStack_62,local_68);
        uVar3 = uStack_50 * 2 + 2;
        lVar6 = lVar1;
        if (0xfff < uVar3) {
          lVar6 = *(longlong *)(lVar1 + -8);
          if (0x1f < (ulonglong)((lVar1 + -8) - lVar6)) {
LAB_14000e538:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar3 = uStack_50 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(lVar6,uVar3);
      }
      return param_1;
    }
    pcVar8 = "Failed to get thread name. Invalid data.";
    this = (QuillError *)(local_158 + 0x38);
  }
  quill::v11::QuillError::QuillError(this,pcVar8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(this,(ThrowInfo *)&DAT_14140fa50);
}


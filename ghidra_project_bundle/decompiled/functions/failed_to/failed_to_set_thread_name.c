/**
 * Function: failed_to_set_thread_name
 * Address:  140dbc17c
 * Signature: undefined failed_to_set_thread_name(void)
 * Body size: 262 bytes
 */


void failed_to_set_thread_name(undefined8 param_1)

{
  HANDLE pvVar1;
  ulonglong uVar2;
  undefined8 *****pppppuVar3;
  undefined1 local_110 [176];
  undefined8 ****local_60 [3];
  ulonglong local_48;
  undefined8 ****local_40 [2];
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140004940(local_40,param_1);
  std::codecvt_utf8_utf16<wchar_t,1114111,0>::codecvt_utf8_utf16<wchar_t,1114111,0>
            ((codecvt_utf8_utf16<wchar_t,1114111,0> *)(local_110 + 0x38));
  pppppuVar3 = local_40;
  if (0xf < local_28) {
    pppppuVar3 = (undefined8 *****)local_40[0];
  }
  FUN_140028810(local_110 + 0x38,local_60,pppppuVar3,local_30 + (longlong)pppppuVar3);
  std::
  wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
  ::
  wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>_Constructor_or_Destructor
            ((undefined8 *)(local_110 + 0x38));
  FUN_140004b30(local_40);
  pppppuVar3 = local_60;
  if (7 < local_48) {
    pppppuVar3 = (undefined8 *****)local_60[0];
  }
  pvVar1 = GetCurrentThread();
  FUN_140004940(local_110 + 0x38,"SetThreadDescription");
  FUN_140004940(local_40,"KernelBase.dll");
  uVar2 = failed_to_free_library((LPCSTR)local_40,local_110 + 0x38,pvVar1,pppppuVar3);
  FUN_140004b30(local_40);
  FUN_140004b30(local_110 + 0x38);
  if (-1 < (int)uVar2) {
    FUN_140003680(local_60);
    return;
  }
  quill::v11::QuillError::QuillError((QuillError *)local_110,"Failed to set thread name");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_110,(ThrowInfo *)&DAT_14140fa50);
}


/**
 * Function: wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>_Constructor_or_Destructor
 * Address:  14000f640
 * Signature: void __fastcall wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 263 bytes
 */


void std::
     wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
     ::
     wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>_Constructor_or_Destructor
               (undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &vftable;
  uVar1 = param_1[0xb];
  if (7 < uVar1) {
    lVar2 = param_1[8];
    uVar3 = uVar1 * 2 + 2;
    lVar5 = lVar2;
    if (0xfff < uVar3) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14000f72e;
      uVar3 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar5,uVar3);
  }
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  uVar1 = param_1[7];
  if (0xf < uVar1) {
    lVar2 = param_1[4];
    uVar3 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar3) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
LAB_14000f72e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar3);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014000f724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1,*(code **)*puVar4);
      return;
    }
  }
  return;
}


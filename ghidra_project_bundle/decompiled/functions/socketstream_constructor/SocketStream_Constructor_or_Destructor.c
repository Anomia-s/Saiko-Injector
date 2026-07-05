/**
 * Function: SocketStream_Constructor_or_Destructor
 * Address:  1401c7bf0
 * Signature: undefined4 __fastcall SocketStream_Constructor_or_Destructor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, longlong * param_6)
 * Body size: 280 bytes
 */


undefined4
httplib::detail::SocketStream::SocketStream_Constructor_or_Destructor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  SocketStream_vftable *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_78 = &vftable;
  local_50 = param_5;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  local_58 = param_4;
  lVar3 = FUN_140b65d30(0x1027);
  local_48 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)local_48 + -8) = lVar3;
  lVar3 = (longlong)local_48 + 0x1000;
  local_38 = lVar3;
  memset(local_48,0,0x1000);
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (longlong *)param_6[7];
  local_40 = lVar3;
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_78);
  if (local_48 != (void *)0x0) {
    uVar5 = local_38 - (longlong)local_48;
    pvVar4 = local_48;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)local_48 + -8);
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar4,uVar5);
  }
  plVar1 = (longlong *)param_6[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_6);
    param_6[7] = 0;
  }
  return uVar2;
}


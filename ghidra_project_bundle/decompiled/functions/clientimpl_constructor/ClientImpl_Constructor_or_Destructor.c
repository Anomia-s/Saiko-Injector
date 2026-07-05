/**
 * Function: ClientImpl_Constructor_or_Destructor
 * Address:  1401f28d0
 * Signature: void __fastcall ClientImpl_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 2299 bytes
 */


void httplib::ClientImpl::ClientImpl_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  *param_1 = &vftable;
  iVar5 = _Mtx_lock(param_1 + 0xc);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)((longlong)param_1 + 0xac) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  if (param_1[10] != 0xffffffffffffffff) {
    shutdown(param_1[10],2);
    if (param_1[10] != 0xffffffffffffffff) {
      closesocket(param_1[10]);
      param_1[10] = 0xffffffffffffffff;
    }
  }
  _Mtx_unlock(param_1 + 0xc);
  plVar1 = (longlong *)param_1[0x97];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x90);
    param_1[0x97] = 0;
  }
  plVar1 = (longlong *)param_1[0x8f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x88);
    param_1[0x8f] = 0;
  }
  uVar8 = param_1[0x85];
  if (0xf < uVar8) {
    lVar2 = param_1[0x82];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x84] = 0;
  param_1[0x85] = 0xf;
  *(undefined1 *)(param_1 + 0x82) = 0;
  uVar8 = param_1[0x81];
  if (0xf < uVar8) {
    lVar2 = param_1[0x7e];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0xf;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  uVar8 = param_1[0x7d];
  if (0xf < uVar8) {
    lVar2 = param_1[0x7a];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x7c] = 0;
  param_1[0x7d] = 0xf;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  uVar8 = param_1[0x79];
  if (0xf < uVar8) {
    lVar2 = param_1[0x76];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x78] = 0;
  param_1[0x79] = 0xf;
  *(undefined1 *)(param_1 + 0x76) = 0;
  uVar8 = param_1[0x75];
  if (0xf < uVar8) {
    lVar2 = param_1[0x72];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x74] = 0;
  param_1[0x75] = 0xf;
  *(undefined1 *)(param_1 + 0x72) = 0;
  uVar8 = param_1[0x71];
  if (0xf < uVar8) {
    lVar2 = param_1[0x6e];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0xf;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  uVar8 = param_1[0x6d];
  if (0xf < uVar8) {
    lVar2 = param_1[0x6a];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xf;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  uVar8 = param_1[0x68];
  if (0xf < uVar8) {
    lVar2 = param_1[0x65];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x67] = 0;
  param_1[0x68] = 0xf;
  *(undefined1 *)(param_1 + 0x65) = 0;
  uVar8 = param_1[100];
  if (0xf < uVar8) {
    lVar2 = param_1[0x61];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[99] = 0;
  param_1[100] = 0xf;
  *(undefined1 *)(param_1 + 0x61) = 0;
  plVar1 = (longlong *)param_1[0x5f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x58);
    param_1[0x5f] = 0;
  }
  uVar8 = param_1[0x55];
  if (0xf < uVar8) {
    lVar2 = param_1[0x52];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0xf;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uVar8 = param_1[0x51];
  if (0xf < uVar8) {
    lVar2 = param_1[0x4e];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0xf;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  uVar8 = param_1[0x4d];
  if (0xf < uVar8) {
    lVar2 = param_1[0x4a];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0xf;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  uVar8 = param_1[0x49];
  if (0xf < uVar8) {
    lVar2 = param_1[0x46];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0xf;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1[0x45];
  if (0xf < uVar8) {
    lVar2 = param_1[0x42];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0xf;
  *(undefined1 *)(param_1 + 0x42) = 0;
  uVar8 = param_1[0x3b];
  if (0xf < uVar8) {
    lVar2 = param_1[0x38];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar8 = param_1[0x37];
  if (0xf < uVar8) {
    lVar2 = param_1[0x34];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  plVar1 = (longlong *)param_1[0x33];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x2c);
    param_1[0x33] = 0;
  }
  lVar2 = param_1[0x27];
  if (lVar2 != 0) {
    uVar8 = param_1[0x29] - lVar2;
    lVar7 = lVar2;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  puVar3 = (undefined8 *)param_1[0x25];
  *(undefined8 *)puVar3[1] = 0;
  puVar3 = (undefined8 *)*puVar3;
  while (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar3;
    FUN_140016fe0(puVar3 + 2);
    thunk_FUN_140b68ba8(puVar3,0x50);
    puVar3 = puVar4;
  }
  thunk_FUN_140b68ba8(param_1[0x25],0x50);
  FUN_1401c60b0(param_1 + 0x22,param_1 + 0x22,*(undefined8 *)(param_1[0x22] + 8));
  thunk_FUN_140b68ba8(param_1[0x22],0x60);
  uVar8 = param_1[9];
  if (0xf < uVar8) {
    lVar2 = param_1[6];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) goto LAB_1401f3194;
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar8 = param_1[4];
  if (0xf < uVar8) {
    lVar2 = param_1[1];
    uVar6 = uVar8 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) {
LAB_1401f3194:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/**
 * Function: gameinput_internalremovebyindex_argument_idx
 * Address:  140443e30
 * Signature: undefined gameinput_internalremovebyindex_argument_idx(void)
 * Body size: 188 bytes
 */


void gameinput_internalremovebyindex_argument_idx(uint param_1)

{
  uint uVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  httplib::ClientImpl::vfunction4();
  if ((int)param_1 < 0 || (int)DAT_1416f1798 <= (int)param_1) {
    FUN_1400fbed0("GAMEINPUT_InternalRemoveByIndex argument idx %d is out of range",param_1);
    uVar1 = DAT_1416f1798;
  }
  else {
    uVar5 = (ulonglong)param_1;
    puVar2 = *(undefined8 **)(DAT_1416f1790 + uVar5 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)*puVar2 + 0x10))();
      FUN_140160cf0(puVar2[10]);
      FUN_140160cf0(puVar2);
    }
    uVar4 = DAT_1416f1798;
    lVar3 = DAT_1416f1790;
    *(undefined8 *)(DAT_1416f1790 + uVar5 * 8) = 0;
    if (uVar4 == 1) {
      FUN_140160cf0();
      DAT_1416f1790 = 0;
      uVar1 = DAT_1416f1798 - 1;
    }
    else {
      uVar1 = uVar4 - 1;
      if (param_1 != uVar1) {
        _Dst = (void *)(lVar3 + uVar5 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)((uVar4 - param_1) * 8));
      }
    }
  }
  DAT_1416f1798 = uVar1;
  return;
}


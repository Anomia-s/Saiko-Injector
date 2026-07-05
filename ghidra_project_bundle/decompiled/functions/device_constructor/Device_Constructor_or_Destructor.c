/**
 * Function: Device_Constructor_or_Destructor
 * Address:  140533610
 * Signature: void __fastcall Device_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 374 bytes
 */


void nvrhi::vulkan::Device::Device_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  if (param_1[0xc3] != 0) {
    (*DAT_1416b6ea0)(param_1[0x14]);
    param_1[0xc3] = 0;
  }
  if (param_1[0x16] != 0) {
    (*DAT_1416b6f10)(param_1[0x14]);
    param_1[0x16] = 0;
  }
  if (param_1[0xc1] != 0) {
    (*DAT_1416b6f68)(param_1[0x14]);
    param_1[0xc1] = 0;
  }
  lVar1 = param_1[0xe0];
  if (lVar1 != 0) {
    FUN_1406edbf0(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x108);
  }
  lVar1 = param_1[0xdf];
  if (lVar1 != 0) {
    FUN_1406edbf0(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x108);
  }
  lVar1 = param_1[0xde];
  if (lVar1 != 0) {
    FUN_1406edbf0(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x108);
  }
  lVar1 = param_1[0xc5];
  if (lVar1 != 0) {
    uVar3 = param_1[199] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
    param_1[199] = 0;
  }
  FUN_1405334f0(param_1 + 3);
  return;
}


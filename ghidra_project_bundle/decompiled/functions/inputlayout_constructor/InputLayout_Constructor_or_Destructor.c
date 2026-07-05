/**
 * Function: InputLayout_Constructor_or_Destructor
 * Address:  14072d510
 * Signature: void __fastcall InputLayout_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 278 bytes
 */


void nvrhi::d3d12::InputLayout::InputLayout_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = &vftable;
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    uVar5 = param_1[0xd] - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) goto LAB_14072d60d;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puVar2 = (undefined8 *)param_1[9];
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_140b68ba8(puVar2,0x18);
    puVar2 = puVar3;
  }
  thunk_FUN_140b68ba8(param_1[9],0x18);
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    uVar5 = param_1[7] - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
LAB_14072d60d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_140701d70(param_1 + 2);
  return;
}


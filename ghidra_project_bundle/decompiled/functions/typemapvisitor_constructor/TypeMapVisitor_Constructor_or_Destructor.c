/**
 * Function: TypeMapVisitor_Constructor_or_Destructor
 * Address:  1407b0ed0
 * Signature: void __fastcall TypeMapVisitor_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 216 bytes
 */


void Luau::TypeMapVisitor::TypeMapVisitor_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  if (param_1[0x18] != 0) {
    FUN_140b68ba8();
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (param_1[0x13] != 0) {
    FUN_140b68ba8();
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    uVar3 = param_1[0x12] - lVar1;
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
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_140b68ba8();
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  return;
}


/**
 * Function: ParseError_Constructor_or_Destructor
 * Address:  140785600
 * Signature: noreturn void __fastcall ParseError_Constructor_or_Destructor(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 264 bytes
 */


void Luau::ParseError::ParseError_Constructor_or_Destructor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 **ppuVar2;
  undefined8 ***_Dst;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  ParseError_vftable *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 **local_80;
  undefined8 **local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_60 = &local_res18;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14079f560(local_58);
  ppppuVar3 = local_58;
  if (0xf < local_40) {
    ppppuVar3 = (undefined8 ****)local_58[0];
  }
  if ((longlong)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (local_48 < 0x10) {
    _Dst = *ppppuVar3;
    ppppuVar3 = local_58;
    if (0xf < local_40) {
      ppppuVar3 = (undefined8 ****)local_58[0];
    }
    local_78 = ppppuVar3[1];
    uVar4 = 0xf;
  }
  else {
    uVar1 = local_48 | 0xf;
    uVar4 = 0x16;
    if (0x16 < uVar1) {
      uVar4 = uVar1;
    }
    if (uVar1 < 0xfff) {
      _Dst = (undefined8 ***)FUN_140b65d30(uVar4 + 1);
    }
    else {
      ppuVar2 = (undefined8 **)FUN_140b65d30(uVar4 + 0x28);
      _Dst = (undefined8 ***)((longlong)ppuVar2 + 0x27U & 0xffffffffffffffe0);
      _Dst[-1] = ppuVar2;
    }
    memcpy(_Dst,ppppuVar3,local_48 + 1);
    local_78 = (undefined8 ***)0x0;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = &vftable;
  local_90 = *param_1;
  uStack_88 = param_1[1];
  local_70 = local_48;
  local_80 = _Dst;
  local_68 = uVar4;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_1414b90c0);
}


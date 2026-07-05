/**
 * Function: lua_exception_Constructor_or_Destructor
 * Address:  1406b8ef0
 * Signature: noreturn void __fastcall lua_exception_Constructor_or_Destructor(undefined8 param_1, undefined4 param_2)
 * Body size: 65 bytes
 */


void lua_exception::lua_exception_Constructor_or_Destructor(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  lua_exception_vftable *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = &vftable;
  local_18 = param_1;
  local_10 = param_2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_30,(ThrowInfo *)&DAT_141499610);
}


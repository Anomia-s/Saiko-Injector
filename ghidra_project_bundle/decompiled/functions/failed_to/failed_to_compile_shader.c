/**
 * Function: failed_to_compile_shader
 * Address:  140635930
 * Signature: undefined failed_to_compile_shader(void)
 * Body size: 220 bytes
 */


bool failed_to_compile_shader
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(param_1 + 0x50))(param_2,2,&local_48,0);
  (**(code **)(param_1 + 0x10))(param_2);
  (**(code **)(param_1 + 0x38))(param_2,0x8b81,&local_4c);
  if (local_4c == 0) {
    (**(code **)(param_1 + 0x38))(param_2,0x8b84,&local_50);
    lVar1 = FUN_140160c40((longlong)local_50 + 1);
    if (lVar1 != 0) {
      (**(code **)(param_1 + 0x30))(param_2,local_50,0,lVar1);
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(6,"Failed to compile shader:");
    }
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_4c != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_78);
}


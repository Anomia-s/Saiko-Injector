/**
 * Function: caseD_1
 * Address:  1408a3090
 * Signature: undefined caseD_1(void)
 * Body size: 193 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong switchD_1408a3228::caseD_1
                    (undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_4068 [32];
  undefined4 *local_4048;
  undefined4 local_4038 [4098];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_4068;
  memset(local_4038,0,0x4004);
  local_4038[0] = 0xc;
  uVar1 = FUN_1408a2540(local_4038,param_3,param_4);
  uVar2 = uVar1;
  if (uVar1 < 0xffffffffffffff89) {
    uVar2 = 0xffffffffffffffb8;
    if (uVar1 <= param_4 && param_4 - uVar1 != 0) {
      local_4048 = local_4038;
      uVar2 = FUN_14089ddf0(param_1,param_2,param_3 + uVar1,param_4 - uVar1);
    }
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_4068)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_4068);
}


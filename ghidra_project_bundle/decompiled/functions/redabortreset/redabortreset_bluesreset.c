/**
 * Function: redabortreset_bluesreset
 * Address:  140399b10
 * Signature: undefined redabortreset_bluesreset(void)
 * Body size: 196 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void redabortreset_bluesreset
               (undefined4 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    local_48 = unknown_error_code(param_1);
    FUN_140399630(0xfffffffc,param_2,param_3,"#[red]abort()#[reset]: #[blue]%s#[reset]");
  }
  else {
    local_30 = &stack0x00000028;
    uVar1 = FUN_1403d25c0(param_4);
    local_40 = unknown_error_code(param_1);
    local_48 = uVar1;
    FUN_140399630(0xfffffffc,param_2,param_3,"#[red]abort()#[reset]: %s (#[blue]%s#[reset])");
    (*DAT_1415033b0)(uVar1);
  }
  _DAT_1415034b8 = param_1;
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_68);
}


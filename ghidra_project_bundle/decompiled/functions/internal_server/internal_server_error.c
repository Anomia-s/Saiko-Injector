/**
 * Function: internal_server_error
 * Address:  1403cd440
 * Signature: undefined internal_server_error(void)
 * Body size: 63 bytes
 */


void internal_server_error(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1405fbe20(param_1,param_2 + 2,0);
  if (iVar1 != 0) {
    FUN_1403b8960(param_2 + 2);
    *param_2 = 500;
    *(char **)(param_2 + 0x108) = "Internal server error";
  }
  return;
}


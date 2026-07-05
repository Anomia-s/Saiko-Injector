/**
 * Function: virtual_joystick_data_not_found
 * Address:  14044a310
 * Signature: undefined virtual_joystick_data_not_found(void)
 * Body size: 87 bytes
 */


undefined1 virtual_joystick_data_not_found(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  
  httplib::ClientImpl::vfunction4();
  piVar1 = DAT_1416f19a8;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      uVar2 = FUN_1400fbed0("Virtual joystick data not found");
      return uVar2;
    }
    if (param_1 == *piVar1) break;
    piVar1 = *(int **)(piVar1 + 0x42);
  }
  FUN_14044a100();
  FUN_14012b4c0(param_1);
  return 1;
}


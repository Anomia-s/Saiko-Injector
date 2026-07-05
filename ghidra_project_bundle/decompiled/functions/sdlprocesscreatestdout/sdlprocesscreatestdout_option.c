/**
 * Function: sdlprocesscreatestdout_option
 * Address:  140157a30
 * Signature: undefined sdlprocesscreatestdout_option(void)
 * Body size: 149 bytes
 */


undefined8 sdlprocesscreatestdout_option(undefined8 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((param_1 == (undefined8 *)0x0) || ((char *)*param_1 == (char *)0x0)) ||
     (*(char *)*param_1 == '\0')) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","args");
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_14014f270();
    FUN_14014faf0(uVar1,"SDL.process.create.args",param_1);
    if (param_2 != '\0') {
      FUN_14014fc70(uVar1,"SDL.process.create.stdin_option",2);
      FUN_14014fc70(uVar1,"SDL.process.create.stdout_option",2);
    }
    uVar2 = parameter_s_is_invalid(uVar1);
    FUN_14014f0d0(uVar1);
  }
  return uVar2;
}


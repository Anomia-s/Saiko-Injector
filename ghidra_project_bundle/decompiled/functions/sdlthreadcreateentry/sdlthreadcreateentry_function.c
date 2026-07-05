/**
 * Function: sdlthreadcreateentry_function
 * Address:  140138140
 * Signature: undefined sdlthreadcreateentry_function(void)
 * Body size: 144 bytes
 */


undefined8
sdlthreadcreateentry_function
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14014f270();
  FUN_14014faf0(uVar1,"SDL.thread.create.entry_function",param_1);
  FUN_14014fbf0(uVar1,"SDL.thread.create.name",param_2);
  FUN_14014faf0(uVar1,"SDL.thread.create.userdata",param_4);
  FUN_14014fc70(uVar1,"SDL.thread.create.stacksize",param_3);
  uVar2 = sdlthreadcreateentry_function(uVar1,_beginthreadex_exref,_endthreadex_exref);
  FUN_14014f0d0(uVar1);
  return uVar2;
}


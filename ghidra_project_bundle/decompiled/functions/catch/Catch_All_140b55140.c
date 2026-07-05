/**
 * Function: Catch_All@140b55140
 * Address:  140b55140
 * Signature: undefined Catch_All@140b55140(void)
 * Body size: 108 bytes
 */


undefined8 Catch_All_140b55140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_140004940(param_2 + 0x30,"Caught unhandled exception.");
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x30);
    FUN_140004b30(param_2 + 0x30);
    return 0x140b55035;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


/**
 * Function: Catch_All@140b54570
 * Address:  140b54570
 * Signature: undefined Catch_All@140b54570(void)
 * Body size: 83 bytes
 */


undefined8 Catch_All_140b54570(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_140004940(param_2 + 0x28,"Caught unhandled exception.");
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x28);
    FUN_140004b30(param_2 + 0x28);
    return 0x140b544f5;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


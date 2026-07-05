/**
 * Function: Catch_All@140012030
 * Address:  140012030
 * Signature: undefined Catch_All@140012030(void)
 * Body size: 85 bytes
 */


undefined8 Catch_All_140012030(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_140004940(param_2 + 0x28,"Caught unhandled exception.");
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x28);
    FUN_140004b30(param_2 + 0x28);
    return 0x140011cbf;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


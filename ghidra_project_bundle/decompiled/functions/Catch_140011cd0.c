/**
 * Function: Catch@140011cd0
 * Address:  140011cd0
 * Signature: undefined Catch@140011cd0(void)
 * Body size: 91 bytes
 */


undefined8 Catch_140011cd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
  FUN_140004940(param_2 + 0x28,uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x28);
    FUN_140004b30(param_2 + 0x28);
    return 0x140011c75;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


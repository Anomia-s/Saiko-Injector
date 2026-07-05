/**
 * Function: Catch@140b56860
 * Address:  140b56860
 * Signature: undefined Catch@140b56860(void)
 * Body size: 200 bytes
 */


undefined8 Catch_140b56860(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar3 = *(longlong *)(param_2 + 0xb0);
  *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 8) = 0;
  uVar6 = (**(code **)(**(longlong **)(param_2 + 200) + 8))();
  plVar4 = *(longlong **)(lVar3 + 8);
  uVar1 = *(ushort *)((longlong)plVar4 + 0x22);
  lVar5 = *plVar4;
  *(longlong *)(param_2 + 0x20) = plVar4[2];
  *(ulonglong *)(param_2 + 0x30) = (ulonglong)uVar1 + lVar5;
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(undefined8 *)(param_2 + 0x90) = 0xccc;
  *(longlong *)(param_2 + 0x98) = param_2 + 0x20;
  *(char **)(param_2 + 0xa0) =
       "[Could not format log statement. message: \"{}\", location: \"{}\", error: \"{}\"]";
  *(undefined8 *)(param_2 + 0xa8) = 0x4c;
  FUN_140012b00(param_2 + 0x50,param_2 + 0xa0,param_2 + 0x90);
  FUN_14002d580(*(undefined8 *)(lVar3 + 0x18),param_2 + 0x50);
  plVar4 = *(longlong **)(lVar2 + 0xb0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2 + 0x50);
    FUN_140004b30(param_2 + 0x50);
    return 0x140b5684a;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


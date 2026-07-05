/**
 * Function: expected_function_call_arguments_after
 * Address:  14079c090
 * Signature: undefined expected_function_call_arguments_after(void)
 * Body size: 333 bytes
 */


undefined8 expected_function_call_arguments_after(longlong param_1,longlong **param_2,char param_3)

{
  longlong ***ppplVar1;
  undefined8 uVar2;
  longlong ****pppplVar3;
  ulonglong uVar4;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong ***local_58;
  undefined8 local_50;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_3 == '\0') || (*(int *)(param_1 + 0x84) == *(int *)((longlong)param_2 + 0x14))) {
    the_beginning_of_an_interpolated_string(param_1 + 0x80,&local_58);
    uVar4 = local_40;
    ppplVar1 = local_58;
    local_78 = (longlong *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),8);
    pppplVar3 = &local_58;
    if (0xf < uVar4) {
      pppplVar3 = (longlong ****)ppplVar1;
    }
    local_70 = 1;
    *local_78 = (longlong)param_2;
    local_68 = *(undefined8 *)((longlong)param_2 + 0xc);
    local_60 = *(undefined8 *)(param_1 + 0x84);
    uVar2 = FUN_140792890(param_1,&local_68,&local_78,
                          "Expected \'(\', \'{\' or <string> when parsing function call, got %s",
                          pppplVar3);
    if (0xf < local_40) {
      uVar4 = local_40 + 1;
      if (0xfff < uVar4) {
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)local_58[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = local_40 + 0x28;
        local_58 = (longlong ***)local_58[-1];
      }
      thunk_FUN_140b68ba8(local_58,uVar4);
    }
  }
  else {
    local_58 = (longlong ***)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),8);
    local_50 = 1;
    *local_58 = param_2;
    uVar2 = FUN_140792890(param_1,(longlong)param_2 + 0xc,&local_58,
                          "Expected function call arguments after \'(\'");
  }
  return uVar2;
}


/**
 * Function: Catch_All@1407254a0
 * Address:  1407254a0
 * Signature: undefined Catch_All@1407254a0(void)
 * Body size: 84 bytes
 */


undefined8 Catch_All_1407254a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::clear
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4)),
             *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 4,true);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return 0x1407253bb;
}


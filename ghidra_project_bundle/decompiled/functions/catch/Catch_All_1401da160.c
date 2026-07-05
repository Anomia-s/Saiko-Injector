/**
 * Function: Catch_All@1401da160
 * Address:  1401da160
 * Signature: undefined Catch_All@1401da160(void)
 * Body size: 75 bytes
 */


undefined8 Catch_All_1401da160(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4)),
             *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 4,true);
  *(undefined4 *)(param_2 + 0x44) = 0;
  return 0x1401d9f96;
}


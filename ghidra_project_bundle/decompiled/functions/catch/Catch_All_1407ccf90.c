/**
 * Function: Catch_All@1407ccf90
 * Address:  1407ccf90
 * Signature: undefined Catch_All@1407ccf90(void)
 * Body size: 76 bytes
 */


undefined * Catch_All_1407ccf90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::clear
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4)),
             *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 4,true);
  return &DAT_1407ccf57;
}


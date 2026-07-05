/**
 * Function: expected_identifier_when_parsing_s_got_s
 * Address:  14079c210
 * Signature: undefined expected_identifier_when_parsing_s_got_s(void)
 * Body size: 239 bytes
 */


void expected_identifier_when_parsing_s_got_s(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    the_beginning_of_an_interpolated_string(param_1 + 0x80,local_50);
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected identifier, got %s");
  }
  else {
    the_beginning_of_an_interpolated_string(param_1 + 0x80,local_50);
    ppppuVar2 = local_50;
    if (0xf < local_38) {
      ppppuVar2 = (undefined8 ****)local_50[0];
    }
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected identifier when parsing %s, got %s",param_2,
                  ppppuVar2);
  }
  if (0xf < local_38) {
    uVar1 = local_38 + 1;
    ppppuVar2 = (undefined8 ****)local_50[0];
    if (0xfff < uVar1) {
      ppppuVar2 = (undefined8 ****)local_50[0][-1];
      if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = local_38 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppuVar2,uVar1);
  }
  return;
}


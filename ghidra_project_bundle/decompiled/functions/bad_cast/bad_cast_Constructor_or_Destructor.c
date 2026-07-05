/**
 * Function: bad_cast_Constructor_or_Destructor
 * Address:  1400150f0
 * Signature: noreturn void __fastcall bad_cast_Constructor_or_Destructor(void)
 * Body size: 69 bytes
 */


void std::bad_cast::bad_cast_Constructor_or_Destructor(void)

{
  undefined1 auStack_48 [40];
  bad_cast_vftable *local_20;
  char *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  local_10 = 0;
  local_18 = "bad cast";
  local_20 = &vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_20,(ThrowInfo *)&DAT_141412580);
}


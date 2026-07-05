/**
 * Function: bad_optional_access_Constructor_or_Destructor
 * Address:  140548680
 * Signature: noreturn void __fastcall bad_optional_access_Constructor_or_Destructor(void)
 * Body size: 56 bytes
 */


void std::bad_optional_access::bad_optional_access_Constructor_or_Destructor(void)

{
  undefined1 auStack_48 [40];
  bad_optional_access_vftable *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_20 = &vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_20,(ThrowInfo *)&DAT_14147f550);
}


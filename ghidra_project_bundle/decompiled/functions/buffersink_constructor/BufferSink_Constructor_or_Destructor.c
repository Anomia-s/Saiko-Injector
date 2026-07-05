/**
 * Function: BufferSink_Constructor_or_Destructor
 * Address:  1402c53c0
 * Signature: void __fastcall BufferSink_Constructor_or_Destructor(undefined8 param_1, longlong * param_2)
 * Body size: 97 bytes
 */


void ldv::scene::BufferSink::BufferSink_Constructor_or_Destructor
               (undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  BufferSink_vftable *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  local_18 = &vftable;
  local_10 = param_2;
  FUN_1402be710(param_1,&local_18);
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}


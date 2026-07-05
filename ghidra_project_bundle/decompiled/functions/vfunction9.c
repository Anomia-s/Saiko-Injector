/**
 * Function: vfunction9
 * Address:  140a8b1c0
 * Signature: void __thiscall vfunction9(LexerSimple * this, undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Body size: 194 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
Scintilla::LexerSimple::vfunction9
          (LexerSimple *this,undefined8 param_1,undefined8 param_2,undefined4 param_3,
          undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_1ff8 [32];
  longlong *local_1fd8;
  longlong **local_1fd0;
  longlong *local_1fc8 [506];
  undefined1 local_ff8 [4000];
  longlong local_58;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_1ff8;
  FUN_140a8c8b0(local_1fc8,param_4,&(this->LexerBase_data).field_0x10);
  plVar1 = (longlong *)(this->LexerSimple_data).offset_0x0;
  local_1fd8 = &(this->LexerBase_data).offset_0x20;
  local_1fd0 = local_1fc8;
  (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3);
  if (0 < local_58) {
    (**(code **)(*local_1fc8[0] + 0x68))(local_1fc8[0],local_58,local_ff8);
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_1ff8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_1ff8);
}


/**
 * Function: vfunction10
 * Address:  140a8b290
 * Signature: void __thiscall vfunction10(LexerSimple * this, undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Body size: 223 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
Scintilla::LexerSimple::vfunction10
          (LexerSimple *this,undefined8 param_1,undefined8 param_2,undefined4 param_3,
          undefined8 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_2008 [32];
  longlong *local_1fe8;
  longlong **local_1fe0;
  longlong *local_1fd0 [506];
  undefined1 local_1000 [4000];
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_2008;
  puVar1 = &(this->LexerBase_data).field_0x10;
  iVar3 = FUN_140a4f710(puVar1,"fold",0);
  if (iVar3 != 0) {
    FUN_140a8c8b0(local_1fd0,param_4,puVar1);
    plVar2 = (longlong *)(this->LexerSimple_data).offset_0x0;
    local_1fe8 = &(this->LexerBase_data).offset_0x20;
    local_1fe0 = local_1fd0;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3);
    if (0 < local_60) {
      (**(code **)(*local_1fd0[0] + 0x68))(local_1fd0[0],local_60,local_1000);
    }
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_2008)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_2008);
}


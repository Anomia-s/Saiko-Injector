/**
 * Function: writetexture_rowpitch_is_0_but_dest_has_multi
 * Address:  1406e2390
 * Signature: void __thiscall writetexture_rowpitch_is_0_but_dest_has_multi(void * this, longlong * param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, longlong param_5)
 * Body size: 243 bytes
 */


void __thiscall
writetexture_rowpitch_is_0_but_dest_has_multi
          (void *this,longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          longlong param_5)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((param_5 == 0) && (1 < *(uint *)(lVar2 + 4))) {
      pcVar3 = (char *)FUN_140b65d30(0x40);
      builtin_strncpy(pcVar3,"writeTexture: rowPitch is 0 but dest has multiple rows",0x37);
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar3);
      thunk_FUN_140b68ba8(pcVar3,0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001406e2472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x70))
              (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
    return;
  }
  return;
}


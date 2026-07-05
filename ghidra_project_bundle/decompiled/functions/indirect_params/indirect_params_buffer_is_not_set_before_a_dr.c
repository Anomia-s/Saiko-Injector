/**
 * Function: indirect_params_buffer_is_not_set_before_a_dr
 * Address:  1406e5320
 * Signature: void __thiscall indirect_params_buffer_is_not_set_before_a_dr(void * this, undefined4 param_1, undefined4 param_2, undefined8 param_3)
 * Body size: 434 bytes
 */


void __thiscall
indirect_params_buffer_is_not_set_before_a_dr
          (void *this,undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,0,"drawIndexedIndirect");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x30) == '\0') {
        pcVar2 = (char *)FUN_140b65d30(0x80);
        builtin_strncpy(pcVar2,
                        "Graphics state is not set before a drawIndexedIndirect call.\nNote that setting compute state invalidates the graphics state."
                        ,0x7d);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x80;
      }
      else {
        if (*(longlong *)((longlong)this + 0x4d0) != 0) {
          cVar1 = bytes_that_were_not_set(this,"graphics","setGraphicsState");
          if (cVar1 == '\0') {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001406e53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xd8))
                    (*(longlong **)((longlong)this + 0x10),param_1,param_2);
          return;
        }
        pcVar2 = (char *)FUN_140b65d30(0x50);
        builtin_strncpy(pcVar2,
                        "Indirect params buffer is not set before a drawIndexedIndirect call.",0x45)
        ;
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x50;
      }
      thunk_FUN_140b68ba8(pcVar2,uVar3);
    }
  }
  return;
}


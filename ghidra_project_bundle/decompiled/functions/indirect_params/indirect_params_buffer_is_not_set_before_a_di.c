/**
 * Function: indirect_params_buffer_is_not_set_before_a_di
 * Address:  1406e5e30
 * Signature: void __thiscall indirect_params_buffer_is_not_set_before_a_di(void * this, undefined4 param_1)
 * Body size: 423 bytes
 */


void __thiscall indirect_params_buffer_is_not_set_before_a_di(void *this,undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,1,"dispatchIndirect");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x31) == '\0') {
        pcVar2 = (char *)FUN_140b65d30(0x80);
        builtin_strncpy(pcVar2,
                        "Compute state is not set before a dispatchIndirect call.\nNote that setting graphics state invalidates the compute state."
                        ,0x79);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x80;
      }
      else {
        if (*(longlong *)((longlong)this + 0x530) != 0) {
          cVar1 = bytes_that_were_not_set(this,"compute","setComputeState");
          if (cVar1 == '\0') {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001406e5eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xf8))
                    (*(longlong **)((longlong)this + 0x10),param_1);
          return;
        }
        pcVar2 = (char *)FUN_140b65d30(0x50);
        builtin_strncpy(pcVar2,"Indirect params buffer is not set before a dispatchIndirect call.",
                        0x42);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x50;
      }
      thunk_FUN_140b68ba8(pcVar2,uVar3);
    }
  }
  return;
}


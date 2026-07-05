/**
 * Function: index_buffer_is_not_set_before_a_drawindexed
 * Address:  1406e4f10
 * Signature: void __thiscall index_buffer_is_not_set_before_a_drawindexed(void * this, undefined8 param_1)
 * Body size: 407 bytes
 */


void __thiscall index_buffer_is_not_set_before_a_drawindexed(void *this,undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,0,"drawIndexed");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x30) == '\0') {
        pcVar2 = (char *)FUN_140b65d30(0x80);
        builtin_strncpy(pcVar2,
                        "Graphics state is not set before a drawIndexed call.\nNote that setting compute state invalidates the graphics state."
                        ,0x75);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x80;
      }
      else {
        if (*(longlong *)((longlong)this + 0x4c0) != 0) {
          cVar1 = bytes_that_were_not_set(this,"graphics","setGraphicsState");
          if (cVar1 == '\0') {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001406e4f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 200))
                    (*(longlong **)((longlong)this + 0x10),param_1);
          return;
        }
        pcVar2 = (char *)FUN_140b65d30(0x40);
        builtin_strncpy(pcVar2,"Index buffer is not set before a drawIndexed call",0x32);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        uVar3 = 0x40;
      }
      thunk_FUN_140b68ba8(pcVar2,uVar3);
    }
  }
  return;
}


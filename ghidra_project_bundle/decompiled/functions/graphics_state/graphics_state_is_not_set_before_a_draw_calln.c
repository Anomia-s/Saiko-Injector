/**
 * Function: graphics_state_is_not_set_before_a_draw_calln
 * Address:  1406e4a70
 * Signature: void __thiscall graphics_state_is_not_set_before_a_draw_calln(void * this, undefined8 param_1)
 * Body size: 285 bytes
 */


void __thiscall graphics_state_is_not_set_before_a_draw_calln(void *this,undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,0,&DAT_1413284dd);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x30) == '\0') {
        pcVar2 = (char *)FUN_140b65d30(0x70);
        builtin_strncpy(pcVar2,
                        "Graphics state is not set before a draw call.\nNote that setting compute state invalidates the graphics state."
                        ,0x6e);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        thunk_FUN_140b68ba8(pcVar2,0x70);
      }
      else {
        cVar1 = bytes_that_were_not_set(this,"graphics","setGraphicsState");
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001406e4aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xc0))
                    (*(longlong **)((longlong)this + 0x10),param_1);
          return;
        }
      }
    }
  }
  return;
}


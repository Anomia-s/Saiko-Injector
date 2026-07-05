/**
 * Function: ray_tracing_state_is_not_set_before_a_dispatc
 * Address:  1406e6a40
 * Signature: void __thiscall ray_tracing_state_is_not_set_before_a_dispatc(void * this, undefined8 param_1)
 * Body size: 229 bytes
 */


void __thiscall ray_tracing_state_is_not_set_before_a_dispatc(void *this,undefined8 param_1)

{
  char cVar1;
  void *_Dst;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,1,"dispatchRays");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x33) == '\0') {
        _Dst = (void *)FUN_140b65d30(0x90);
        memcpy(_Dst,
               "Ray tracing state is not set before a dispatchRays call.\nNote that setting graphics or compute state invalidates the ray tracing state."
               ,0x87);
        *(undefined1 *)((longlong)_Dst + 0x87) = 0;
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,_Dst);
        thunk_FUN_140b68ba8(_Dst,0x90);
      }
      else {
        cVar1 = bytes_that_were_not_set(this,"ray tracing","setRayTracingState");
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001406e6ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x118))
                    (*(longlong **)((longlong)this + 0x10),param_1);
          return;
        }
      }
    }
  }
  return;
}


/**
 * Function: meshlet_state_is_not_set_before_a_dispatchmes
 * Address:  1406e6220
 * Signature: void __thiscall meshlet_state_is_not_set_before_a_dispatchmes(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Body size: 317 bytes
 */


void __thiscall
meshlet_state_is_not_set_before_a_dispatchmes
          (void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,0,"dispatchMesh");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x32) == '\0') {
        pcVar2 = (char *)FUN_140b65d30(0x80);
        builtin_strncpy(pcVar2,
                        "Meshlet state is not set before a dispatchMesh call.\nNote that setting graphics or compute state invalidates the meshlet state."
                        ,0x80);
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pcVar2);
        thunk_FUN_140b68ba8(pcVar2,0x80);
      }
      else {
        cVar1 = bytes_that_were_not_set(this,"meshlet","setMeshletState");
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001406e62ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x108))
                    (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}


/**
 * Function: indirect_count_buffer_is_not_set_before_a_dra
 * Address:  1406e5540
 * Signature: void __thiscall indirect_count_buffer_is_not_set_before_a_dra(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Body size: 525 bytes
 */


void __thiscall
indirect_count_buffer_is_not_set_before_a_dra
          (void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *_Dst;
  undefined8 uVar2;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 != '\0') {
    cVar1 = operation_requires_at_least(this,0,"drawIndexedIndirectCount");
    if (cVar1 != '\0') {
      if (*(char *)((longlong)this + 0x30) == '\0') {
        _Dst = (char *)FUN_140b65d30(0x90);
        memcpy(_Dst,
               "Graphics state is not set before a drawIndexedIndirectCount call.\nNote that setting compute state invalidates the graphics state."
               ,0x81);
        _Dst[0x81] = '\0';
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,_Dst);
        uVar2 = 0x90;
      }
      else {
        if (*(longlong *)((longlong)this + 0x4d0) == 0) {
          _Dst = (char *)FUN_140b65d30(0x50);
          builtin_strncpy(_Dst,
                          "Indirect params buffer is not set before a drawIndexedIndirectCount call."
                          ,0x4a);
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,_Dst);
        }
        else {
          if (*(longlong *)((longlong)this + 0x4d8) != 0) {
            cVar1 = bytes_that_were_not_set(this,"graphics","setGraphicsState");
            if (cVar1 == '\0') {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0001406e55ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe0))
                      (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
            return;
          }
          _Dst = (char *)FUN_140b65d30(0x50);
          builtin_strncpy(_Dst,
                          "Indirect count buffer is not set before a drawIndexedIndirectCount call."
                          ,0x49);
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,_Dst);
        }
        uVar2 = 0x50;
      }
      thunk_FUN_140b68ba8(_Dst,uVar2);
    }
  }
  return;
}


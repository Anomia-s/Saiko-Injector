/**
 * Function: createopacitymicromap_returned_nullptr
 * Address:  1405214c0
 * Signature: longlong * * __thiscall createopacitymicromap_returned_nullptr(void * this, longlong * * param_1, longlong param_2)
 * Body size: 463 bytes
 */


longlong ** __thiscall
createopacitymicromap_returned_nullptr(void *this,longlong **param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    pcVar1 = (char *)FUN_140b65d30(0x30);
    builtin_strncpy(pcVar1,"OpacityMicromapDesc:inputBuffer is nullptr",0x2b);
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar1);
  }
  else {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x198))
                (*(longlong **)((longlong)this + 0x10),&local_30);
      if (local_30 == (longlong *)0x0) {
        pcVar1 = (char *)FUN_140b65d30(0x30);
        builtin_strncpy(pcVar1,"createOpacityMicromap returned nullptr",0x27);
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pcVar1);
        thunk_FUN_140b68ba8(pcVar1,0x30);
        *param_1 = (longlong *)0x0;
        plVar2 = local_30;
        if (local_30 == (longlong *)0x0) {
          return param_1;
        }
      }
      else {
        *param_1 = (longlong *)0x0;
        plVar2 = local_30;
        if (param_1 != &local_30) {
          *param_1 = local_30;
          return param_1;
        }
      }
      local_30 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
      return param_1;
    }
    pcVar1 = (char *)FUN_140b65d30(0x30);
    builtin_strncpy(pcVar1,"OpacityMicromapDesc:perOmmDescs is nullptr",0x2b);
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar1);
  }
  thunk_FUN_140b68ba8(pcVar1,0x30);
  *param_1 = (longlong *)0x0;
  return param_1;
}


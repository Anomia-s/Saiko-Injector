/**
 * Function: copy_queue_is_not_supported_or_initialized_in
 * Address:  1405253f0
 * Signature: undefined8 * __thiscall copy_queue_is_not_supported_or_initialized_in(void * this, undefined8 * param_1, undefined1 * param_2)
 * Body size: 485 bytes
 */


undefined8 * __thiscall
copy_queue_is_not_supported_or_initialized_in(void *this,undefined8 *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  CommandListWrapper *this_00;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = param_2[0x20];
  if (cVar1 == '\0') {
LAB_1405254d1:
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1c0))
              (*(longlong **)((longlong)this + 0x10),&local_50,param_2);
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      this_00 = (CommandListWrapper *)FUN_140b65d30(0x8a0);
      nvrhi::validation::CommandListWrapper::CommandListWrapper
                (this_00,this,plVar2,*param_2,param_2[0x20]);
      plVar2 = local_50;
      *param_1 = this_00;
      if (local_50 == (longlong *)0x0) {
        return param_1;
      }
      local_50 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
      return param_1;
    }
  }
  else {
    if (cVar1 == '\x02') {
      cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1e8))
                        (*(longlong **)((longlong)this + 0x10),3,0,0);
      if (cVar1 != '\0') goto LAB_1405254d1;
      local_48 = 0;
      plVar2 = (longlong *)FUN_140b65d30(0x40);
      local_40 = 0x39;
      local_38 = 0x3f;
      *plVar2 = 0x6575712079706f43;
      plVar2[1] = 0x6f6e207369206575;
      plVar2[2] = 0x726f707075732074;
      plVar2[3] = 0x6920726f20646574;
      plVar2[4] = 0x7a696c616974696e;
      plVar2[5] = 0x6874206e69206465;
      builtin_strncpy((char *)((longlong)plVar2 + 0x29),"d in",4);
      builtin_strncpy((char *)((longlong)plVar2 + 0x2d)," thi",4);
      builtin_strncpy((char *)((longlong)plVar2 + 0x31),"s de",4);
      builtin_strncpy((char *)((longlong)plVar2 + 0x35),"vice",4);
      *(char *)((longlong)plVar2 + 0x39) = '\0';
      local_50 = plVar2;
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                (*(longlong **)((longlong)this + 0x18),2,plVar2);
    }
    else {
      if (cVar1 != '\x01') {
        httplib::ClientImpl::vfunction4();
        goto LAB_1405255c0;
      }
      cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1e8))
                        (*(longlong **)((longlong)this + 0x10),0,0,0);
      if (cVar1 != '\0') goto LAB_1405254d1;
      local_48 = 0;
      plVar2 = (longlong *)FUN_140b65d30(0x40);
      local_40 = 0x3c;
      local_38 = 0x3f;
      *plVar2 = 0x20657475706d6f43;
      plVar2[1] = 0x7369206575657571;
      plVar2[2] = 0x70757320746f6e20;
      plVar2[3] = 0x6f20646574726f70;
      plVar2[4] = 0x616974696e692072;
      plVar2[5] = 0x6e692064657a696c;
      builtin_strncpy((char *)((longlong)plVar2 + 0x2c),"d in",4);
      *(undefined4 *)(plVar2 + 6) = 0x69687420;
      builtin_strncpy((char *)((longlong)plVar2 + 0x34),"s de",4);
      *(undefined4 *)(plVar2 + 7) = 0x65636976;
      *(char *)((longlong)plVar2 + 0x3c) = '\0';
      local_50 = plVar2;
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                (*(longlong **)((longlong)this + 0x18),2,plVar2);
    }
    thunk_FUN_140b68ba8(plVar2,0x40);
  }
LAB_1405255c0:
  *param_1 = 0;
  return param_1;
}


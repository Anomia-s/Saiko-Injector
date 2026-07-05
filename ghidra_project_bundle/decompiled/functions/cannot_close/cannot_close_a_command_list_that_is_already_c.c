/**
 * Function: cannot_close_a_command_list_that_is_already_c
 * Address:  1406e0f40
 * Signature: void __thiscall cannot_close_a_command_list_that_is_already_c(void * this)
 * Body size: 300 bytes
 */


void __thiscall cannot_close_a_command_list_that_is_already_c(void *this)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*(int *)((longlong)this + 0x2c) == 2) {
    pcVar2 = (char *)FUN_140b65d30(0x40);
    builtin_strncpy(pcVar2,"Cannot close a command list that is already closed",0x33);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar2);
    uVar3 = 0x40;
  }
  else {
    if (*(int *)((longlong)this + 0x2c) != 0) {
      if (*(char *)((longlong)this + 0x28) == '\x01') {
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)this + 0x18) + 0x20);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x30))();
      *(undefined4 *)((longlong)this + 0x2c) = 2;
      *(undefined2 *)((longlong)this + 0x30) = 0;
      *(undefined1 *)((longlong)this + 0x32) = 0;
      return;
    }
    pcVar2 = (char *)FUN_140b65d30(0x30);
    builtin_strncpy(pcVar2,"Cannot close a command list before it is opened",0x30);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar2);
    uVar3 = 0x30;
  }
  thunk_FUN_140b68ba8(pcVar2,uVar3);
  return;
}


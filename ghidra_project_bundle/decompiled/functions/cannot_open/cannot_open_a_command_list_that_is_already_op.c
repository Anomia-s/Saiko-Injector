/**
 * Function: cannot_open_a_command_list_that_is_already_op
 * Address:  1406e0c10
 * Signature: void __thiscall cannot_open_a_command_list_that_is_already_op(void * this)
 * Body size: 617 bytes
 */


void __thiscall cannot_open_a_command_list_that_is_already_op(void *this)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (*(int *)((longlong)this + 0x2c) == 2) {
    if (*(char *)((longlong)this + 0x28) != '\x01') {
      pcVar3 = (char *)FUN_140b65d30(0x40);
      builtin_strncpy(pcVar3,"A command list should be executed before it is reopened",0x38);
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),1,pcVar3);
      thunk_FUN_140b68ba8(pcVar3,0x40);
      goto LAB_1406e0dae;
    }
    pcVar3 = (char *)FUN_140b65d30(0x60);
    builtin_strncpy(pcVar3,
                    "An immediate command list cannot be abandoned and must be executed before it is re-opened"
                    ,0x5a);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar3);
    uVar4 = 0x60;
  }
  else {
    if (*(int *)((longlong)this + 0x2c) != 1) {
LAB_1406e0dae:
      if (*(char *)((longlong)this + 0x28) == '\x01') {
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)this + 0x18) + 0x20);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (iVar2 - 1U < 0xfffffffe) {
          pcVar3 = (char *)FUN_140b65d30(0x50);
          builtin_strncpy(pcVar3,
                          "Two or more immediate command lists cannot be open at the same time",0x44
                         );
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pcVar3);
          thunk_FUN_140b68ba8(pcVar3,0x50);
          LOCK();
          piVar1 = (int *)(*(longlong *)((longlong)this + 0x18) + 0x20);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          return;
        }
      }
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))();
      *(undefined4 *)((longlong)this + 0x2c) = 1;
      *(undefined2 *)((longlong)this + 0x30) = 0;
      *(undefined1 *)((longlong)this + 0x32) = 0;
      return;
    }
    pcVar3 = (char *)FUN_140b65d30(0x30);
    builtin_strncpy(pcVar3,"Cannot open a command list that is already open",0x30);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar3);
    uVar4 = 0x30;
  }
  thunk_FUN_140b68ba8(pcVar3,uVar4);
  return;
}


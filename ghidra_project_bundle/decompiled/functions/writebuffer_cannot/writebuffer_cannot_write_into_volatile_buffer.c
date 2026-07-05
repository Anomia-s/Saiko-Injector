/**
 * Function: writebuffer_cannot_write_into_volatile_buffer
 * Address:  1406e2b70
 * Signature: void __thiscall writebuffer_cannot_write_into_volatile_buffer(void * this, longlong * param_1, undefined8 param_2, ulonglong param_3, longlong param_4)
 * Body size: 551 bytes
 */


void __thiscall
writebuffer_cannot_write_into_volatile_buffer
          (void *this,longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 == '\0') {
    return;
  }
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x28))(param_1);
  if (*puVar2 < param_4 + param_3) {
    pcVar3 = (char *)FUN_140b65d30(0x50);
    builtin_strncpy(pcVar3,"writeBuffer: dataSize + destOffsetBytes is greater than the buffer size"
                    ,0x48);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar3);
  }
  else {
    if ((param_4 != 0) &&
       (lVar4 = (**(code **)(*param_1 + 0x28))(param_1), *(char *)(lVar4 + 0x3b) == '\x01')) {
      pcVar3 = (char *)FUN_140b65d30(0x40);
      builtin_strncpy(pcVar3,"writeBuffer: cannot write into volatile buffers with an offset",0x3f);
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar3);
      uVar5 = 0x40;
      goto LAB_1406e2cc1;
    }
    if ((param_3 < 0x10001) ||
       (lVar4 = (**(code **)(*param_1 + 0x28))(param_1), *(char *)(lVar4 + 0x3b) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x0001406e2d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x80))
                (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
      return;
    }
    pcVar3 = (char *)FUN_140b65d30(0x50);
    builtin_strncpy(pcVar3,"writeBuffer: cannot write more than 65535 bytes into volatile buffers",
                    0x46);
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar3);
  }
  uVar5 = 0x50;
LAB_1406e2cc1:
  thunk_FUN_140b68ba8(pcVar3,uVar5);
  return;
}


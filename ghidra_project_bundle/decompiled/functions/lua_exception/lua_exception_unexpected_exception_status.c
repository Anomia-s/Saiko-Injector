/**
 * Function: lua_exception_unexpected_exception_status
 * Address:  1406ba280
 * Signature: char * __thiscall lua_exception_unexpected_exception_status(void * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 104 bytes
 */


char * __thiscall
lua_exception_unexpected_exception_status
          (void *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)((longlong)this + 0x20);
  if (iVar1 == 2) {
    pcVar2 = (char *)FUN_140473b70(*(undefined8 *)((longlong)this + 0x18),0xffffffff,0,param_3,
                                   0xfffffffffffffffe);
    if (pcVar2 != (char *)0x0) {
      return pcVar2;
    }
    iVar1 = *(int *)((longlong)this + 0x20);
  }
  if (iVar1 - 2U < 4) {
    return (&PTR_s_lua_exception__runtime_error_1412194d8)[iVar1 - 2U];
  }
  return "lua_exception: unexpected exception status";
}


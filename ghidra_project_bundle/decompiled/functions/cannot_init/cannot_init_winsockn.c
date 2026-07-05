/**
 * Function: cannot_init_winsockn
 * Address:  1401b6d20
 * Signature: undefined cannot_init_winsockn(void)
 * Body size: 147 bytes
 */


undefined8 cannot_init_winsockn(undefined8 param_1)

{
  int iVar1;
  FILE *_File;
  undefined1 auStack_1c8 [32];
  WSADATA local_1a8;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_1c8;
  iVar1 = WSAStartup(0x202,&local_1a8);
  if (iVar1 != 0) {
    _File = (FILE *)__acrt_iob_func(2);
    fwrite("Cannot init winsock.\n",0x15,1,_File);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_1c8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_1c8);
}


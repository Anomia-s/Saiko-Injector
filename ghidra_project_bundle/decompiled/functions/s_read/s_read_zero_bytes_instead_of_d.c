/**
 * Function: s_read_zero_bytes_instead_of_d
 * Address:  1403d2780
 * Signature: undefined s_read_zero_bytes_instead_of_d(void)
 * Body size: 360 bytes
 */


void * s_read_zero_bytes_instead_of_d(char *param_1)

{
  long lVar1;
  void *_DstBuf;
  size_t sVar2;
  int *piVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  char *local_30;
  FILE *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  fopen_s(&local_28,param_1,"r");
  if (local_28 == (FILE *)0x0) {
    piVar3 = _errno();
    local_38 = (char *)FUN_14039e390(*piVar3);
    local_30 = param_1;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/misc.c",0xdc,
                  "%s (%s)");
  }
  else {
    fseek(local_28,0,2);
    lVar1 = ftell(local_28);
    if (lVar1 != -1) {
      fseek(local_28,0,0);
      _DstBuf = (void *)(*DAT_141503398)(lVar1 + 1);
      sVar2 = fread(_DstBuf,1,(longlong)lVar1,local_28);
      if (lVar1 == 0 || sVar2 != 0) {
        *(undefined1 *)((longlong)_DstBuf + sVar2) = 0;
        fclose(local_28);
        goto LAB_1403d28ab;
      }
      local_30 = (char *)0x0;
      local_38 = param_1;
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/misc.c",0xec,
                    "%s: read zero bytes instead of %d");
      (*DAT_1415033b0)(_DstBuf);
    }
  }
  if (local_28 != (FILE *)0x0) {
    fclose(local_28);
  }
  _DstBuf = (void *)0x0;
  (*DAT_1415033b0)(0);
LAB_1403d28ab:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return _DstBuf;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}


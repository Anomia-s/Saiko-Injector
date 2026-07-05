/**
 * Function: setthreadpriority
 * Address:  14015d300
 * Signature: undefined setthreadpriority(void)
 * Body size: 70 bytes
 */


undefined8 setthreadpriority(uint param_1)

{
  BOOL BVar1;
  HANDLE hThread;
  undefined4 extraout_var;
  undefined8 uVar2;
  int nPriority;
  
  nPriority = 0;
  if (param_1 < 4) {
    nPriority = *(int *)(&DAT_140debfe0 + (ulonglong)param_1 * 4);
  }
  hThread = GetCurrentThread();
  BVar1 = SetThreadPriority(hThread,nPriority);
  if (BVar1 != 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  uVar2 = FUN_1403d7710("SetThreadPriority()");
  return uVar2;
}


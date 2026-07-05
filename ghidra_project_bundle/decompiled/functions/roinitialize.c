/**
 * Function: roinitialize
 * Address:  1403d77e0
 * Signature: undefined roinitialize(void)
 * Body size: 138 bytes
 */


int roinitialize(void)

{
  int iVar1;
  FARPROC pFVar2;
  INT_PTR IVar3;
  int iVar4;
  
  if (DAT_1416f1350 == '\0') {
    DAT_1416f1358 = LoadLibraryExW(L"combase.dll",(HANDLE)0x0,0x800);
    DAT_1416f1350 = '\x01';
  }
  iVar4 = -0x7fffbffe;
  if (DAT_1416f1358 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(DAT_1416f1358,"RoInitialize");
    iVar4 = -0x7fffbffe;
    if (pFVar2 != (FARPROC)0x0) {
      IVar3 = (*pFVar2)(0);
      iVar1 = (int)IVar3;
      if (iVar1 == -0x7ffefefa) {
        IVar3 = (*pFVar2)(1);
        iVar1 = (int)IVar3;
      }
      iVar4 = 0;
      if (iVar1 != 1) {
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}


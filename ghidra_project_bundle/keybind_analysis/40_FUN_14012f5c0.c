// FUN_14012f5c0 @ 14012f5c0

void FUN_14012f5c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_140106160(param_1 + 0x10,0xffffffff);
  if (iVar2 == 1) {
    FUN_140158010(DAT_141525728);
    cVar1 = FUN_1403d88f0(DAT_141525730,*(undefined4 *)(param_1 + 0x50));
    if (cVar1 != '\0') {
      FUN_140106160(&DAT_141525760 + (ulonglong)*(byte *)(param_1 + 0x94) * 4,0xffffffff);
    }
    FUN_140158040(DAT_141525728);
    FUN_14012f640(param_1);
    return;
  }
  return;
}



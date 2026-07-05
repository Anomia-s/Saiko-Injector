// FUN_140105f50 @ 140105f50

int FUN_140105f50(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = texture_getblockwidth();
  uVar2 = 1;
  uVar4 = 1;
  if (1 < uVar1) {
    uVar1 = texture_getblockwidth(param_1);
    uVar4 = (ulonglong)uVar1;
  }
  uVar1 = texture_getblockheight(param_1);
  if (1 < uVar1) {
    uVar2 = texture_getblockheight(param_1);
  }
  uVar1 = (param_3 + uVar2) - 1;
  iVar3 = sdl_gputextureformattexelblocksize_real(param_1,(ulonglong)uVar1 % (ulonglong)uVar2);
  return iVar3 * (uVar1 / uVar2) * (int)(((param_2 + (int)uVar4) - 1) / uVar4) * param_4;
}



/**
 * Function: sdl_blendpoints_dst
 * Address:  140621630
 * Signature: undefined sdl_blendpoints_dst(void)
 * Body size: 493 bytes
 */


ulonglong sdl_blendpoints_dst(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                             byte param_5,byte param_6,byte param_7,byte param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  undefined1 extraout_AL;
  undefined1 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  uint7 uVar13;
  uint7 extraout_var;
  code *local_68;
  
  cVar9 = FUN_140110960();
  if (cVar9 == '\0') {
    uVar11 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_BlendPoints(): dst");
    return uVar11;
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  bVar1 = *(byte *)(lVar8 + 4);
  if (bVar1 < 8) {
    uVar11 = FUN_1400fbed0("SDL_BlendPoints(): Unsupported surface format");
    return uVar11;
  }
  if ((int)param_4 - 1U < 2) {
    param_5 = (byte)(((uint)param_5 * (uint)param_8) / 0xff);
    param_6 = (byte)(((uint)param_6 * (uint)param_8) / 0xff);
    param_7 = (byte)(((uint)param_7 * (uint)param_8) / 0xff);
  }
  if (bVar1 == 0x20) {
    if (*(int *)(lVar8 + 8) != 0xff0000) goto LAB_140621751;
    iVar2 = *(int *)(lVar8 + 0x14);
    pcVar12 = FUN_14061fc00;
    local_68 = FUN_14061ff30;
  }
  else {
    if (bVar1 == 0x10) {
      if (*(int *)(lVar8 + 8) == 0xf800) {
        pcVar12 = FUN_14061f7f0;
        local_68 = FUN_14061f7f0;
        goto LAB_14062176c;
      }
    }
    else if ((bVar1 == 0xf) && (*(int *)(lVar8 + 8) == 0x7c00)) {
      pcVar12 = FUN_14061f400;
      local_68 = FUN_14061f400;
      goto LAB_14062176c;
    }
LAB_140621751:
    iVar2 = *(int *)(lVar8 + 0x14);
    pcVar12 = that_operation_is_not_supported;
    local_68 = that_operation_is_not_supported;
  }
  if (iVar2 == 0) {
    local_68 = pcVar12;
  }
LAB_14062176c:
  if ((int)param_3 < 1) {
    uVar13 = (uint7)((ulonglong)pcVar12 >> 8);
    uVar10 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x6c);
    iVar5 = *(int *)(param_1 + 0x70);
    uVar13 = (uint7)(uint3)((uint)iVar3 >> 8);
    uVar10 = 1;
    uVar11 = 0;
    do {
      iVar6 = *(int *)(param_2 + uVar11 * 8);
      if ((((iVar2 <= iVar6) && (iVar6 < iVar4 + iVar2)) &&
          (iVar7 = *(int *)(param_2 + 4 + uVar11 * 8), iVar3 <= iVar7)) && (iVar7 < iVar5 + iVar3))
      {
        (*local_68)(param_1,iVar6,iVar7,param_4,param_5,param_6,param_7,param_8);
        uVar10 = extraout_AL;
        uVar13 = extraout_var;
      }
      uVar11 = uVar11 + 1;
    } while (param_3 != uVar11);
  }
  return CONCAT71(uVar13,uVar10) & 0xffffffffffffff01;
}


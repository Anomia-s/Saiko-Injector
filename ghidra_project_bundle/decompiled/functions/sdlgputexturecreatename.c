/**
 * Function: sdlgputexturecreatename
 * Address:  1403f82a0
 * Signature: undefined sdlgputexturecreatename(void)
 * Body size: 251 bytes
 */


undefined4 * sdlgputexturecreatename(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar9 = (undefined4 *)FUN_140160c70(1,0x50);
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[8] = param_2[8];
    uVar8 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    uVar6 = param_2[7];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar4;
    puVar9[6] = uVar5;
    puVar9[7] = uVar6;
    *puVar9 = uVar8;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    uVar8 = FUN_14014f270();
    puVar9[8] = uVar8;
    parameter_s_is_invalid(param_2[8],uVar8);
    *(undefined8 *)(puVar9 + 0xe) = 0x100000001;
    lVar10 = FUN_140160c70(1,8);
    *(longlong *)(puVar9 + 0xc) = lVar10;
    if (lVar10 != 0) {
      *(undefined8 *)(puVar9 + 0x12) = 0;
      cVar7 = FUN_14014fd70(param_2[8],"SDL.gpu.texture.create.name");
      if (cVar7 == '\0') {
        uVar11 = *(undefined8 *)(puVar9 + 0x12);
      }
      else {
        uVar11 = FUN_14014ffe0(param_2[8],"SDL.gpu.texture.create.name",0);
        uVar11 = FUN_1400fcda0(uVar11);
        *(undefined8 *)(puVar9 + 0x12) = uVar11;
      }
      *(undefined1 *)(puVar9 + 0x10) = 1;
      puVar12 = (undefined8 *)failed_to_create_descriptor_heap(param_1,param_2,uVar11);
      if (puVar12 != (undefined8 *)0x0) {
        **(undefined8 **)(puVar9 + 0xc) = puVar12;
        *(undefined8 **)(puVar9 + 10) = puVar12;
        *puVar12 = puVar9;
        *(undefined4 *)(puVar12 + 1) = 0;
        return puVar9;
      }
      FUN_140160cf0();
    }
    FUN_140160cf0(puVar9);
  }
  return (undefined4 *)0x0;
}


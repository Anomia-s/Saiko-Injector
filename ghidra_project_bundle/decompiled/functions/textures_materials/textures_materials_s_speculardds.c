/**
 * Function: textures_materials_s_speculardds
 * Address:  1404b5c00
 * Signature: undefined textures_materials_s_speculardds(void)
 * Body size: 607 bytes
 */


void textures_materials_s_speculardds(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  char **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = "textures/materials/Plastic/normal_outlet.png";
  uVar2 = FUN_1404b4500(param_1,&local_e8,0);
  *(undefined8 *)(param_1 + 0x11c) = uVar2;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = "textures/materials/Plastic/normal_inlet.png";
  uVar2 = FUN_1404b4500(param_1,&local_e8,0);
  *(undefined8 *)(param_1 + 0x124) = uVar2;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = "textures/materials/Plastic/diffuse_ao_outlet.png";
  uVar2 = FUN_1404b4500(param_1,&local_e8,1);
  *(undefined8 *)(param_1 + 300) = uVar2;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = "textures/materials/Plastic/diffuse_ao_inlet.png";
  uVar2 = FUN_1404b4500(param_1,&local_e8,1);
  *(undefined8 *)(param_1 + 0x134) = uVar2;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = "textures/materials/Plastic/rough.png";
  uVar2 = FUN_1404b4500(param_1,&local_e8,0);
  *(undefined8 *)(param_1 + 0x13c) = uVar2;
  lVar5 = 8;
  do {
    bVar1 = (&UNK_140e1c208)[lVar5];
    uVar2 = *(undefined8 *)(&DAT_140e1c210 + lVar5);
    FUN_1400a3c00(&local_e8,0x80,"textures/materials/%s/normal.dds",uVar2);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &local_e8;
    uVar3 = FUN_1404b4500(param_1,&local_108,0);
    lVar4 = (ulonglong)bVar1 * 0x2c;
    *(undefined8 *)(param_1 + 0xf0 + lVar4) = uVar3;
    FUN_1400a3c00(&local_e8,0x80,"textures/materials/%s/diffuse.dds",uVar2);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &local_e8;
    uVar3 = FUN_1404b4500(param_1,&local_108,1);
    *(undefined8 *)(param_1 + 0x100 + lVar4) = uVar3;
    FUN_1400a3c00(&local_e8,0x80,"textures/materials/%s/specular.dds",uVar2);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &local_e8;
    uVar2 = FUN_1404b4500(param_1,&local_108,0);
    *(undefined8 *)(param_1 + 0x110 + lVar4) = uVar2;
    *(undefined2 *)(param_1 + 0x118 + lVar4) = 0x101;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x118);
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_128);
}


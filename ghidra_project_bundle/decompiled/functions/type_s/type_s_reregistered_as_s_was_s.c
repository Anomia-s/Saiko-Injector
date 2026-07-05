/**
 * Function: type_s_reregistered_as_s_was_s
 * Address:  1403c92e0
 * Signature: undefined type_s_reregistered_as_s_was_s(void)
 * Body size: 569 bytes
 */


undefined8
type_s_reregistered_as_s_was_s
          (undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar16;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  puVar4 = (uint *)FUN_1400ba6e0(param_1,param_2,0x16e,8);
  uVar1 = *puVar4;
  if (uVar1 == 0) {
    *puVar4 = param_3;
    piVar9 = (int *)FUN_1400ba4f0(param_1,param_2,1);
    if (piVar9 == (int *)0x0) {
      bVar14 = false;
    }
    else {
      bVar14 = *piVar9 != 0;
    }
    *(bool *)(puVar4 + 1) = bVar14;
    lVar6 = FUN_1403a4f30(param_1,param_2);
    if ((char)puVar4[1] == '\x01') {
      if (*(longlong *)(lVar6 + 8) == 0) {
        *(code **)(lVar6 + 8) = FUN_1403a47f0;
      }
      if (param_3 == 2) {
        puVar7 = (undefined8 *)FUN_1400ba4f0(param_1,param_2,0x164);
        lVar8 = FUN_1403a55c0(param_1,*puVar7);
        *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar8 + 0x40);
        *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar8 + 0x48);
        *(uint *)(lVar6 + 0x58) = *(uint *)(lVar6 + 0x58) & 0xffe7fcff | 0x300;
      }
    }
  }
  else if (uVar1 != param_3) {
    pcVar10 = "unknown";
    pcVar13 = "unknown";
    if (uVar1 < 7) {
      pcVar13 = (&PTR_s_Bitmask_14134487e_3_140e0bf28)[uVar1 - 1];
    }
    if (param_3 < 7) {
      pcVar10 = (&PTR_s_Primitive_141349da7_3_140e0bf58)[param_3];
    }
    uVar5 = FUN_1403af230(param_1,param_2);
    pcVar12 = "type \'%s\' reregistered as \'%s\' (was \'%s\')";
    uVar11 = 0xf1;
    goto LAB_1403c94f4;
  }
  if ((char)puVar4[1] == '\0') {
    piVar9 = (int *)FUN_1400ba6e0(param_1,param_2,1,8);
    *piVar9 = param_4;
    piVar9[1] = param_5;
    FUN_1400ba7b0(param_1,param_2,1);
  }
  else {
    piVar9 = (int *)FUN_1400ba4f0(param_1,param_2);
    iVar2 = *piVar9;
    if (iVar2 != 0) {
      if (iVar2 < param_4) {
        pcVar10 = (char *)FUN_1403af230(param_1,param_2);
        pcVar13 = (char *)CONCAT44(uVar16,iVar2);
        uVar5 = CONCAT44(uVar15,param_4);
        pcVar12 = "computed size (%d) for \'%s\' is larger than actual type (%d)";
        uVar11 = 0x101;
      }
      else {
        iVar3 = piVar9[1];
        if (param_5 <= iVar3) {
          *(bool *)((longlong)puVar4 + 5) = iVar2 != param_4;
          goto LAB_1403c94a7;
        }
        pcVar10 = (char *)FUN_1403af230(param_1,param_2);
        pcVar13 = (char *)CONCAT44(uVar16,iVar3);
        uVar5 = CONCAT44(uVar15,param_5);
        pcVar12 = "computed alignment (%d) for \'%s\' is larger than actual type (%d)";
        uVar11 = 0x107;
      }
LAB_1403c94f4:
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/meta.c"
                    ,uVar11,pcVar12,uVar5,pcVar10,pcVar13);
      return 0xffffffff;
    }
  }
LAB_1403c94a7:
  FUN_1400ba7b0(param_1,param_2,0x16e);
  return 0;
}


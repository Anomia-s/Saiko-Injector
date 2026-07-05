/**
 * Function: unexpected_did_you_mean_or
 * Address:  140799530
 * Signature: undefined unexpected_did_you_mean_or(void)
 * Body size: 493 bytes
 */


undefined4 *
unexpected_did_you_mean_or(longlong param_1,undefined4 *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [3];
  undefined8 local_44;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  iVar9 = *(int *)(param_1 + 0x80);
  if (((iVar9 != 0x21) && (iVar9 != 0x26)) && (iVar9 != 0x7c)) {
    *(undefined1 *)(param_2 + 1) = 0;
    goto LAB_1407996ed;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x84);
  FUN_1407a1770(param_1 + 0x60,local_50);
  uVar1 = *(uint *)(param_1 + 0x80);
  iVar8 = (int)local_50._4_8_;
  iVar9 = SUB84(local_50._4_8_,4);
  if (local_50[0] == 0x26 && uVar1 == 0x26) {
    iVar8 = -(uint)(iVar8 == (int)*(undefined8 *)(param_1 + 0x8c));
    iVar9 = -(uint)(iVar9 == (int)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20));
    auVar5._4_4_ = iVar8;
    auVar5._0_4_ = iVar8;
    auVar5._8_4_ = iVar9;
    auVar5._12_4_ = iVar9;
    iVar9 = movmskpd(uVar1,auVar5);
    if ((iVar9 != 3) || (*(byte *)(param_3 + 0x1c) <= param_4)) goto LAB_1407996e8;
    FUN_140787100(param_1);
    local_58 = local_44;
    local_60 = uVar2;
    FUN_14078f3b0(param_1,&local_60,"Unexpected \'&&\'; did you mean \'and\'?");
    uVar4 = 0xe;
LAB_1407996e2:
    *param_2 = uVar4;
    uVar3 = 1;
  }
  else {
    if (local_50[0] != 0x7c || uVar1 != 0x7c) {
      if (((local_50[0] != 0x3d || (uVar1 ^ 0x21) != 0) ||
          (iVar8 = -(uint)(iVar8 == (int)*(undefined8 *)(param_1 + 0x8c)),
          iVar9 = -(uint)(iVar9 == (int)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20)),
          auVar7._4_4_ = iVar8, auVar7._0_4_ = iVar8, auVar7._8_4_ = iVar9, auVar7._12_4_ = iVar9,
          iVar9 = movmskpd(uVar1 ^ 0x21,auVar7), iVar9 != 3)) ||
         (*(byte *)(param_3 + 0x10) <= param_4)) goto LAB_1407996e8;
      FUN_140787100(param_1);
      local_58 = local_44;
      local_60 = uVar2;
      FUN_14078f3b0(param_1,&local_60,"Unexpected \'!=\'; did you mean \'~=\'?");
      uVar4 = 8;
      goto LAB_1407996e2;
    }
    iVar8 = -(uint)(iVar8 == (int)*(undefined8 *)(param_1 + 0x8c));
    iVar9 = -(uint)(iVar9 == (int)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20));
    auVar6._4_4_ = iVar8;
    auVar6._0_4_ = iVar8;
    auVar6._8_4_ = iVar9;
    auVar6._12_4_ = iVar9;
    iVar9 = movmskpd(uVar1,auVar6);
    if ((iVar9 == 3) && (param_4 < *(byte *)(param_3 + 0x1e))) {
      FUN_140787100(param_1);
      local_58 = local_44;
      local_60 = uVar2;
      FUN_14078f3b0(param_1,&local_60,"Unexpected \'||\'; did you mean \'or\'?");
      uVar4 = 0xf;
      goto LAB_1407996e2;
    }
LAB_1407996e8:
    uVar3 = 0;
  }
  *(undefined1 *)(param_2 + 1) = uVar3;
LAB_1407996ed:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_88)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_88);
}


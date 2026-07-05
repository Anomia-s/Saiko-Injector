/**
 * Function: expected_type_after_but_got_instead
 * Address:  140792f90
 * Signature: undefined expected_type_after_but_got_instead(void)
 * Body size: 1000 bytes
 */


undefined8
expected_type_after_but_got_instead
          (longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  uint7 uStack_5f;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_80 = param_1 + 0x60;
  puVar1 = (undefined8 *)(param_1 + 0x84);
  iVar6 = *(int *)(param_1 + 0x80);
  do {
    if (iVar6 == 0x106) {
LAB_140793345:
      uVar8 = generic_type_pack_annotation(param_1);
      goto LAB_140793363;
    }
    if (iVar6 != 0x119) goto LAB_1407930c0;
    FUN_1407a1770(local_80,&local_78);
    if ((int)local_78 == 0x106) goto LAB_140793345;
    if (*(int *)(param_1 + 0x80) == 0x119) {
      FUN_1407a1770(local_80,&local_78);
      if ((int)local_78 != 0x3a) goto LAB_1407930c0;
      uVar7 = param_2[2];
      if ((ulonglong)param_3[2] < uVar7) {
        do {
          uStack_60 = 0;
          lVar3 = *param_3;
          puVar4 = *(undefined4 **)(lVar3 + 8);
          if (puVar4 == *(undefined4 **)(lVar3 + 0x10)) {
            FUN_14019fd30(lVar3,puVar4,&local_78);
          }
          else {
            *(ulonglong *)(puVar4 + 4) = CONCAT44(uStack_64,uStack_68);
            *(ulonglong *)(puVar4 + 6) = (ulonglong)uStack_5f << 8;
            *puVar4 = (int)local_78;
            puVar4[1] = local_78._4_4_;
            puVar4[2] = uStack_70;
            puVar4[3] = uStack_6c;
            *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
          }
          lVar3 = param_3[2];
          param_3[2] = lVar3 + 1U;
          uVar7 = param_2[2];
        } while (lVar3 + 1U < uVar7);
      }
      if ((param_5 != (longlong *)0x0) && ((ulonglong)param_5[2] < uVar7)) {
        do {
          uStack_70 = uStack_70 & 0xffffff00;
          lVar3 = *param_5;
          puVar5 = *(undefined8 **)(lVar3 + 8);
          if (puVar5 == *(undefined8 **)(lVar3 + 0x10)) {
            FUN_14020af40(lVar3,puVar5,&local_78);
          }
          else {
            *(uint *)(puVar5 + 1) = uStack_70;
            *puVar5 = local_78;
            *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0xc;
          }
          lVar3 = param_5[2];
          param_5[2] = lVar3 + 1U;
        } while (lVar3 + 1U < (ulonglong)param_2[2]);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x98);
      uStack_70 = *(uint *)puVar1;
      uStack_6c = *(undefined4 *)(param_1 + 0x88);
      uStack_68 = *(undefined4 *)(param_1 + 0x8c);
      uStack_64 = *(undefined4 *)(param_1 + 0x90);
      uStack_60 = 1;
      lVar3 = *param_3;
      puVar4 = *(undefined4 **)(lVar3 + 8);
      local_78 = uVar8;
      if (puVar4 == *(undefined4 **)(lVar3 + 0x10)) {
        FUN_14019fd30(lVar3,puVar4,&local_78);
      }
      else {
        local_78._0_4_ = (int)uVar8;
        local_78._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x8c);
        *(ulonglong *)(puVar4 + 6) = CONCAT71(uStack_5f,1);
        *puVar4 = (int)local_78;
        puVar4[1] = local_78._4_4_;
        puVar4[2] = uStack_70;
        puVar4[3] = uStack_6c;
        *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
      }
      param_3[2] = param_3[2] + 1;
      FUN_140787100(param_1);
      if (param_5 != (longlong *)0x0) {
        local_78 = *puVar1;
        uStack_70 = CONCAT31(uStack_70._1_3_,1);
        lVar3 = *param_5;
        puVar5 = *(undefined8 **)(lVar3 + 8);
        if (puVar5 == *(undefined8 **)(lVar3 + 0x10)) {
          FUN_14020af40(lVar3,puVar5,&local_78);
        }
        else {
          *(uint *)(puVar5 + 1) = uStack_70;
          *puVar5 = local_78;
          *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0xc;
        }
        param_5[2] = param_5[2] + 1;
      }
      if (*(int *)(param_1 + 0x80) == 0x3a) {
        FUN_140787100(param_1);
      }
      else {
        FUN_14079c360(param_1,0x3a,0);
      }
    }
    else {
LAB_1407930c0:
      if (param_3[2] != 0) {
        uStack_60 = 0;
        lVar3 = *param_3;
        puVar4 = *(undefined4 **)(lVar3 + 8);
        if (puVar4 == *(undefined4 **)(lVar3 + 0x10)) {
          FUN_14019fd30(lVar3,puVar4,&local_78);
          param_3[2] = param_3[2] + 1;
        }
        else {
          *(ulonglong *)(puVar4 + 4) = CONCAT44(uStack_64,uStack_68);
          *(ulonglong *)(puVar4 + 6) = (ulonglong)uStack_5f << 8;
          *puVar4 = (int)local_78;
          puVar4[1] = local_78._4_4_;
          puVar4[2] = uStack_70;
          puVar4[3] = uStack_6c;
          *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
          param_3[2] = param_3[2] + 1;
        }
        if (param_5 != (longlong *)0x0) {
          uStack_70 = uStack_70 & 0xffffff00;
          lVar3 = *param_5;
          puVar5 = *(undefined8 **)(lVar3 + 8);
          if (puVar5 == *(undefined8 **)(lVar3 + 0x10)) {
            FUN_14020af40(lVar3,puVar5,&local_78);
          }
          else {
            *(uint *)(puVar5 + 1) = uStack_70;
            *puVar5 = local_78;
            *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0xc;
          }
          param_5[2] = param_5[2] + 1;
        }
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x114);
    local_78 = *puVar1;
    uStack_70 = *(uint *)(param_1 + 0x8c);
    uStack_6c = *(undefined4 *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x80) == 0x26) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x80) != 0x7c) {
        expected_type_got_s(param_1,local_58,0,0);
        *(undefined4 *)(param_1 + 0x114) = uVar2;
        uVar8 = local_58[0];
      }
    }
    local_78 = unexpected_after_type_annotation(param_1,uVar8);
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    lVar3 = *param_2;
    if (*(undefined8 **)(lVar3 + 8) == *(undefined8 **)(lVar3 + 0x10)) {
      FUN_140029790();
      param_2[2] = param_2[2] + 1;
      iVar6 = *(int *)(param_1 + 0x80);
    }
    else {
      **(undefined8 **)(lVar3 + 8) = local_78;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
      param_2[2] = param_2[2] + 1;
      iVar6 = *(int *)(param_1 + 0x80);
    }
    if (iVar6 != 0x2c) goto LAB_140793361;
    if (param_4 != (longlong *)0x0) {
      lVar3 = *param_4;
      if (*(undefined8 **)(lVar3 + 8) == *(undefined8 **)(lVar3 + 0x10)) {
        FUN_140029790();
      }
      else {
        **(undefined8 **)(lVar3 + 8) = *puVar1;
        *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
      }
      param_4[2] = param_4[2] + 1;
    }
    FUN_140787100(param_1);
    iVar6 = *(int *)(param_1 + 0x80);
  } while (iVar6 != 0x29);
  FUN_14078f3b0(param_1,puVar1,"Expected type after \',\' but got \')\' instead");
LAB_140793361:
  uVar8 = 0;
LAB_140793363:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

